//  Assignment_5

//  Problem 1

// #include<stdio.h> 

// float Avg( float num1, float num2, float num3);

//   int main() 
// {
//     float no1,no2,no3, total;
//     printf("Enter First Number \n");
//     scanf("%f", &no1);
//     printf("Enter Second Number \n");
//     scanf("%f", &no2);
//     printf("Enter Third Number");
//     scanf("%f", &no3);
//      total = Avg(no1,no2,no3);
//     printf("The Average Of These Numbers is %f ", total);
//      return 0;
// }

// float Avg( float num1, float num2, float num3)
// {
//     float average = (num1+num2+num3)/3;
//     return average;
// }



//  Problem 2


// #include<stdio.h> 

// float Faren(float cels);

//   int main() 
// {
//     float degree, temp;
//     printf("Enter temperature In Celsius \n");
//     scanf("%f", &degree);
//     temp = Faren(degree);
//     printf("The Temperature In Farenheight is %f", temp);
//      return 0;
// }
// float Faren(float cels)
// {
//     float faren = (cels*9/5)+32;
//     return faren;
// }



//  Problem 3 

// #include<stdio.h> 
// float Force(float mass);
//   int main() 
// {
//     float mass, Forces;
//     printf("Enter Mass Value \n");
//     scanf("%f", &mass);
//     Forces = Force(mass);
//     printf("The Force Of Attraction Of Given Mass Is %f", Forces);
//      return 0;
// }
// float Force(float mass)
// {
//     float force = mass * 9.8;
//     return force;
// }



//  Problem 4

// #include<stdio.h> 

// int Fib(int n);
//   int main() 
// {
//     int No, Fibbo;
//     printf("Enter Number \n");
//     scanf("%d", &No);
//     Fibbo = Fib(No);
//     printf("The Fibbonacci Number Of %d is %d ", No, Fibbo);
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
//         return Fib(n-1) + Fib(n-2);
//     }   
// }



//  Prolem 5

// #include<stdio.h> 

//   int main() 
// {
//     int a = 4;
//     printf("%d%d%d", a , ++a,a++);
//      return 0;
// }



//  Problem 6


// #include<stdio.h> 
 
//  int Sum(int n);
//   int main() 
// {
//     int no, Summing;
//     printf("Enter Number \n");
//     scanf("%d", &no);
//     Summing = Sum(no);
//     printf("The Sum Of These Numbers Is %d", Summing);
     
//      return 0;
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



// #include<stdio.h> 

// int Res(int n);
//   int main() 
// {
//     int no,Sum;
//     printf("Enter The Number \n");
//     scanf("%d", &no);
//     Sum = Res(no);
//     printf("The Sum Of These Numbers Are %d", Sum);
     
//      return 0;
// }
// int Res(int n)
// {
//     if (n==0)
//     {
//         return 0;
//     }
//     else
//     {
//         return n + Res(n-1);
//     }
// }



// Problem 7

// #include<stdio.h> 

// void Star(int n);
//   int main() 
// {
//     int no;
//     printf("Enter The Star Value");
//     scanf("%d", &no);
//     Star(no);
     
//      return 0;
// }

// void Star(int n)
// {
//     if (n==1)
//     {
//         printf("*\n");
//         return;
//     }
//    Star(n-1);
//    for (int  i = 0; i < (2*n-1); i++)
//    {
//        printf("*");
//    } 
//     printf("\n");
// }



//  Assignment_4




//  Problem 1


// #include<stdio.h> 

//   int main() 
// {
//     int no;
//     printf("Enter The Number \n ");
//     scanf("%d", &no);
//     for (int i = 1; i <10; i++)
//     {
//         printf("%d X %d = %d \n", no,i , no*i);
//     }   
//      return 0;
// }



//  Problem 2

// #include<stdio.h> 

//   int main() 
// {
//     int no =10;
// for (int i = no; i >=1; i--)
// {
//     printf("%d X %d = %d \n" , no, i , no*i);
// }
//     return 0;
// }



//  Problem 3

// #include<stdio.h> 

//   int main() 
// {

//     int no , sum = 0;
//     printf("Enter The Number \n");
//     scanf("%d", &no);
//     int i =0;
//     while (i<=no)
//     {
//         sum+=i;
//         i++;
//     }
//     printf("The Sum Of These Numbers Are %d", sum);

//      return 0;
// }





//  Problem 4

// #include<stdio.h> 

//   int main() 
// {
//     int no,sum=0;
//     printf("Enter The Number \n");
//     scanf("%d", &no);
//     for (int i = 0; i <=no; i++)
//     {
//         sum = sum +i;
//     } 
    
//     printf("The Sum Of These Numbers Are %d", sum);
//      return 0;
// }




//  Problem 5

// #include<stdio.h> 

//   int main() 
// {
//     int no,sum=0;
//     printf("Enter The Number \n");
//     scanf("%d", &no);
//     int i = 0;
//     do
//     {
//         sum = sum+i;
//         i++;
       
//     } while (i<=no);
    
//     printf("The Sum Of these Numbers Are %d", sum);
     
//      return 0;
// }



//  Problem 7


// #include<stdio.h> 

//   int main() 
// {
//     int no,sum=0;
//     printf("Enter The Number \n");
//     scanf("%d", &no);
//     for (int i = 1; i <=10; i++)
//     {
//         sum =  no + i * no*i;
//     }
    
//      printf("The Sum Of table %d is %d ", no, sum);
//      return 0;
// }




//  Problem 8


// #include<stdio.h> 

//   int main() 
// {

// int no ,fac = 1;
// printf("Enter The Number \n");
// scanf("%d",&no);
// for (int i = 1; i <=no; i++)
// {
//     fac*=i;
// }
// printf("The Factorial Of %d is %d", no , fac);


//      return 0;
// }



//  Problem 9


// #include<stdio.h> 

//   int main() 
// {
//     int no , fac=1;
//     printf("Enter The Number \n");
//     scanf("%d", &no);
//     int i =1;
//     while (i<=no)
//     {
//         fac*=i;
//         i++;
//     }

//     printf("The Factorial Number Of %d is %d ", no , fac);
    
     
//      return 0;
// }


//  Problem 10

// #include<stdio.h> 

//   int main() 
// {
//     int no;
//     printf("Enter The Number \n");
//     scanf("%d",&no);
//     if (no%2==0)
//     {
//         printf("This Is Not A Prime Number");
        
//     }
//     else
//     {
//         printf("This Is Prime Number ");
//     }
    
    
     
//      return 0;
// }


// Assignment 3

//  Problem 1

// #include<stdio.h> 

//   int main() 
// {
//     int i = 10;
//     if (i==10)
//     {
//         printf("I am 10 Number");
//     }
//     else
//     {
//         printf("I an Not a 10 Number");
//     }
    
    
     
//      return 0;
// }



//  Problem 2


// #include<stdio.h> 

//   int main() 
// {
//     int no1,no2,no3;
//     printf("Enter First Number \n");
//     scanf("%d", &no1);
//     printf("Enter Second Number \n ");
//     scanf("%d", &no2);
//     printf("Enter Third Number \n");
//     scanf("%d", &no3);
//     if (no1<=33||no2<=33||no3<=33)
//     {
//         printf("You Are Fail Because Your Marks Are Less Than 33");
//     }
//     else if ((no1+no2+no3)/3<40)
//     {
//         printf("You Are Fail Because Your Marks Are Less Than 40%");
//     }
//     else
//     {
//         printf("You Are Pass!!!");
//     }
    
    
     
//      return 0;
// }



//  Problem 3

// #include<stdio.h> 

//   int main() 
// {
//     float no, tax=0;
//     printf("Enter The Income \n");
//     scanf("%f", &no);
//     if (no<2500000 && no>=5000000)
//     {
//         tax = tax + 0.05 *(no-2500000);
//     }
//     else if (no>5000000 && no<=10000000)
//     {
//         tax = tax + 0.20 *(no-5000000);
//     }
//     else if (no>1000000)
//     {
//         tax = tax + 0.30 *(no-1000000);
//     }
    
//     printf("The Tax Is %f", tax);
//      return 0;
// }



//  Problem 4


// #include<stdio.h> 

//   int main() 
//   {
//       int no;
//       printf("Enter The Year \n");
//       scanf("%d", &no);
//       if (no%4==0)
//       {
//           printf("This Is Leap Year!!!");
//       }
//       else
//       {
//           printf("This Is Not A Leap Year!!!");
//       }
      
     
//      return 0;
// }



//  Problem 5


// #include<stdio.h> 

//   int main() 
// {
//     char ch;
//     printf("Enter The Number \n");
//     scanf("%c", &ch);
//     if (ch>=97 && ch<=122)
//     {
//         printf("It is Lowercase Character");
//     }
//     else
//     {
//         printf("It is not Lower Case Character ");
//     }
    
     
//      return 0;
// }




//  Problem 6



// #include<stdio.h> 

//   int main() 
// {
//     int no1,no2,no3,no4, fr1,fr2;
//     printf("Enter First Number \n");
//     scanf("%d", &no1);
//     printf("Enter Second Number \n");
//     scanf("%d", &no2);
//     printf("Enter Third Number \n");
//     scanf("%d", &no3);

//     if (no1>no2)
//     {
//         if (no1>no3)
//         {
//             fr1 = no1;
//         }
//         else
//         {
//             fr1= no3;
//         }
        
//     }

//     else
//         if (no2>no3)
//         {
//         fr2= no2;
//         }
//         else
//         {
//             fr2= no3;
//         }
    
//     if (fr1>fr2)
//     {
//         printf("FR1 is The Greatest Number");
//     }
//     else
//     {
//         printf("Fr2 Is The Greatest Number");
//     }
    

     
//      return 0;
// }


















