#include <stdio.h>

int main(int argc, char *argv[]){

	int numbers[4] = {0};
	char name[4] = {'a'};

	printf("numbers: %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name: %c %c %c %c\n",name[0], name[1], name[2], name[3]);

	name[0] = 'z';
	name[1] = 'p';
	name[2] = 'x';
	name[3] = '\0';

	numbers[0] = name[0];
	numbers[1] = name[1];
	numbers[2] = name[2];
	numbers[3] = name[3];

	printf("numbers: %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name: %c %c %c %c\n",name[0], name[1], name[2], name[3]);

	printf("name: %s\n",name);

	char *another = "Sed";

	printf("another: %s\n", another);

	printf("Another: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

	return 0;
}
