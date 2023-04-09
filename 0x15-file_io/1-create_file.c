#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file with read/write permissions
 * @filename: name of the file
 * @text_content: the text to write into the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)

{	/* Pointer to the file */
	FILE *fp1;
	/* Character variable to read the content of file */
	char c;

	/* Opening a file in r mode*/
	fp1 = fopen("C:\\myfiles\\newfile.txt", "r");

	/* Infinite loop –I have used break to come out of the loop*/
	while (1)
	{
	c = fgetc(fp1);
	if (c == EOF)
	break;
	else
		printf("%c", c);
	}
	fclose(fp1);
	return (0);
}
