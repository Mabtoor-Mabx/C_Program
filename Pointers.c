// #include<stdio.h> 

//   int main() 
// {
//     // int i=3;
//     // int *j;   // * Symbol Shows It is Pointer variable
//     // j= &i;    // & Symbol Show It Allow To Store The Address Of That variable
//     // printf("The Value Of i is %d \n", i);
//     // printf("The Address of i is %u \n", &i);    
//     // printf("The Value of i is %u \n", *(&i));
//     // printf("The Address of j is %u \n", &j);   // %U Used For Print The Pointers
//     // printf("The Value of j is %u \n", *(&j));
//     // printf("The Value of j is %u \n", j);
//      return 0;

// }




#include<stdio.h> 
void No_Swap(int num1,int num2);
void swap(int *num1, int *num2);
  int main() 
{
    int no1=3;
    int no2=5;
    No_Swap(no1,no2);
    printf("The Value Using No Swapping is %d and %d \n ",no1,no2);
    swap(&no1,&no2);
    printf("The Value Using Swapping is %d and %d \n" ,no1,no2);
     
    //   YOU CANNOT CHANGE THE VALUE BY CALL BY VALUE BUT YOU CAN CHANGE THE VAKUE THROUGH CALL BY REFERRENECE
     return 0;
}

void No_Swap(int num1,int num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;

}
void swap(int *num1, int *num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
