#include<stdio.h>

int main()
{
	// Test-1 
	// 这段是为了搞懂 sizeof(int)为什么会显示 4 ，现在清楚了，这是因为 4 bytes = 32 bit. 
	// int mm = 1024 * 1024;
	// printf("size of \"mm\": %ld.\n",sizeof(mm));
	// while (mm > 0)
	// {
	// 	mm += 1024*1024;
	// 	printf("now: %d.\n",mm);
	// };
	// printf("size of \"mm\": %ld.\n",sizeof(mm));


	// Test-2: 在 c 语言中尝试数组越界错误
	// Cons-2: After the declaration of an int array in length of 3, accessing an array element with an index greater than 2 doesn't report any error,
	// -----2: but givs numbers like 571815424 , 0. It is convinced currently that the element out of index can be accessed, but have not use.	
	// int dd[3] = {1,2,3};
	//
	// printf(">> %d <<\n",dd[0]);
	// printf(">> %d <<\n",dd[1]);
	// printf(">> %d <<\n",dd[2]);
	// printf(">> %d <<\n",dd[333]);


	// Test-3: Try to declare an array out of its index.
	// Cons-3: It can be compiled and run. The output of the program below is ">> Ali<<" and with no error.
	// -----3: That's fun.
	
	char name[3] = "Alice";
	printf(">> %s <<\n",name);


	return 0;
}
