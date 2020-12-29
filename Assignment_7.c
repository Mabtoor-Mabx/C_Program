//  Prolem 1

// #include<stdio.h> 

//   int main() 
// {
//     int arr[10];
//     int *ptr;
//     ptr = &arr[0];
//     ptr = ptr +2;
//     if (ptr==&arr[2])
//     {
//         printf("Pointer is On Right Memory Location");
//     }

//     else
//     {
//         printf("Pointer Does not  On Right Memory Location");
//     }
    
    
     
//      return 0;
// }



//  Problem 3

// #include<stdio.h> 

//   int main() 
// {
//     int arr[10];
//     for (int i = 0; i <10; i++)
//     {
//         arr[i] = 5*(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("5 X %d = %d\n", i+1, arr[i]);
//     }
    
    
     
//      return 0;
// }



//   Problem 4


// #include<stdio.h> 

//   int main() 
// {
//     int arr [10];
     
//      int no;
//      printf("Enter The Table No :");
//      scanf("%d", &no);
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = no*(i+1);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//        printf("%d X %d = %d\n", no , i+1, arr[i]);
//     }
    
    



//      return 0;
// }



//  Probblem 5



// #include<stdio.h> 

// void Reverse(int *arr, int n)
// {
//     int temp;
//     for (int i = 0; i <(n/2); i++)
//     {
//         temp = arr[i];
//         arr[i]=  arr[n-i-1];
//         arr[n-1-i]= temp;
//     }
    

// }
//   int main() 
// {

//     int arr[]= {1,2,3,4,5,6,7,8,9};
//     Reverse(arr, 9);
//     for (int i = 0; i <9; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//      return 0;
// }




//  Prolem 6



// #include<stdio.h> 

//   int main() 
// {
//     int arr[5];
//     int sum =0;
//     printf("Enter The Number :");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//         sum = sum + arr[i];
//     }

//         printf("%d  ",sum) ;
    
    
     
//      return 0;
// }




//  Prolem 7


// #include<stdio.h> 

// void Mult(int *arr,int num, int n)
// {
//     printf("The Multiplication Table of %d is \n : ", num);

// for (int i = 0; i < n; i++)
// {
//     arr[i]= num *(i+1);
// }

// for (int i = 0; i < n; i++)
// {
//     printf("%d X %d = %d \n", num, i+1, arr[i]);
// }

// }



//   int main() {

//       int arr [3][10];
//        Mult(arr[0],2,10);


//      return 0;
// }




//  Prolem 8


// #include<stdio.h> 

// void Mult(int *arr, int num , int n)
// {
//     printf("The Multiplication Table Of  %d is  :\n " , num);


//     for (int i = 0; i <n; i++)
//     {
//         arr[i]= num*(i+1);
//     }

//     for (int i = 0; i < n; i++)
//     {
//       printf("%d X %d = %d \n", num , i+1, arr[i]);
//     }
    
    



// }
  
  
//   int main() 
// {
// int arr[3][10];
// int num;
// printf("Enter Table No : \n ");
// scanf("%d", & num);

// Mult(arr[0], num, 10);

     
//      return 0;
// }




//  Problem 9


#include<stdio.h> 

  int main() {
     int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The Address Of arr[%d][%d][%d] is %u \n", i, j, k, &arr[i][j][k]);
            }
            
        }
        
    }
    



     return 0;
}



