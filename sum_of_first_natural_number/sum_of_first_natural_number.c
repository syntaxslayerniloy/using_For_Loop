#include<stdio.h>
int main(){
int n,i, sum=0;
printf("Enter a number: ");
scanf("%d", &n);
   //using for loop....
 for (i=0; i<=n; i++) {
    /* summation process (sum=0+?) [0+1=1, 1+1=2, 2+1=3, n+i=?]
            'i' value increasing 1 and also 'n' value increasing 1. */
    sum= sum+i ;
    }
  printf("sum: %d ", sum);
  return 0;
}
