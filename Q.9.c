#include<stdio.h>
int main()
{
	int hex_num;
	printf("Enter a hexa decimalnumber(e.g.,0XA):");
	scanf("%X",&hex_num);
	printf("The hexa decimalnumber in integer format is:%d\n",hex_num);
}