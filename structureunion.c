#include<stdio.h>
#include<string.h>

// In C, structure (struct) and union (union) are user-defined data types used to group different data types together. The key difference is how they store data.

// example 1
// struct employee{
//   int id;
//   char name[20];
// }e1;

// int main(){
//   e1.id = 101;
//   strcpy(e1.name,"abc");

//   printf("id :- %d\n",e1.id);
//   printf("Name :- %s",e1.name);
// }

// struct student{
//   int id;
//   char name[20];
// };

// int main(){
//   struct student s[5];
//   int i;
    
//   for(i=0;i<5;i++){

//   printf("\nENTER id :- ");
//   scanf("%d",&s[i].id);
//   printf("Name :- ");
//   scanf("%s",&s[i].name);
// }

// printf("--------------STUDENT INFORMATION--------------------");

// for(i=0;i<5;i++){
//   printf("\n id: %d ,  NAME:- %s",s[i].id,s[i].name);
// }
// }


///3 program of ther struct H/W



// union employee{
//   int id;
//   char name[20];

// }e1;

// void main(){
//                                //id gets garbage value because because name has the large memory size
//   strcpy(e1.name,"abcd");
//    e1.id=101;  

//   printf("ID:%d\n",e1.id);               //garbage value print hoil.....
//   printf("NAME:- %s\n",e1.name)     ; 
// }


// struct  Student
// {
//   int id;
//   char name[20];
// }e1[5];

// int main(){
//    int j=0,count =0;
// for(j=0;j<5;j++){
//   printf("\nENTER THE ID OF STUDENT TO ADD RECORD:-");
//   scanf(" %d",&e1[j].id);

//   printf("ENTER THE NAME OF STUDENT :- ");
//   scanf(" %s",&e1[j].name);
//   count++;
  

// }
// printf("-----------------STU INFO--------------------\n");

// printf("TOTAL COUNT OF THE CLASS IS:- %d",count);
// for(j=0;j<5;j++){
  

  
//    printf("\nID : %d",e1[j].id);

//    printf("\nNAME OF STU IS:- %s",e1[j].name);

   
// }
// return 0;
  
// }

//HOMEWORK PROGRAM 1 HOSPITAL MANAGEMENT  

// struct Hospital {
//   int id;
//   char name[50];
//   char post[70];
//   float salary;
// };

// int main(){
//   struct Hospital h[5];
//   int i =0 ;

//   for(i=0;i<5;i++){
//     printf("\nENTER THE ID:- ");
//     scanf(" %d",&h[i].id);

//     printf("Enter Name :- ");
//     scanf("%s",&h[i].name);

//     printf("Enter Post :- ");
//     scanf("%s",&h[i].post);

//     printf("Enter Salary :- ");
//     scanf("%f",&h[i].salary);

    
//   }

//   printf("==============================INFORMATION OF HOSPITAL STAFF====================");

// for(i=0;i<5;i++){
//   printf("\nID = %d , NAME = %s ,POST = %s , SALARY = %f",h[i].id,h[i].name,h[i].post,h[i].salary);
// }
// return 0;
// }


// prog 2  books info 

// struct library {
//  int  bookId;
//  char title[100];
//  float price;
// }e1[2];
//  int main(){
//   int i =0;
//   for(i=0;i<2;i++){
//   printf("\nEnter The ID of Book:-");
//   scanf("%d",&e1[i].bookId);
//   getchar();

//   printf("Enter THe Title :- ");
//   fgets(e1[i].title,sizeof(e1[i].title),stdin);

//   printf("Enter the price :- ");
//   scanf("%f",&e1[i].price);
//   }

//   printf("-----------AVAILABLE BOOK IN LIBRARY--------------");

//   for(i=0;i<2;i++){

//   printf("\n BOOK ID = %d ,BOOK TITLE = %s ,BOOK PRICE = %f",e1[i].bookId,e1[i].title,e1[i].price);
//   }

//   printf("---------------------THANK YOU VISIT AGAIN----------------------");

//   return 0;
//  }

// result 3 no

// struct result{
//   int roll_no;
//   char name[60];
//   float percentage;
// };

// int main(){
//   struct result r[3];
//   int i = 0;
//   for(i=0;i<3;i++){

//     printf("Enter the Roll No:- ");
//     scanf("%d",&r[i].roll_no);
//     getchar();

//     printf("Enter the name:- ");
//     fgets(r[i].name,sizeof(r[i].name),stdin);

//     printf("Enter the CGPA:- ");
//     scanf("%f",&r[i].percentage);
//   }

//   printf("---------------------Result--------------------------");

//   for(i=0;i<3;i++){
//     printf("\nID = %d,Name = %s ,  % = %f",r[i].roll_no,r[i].name,r[i].percentage);
//   }
//   return 0;

// }

// 4

struct imp{
  int id;
  char ch[20];
}e1;

int main(){
  e1.id = 101;
  strcpy(e1.ch,"lavkesh");

  printf("ID:- %d\nName:- %s",e1.id,e1.ch);
  //this is the code 
  return 0;

}