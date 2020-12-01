

#include<stdio.h> 

  int main() {

    //   Problem 1
    //  int a = 10;
    //  if(a=11)
    //  {
    //      printf("I am 11");
    //  }
    //  else
    //  {
    //      printf("I am Not 11");
    //  }



//  Problem 2

// float marks, math,eng,urdu;
// printf("Enter Math Marks \n");
// scanf("%f", &math);
// printf("Enter English Marks \n");
// scanf("%f", &eng);
// printf("Enter Urdu Marks \n");
// scanf("%f", &urdu);
// marks = (math+urdu+eng)/3;
// if ((marks<40)|| math<33||urdu<33||eng<33)
// {
//     printf("Your Percentage is %f And You Are Fail ." , marks);
// }
// else
// {
//     printf("Your Percentage is %f And You Are Pass .", marks);
// }




// Problem 3


// int tax,income;

// printf("Enter Income Amount \n ");
// scanf("%d", &income);
// tax = 0;
// if (income>2500000 && income<=5000000)
// {
//     tax = 0.05 * (income-2500000);
// }

// if (income>5000000 && income<=10000000)
// {
//     tax = 0.20 * (income - 50000000);
// }

// if (income>10000000)
// {
//     tax = 0.30 * (income-10000000);
// }

// printf("Your Tax After Income is %d", tax);




// Problem 4


// int year;
// printf("Enter A Year \n");
// scanf("%d", &year);
// if (year%4==0)
// {
//     printf("This Is Leap Year");
// }
// else
// {
//     printf("This Is Not A Leap Year");
// }



//  Problem 5

// char ch;
// printf("Enter A Character!  \n");
// scanf("%c",&ch);
// if (ch>=97 && ch<=122)
// {
//     printf("It is Lowercase Character");
// }
// else
// {
//     printf("This is Not Lowercase Character");
// }



// Problem 6

int num1,num2,num3,num4,fr1,fr2;
printf("Enter A Number \n");
scanf("%d", &num1);
printf("Enter A Number \n");
scanf("%d", &num2);
printf("Enter A Number \n");
scanf("%d", &num3);
printf("Enter A Number \n");
scanf("%d", &num4);

if (num1>num4)
{
  fr1= num1; 
}
else
{
    fr1=num4; 
}

if (num2>num3)
{
  fr2 = num2;
}
else
{
     fr2 = num3;
}


if (fr1>fr2)
{
    printf("The Greatest Number is %d", fr1);
}
else
{
    printf("The Greatest Number is %d", fr2);
}




     return 0;
}