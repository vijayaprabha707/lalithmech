#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c=1;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=c*i;
	}
	printf("%d",c);
  getch();
}
