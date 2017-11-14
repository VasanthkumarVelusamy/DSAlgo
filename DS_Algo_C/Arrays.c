#include<stdio.h>
#include<limits.h>
int main(){
  int count;
  char b = 'a';
  int key;
  int array[50]={2,3,1,6,7,0,5,7,4,5,1,1,3,9};
  int *array1;
  array1 = array;
  for(int i=0; array1[i]!='\0';i++)
    printf("%d ",array1[i]);
  printf("\n");
  if(array1[5]=='\0')
    printf("The 6 th element is %d\n", array1[5]);
    printf("The 6 th element is %lu\n", sizeof('a'));
    printf("The 6 th element is %lu\n", sizeof('\0'));
    printf("The 6 th element is %lu\n", sizeof(b));
    printf("The address of array is %p\n", &array);
    // printf("The address of array is %p\n", );
    printf("The address of array is %p\n", array);
    // printf("The address of array is %d\n", array[0]);
    printf("The address of array is %p\n", &array1);
    printf("The address of array is %p\n", array1);

}
