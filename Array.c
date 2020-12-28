//  QUICK QUIZ 1

// #include<stdio.h> 

//   int main() 
// {
//     int arr[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter The %d Value \n" ,i+1);
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("The %d Value is %d \n", i+1, arr[i]);
//     }
     
//      return 0;
// }




// #include<stdio.h> 

//   int main() {
//      int i = 4;
//     int *ptr;
//     ptr = &i;
//     printf("%u \t", ptr);
//     ptr++;
//     printf("%u \t", ptr);
//      return 0;
// }



#include<stdio.h> 

//   int main() 
// {

//     int marks[4];

//     int * ptr;
//     ptr = &marks[0];
     

//      for (int i = 0; i <4; i++)
//      {
//          printf("Enter The %dth Value \n",i+1);
//          scanf("%d", ptr);
//          ptr++;
//      }


//      for (int i = 0; i < 4; i++)
//      {
//          printf("The Value of %dth no is %d \n", i+1, marks[i]);
//      }
//      return 0;
// }




#include<stdio.h> 

void Array(int *ptr, int n)
{
    for (int i=0; i <n; i++)
    {
    printf("The Value Of %d Elememt Is %d\n", i+1, *(ptr+i));  
    }
}
  int main() 
{

    int arr[] = {22,32,3,12,13,2,21};

Array(arr,7);
     
     return 0;
}