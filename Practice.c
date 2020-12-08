#include<stdio.h> 

  int main() 
{

    // Problem 1

    // int n;
    // printf("Enter The Number \n");
    // scanf("%d", &n);
    // for (int i = 1; i <=10; i++)
    // {
    //     printf("%d X %d = %d \n", n , i , n*i);
    // }


    // Problem 2

    // int n = 10;
    // int i = 10;
    // while (i>1)
    // {
    //     printf("%d X %d = %d \n", n,i,n*i);
    //     i--;
    // }


    // Problem 3,4,5

//     int n;
//     int sum=0;
//     printf("Enter The Quantity Number");
//     scanf("%d", &n);
//     for (int i = 0; i <=n; i++)
//     {
//         sum+=i;
//     }
    
// printf("The Sum Of Numbers is %d \n " , sum);



// Problem 6
// int n;
// int sum =0;
// printf("Enter The Number \n");
// scanf("%d", &n);
// int i =0;
// while (i<=n)
// {
//     sum = sum +i;
//     i++;
// }

// printf("The Sum Of Number Is %d" , sum);



int n;
int sum=0;
printf("Enter The Number \n");
scanf("%d", &n);
int i =0;
do
{
    sum+=i;
    i++;
} while (i<=n);

printf("The Sum Of Numbers Is %d" , sum);
    

     return 0;
}