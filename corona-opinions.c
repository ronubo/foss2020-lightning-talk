#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc<2) {
		printf("Stay home, stay safe, provide an arg\n");
		return 42;
	}
	else {
		if (!strcmp(argv[1],"virus")) {
			printf("\x1b[31mCorona Virus sucks!\x1b[0m\n");
		} else if (!strcmp(argv[1],"beer")) {
			printf("\x1b[33mLa corona es una buena cerveza!\x1b[0m\n");
		}

		return 0;
	
	}

	return 0;
}
