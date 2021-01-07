
//  Problem 1


//  #include<stdio.h> 
 
//    int main() 
// {
//     FILE *ptr;
//     int a,b,c;
//     ptr = fopen("Read.txt", "r");
//     fscanf(ptr, "%d", &a);
//     fscanf(ptr, "%d", &b);
//     fscanf(ptr, "%d", &c);
//     printf("The Values Are %d %d and %d", a,b,c);
//     fclose(ptr);
      
//       return 0;
//  }



//  Problem 2



// #include<stdio.h> 

//   int main() 
// {
//     FILE *ptr;
//     int no;
//     printf("Enter The Table No:");
//     scanf("%d", &no);
//     ptr = fopen("Table.txt", "w");
//     for (int i = 0; i < 10; i++)
//     {
//         fprintf(ptr, "%d X %d = %d\n", no, i+1, no*(i+1));
//     }
//     printf("Table Of %d Generated Successfully!!!", no);
    

//     fclose(ptr);
     
//      return 0;
// }




//  Problem 3

// #include<stdio.h> 

//   int main() 
// {
//     FILE *ptr1;
//     FILE *ptr2;

//     ptr1 = fopen("a.txt","r");
//     ptr2= fopen("b.txt", "w");
//     char c = fgetc(ptr1);
//     while (c!=EOF)
//     {
//         fputc(c,ptr2);
//         fputc(c,ptr2);
//         fputc(c,ptr2);
//         fputc(c,ptr2);
//         fputc(c,ptr2);
//         c= fgetc(ptr1);
//     }
    
//     fclose(ptr1);
//     fclose(ptr2);



     
//      return 0;
// }



//  Problem 4




// #include<stdio.h> 

//   int main() 
// {
//     char name[2] ;
//     int  salary[4];
//      scanf("%s", &name[0]);
//      scanf("%s", &name[1]);


// FILE *ptr;
// ptr = fopen("Employee.txt", "w");


// fprintf(ptr,"%s", name[0]);
// fprintf(ptr,"%s", name[1]);






     
//      return 0;
// }