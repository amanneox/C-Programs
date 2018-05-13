#include <stdio.h>
#include <conio.h>
int *day_of_year(int year,int month,int day);
int main() {
  int y,m,d;
  scanf("%d%d%d\n",&y,&m,&d);
  printf("%d\n",day_of_year(y,m,d));
  return 0;
}
int *day_of_year(int y,int m,int d){
  static int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int *daytab=arr;
  int i;
  for (i=1;i<m;++i) {
    d+=daytab[i];
  }
  return d;
}
