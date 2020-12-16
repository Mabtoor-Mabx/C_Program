// Problem 1

// #include<stdio.h> 

//   int main() 
// {
//     int i=21;
//     int *j;
//     j=&i;
//     printf("The Value Of i is   %d \n", i);
//     printf("The Address Of i is %u \n",&i);
//     printf("The Address Of i is %d \n",j);
//     printf("The Address Of j is %u \n",&j);
//      return 0;
// }


//  Problem 2


// #include<stdio.h> 
// int Func(int q);
//  int main() 
// {
//     int i;
//     printf("The Address Of I is %u \n", &i);
//     int e=Func(i);
//     printf("The Address of i after Function is %u \n", &e);
//      return 0;
// }

// int Func(int q)
// {
//     printf("The Address of i after Function is %u \n", &q);
// }



//  Problem 3

// #include<stdio.h> 

// int ChangeVal(int *i);
//   int main() 
// {
//     int no;
//     int i=2;
//      no = ChangeVal(&i);
//      printf("The Value Of I is %d", no);
//      return 0;
// }
// int ChangeVal(int *i)
// {
//     *i+=10;
//     return*i;
// }


//  Problem 4


// #include<stdio.h> 
// void SumAndAvg(int num1,int num2 , int *sum , float *average)
// {
//     *sum = num1+num2;
//     *average = (float) *sum/2; 
// }
//   int main() 
// {
//     int no1=3;
//     int no2=8;
//     int sum;
//     float average;
//     SumAndAvg(no1,no2,&sum,&average);
//     printf("The Sum of Two Numbers is %d \n", sum);
//     printf("The Average Of Two Number is %f \n", average);
//      return 0;
// }



//  Problem 5


#include<stdio.h> 

  int main() {
int i=4;
int *j;
j=&i;
int **k;
k=&j;
printf("The value Of i is %u \n", *j);
printf("The value Of j is %u \n", *k);
printf("The value Of k is %u \n",k);


     return 0;
}

