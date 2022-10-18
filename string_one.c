 //counting the string length by loop

 
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len =0,i=0;
    scanf("%[^\n]",str);
   
    while(str[i]!='\0'){
        i++;
        len++;
    }
    printf("the length is %d",len);
    return 0;
}