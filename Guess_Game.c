#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

  int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100+1;
    do
    {
        printf("Guess The Number Between 1 to 100 \n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Please Select Lower Number \n ");
            
        }
        else if (number>guess)
        {
            printf(" Please Select Higher Number \n");
            
        }
        else
        {
            printf("Your Score is %d",nguess);
        }
        
        nguess++;
    } while (guess!=number);
    

    
     return 0;
}