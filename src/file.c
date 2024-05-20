#include <stdlib.h>

char* getFileContents(char* fileName)
{
	FILE* file;
	file = fopen(fileName, "r");

	fseek(file, 0, SEEK_END);
	int length = ftell(file);
	fseek(file, 0, SEEK_SET);

	char* result = (char*)malloc(++length * sizeof(char));
	fread(result, length * sizeof(char), sizeof(char), file);

	fclose(file);
	return result;
}
