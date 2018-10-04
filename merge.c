#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int arr[100000];
int arr1[5000],arr2[5000];
int merge(int arr[],int ,int ,int);
int merge_sort(int arr[],int,int);
int main()
{
	clock_t start, end;
	int n , i;
	printf("Enter Number of Elements In Array\n");
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		
		arr[i] = rand()*5;
	}
	start = clock();
	merge_sort(arr,0,n-1);
	end = clock();
	printf("Sorted Array:\n");
	for (i = 0; i < n; ++i)
	{
		printf("%d\n",arr[i]);
	}
	printf("Time: %Lf\n", (end-start)/(CLK_TCK));
	return 0;
}

int merge_sort(int arr[],int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
  
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
 
    merge(arr,low,mid,high);
  }
  
  return 0;
}

int merge(int arr[], int l,int m,int h){
	
	int i ;
	int k;
	int j;
	int n1 = m - l +1;
	int n2 = h-m;
	for ( i = 0; i < n1; ++i)
		{
			arr1[i] = arr[l+i];
		}
			for ( j = 0; j < n2; ++j)
			{
				 arr2[j]=arr[m+j+1];

			}
		
		 arr1[i]=999999;  
  		 arr2[j]=999999;

  		i=0;j=0;
  	for( k=l;k<=h;k++)  
  	{
    if(arr1[i]<=arr2[j])
      arr[k]=arr1[i++];
    else
      arr[k]=arr2[j++];
  }
  
  return 0;	
}
