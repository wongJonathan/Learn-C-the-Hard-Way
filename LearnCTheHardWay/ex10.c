#include <stdio.h>

int main(int argc, char *argv[]){

	int i = 0;

	for(i = 0; i < argc; i ++){
		printf("arg %d: %s\n",i,argv[i]);
	}

	char *states[] = {NULL, "Oregon", "Washington", "Texas"};

	int num_states = 5;

	for(i = 0; i < num_states; i ++){
		printf("state %d: %s\n",i, states[i]);
	}

	return 0;
}
/* A comma can be used inside the body of the for loop.
	For example:
	for(int i = 0; i++, i < 5;)

	the i++ ahead of the comma is done first, then checks the condition.
	This would be the equivalant of incrementing before checking.*/

