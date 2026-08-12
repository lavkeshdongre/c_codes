#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Account
{
    int accNo;
    char name[30];
    float balance;
    int pin;
}l1[20];
int usercount = 0;
void createAccount();
void deposit(int currentlogin);
void withdraw(int currentlogin);
void displayAccount(int currentlogin);
int login();
void loadAccount();
void saveAccount();

int main()
{
     int currentlogin = -1;
    int choice;
    loadAccount();
         printf("\n================================================");
        printf("\n    WELCOME BANK MANAGEMENT SYSTEM          ");

    while(1)
    {
  
      

        printf("\n1. Create Account");
        printf("\n2. Login ");
        printf("\n3. Deposit Money");
        printf("\n4. Withdraw Money");
        printf("\n5. Display Account");
        printf("\n6.Logout");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                  currentlogin=login();
                  break;

            case 3:
                deposit(currentlogin);
                break;

            case 4:
                withdraw(currentlogin);
                break;

           

            case 5:
                displayAccount(currentlogin);
                break;

            case 6:
              currentlogin=-1;
              printf("LOGOUT SUCCESSFULLY");
              break;

            case 7:
                saveAccount();
                printf("\nThank you!");
                exit(0);

            default:
                printf("\nInvalid choice! ");
        }
    }

    return 0;
}
void saveAccount()
{
    FILE *fp;

    fp = fopen("accounts.txt", "w");

    if(fp == NULL)
    {
        printf("\nFile not open");
        return;
    }

    for(int i = 0; i < usercount; i++)
    {
        fprintf(fp, "%d %s %f %d\n",l1[i].accNo,l1[i].name,l1[i].balance,l1[i].pin);
    }

    fclose(fp);

    printf("\nAccount data saved successfully!");
}
 void createAccount(){
  if(usercount >= 20)
{
    printf("Account limit reached!");
    return;
}

  printf("\nEnter your Name:-  ");
  scanf("%s",l1[usercount].name);

  printf("\nEnter the Account NO : - ");
  scanf("%d",&l1[usercount].accNo);
  printf("\nSET A PIN :- ");
  scanf("%d",&l1[usercount].pin);

  printf("\nENTER BALANCE :- ");
  scanf("%f",&l1[usercount].balance);

  printf("\n--------YOUR ACCOUNT CREATED SUCCESSFULLY-----------\n");

  printf("Name of the user:- %s\n",l1[usercount].name);
  printf("ACCOUNT NO:- %d\n",l1[usercount].accNo);
  printf("YOUR BALANCE:- %f\n",l1[usercount].balance);

  usercount++;
 }
 int login(){

  int  acc_input;
  int acc_pin;

  printf("\nPlease Enter Your Account Number:- ");
  scanf("%d",&acc_input);

for(int i = 0;i < usercount;i++ ){

  
  if(l1[i].accNo==acc_input){
     
  printf("\nEnter the pin:- ");
  scanf("%d",&acc_pin);

   if(l1[i].pin==acc_pin){
    printf("\n-------------------LOGIN SUCCESSFULLY------------------------------");
    printf("\nWelcome %s",l1[i].name);
  return i;

   }
   else{
    printf("\n------------------------INVALID PIN----------------");
    return -1;
   }
  }
  }
    printf("\n-----------------------INVALID USER------------------------");
    return -1;
  


 }

 void deposit(int currentlogin){
  if(currentlogin==-1){
    printf("please Login first ");
  }else{
   float  amount;
  printf("\nEnter the Amount you want to deposite :- ");
  scanf("%f",&amount);

  printf("\nAmmount Deposited Successfully");

  l1[currentlogin].balance = l1[currentlogin].balance + amount;

  printf("\nYour Balance is :- %f ",l1[currentlogin].balance);

  
 }}
 void withdraw(int currentlogin){
  float amount;
  if(currentlogin==-1){
    printf("login First");
  }else{
  printf("\nEnter the ammount you want to withdraw :- ");
  scanf("%f",&amount);

  if(amount > l1[currentlogin].balance ){
    printf("ISUFFICIENT BALANCE");
  }
  else{

  l1[currentlogin].balance = l1[currentlogin].balance - amount;
  printf("\nYour Remaining Balance Is :- %f ",l1[currentlogin].balance);



  }
}

 }

 void displayAccount(int currentlogin){

  printf("\n------------------------SBI------------------------------\n");

if(currentlogin==-1){
  printf("\nLogin First");
}else{
  printf("\nThe name of User:- %s",l1[currentlogin].name);
   printf("\nCurrent balance in your Account is:- %.2f\n",l1[currentlogin].balance);
}

  printf("\n-----------------------------------THANK YOU SO MUCH------------------------------------------------");
 }

 void loadAccount()
{
    FILE *fp;

    fp = fopen("accounts.txt", "r");

    if(fp == NULL)
    {
        printf("\nNo previous data found.");
        return;
    }

    while(fscanf(fp, "%d %s %f %d", &l1[usercount].accNo,l1[usercount].name,&l1[usercount].balance, &l1[usercount].pin) == 4)
    {
        usercount++;
    }

    fclose(fp);
}