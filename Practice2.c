
// Problem 1

// #include<stdio.h> 
// float Avg(float num1, float num2, float num3);

//   int main() 
// {
//     float n1,n2,n3;
//     printf("Enter First Number \n");
//     scanf("%f", &n1);
//     printf("Enter Second Number  \n");
//     scanf("%f", &n2);
//     printf("Enter Third Number \n");
//     scanf("%f" , &n3);

//      float total = Avg(n1,n2,n3);
//      printf("The Average Of The Numbers Is %f", total);

     
//      return 0;
// }

// float Avg(float num1, float num2, float num3)
// {
//     float result;
//     result = (num1+num2+num3)/3;
//     return result;

// }



// Problem 2


// #include<stdio.h> 

// float Faren(float cels);

//   int main() 
// {
//     float tmp;
//     printf("Enter The Temperature in Celsius Degree \n");
//     scanf("%f", &tmp);
//     float Frn = Faren(tmp);
//     printf("The Temperature In Farenheight Degree is %f" , Frn);
//      return 0;
// }

// float Faren(float cels)
// {
//     float Temp=(cels * 9/5) + 32;
//     return Temp; 
// }



// Problem 3


// #include<stdio.h> 

// float Force(float mass);

//   int main() 
// {
//     float no;
//     printf("Enter The Mass Value \n");
//     scanf("%f", &no);
//     float Frc = Force(no);
//     printf("The Force Of Attraction Of Mass %f is %f", no, Frc);
//      return 0;
// }

// float Force (float mass)
// {
//     float force = mass * 9.8;
//     return force;
// }



// Problem 4


// #include<stdio.h> 

// int Fib(int n);

//   int main() 
// {
//     int no;
//     printf("Enter The Number \n");
//     scanf("%d" , &no);
//     int No = Fib(no);
//     printf("The Fibbonacci Number Of %d is %d", no, No);
     
//      return 0;
// }

// int Fib(int n)
// {
//     if (n==1 || n==2)
//     {
//         return n-1;
//     }
//     else
//     {
//         return Fib(n-1)+ Fib(n-2);
//     }

// }



// Problem 5

// #include<stdio.h> 

//   int main() 
// {

// int a =  4;
// printf("%d %d %d \n", a , ++a, a++);
// return 0;
// }



// Problem 6


// #include<stdio.h> 
// int Sum(int n);
// int main() 
// {
//     int No;
//     printf("Enter The Number \n");
//     scanf("%d", &No);
//     int SUM = Sum(No);
//     printf("The Sum Of These Numbers Is %d ", SUM);
//     return 0;
// }

// int Sum(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <=n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }



// Problem 7



#include<stdio.h> 
void Star(int n);
int main() 
{

    int No;
    printf("Enter The Number \n");
    scanf("%d", &No);
    Star(No);
     
     return 0;
}

void Star(int n)
{
    if (n==1)
    {
        printf("*\n");
        return;
    }
  Star(n-1);
  for (int i = 0; i<(2*n-1); i++)
  {
      printf("*");
  }

printf("\n");
}