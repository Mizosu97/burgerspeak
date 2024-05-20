#include <stdio.h>
#include "includes/file.h"
#include "includes/cleaner.h"

int main(int arc, char** argv)
{
	char* Source;
	char * CleanedSource;

	if (argv[1] != 0)
		Source = getFileContents(argv[1]);
	else {
		printf("No source file supplied.");
		return 0;
	}

	printf("%s", Source);

	printf("Cleaning source.");

	CleanedSource = cleanJunk(Source);

	printf("%s", CleanedSource);

	return 0;
}
