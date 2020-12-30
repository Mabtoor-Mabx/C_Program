//  QUICK QUIZ


// #include<stdio.h> 

//   int main() 
// {
//   char *ptr = "Mabx";
//   while (*ptr!='\0')
//   {
//     printf("%c", *ptr);
//     ptr++;
//   }
  
   
//    return 0;
// }


// *********Printf in String ****************


// #include<stdio.h> 

//   int main() 
// {
//   char *ptr = "MabtoorMabx";
//   printf("%s", ptr);


//    return 0;
// }

//  ************* Scanf in String ***************

// #include<stdio.h> 

//   int main() 
//   {
//     char *ptr ;
//     printf("Enter The String \n");
//     scanf("%s", ptr);
//    printf("%s", ptr);
//    return 0;
// }



// ****************Gets Method***********************//


// #include<stdio.h> 

//   int main() 
// {
//   char *ptr;
//   gets(ptr);
//   printf("%s", ptr);
   
//    return 0;
// }



//  **************Puts Method *****************



// #include<stdio.h> 

//   int main() 
//   {
//     char *ptr;
//     gets(ptr);
//     puts(ptr);
   
//    return 0;
// }



// ****************Standard Libraries **********************


//  STRLEN() STRING LENGTH


// #include<stdio.h> 
// #include<string.h>

//   int main() 
// {
//   char *ptr = "Hello! How Are You! I am Fine!!!";
//   int length = strlen(ptr);
//   printf("%d", length);
//    return 0;
// }



// STRCPY STRING COPY

// #include<stdio.h> 
// #include<string.h>
//   int main()
// {
//   char *ptr1 = "My Name Is Mabtoor Mabx";
//   char ptr2[50];
//   strcpy(ptr2, ptr1);
//   printf("The Value in Ptr 2 is %s", ptr2);
   
//    return 0;
// }


// ******** STRCAT String Concatenate ************
// #include<stdio.h>
// #include <string.h> 

//   int main() 
// {
//   char ptr1[45]= "Mabtoor";
//   char *ptr2 = "Mabx";
//   strcat(ptr1, ptr2);
//   printf("%s", ptr1);
   
//    return 0;
// }


// STRCMP String Comparison

#include<stdio.h> 
#include<string.h>

  int main() {
   char *ptr = "World";
   char *ptr2 = "Hello";
  int val=  strcmp(ptr,ptr2);
   printf("%d", val);
   return 0;
}