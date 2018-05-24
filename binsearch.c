#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct key *binsearch(int *,int);

int main() {
  int num[10]={10,20,30,40,50};
  int n,i,low,high;
  low=0;
  high=9;
  printf("%s\t","Enter Search No:");
  scanf("%d\n",&n);
  printf("Result:%d\n",binsearch(num,n));
  return 0;
}

struct key *binsearch(int *num,int n){
  int *low=&num[0];
  int *high=&num[9];
  int mid;
  while (low<high) {
    mid=low+(high-low)/2;
    if (n<mid) {
      *high=mid-1;
    }
    else if(n>mid){
      *low=mid+1;
    }
    else{
    return(mid);
  }
}
  return NULL;
}
