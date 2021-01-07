// #include<stdio.h> 

//   int main()
// {
//     FILE *ptr;  // FILE KEYWORD FOR CREATE FILE POINTER
//     ptr = fopen("This.txt", "r");   // F_OPEN FUNCTION USED FOR OPENING THE FILE
//      return 0;
// }




// #include<stdio.h> 

//   int main() 
// {
//     FILE *ptr;
//     ptr = fopen('This.txt', 'r'); // THIS IS USED TO OPENING THE FILE
//     int num;
//     fscanf(ptr, "%d", &num); // F_SCANF IS USED TO READ FIle
//     printf("%d", num);
//     fclose(ptr);
     
//      return 0;
// }



// #include<stdio.h> 

//   int main() 
// {
//     FILE *pointer_Name;
//     pointer_Name = fopen("This.txt", "r");
//     int num;
//     fscanf(pointer_Name,"%d", &num);
//     printf("%d", num);
//     fclose(pointer_Name);
//      return 0;
// }




//  QUICK_QUIZ


// ************* F_SCANF() IN FILE I/O**************

// #include<stdio.h> 

//   int main() 
// {
//     FILE *pointer_Name;
//     pointer_Name = fopen("Thi1s.txt", "r");
//     int num;
//     if(pointer_Name==NULL)
//     {
//         printf("File Does Not Exist");
//     }
//     else
//     {
//         fscanf(pointer_Name,"%d", &num);
//         printf("%d", num);
//     }
    
//     fclose(pointer_Name);
     
//      return 0;
// }

// **********F_PRINTF() IN FILE I/O****************


// #include<stdio.h> 

//   int main()
// {
//     FILE *pointer_Name;
//     pointer_Name = fopen("This1.txt", "w");
//     int num = 12121;
//     fprintf(pointer_Name,"%d", num);
//     fclose(pointer_Name);
     
//      return 0;
// }



// ***********F_GETC() IN FILE I/O********

// #include<stdio.h> 

//   int main() 
// {
//     FILE *pointer_Name;
//     pointer_Name = fopen("This.txt", "r");
    
//      char c =fgetc(pointer_Name);
//     printf("%c", c);

//     fclose(pointer_Name);
     
//      return 0;
// }


//  ****F_PUTC() IN FILE I/O*********

// #include<stdio.h> 

//   int main() 
// {
//     FILE *pointer_Name;
//     pointer_Name = fopen("File_Name.txt", "w");
//     char c = fputc('C', pointer_Name);
//     fclose(pointer_Name);
     
//      return 0;
// }




#include<stdio.h> 

  int main() 
{
    FILE *pointer_Name;
    char c;
    pointer_Name = fopen("This.txt", "r");
    while (1)
    {
         c= fgetc(pointer_Name);
        if (c==EOF)
        {
            break;
        }
        
    }   
    fclose(pointer_Name);
     
     return 0;
}




