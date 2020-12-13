// ROCK PAPER SCISSOR GAME DESIGNED BY MABTOOR MABX





// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
//   int main()
// {
//     int you,comp;
//     printf("Enter Your Turn ! \n  0 mean Rock, 1 mean Paper , 2 Mean Scissor \n");
//     scanf("%d", &you);
//     srand(time(0));
//     comp = ( rand() % (2+1-0) + 0 );             // RAND() % (MAXIUM+1-MINIMUM)+MINIMUM

//     if ((comp==0&&you==1) || (comp==1&&you==2) || (comp==2&&you==0))
//     {
//         printf("You Win!!!!");
//     }
//     else if ((comp==0&&you==0) || (comp==1&&you==1) || (comp==2&&you==2) )
//     {
//         printf("Match Is Tie!!!");
//     }
//     else
//     {
//         printf("You Lose!!!");
//     }

//      return 0;
// }








//  GUESS THE NUMBER GAME DESIGNED BY MABTOOR MABX





// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int ActualNo, GuessNo, NoGuess=0;
//     printf("Enter Your Number \n (1-100) \n");
//     srand(time(0));
//     ActualNo = rand() % 100 + 1;
//     do
//     {
//         scanf("%d", &GuessNo);

//         if (ActualNo > GuessNo)
//         {
//             printf("Please Select The Higher Number \n ");
//         }
//         else if (GuessNo > ActualNo)
//         {
//             printf("Please Select The Lower Number \n");
//         }
//         else if (ActualNo == GuessNo)
//         {
//             printf("Congratulations! You Win! You Guess The Number %d. Your Score is %d", ActualNo, NoGuess);
//         }

//         NoGuess++;
//     } while (ActualNo != GuessNo);
//     return 0;
// }




//  CALCULATOR DESIGNED BY MABTOOR MABX

#include<stdio.h> 

float Add(float num1,float num2);
float Sub(float num1,float num2);
float Mult(float num1,float num2);
float Div(float num1,float num2);

  int main() 
{
    float no1,no2 , add,sub,div,mult;
    char ch;
    printf("Enter Operator \n  (+) , (-) , (*) , (/)  \n ");
    scanf("%c", &ch);
    printf("Enter First Number \n");
    scanf("%f", &no1);
    printf("Enter Second Number \n");
    scanf("%f", &no2);
   
    if (ch == '+')
    {
        add=Add(no1,no2);
        printf("The Sum Of %.1f and %.1f is %.1f \n ", no1,no2,add);
    // .1f mean Points Kay Baad 1 Decimal aaye Ga!!!!
    }
    else if (ch == '-')
    {
        sub = Sub(no1,no2);
        printf("The Subtract Of %.1f and %.1f is %.1f \n" ,no1,no2,sub);
    }
    else if (ch == '*')
    {
        mult = Mult(no1,no2);
        printf("The Multiplications Of %.1f and %.1f is %.1f \n", no1,no2,mult);
    }
    else if (ch=='/')
    {
        div = Div(no1,no2);
        printf("The Division Of %.1f and %.1f is %.1f \n", no1,no2,div);
    }
     return 0;
}

float Add(float num1,float num2)
{
    float add = num1+num2;
    return add;
}
float Sub(float num1,float num2)
{
    float sub = num1-num2;
    return sub;
}
float Mult(float num1,float num2)
{
    float mult = num1*num2;
    return mult;
}
float Div(float num1,float num2)
{
    float div = num1/num2;
    return div;
}

