#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int choice;
    printf("Enter First String: ");
    scanf("%s",str1);
    do{
        printf("\n----- STRING MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Compare Strings\n");
        printf("4. Exit\n");
        printf("Enter Choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Length=%lu\n",strlen(str1));
                break;
            case 2:
                strcpy(str2,str1);
                printf("Copied String=%s\n",str2);
                break;
            case 3:
                printf("Enter Another String: ");
                scanf("%s",str2);
                if(strcmp(str1,str2)==0){
                    printf("Strings are Equal\n");
                }
                else{
                    printf("Strings are Not Equal\n");
                }
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    } while(choice!=4);
    return 0;
}