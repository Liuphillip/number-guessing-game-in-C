#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	srand(time(NULL));
    
    
    int randomNumber = rand() % 21;
    int guess = 0;
    int maxTries = 5;
    
    do{
        printf("guess a number between 0 and 20: ");
        scanf("%d", &guess);
        
        if (guess > randomNumber){
            printf("too high\n");
        }
        else if (guess < randomNumber){
            printf("too low\n");
        }
        else{
            printf("you got it.");
            break;
        }
        maxTries--;
        
    } while(guess != randomNumber || maxTries==0);
    
	return 0;
}
