#include <stdio.h>
#include <conio.h>
char *month_name(int n);
int main() {
  int n;
  scanf("%d\n",&n);
  printf("%s\n",month_name(n));
  return 0;
}
char *month_name(int n){
  static char *name[]={"Not Defined","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"};
  return (n<1 || n>12)? name[0]:name[n];
}
