#include<stdio.h>
#include<conio.h>

int power(int n, int e)
{
	if(e==1)
	{
		return n;
	}
	else if(n==0)
	{
		return 0;
	}
	else if(n==1 || e==0)
	{
		return 1;
	}
	else
	{
		return n * power(n,e-1);
	}
}

void main()
{
	int num,result,exp;
	clrscr();
	printf("\nEnter the number : ");
	scanf("%d",&num);
	printf("\n\nEnter the value of exponent : ");
	scanf("%d",&exp);
	result = power(num,exp);
	printf("\n\nCalculated value = %d",result);
	getch();
}