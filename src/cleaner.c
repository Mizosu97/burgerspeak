#include <stdio.h>

/* Clean comments, newlines, and tabs */
char* cleanJunk(char* content)
{
	char* result = (char*)malloc(sizeof(content));

	char lc;
	int instring = 0;
	int incomment = 0;
	int counter = 0;
	int i = 0;
	for (char c = content[i]; c != '\0'; i++) {
		switch(c) {
			case '\"':
				if (lc != '\\') {
					if (instring == 0)
						instring = 1;
					else
						instring = 0;
				}
				break;
			case '#':
				if (instring == 0) {
					if (incomment == 0)
						incomment = 1;
					else incomment = 0;
				}
				break;
			case '\n':
				if (instring == 1)
					result[counter++] = c;
				break;
			case '\t':
				if (instring == 1)
					result[counter++] = c;
			default:
				if (incomment == 0)
					result[counter++] = c;
				break;
		}
		lc = c;
	}

	realloc(result, (counter+2) * sizeof(char));
	result[counter+2] = '\0';
	return result;
}
