# include <stdio.h>
# include <stdlib.h>

void display_menu(){
    printf("\n============================\n");
    printf("         C CALCULATOR          \n");
    printf("============================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("============================\n");
}
int main(){
        int choice;

        double num1,num2,result;
        while (1){
            display_menu();
            printf("Enter your choice: ");
            scanf("%d",&choice);
            if (choice==5) {
                printf("Exiting Calculator. Godbye!|n");
                break;
            }
            printf("Enter the first number: ");
            scanf("%lf",&num1);
            printf("Enter the second number: ");
            scanf("%lf",&num2);
            switch (choice){
                case 1:
                    result=num1+num2;
                    printf("Result: %.2lf\n",result);
                    break;
                case 2:
                    result=num1-num2;
                    printf("Result: %.2lf\n",result);
                    break;
                case 3:
                    result=num1*num2;
                    printf("Result: %.2lf\n",result);
                    break;
                case 4:
                    if (num2!=0){
                        result=num1/num2;
                        printf("Result: %.2lf\n",result);
                    }
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
                    
            }
        }
        return 0;
}
