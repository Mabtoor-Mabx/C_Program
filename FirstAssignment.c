#include <stdio.h>

int main()
{

    // Problem 1
    // int length, breath;
    // length =31 , breath = 43;
    // printf("The Area Of  Rectangle is %d :" , length * breath);

    // int length, breath;
    // printf("Enter Length Value : \n");
    // scanf("%d" , &length);
    // printf("Enter Breath Value : \n");
    // scanf("%d", &breath);
    // printf("The Area Of Triangle Is : %d", length * breath);

    // Problem 2

    int length,width;
    printf("Enter Length Value \n");
    scanf("%d", &length);
    printf("Enter Width Value \n ");
    scanf("%d", &width);
    printf("The Area Of Circle is %d" , length * width);
    int height;
    printf(" \n Enter Height Value : \n");
    scanf("%d", &height);
    printf("The Volume Of Cylinder Is : %d " , length * width * height);

    // Problem 3

        float celsius; 
        printf("Enter Celsius Value \n");
        scanf("%f", &celsius);
        float farenheight = (celsius * 9/5) + 32;
        printf("The Temperature in Farenheight is %f", farenheight);


            // Problem 4

        // int principle , rate, year;
        // principle = 21, year = 1; rate = 2;
        // int interest = (principle * rate * year)/3 ;

        // printf("The Interest is : %d" , interest);





    return 0;
}