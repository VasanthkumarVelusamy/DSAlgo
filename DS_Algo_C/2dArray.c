#include<stdio.h>
#include<limits.h>
int main(){
  int m, n;
  int i=0, j=0, k=0, l=0;
  int hgm, hgn;
  int sum=0, maxSum=INT_MIN;
  printf("Enter the dimentions of the array\n");
  scanf("%d %d",&m,&n);
  int array[m][n];
  printf("Enter the array elements\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d", &array[i][j]);
    }
  }

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

printf("\n");
  for(int i=0;i<=m-3;i++){
    for(int j=0;j<=n-3;j++){
      sum=0;
      for(k=0;k<3;k++){
        for(l=0;l<3;l++){
          if (k==1 && l!=1) {
            printf("  ");
            continue;
          }
          printf("%d ",array[i+k][j+l]);
          sum += array[i+k][j+l];
        }
        printf("\n");
      }
      printf("\t");
      if(sum>maxSum){
        maxSum = sum;
      }
      printf("%d %d\n",i,j);
      printf("%d\n",sum);
    }
    printf("\n");
  }
printf("maxSum is %d\n",maxSum);

}
