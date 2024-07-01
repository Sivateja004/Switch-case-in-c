#include <stdio.h>

int main() {
    double balance = 1000.0; // Initial balance

    while (1) {
        int choice;
        printf("\nBanking System Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance: $%.2lf\n", balance);
                break;
            case 2:
                double deposit;
                printf("Enter the amount to deposit: $");
                scanf("%lf", &deposit);
                balance += deposit;
                printf("Updated balance after deposit: $%.2lf\n", balance);
                break;
            case 3:
                double withdrawal;
                printf("Enter the amount to withdraw: $");
                scanf("%lf", &withdrawal);
                if (withdrawal > balance) {
                    printf("Insufficient funds. Cannot withdraw.\n");
                } else {
                    balance -= withdrawal;
                    printf("Updated balance after withdrawal: $%.2lf\n", balance);
                }
                break;
            case 4:
                printf("Exiting the banking system. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please select 1-4.\n");
        }
    }

    return 0;
}
