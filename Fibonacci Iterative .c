#include<stdio.h>
int main(int argc, char *argv[])
{
	int pos;
	printf("The Fibonacci Series looks like this\n0 1 1 2 3 5 8 13 . . .\nEnter the position of the Fibonnacci term you want\n");
	scanf("%d",&pos);
	int a = 0, b = 1;
	for(int i = 1; i < pos-1; i++)
	{
		b = a + b;
		a = b - a;
	}
	if(pos > 0)
	printf("The Fibonacci Term at position %d is %d\n",pos,b);
	else
	printf("Please enter value greater than 0\n");
	return 0;
}
