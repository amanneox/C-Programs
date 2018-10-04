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
	n = arr[0];
	int low = 0;
	int high = size -1;
	occ(arr,low,high);
	printf("%d\n",count);
	return 0;
}

void occ(int arr[],int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		occ(arr,low,mid);
		occ(arr,mid+1,high);
	}
	else{
		int mid = (low+high)/2;
		if (!(arr[mid] -1 == arr[mid-1]))
		{	if(arr[mid]-1 !=-1)
			printf("MISSING NO:\t%d\n",arr[mid] -1);
		}
	}

}