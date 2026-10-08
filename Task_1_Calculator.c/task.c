#include<stdio.h>
int main(){
        char choice;
        int num1 , num2 , result;
       

     printf("===================================\n");
     printf("     SIMPLE CALCULATOR PROGRAM     \n");
     printf("===================================\n");

     // Taking operation input from user
     printf("Enter operation (+,-,*,/): ");
     scanf("%c", &choice);

     // Taking numbers input
     printf("Enter first number: ");
     scanf("%d", &num1);
     printf("Enter second number: ");
     scanf("%d", &num2);

     printf("\n---------------------------------\n");

     // Now calculaton using switch case
     switch (choice){
        case '+':
        result = num1 + num2;
        printf("Result: %d + %d = %d", num1,num2,result);
        break;

        case '-':
        result = num1 - num2;
        printf("Result: %d - %d = %d", num1,num2,result);
        break;

        case '*':  
        result = num1 * num2;      
        printf("Result: %d * %d = %d", num1,num2,result);
        break;

        case '/':
        if(num2 !=0){
        result = num1 / num2;
        printf("Result: %d / %d = %d", num1,num2,result);
        }
        else{
            printf("Divison by zero is 0\n");
        }
        break;

        default :
        printf("Invalid operator! Please enter (+,-,*,/)\n");
    
     }

printf("\n---------------------------------\n");

return 0;
}

   