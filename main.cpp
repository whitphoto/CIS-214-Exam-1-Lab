#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int a = 10, b = 80;
	int *ptr = &a;
	printf("the contentys of a = %d\n", a);
	printf("the contents of a is: %p\n", &a);
	printf("the addrewss contained in ptr is: %p\n", ptr);
	printf("the contents of ptr is %d\n", *ptr);
	*ptr = a *a;
	printf("the contents of a = %d\n", a);
	printf("the address of a is: %p\n", &a);
	printf("the address contained in ptr is: %p\n", ptr);
	printf("the contents of ptr is %d\n", *ptr);
	ptr++;
	printf("the address of ptr is %p\n", ptr);
		printf("the contents of ptr is %d\n", *ptr);
		
	return 0;
}
