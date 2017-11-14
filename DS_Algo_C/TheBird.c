#include<stdio.h>
int main(){
    int array[6] = {};
    int birdType;
    int count;
    int max=0;
    int theBird=0;
    scanf("%d",&count);
    for(int i=0; i<count; i++){
          scanf("%d",&birdType);
          array[birdType]++;
    }
    for(int i=1;i<6;i++){
        if(array[i] > max){
            max = array[i];
            theBird = i;
        }
    }
    for (size_t i = 0; i < count; i++) {
      printf("%d\t",array[i]);
    }
    printf("%d\n",theBird);
}
