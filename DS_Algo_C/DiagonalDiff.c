#include<stdio.h>
#include<stdlib.h>
int main(){
  int n, sum1=0, sum2;
  scanf("%d",&n);
  int array[n][n];
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      scanf("%d",&array[i][j]);
    }
  }
  for (size_t i = 0; i < n; i++) {
    sum1 += array[i][i];
    sum2 += array[i][n-i-1];
  }

  printf("%d\n",abs(sum1-sum2));
}
