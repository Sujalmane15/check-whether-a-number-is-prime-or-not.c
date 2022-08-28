#include<stdio.h>

int main()
{
	int n,count=0,i;
	
	printf("\n ENTER ANY NUMBER:");
	Scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
        	}
       }
       if(count==2)
       {
       	printf("prime numb");
       	
	}
	else 
	{
		printf("this number is not prime");
	}
	return 0;

}
