 /*
 //string copid by user

 #include<stdio.h>
#include<string.h>
int main(){
    char str[100],strcp[100];
    int len =0,i=0,j=0;
    scanf("%[^\n]",str);
    while(str[i]!='\0'){
        strcp[j]=str[i];
        i++;
        j++;
    
    }
    strcp[j]='\0';
    printf("copid %s",strcp);
    return 0;

}
*/






//String copid by function
#include<stdio.h>
#include<string.h>
int main(){
    char src[1000],destn[1000];
    scanf("%[^\n]",src);
    strcpy(destn,src);
    printf("copid string is %s",destn);
    return 0;
}