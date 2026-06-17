#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    int len,j;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    if(str[len-1]=='\n'){
        len--;
    }
    for(j=0;j<len;j++){
        rev[j]=str[len-1- j];
    }
    rev[j]='\0';
    printf("Reversed string=%s",rev);
    return 0;
}
