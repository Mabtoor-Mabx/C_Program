#include<stdio.h> 

  int main() {
     // Problem 1

        // int n;
        // printf("Enter A Number \n");
        // scanf("%d", &n);
        // for (int i = 1; i <=10; i++)
        // {
        //         printf("%d X %d = %d \n", n , i, n*i);
        // }


        // Problem 2

        // int n = 10;

        // for (int i = n; i; i--)
        // {
        //     printf("%d X %d = %d \n ", n,i,n*i);
        // }


        // Problem 3,4,5

        // int no,sum =0;
        // int i =0;
        // while (i<=10)
        // {
        //     sum+=i;
        //     i++;
        // }
        // printf("The Sum Of 1-10 is %d", sum);
        


// Problem 6


// int n , sum =0;
// int i =0;
// do
// {
//     sum+=i;
//     i++;
// } while (i<=10);

// printf("The Sum Of 1-10 is %d \n", sum);



// Problem 7

// int sum =0;
// int no =8;

// for (int i = 1; i <=10; i++)
// {
//      sum = no*i;
     
// }

// printf(" The Sum Of Table 8 is : %d" , sum);



// Problem 8


// int no =3;
// int factorial =1;

// for (int i = 1; i <=no; i++)
// {
//     factorial*=i;
// }
// printf("The Factorial Of %d is %d", no, factorial);




// Problem 9



// int no = 4;
// int factorial = 1;
// int i =1;
// while (i<=no)
// {
//     factorial*=i;
//     i++;
// }

// printf("The Factorial Of %d is %d :", no,factorial);


// Problem 10

// int no;
// printf("Enter A Number \n ");
// scanf("%d", &no);
// for (int i = 2; i < no; i++)
// {
//     if (no%2==0)
//     {
//         printf("This Is Not A Prime Number");
//         break;
//     }
//     else
//     {
//         printf("This is The Prime Number");
//         break;
//     }
    
// }


// Problem 11

int no;
printf("Enter A Number \n");
scanf("%d", &no);
int i = 2;
while (i<no)
{
        if (no%2==0)
        {
            printf("This is Not a Prime Number");
            break;
        }
        else
        {
            printf("This is A  Prime Number"); 
              break;
          }
      i++;    
}





     return 0;
}