#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int count = 0;
int main()
{	
	
	int size = 10;
	int n;
	int arr[size];
	printf("Enter Array\n");
	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Number\n");
	scanf("%d",&n);
	int low = 0;
	int high = size -1;
	occ(arr,low,high,n);
	printf("%d\n",count);
	return 0;
}

void occ(int arr[],int low,int high,int n){
	if(low<high){
		int mid = (low+high)/2;
		occ(arr,low,mid,n);
		occ(arr,mid+1,high,n);
	}
	else{
		if(arr[low]==n||arr[high]==n){
			count++;
		}
	}

}