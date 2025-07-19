#include<stdio.h>
int main(){
  int n;
  //input a number...
  printf("Enter the number: ");
  scanf("%d", &n);
  //using for loop.....
  for(int i=0; i<=n; i=i+2) {
      printf("%d ",i);
     }
     return 0;
}
