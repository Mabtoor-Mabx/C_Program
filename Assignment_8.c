//  Problem 2


// #include<stdio.h> 

//   int main() 
// {
//     char st1[21];
//     char st2[32];
//     char c ;
//     int i=0;

//     printf("Enter The Word As a Whole \n");
//     scanf("%s", st1);
//     printf("Enter The Word Character By Character \n");
//     while (c!='\n')
//     {
//         fflush(stdin);
//         scanf("%c" , &c);
//         st2[i] = c;
//         i++;
//     }
//     st2[i-1] = '\0';

//     printf("%s \n", st1);
//     printf("%s \n", st2);
    


     
//      return 0;
// }




//  Problem 3

// #include<stdio.h> 

// int strlen(char *st)
// {
//     char *ptr = st;
//     int length =0;
//     while (*ptr!='\0')
//     {
//         length++;
//         ptr++;
//     }
//     return length;
    
// }

//   int main() 
// {
//     char st[] = "Mabtoor Ul Shafiq";
//     int len = strlen(st);
//     printf("%d", len);
     
//      return 0;
// }





//  Problem 4




// #include<stdio.h> 

// void slice(char *st, char m, char n)
// {
//     int i =0;
//     while((m+i)<n)
//     {
//         st[i] = st[i+m];
//         i++;
//     }
// st[i] = '\0';
// }
//   int main() 
// {
//     char st[] = "Mabtoor Mabx";
//     slice(st, 3, 9);
//     printf("%s", st);
     
//      return 0;
// }




//  Problem 5

// #include<stdio.h> 


// void stcpy(char st1[], char st2[])
// { 
//     char temp;
//     int i=0;
//     while (st1[i]!='\0' && st2[i]!='\0')
//     {
//         temp = st1[i];
//         st1[i]= st2[i];
//         st2[i] = temp;
//         i++;
//     }
    
    

// }
//   int main() 
// {
//     char st1[] = "Mabtoor";
//     char st2[50];
//     stcpy(st1, st2);
//     printf("%s", st2);
     
//      return 0;
// }



//  Problem 6


// #include<stdio.h> 
// void chnge(char *st)
// {
//     char *ptr = st;
//     while (*ptr!='\0')
//     {
//         *ptr= *ptr +1;
//         ptr++;
//     }
    
// }

//   int main() 
// {
//     char st[] = "This Is Mabtoor mabx"; 
//     chnge(st);
//     printf("%s", st);

//      return 0;
// }




//  Problem 7


// #include<stdio.h> 

// void decrypt(char *st)
// {
//     char *ptr= st;
//     while (*ptr!='\0')
//     {
//         *ptr= *ptr-1;
//         ptr++;
//     }
    
// }
//   int main() 
// {
//     char st[] = "Uijt!Jt!Nbcupps!nbcy";
//     decrypt(st);
//     printf("%s", st);
     
//      return 0;
// }




//  Problem 8



// #include<stdio.h> 

// int occurence(char *st, char c)
// {
//    char  *ptr= st;
//     int count = 0;
//     while (*ptr!='\0')
//     {
//         if (*ptr==c)
//         {
//             count++;
//         }
//         ptr++;
        
//     }
//     return count;

// }
//   int main() 
// {
//     char st[] = "Mabtoor Mabx 007";
//     int occ = occurence(st, '0');
//     printf("%d", occ);
     
//      return 0;
// }





//  Problem 9



#include<stdio.h> 

void conf(char *st, char c)
{
    
    char *ptr = st;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            printf("Character is Present In String");
            break;
            
        }
        else
        {
            printf("Character is Not Present In String");
            break;
        }
        ptr++;    
    }
    

}
  int main() 
{
    char st[] = "Mabtoor Mabx";
    conf(st, 't');
     
     return 0;
}

