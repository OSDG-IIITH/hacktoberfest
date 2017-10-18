#include <stdio.h>
int main()
{
	int n;
	printf("Welcome to Stark Industries. Enter your clearance level(0-3):");
	scanf("%d",&n);
	switch (n) {
		case 0: printf("You are not authorized to access any files.\n");
			break;
		case 1: printf("Welcome to the lowest level.Access granted to certain files.\n");
			break;
		case 2: printf("Welcome Pepper Potts. Clearance Level 2 granted\n");
			break;
		case 3: printf("Welcome Tony Stark. The new suit, Mark LVI is ready for a test flight.\n");
			break;
		default: printf("ERROR 404. Clearance level not found. Please vacate the premises before the Avengers arrive.\n");

		return 0;
}
}
