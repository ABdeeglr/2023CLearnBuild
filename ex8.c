#include<stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10,12,13,14,20};
	char name[] = "Zed";
	char full_name[] = {
		'Z','e','d',' ',
		'A','.',' ',
		'S','h','o','w','\0'
	};
	char full_name_new[] = "Zed A. Shaw";

	printf("This size of an int: %ld\n", sizeof(int));
	printf("This size of areas (int[]):%ld\n",sizeof(areas));
	printf("This number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	printf("The first area is %d, the second %d.\n", areas[0],areas[1]);

	printf("The size of a char:%ld\n",sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]):%ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
	printf("The size of full name_new (full_name_new): %ld\n",sizeof(full_name_new));

	printf("name = \"%s\" and full_name = \"%s\"\n", name, full_name);



	return 0;
}
