#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Account
{
    double accNo;
    char name[30];
    float balance;
    int pin;
}l1;

void createAccount();
void deposit();
void withdraw();
void displayAccount();
int login();

int main()
{
     int currentlogin = 0;
    int choice;
         printf("\n================================================");
        printf("\n    WELCOME BANK MANAGEMENT SYSTEM          ");

    while(1)
    {
  
      

        printf("\n1. Create Account");
        printf("\n2. Login ");
        printf("\n3. Deposit Money");
        printf("\n4. Withdraw Money");
        printf("\n5. Display Account");
        printf("\n6. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount(currentlogin);
                break;

            case 2:
                  login();
                  break;

            case 3:
                deposit(currentlogin);
                break;

            case 4:
                withdraw(currentlogin);
                break;

           

            case 5:
                displayAccount();
                break;

            case 6:
                printf("\nThank you!");
                exit(0);

            default:
                printf("\nInvalid choice!");
        }
    }

    return 0;
}
 void createAccount(int currentlogin){

  printf("\nEnter your Name:-  ");
  scanf("%s",&l1.name);

  printf("\nEnter the Account NO : - ");
  scanf("%d",&l1.accNo);
  printf("\nSET A PIN :- ");
  scanf("%d",&l1.pin);

  printf("\nENTER BALANCE :- ");
  scanf("%f",&l1.balance);

  printf("\n--------YOUR ACCOUNT CREATED SUCCESSFULLY-----------\n");

  printf("Name of the user:- %s\n",l1.name);
  printf("ACCOUNT NO:- %d\n",l1.accNo);
  printf("YOUR BALANCE:- %f\n",l1.balance);
 }
 int login(){

  double  acc_input;
  int acc_pin;

  printf("\nPlease Enter Your Account Number:- ");
  scanf("%d",&acc_input);

  printf("%d\n%d ",l1.accNo,acc_input);
  if(l1.accNo==acc_input){
     
  printf("\nEnter the pin:- ");
  scanf("%d",&acc_pin);

   if(l1.pin==acc_pin){
    printf("\n-------------------LOGIN SUCCESSFULLY------------------------------");
    printf("\nWelcome %s",l1.name);
  return 1;

   }
   else{
    printf("\n------------------------INVALID PIN----------------");
   }
  }else{
    printf("\n-----------------------INVALID USER------------------------");
  }
  return 0;
 }

 void deposit(int currentlogin){
  if(currentlogin==0){
    printf("please Login first ")
  }else{
   int  amount;
  printf("\nEnter the Amount you want to deposite :- ");
  scanf("%d",&amount);

  printf("\nAmmount Deposited Successfully");

  l1.balance = l1.balance + amount;

  printf("\nYour Balance is :- %f ",l1.balance);

  
 }}
 void withdraw(currentlogin){
  int amount;
  if(currentlogin==0){
    printf("login First");
  }else{
  printf("\nEnter the ammount you want to withdraw :- ");
  scanf("%d",&amount);

  if(amount > l1.balance ){
    printf("ISUFFICIENT BALANCE");
  }
  else{

  l1.balance = l1.balance - amount;
  printf("\nYour Remaining Balance Is :- %f ",l1.balance);



  }
}

 }

 void displayAccount(){

  printf("\n------------------------SBI------------------------------\n");


  printf("\nThe name of User:- %s",l1.name);
   printf("\nCurrent balance in your Account is:- %f\n",l1.balance);

  printf("\n-----------------------------------THANK YOU SO MUCH------------------------------------------------");
 }