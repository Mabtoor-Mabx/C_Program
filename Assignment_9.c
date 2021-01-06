// Problem 1


// #include<stdio.h> 

// struct Vector
// { 
//   int real;
//   float complex;

// };
//   int main() 
// {
 
//  struct Vector v1, v2;
//  v1.real= 21;
//  v1.complex=32.4;
//  printf("The Real And Complex Number Of v1 is %d and %f\n",v1.real, v1.complex);
//  v2.real=23;
//  v2.complex=34.2;
//  printf("The Real and Complex Number Of v2 is %d and %f\n ", v2.real, v2.complex);

//    return 0;
// }




//  Problem 2

// struct Vector
// {
//   int real;
//   int imaginery;
// };

// struct Vector  SumVector(struct Vector v1, struct Vector v2)
// {
//   printf("The Sum Of Real Value is %d\n", v1.real+v2.real);
//   printf("The Sum Of  Imaginery Value is %d\n", v1.imaginery+v2.imaginery);
// };




// #include<stdio.h> 

//   int main() 
// {
//   struct Vector v1,v2,sum;
//   v1.real= 21;
//   v1.imaginery=23;
//   printf("The value Of Real And Imaginery is %d and %d\n", v1.real,v1.imaginery);
//   v2.real=24;
//   v2.imaginery=32;
//   printf("The Value of Real and Imaginery is %d and %d\n", v2.real, v2.imaginery);
//   SumVector(v1,v2); 
//    return 0;
// }





//  Problem 4


// #include<stdio.h> 

// struct Pointer
// {
//   int val;
// };

//   int main() 
// {
//   struct Pointer p1;
//   struct Pointer *ptr;
//   ptr=&p1;

//   // (*ptr).val=21;
//   ptr->val=21;


//   printf("%d", p1.val);


   
//    return 0;
// }




//  Problem 5

// #include<stdio.h> 

// struct Complex
// {
//   int dim1;
//   int dim2;
// };


//   int main() 
// {
//   struct Complex c;
//   c.dim1=21;
//   c.dim2=43;
//   printf("The Two Dimensions Values of C is %d and %d\n ", c.dim1, c.dim2);
   
//    return 0;
// }





//  Problem 6



// #include<stdio.h> 

// struct Complex
// {
//   int real;
//   int complex;
// };

// void Display(struct Complex arr)
// {
//   printf("The Real Number is %d\n", arr.real);
//   printf("The Complex Number is %d\n",arr.complex);
// }


//   int main() 
// {
//   struct Complex arr[5];
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Enter The %dth Real Number\n", i+1);
//     scanf("%d", &arr[i].real);
//     printf("Enter The %dth Complex Number\n", i+1);
//     scanf("%d", &arr[i].complex);
//   }

//   for (int i = 0; i < 5; i++)
//   {
//     Display(arr[i]);
//   }
  
  
   
//    return 0;
// }
 


// Problem 7

// #include<stdio.h> 

// typedef struct Complex
// {
//   int real;
//   int complex;
// }comp;

// void Display(comp arr)
// {
//   printf("The Real Value is %d\n", arr.real);
//   printf("The Complex Values Is %d\n", arr.complex);
// }


//   int main() 
// {
//   comp arr[5];
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Enter The %dth Real Number \n", i+1);
//     scanf("%d", &arr[i].real);
//     printf("Enter The %dth Complex Number \n", i+1);
//     scanf("%d", &arr[i].complex);
//   }
  

//   for (int i = 0; i < 5; i++)
//   {
//     Display(arr[i]);
//   }
  
   
//    return 0;
// }



//  Problem 8



// #include<stdio.h> 
// #include <string.h>
// struct Bank_Account
// {
//   char Account_Name[29];
//   int Account_No;
//   float Money;
// };

//   int main() 
// {

//   struct Bank_Account HBL;
//   HBL.Account_No=21342;
//   strcpy(HBL.Account_Name, "YT_23421");
//   HBL.Money=213222.12;
//   printf("The Bank Account No is %d\nAccount Name Is %s\nAnd Money Avalible is %f", HBL.Account_No,HBL.Account_Name,HBL.Money);

//    return 0;
// }




//  Problem 9




// #include<stdio.h>
// #include<string.h> 

// struct Date
// {
//   int day;
//   int month;
//   int year;
// };

// int Compare(struct Date D1, struct Date D2)
// {
//   if (D1.year>D2.year)
//   {
//     return 1;
//   }
//   if (D1.month>D2.month)
//   {
//     return 1;
//   }
//   if (D1.day>D2.day)
//   {
//     return 1;
//   }
//   if(D1.year<D2.year)
//   {
//     return -1;
//   }
//   if (D1.month<D2.month)
//   {
//     return  -1;
//   }
//   if (D1.day<D2.day)
//   {
//     return -1;
//   }


//   else
//   {
//     return 0;
//   }
// }





//   int main() 
// {
//   struct Date D1;
//   struct Date D2;
//   D1.day=21;
//   D1.month=12;
//   D1.year=21;
//   D2.day=12;
//   D2.month=06;
//   D2.year=23;
//   printf("The First Date is %d/%d/%d\n", D1.day,D1.month,D1.year);
//   printf("The Second Date is %d/%d/%d\n", D2.day,D2.month,D2.year);
//  int a=Compare(D1,D2);
//   printf("%d", a);
 

   
//    return 0;
// }



//  Problem 10



#include<stdio.h> 


struct Time
{
  int Second;
  int Minutes;
  int hour; 
};

int Compare(struct Time T1, struct Time T2)
{
  if (T1.hour>T2.hour)
  {
    return 1;
  }
  if (T1.hour<T2.hour)
  {
    return -1;
  }
  if (T1.Minutes>T2.Minutes)
  {
    return 1;
  }
  if (T1.Minutes<T2.Minutes)
  {
    return -1;
  }
  if (T1.Second>T2.Second)
  {
    return 1;
  }
  if (T1.Second<T2.Second)
  {
    return -1;
  }
  else
  {
    return 0;
  }
  
  
  
  
  
  
  

}


  int main() 
{
  struct Time t1,t2;
  t1.Second=32;
  t1.Minutes=12;
  t1.hour=3;
  t2.Second=21;
  t2.Minutes=3;
  t2.hour=4;
  printf("The First Time Is %d:%d:%d\n", t1.hour,t1.Minutes,t1.Second);
  printf("The Second Time Is %d:%d:%d\n",t2.hour,t2.Minutes,t2.Second);
  int A =  Compare(t1,t2);
  printf("%d", A);

   
   
   return 0;
}