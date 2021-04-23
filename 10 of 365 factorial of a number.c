﻿#include <stdio.h>

long long factorial(int num)
{
	if(num == 0)
		return 1;
	
	else
		return num*factorial(num-1);
}

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	
	printf("%d! = %lld", n, factorial(n));
	return 0;
}
