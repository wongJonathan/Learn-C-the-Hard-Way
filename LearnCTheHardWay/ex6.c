#include <stdio.h>

int main(int argc, char *argv[]){

	int distance = 100;
	float power = 2.345f;
	double super_power = 52343.324;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levles of power.\n",power);
	printf("You have %f awseome super powers.\n", super_power);
	printf("I have an intial %c\n", initial);
	printf("First name %s\n", first_name);
	printf("Last name %s %c. %s.\n", initial,first_name, last_name);

	return 0;
}
