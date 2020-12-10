
// Problem 1

// #include<stdio.h> 
// float Average(float n1, float n2, float n3);
//   int main() 
// {
//     float no1,no2,no3;
//     printf("Enter First Number \n");
//     scanf("%f", &no1);
//     printf("Enter Second Number \n");
//     scanf("%f" , &no2);
//     printf("Enter Third Number \n");
//     scanf("%f", &no3);
//    float Result =Average(no1,no2,no3);
//     printf("The Average Of Number is %.1f",Result); //   %.1f Used For Decimal Adjustments.
     
//      return 0;
// }

// float Average(float n1, float n2 , float n3)
// {
//     float result ;
//     result = (n1 + n2 + n3) / 3;
//     return result;

// }


// Problem 2

// #include<stdio.h> 

// float Faren(float cels); 
//   int main()
//{
// float number;
// printf("Enter Temperature In Celsius \n");
// scanf("%f", &number);
// float faren = Faren(number);
// printf("The Temperature In Farenheight is %f \n" , faren);

//      return 0;
// }

// float Faren(float cels)
// {
//     float faren = (cels * 9/5) + 32;
//     return faren;
// }


// Problem 3

// #include<stdio.h> 

// float force(float n); 
//   int main() 


// {
//     float number;
//     printf("Enter The Mass Value \n");
//     scanf("%f", &number);
//     float fOrce = force(number);
//     printf("The Force Of Attraction Of Mass %f is %f",number , fOrce);
     
//      return 0;
// }

// float force(float n)
// {
//     float Force = n * 9.8;
//     return Force;
// }



// Problem 4


// #include<stdio.h>
// int Fib(int n); 

//   int main()
// {
//     int number;
//     printf("Enter The Number \n");
//     scanf("%d", &number);
//      int Func = Fib(number);
//      printf("The Fibbonacci  Number of %d is %d",number , Func);
     
//      return 0;
// }

// int Fib(int n)
// {
//     if (n==1||n==2)
//     {
//         return n-1;
//     }
    
//     else
//     {
//         return  Fib(n-1)+ Fib(n-2);
//     }
// }


// Problem 5

// #include<stdio.h> 

//   int main() {
//      int a = 3;
//      printf("%d %d %d \n" , a , ++a, a++);
//      return 0;
// }



// Problem 6

// #include<stdio.h>
// int Sum(int n); 

//   int main() 
// {
//     int num;
//     printf("Enter The Number \n");
//     scanf( "%d",&num);
//     int n = Sum(num);
//     printf("The Sum Of These Numbers Is %d" , n);
//      return 0;
// }

// int Sum(int n)
// {
//  int sum =0;   
//  for (int i = 0; i <=n; i++)
//  {
//      sum = sum + i;
//  }
 
//  return sum;

// }



// Problem 7

#include<stdio.h> 

void Star(int n);
  int main() 
{
    int number;
    printf("Enter The Number \n");
    scanf("%d", &number);
    Star(number);
     return 0;
}

void Star(int n)
{
    if (n==1)
    {
        printf("* \n");
        return;
    }
    Star(n-1);
    for (int i = 0; i <(2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}
