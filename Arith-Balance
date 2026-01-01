#include <stdio.h>
int main(){
    float Initial_Balance,Interest,Maintenance_Charge,Bonus;
    printf("Enter customer's initial balance: ");
    scanf("%f",&Initial_Balance);
    printf("Enter Interest Amount: ");
    scanf("%f",&Interest);
    //Input Interest Amount
    Initial_Balance+=Interest;
    printf("Balance after adding interest: %.2f\n", Initial_Balance);

    // Input Maintenance Charge
    printf("Enter annual maintenance charge to deduct: ");
    scanf("%f", &Maintenance_Charge);
    Initial_Balance -= Maintenance_Charge; // deduct charge
    printf("Balance after deducting maintenance charge: %.2f\n", Initial_Balance);

    // Input Bonus Factor
    printf("Enter bonus factor (e.g., 1.05 for 5%% bonus): ");
    scanf("%f", &Bonus);
    Initial_Balance *= Bonus; // apply bonus
    printf("Balance after applying bonus factor: %.2f\n", Initial_Balance);

    // Divide balance among two linked accounts
    Initial_Balance /= 2; // split balance equally
    printf("Final balance in each linked account: %.2f\n", Initial_Balance);
    return 0;
}
// OUTPUT 
// Enter customer's initial balance: 2000
// Enter Interest Amount: 500
// Balance after adding interest: 2500.00
// Enter annual maintenance charge to deduct: 300
// Balance after deducting maintenance charge: 2200.00
// Enter bonus factor (e.g., 1.05 for 5% bonus): 5
// Balance after applying bonus factor: 11000.00
// Final balance in each linked account: 5500.00
//  *  Terminal will be reused by tasks, press any key to close it. 
