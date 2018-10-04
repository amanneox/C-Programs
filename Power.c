#include <stdio.h>
#include <conio.h>
#include <time.h>
int main()
{
	int n,p,d;
	printf("Enter Number\n");
	scanf("%d",&n);
	printf("Enter Degree\n");
	scanf("%d",&d);
	p = power(n,d);
	printf("%d\n",p);
	return 0;
}
int power(int i ,int n){
	if(i==1 || n==0){
		return 1;
	}
	if(n==1)
		return i;
	else
	{
		return(i*power(i,n-1));
	}
}
