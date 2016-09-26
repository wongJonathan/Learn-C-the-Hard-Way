#include <stdio.h>

int main(int arc, char *ard[]){

	int bugs = 100;
	double br = 1.2;

	printf("You have %d bugs at the rate of %f.\n", bugs, br);

	unsigned long uofd = 1 * 1024L * 1024L * 1024L * 99999999999L;
	printf("The entire universe has %ld bugs.\n", uofd);

	double expectedBugs = bugs * br;
	printf("You are expected to have %f bugs.\n", expectedBugs);

	double pofu = expectedBugs / uofd;
	printf("That is only %e of the universe.\n", pofu);

	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %c%%.\n", nul_byte);

	return 0;
}
