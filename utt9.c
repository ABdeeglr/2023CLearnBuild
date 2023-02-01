#include <stdio.h>

int main(int argc, char const *argv[])
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

	// I was confused because of the output of name_2, its output is 'lxylxy', so I decide to do more test for such array.
	
	char str_1[] = {
		'a','b'
	};

	char str_2[] = {
		'c',' ','d','\n'
	};

	char str_3[] = {
		'e','\0','f'
	};

	printf("str_1: %s\n", str_1);
	printf("str_2: %s\n", str_2);
	printf("str_3: %s\n", str_3);
	
	// The result shows that the char after '\0' is not printed, and if '\0' misses, the result will be really confused, so don't miss the '\0'.

	return 0;
}
