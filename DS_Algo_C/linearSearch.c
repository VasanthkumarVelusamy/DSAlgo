#include<stdio.h>
#include<stdlib.h>
int *a;
int foundAt;
void Search(int value, int size) {
  for(int i=0;i<size;i++){
    if (a[i]==value) {
      foundAt = i;
      return;
    }
  }
  foundAt = -1;
}

int main(){

  int size;
  int toSearch;
  scanf("%d",&size);

  a = (int *)malloc(sizeof(int) * size);
  for (size_t i = 0; i < size; i++) {
      scanf("%d",&a[i]);
  }

  printf("Enter a value to search \n");
  scanf("%d",&toSearch);
  Search(toSearch,size);
  (foundAt>=0)?printf("The value found at %d\n",foundAt):printf("Value Not found\n");
}
