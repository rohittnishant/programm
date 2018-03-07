#include<stdio.h>
#include<conio.h>
int main()
{
int k,m,n;
	printf("Enter the numbers");
	scanf("%d%d",&m,&n);
	k=m*n;
	if((k%2)==0)
	{
		printf("Even");
	}
	if((k%2)==1)
	{
		printf("Odd");
	}
  getch();
	return 0;
}
