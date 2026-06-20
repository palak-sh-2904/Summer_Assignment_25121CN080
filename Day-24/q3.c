#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,start=0;
    int maxLen=0,maxStart=0;
    int len=0;
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    for(i=0;1;i++){
        if(str[i]!=' '&&str[i]!='\0'&&str[i]!='\n'){
            len++;
        }
        else{
            if(len>maxLen){
                maxLen=len;
                maxStart=start;
            }
            len=0;
            start=i+1;
            if(str[i]=='\0'||str[i]=='\n'){
                break;
            }
        }
    }
    printf("Longest word:");
    for(i=maxStart;i<maxStart+maxLen;i++){
        printf("%c",str[i]);
    }
    return 0;
}