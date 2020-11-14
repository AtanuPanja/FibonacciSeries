#include<stdio.h>
int fibRecursive(int n)
{
	if(n == 1 || n == 2)
	return n-1;
	else if(n<1)
	{
	printf("Please enter value greater than 0");
	return -1;
	}
	else
	return fibRecursive(n-1) + fibRecursive(n-2);
	
}
int main(int argc, char *argv[])
{
	int pos;
	printf("The Fibonacci Series looks like this\n0 1 1 2 3 5 8 13 . . .");
	printf("Enter the position of the term you want to get from the above series\n");	scanf("%d",&pos);
	int term = fibRecursive(pos);
	if(term >=0)
	printf("The Fibonacci term at position %d is %d",pos, term);
	return 0;
}