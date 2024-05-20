#include <stdio.h>
#include "includes/file.h"
#include "includes/cleaner.h"

int main(int argc, char** argv)
{
	char* Source;
	char* CleanedSource;

	if (argc != 0)
		Source = file_getFileContents(argv[1]);
	else {
		printf("No source file supplied.");
		return 0;
	}

	printf("%s", Source);

	printf("\nCleaning source.");

	CleanedSource = cleaner_cleanJunk(Source);

	printf("\n%s", CleanedSource);

	return 0;
}
