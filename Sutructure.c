// #include<stdio.h> 
// #include<string.h>

//   int main() 
// {
//     struct Employee
//     {
//         char *name;
//         int no;
//         float salary;
//     };    // Semi Colon Is Must Important   
      

//       struct Employee e1;
//       strcpy(e1.name, "Mabx"); // For Name We Used Always STRCPY Function   
//       e1.no = 21;
//       e1.salary = 212.432;

     
//      return 0;
// }





//  Quick Quiz


// #include<stdio.h> 

// struct employee
// {
//     char name[30];
//     int salary;
// };


//   int main()
// {
//     struct employee emp1,emp2,emp3;
//     printf("Enter Employee 1 Name \n");
//     scanf("%s", emp1.name);
//     printf("Enter Employee1 Salary \n");
//     scanf("%d", &emp1.salary);
//     printf("Enter Employee 2 Name \n");
//     scanf("%s", emp2.name);
//     printf("Enter Employee2 Salary \n ");
//     scanf("%d", &emp2.salary);
//     printf("Enter Employee 3 Name \n");
//     scanf("%s", emp3.name);
//     printf("Enter Employee3 Salary \n ");
//     scanf("%d", &emp3.salary);    
//      return 0;
// }



// #include<stdio.h> 

// struct Facebook
// { 
// int code;
// };

// int main() 
// {
//     struct Facebook fb[100];
//     fb[0].code;
//     fb[1].code;
     
//      return 0;
// }




// #include<stdio.h> 

// struct emp
// { 
//     int harry ;

// };
//   int main() 
// {
//     struct emp harry={21, 31,"Hrry"};
     
//      return 0;
// }




#include<stdio.h> 

struct employee
{ 
    int no;
    char salary;

};
  int main() 
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (ptr->no)= 110000;   // -> Arrow Operator is used instaed of Dot Operator    
    printf("%d", e1.no);
     
     return 0;
}