#include <stdio.h>
int balance = 5000;
// Function declarations
int login();
void checkBalance();
void deposit(int amount);
void withdraw(int amount);

int main()
{
int choice;
int amount;

if (login())
{
do
{
printf("\n===== ATM MENU =====\n");
printf("1. Check Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:
checkBalance();
break;

case 2:

printf("Enter deposit amount: ");
scanf("%d", &amount);
deposit(amount);
break;

case 3:
printf("Enter withdrawal amount: ");

scanf("%d", &amount);
withdraw(amount);
break;

case 4:
printf("Thank you for using our ATM!\n");
break;

default:
printf("Invalid choice!\n");
}

} while(choice != 4);

}

return 0;

}

int login()
{
int pin;
int correctPin = 4299;
int attempts = 0;

while (attempts < 3)
{
printf("Enter your PIN: ");
scanf("%d", &pin);

if (pin == correctPin)
{
printf("Login successful!\n");
return 1;
}
else
{
printf("Incorrect PIN!\n");
attempts++;
}

}

printf("Maximum attempts exceeded. Access denied.\n");
return 0;

}

void checkBalance()
{
printf("\nYour current balance is: Ksh %d\n", balance);
}

void deposit(int amount)
{
if (amount > 0)
{
balance = balance + amount;

printf("Deposit successful!\n");
printf("New balance: Ksh %d\n", balance);
}
else
{
printf("Invalid deposit amount!\n");
}

}

void withdraw(int amount)
{
if (amount <= 0)
{
printf("Invalid amount!\n");
}
else if (amount > balance)
{
printf("Insufficient balance!\n");
}
else
{
balance = balance - amount;
printf("Withdrawal successful!\n");
printf("Remaining balance: Ksh %d\n", balance);
}
}
