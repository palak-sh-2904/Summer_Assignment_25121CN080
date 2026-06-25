#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int n,guess;
    srand(time(0));//srand(time(0)); is used to initialize (seed) the random number generator before using rand().
    n=rand()%100+1;//Suppose rand() returns:4567;Then:4567 % 100 = 67;67 + 1 = 68
    printf("Guess a number between 1 and 100:\n");
    do{
        scanf("%d",&guess);
        if(guess>n){
            printf("Too High!\n");
        }
        else if(guess<n){
            printf("Too Low!\n");
        }
        else{
            printf("Congratulations! You guessed correctly.\n");
        }
    }while(guess!=n);
    return 0;
}