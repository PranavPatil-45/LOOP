#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	int n;
	
	printf("Enter Year 1:");
	scanf("%d",&i);
	printf("Enter Year 2:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%4==0)
		{
			printf("%d " ,i);
		}
		i++;
	}

}
