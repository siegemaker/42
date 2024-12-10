#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line.h"
/*

	put this tester's folder in the project folder

	NOTES:
	A succesful read function advances the file position is incremented by the amount of bytes read.
	the line returned must already have a lineEnd right?
*/
int	main(void)
{
	//int FD = open("./testfile",O_RDONLY);
	//int FD = open("./read_error.txt",O_RDONLY);
	//int FD = open("./test_copypasta.txt",O_RDONLY);
	//int FD = open("./test_empty.txt",O_RDONLY);
	//int FD = open("./test_long.txt",O_RDONLY);
	int FD = open("./test.txt",O_RDONLY);
	int	i = 0;
	char *line;

	printf("Buffer Size: %d\n",BUFFER_SIZE);
	while ((line = get_next_line(FD)) != NULL)
	{
		printf("---------------LINE %d:%s", i, line);
		free(line);
		i++;
	}
	printf("(DONE!)\n");

	if (close(FD) == -1)
		return(-1);
}