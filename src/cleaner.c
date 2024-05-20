#include <stdio.h>
#include <stdlib.h>

/* Clean comments, newlines, and tabs */
char* cleaner_cleanJunk(char* content)
{
	char* cleanedContent = (char*)malloc(sizeof(content));

	int instring = 0;
	int incomment = 0;
	char lc;
	int indexCleaned = 0;
	for (int index = 0; content[index] != '\0'; index++) {
		char c = content[index];
		
		switch(c) {
			case '\"':
				if (lc != '\\') {
					if (instring == 0)
						instring = 1;
					else
						instring = 0;
				}
				if (incomment == 0) {
					cleanedContent[indexCleaned] = c;
					indexCleaned++;
				}
				break;
			case '#':
				if (instring == 0) {
					if (incomment == 0)
						incomment = 1;
					else
						incomment = 0;
				} else {
					cleanedContent[indexCleaned] = c;
					indexCleaned++;
				}
				break;
			case '\n':
				if (instring == 1) {
					cleanedContent[indexCleaned] = c;
					indexCleaned++;
				}
				break;
			case '\t':
				if (instring == 1) {
					cleanedContent[indexCleaned] = c;
					indexCleaned++;
				}
				break;
			default:
				if (incomment == 0) {
					cleanedContent[indexCleaned] = c;
					indexCleaned++;
				}
				break;
		}

		lc = c;
	}

	return cleanedContent;
}
