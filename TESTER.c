#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line.h"

int	main(void)
{
	//int FD = open("./test_copypasta.txt",O_RDONLY);
	//int FD = open("./test_empty.txt",O_RDONLY);
	//int FD = open("./test_long.txt",O_RDONLY);
	//int FD = open("./test_genesis.txt",O_RDONLY);
	int FD = open("./test.txt",O_RDONLY);
	//int	FD = -1;
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
