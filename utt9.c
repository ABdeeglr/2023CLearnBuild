#include <stdio.h>

int int main(int argc, char const *argv[])
{
	char name_1[] = "lxy";
	char name_2[] = {
		'l','x','y'
	};
	char name_3[] = {
		'l','x','y','\0'
	};

	printf("====== The size of each name value ======\n");
	printf("name_1>> %ld\n", sizeof(name_1));
	printf("name_2>> %ld\n", sizeof(name_2));
	printf("name_3>> %ld\n", sizeof(name_3));


	printf("====== The output of each name =======\n");
	printf("name_1: %s\n", name_1);
	printf("name_2: %s\n", name_2);
	printf("name_3: %s\n", name_3);

	return 0;
}