#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,j,len,flag=0;
    char arr[100],val;
    fgets(arr, 100, stdin);
    len=strlen(arr);
for(i=len;i>=1;i--){
    for(j=i-1;j>=1;j--){
        if(arr[i]==arr[j]){
            val=arr[i];
            printf("%c",val);
            return 0;
        }
    }}

return 0;
}
