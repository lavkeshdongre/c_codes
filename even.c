#include<stdio.h>
// int main(){
//   int a =5;

//   if(a%2==0){
//     printf(" even ");
//   }else{
//     printf("odd");
//   }
//   return 0;
// }
// int main(){
//   int i,n;
//   int k=0;

//   printf("enter a num:--");
//   scanf("%d",&n);

//   for(i=2;i<n;i++){

//     if(n%i==0){
//       k=1;
//       break;
//     }
    
//   }
//   if(k){
//     printf("num is not prime");
//   }
//   else{
//     printf("num is prime");
//   }
// }


// #include<stdio.h>
// int main(){
//   int i ,j;

//   for(i=0;i<4;i++){
//     for(j=0;j<4;j++){
//       if(j%2==0){
//       printf("4");
//     }
//     else
//     {
//       printf("5");
//     }
//   }printf("\n");
// }
// }















// #include<stdio.h>
// int main(){
//   int i ,j;

//   for(i=0;i<5;i++){
//     for(j=0;j<5;j++){
//       if(i==0||i==4||j==0||j==4){
//       printf("*");
//     }
//     else
//     {
//       printf(" ");
//     }
//   }printf("\n");
// }
// }

// #include<stdio.h>
// int main(){
//   int i ,j;

//   for(i=0;i<5;i++){
//     for(j=0;j<5;j++){
//       if(i==0||i==4||j==0||j==4)
//       {
//         if(i % 2==0){
//           printf("1");
//         }else{
//           printf("0");
//         }
      
//   }else{
//     printf(" ");
//   }
  
// // }
// // printf("\n");

// // }
// // return 0;
// // }

// #include<stdio.h>
// int main(){
//   int i,j;
//   for(i=1;i<5;i++){
//     for(j=1;j<5;j++){
//       if(j%2==0){
//         printf(" 5 ");

//       }
//       else{
//         printf(" 4 ");
//       }

//     }
//     printf("\n");
//   }
// }


// #include<stdio.h>
// int main(){
//   int i,j;
//   for(i=1;i<6;i++){
//     for(j=1;j<6;j++){
//       if(i==1||i==5||j==1||j==5){
//         printf("*");
//       }else{
//         printf(" ");
//       }

//     }
//     printf("\n");
//   }
// }
// #include<stdio.h>
// int main(){
//   int i,j;
//   for(i=1;i<6;i++){
//     for(j=1;j<6;j++){
//       if(i==1||i==5){
//         printf("1");
//       }
//       else{
       
//           if(j==1||j==5){
//             if(i%2==0){
//               printf("0");
//             }else{
//               printf("1");
//             }
//         }else{
//           printf(" ");
//         }
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   FILE *fp;
//   fp=fopen("madhuban.txt","w");
//   fprintf(fp,"NEw data inserted in the data :");
//   fclose(fp);
//   printf("data inserted in madhuban filw successfully");
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char ch[233];
//   fp=fopen("madhuban.txt","r");
//   while(fscanf(fp,"%s",ch)!=EOF){
//     printf("%s",ch);
//   }
//   fclose(fp);
//   printf("data read from  madhuban  successfully");
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char ch[233];
//   fp=fopen("madhuban.txt","a");
//      fprintf(fp," the user will added the new text wich is append");
//   fclose(fp);
//   printf("data append in  madhuban  successfully");
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   FILE *fp ;
//   char ch[245];
//   fp=fopen("madhuban.txt","r");
  
//   while((fgets(ch,200,fp))!=NULL){
//     printf("%s",ch);
//   }
//   rewind(fp);
//   while((fgets(ch,200,fp))!=NULL){
//     printf("%s",ch);
//   }

//   fclose(fp);
//   printf("data copied in  madhubhan  successfully");
//   return 0;
// }
// #include<stdio.h>

// struct student {
//   int id;
//   char name[20];
//   float marks;

// }s1[5];
// int main(){
//   int i = 0 ;
//   for(i=0;i<5;i++){
    
//    printf("\nEnter the id of stu:= ");
//    scanf("%d",&s1[i].id);

//    printf("Enter the name of stu:= ");
//    scanf("%s",&s1[i].name);
//    printf("Enter the marks of stu:= ");
//    scanf("%f",&s1[i].marks);
//   }


//   printf("\n-------------------------------THIS IS THE INFO OF STU-------------------------------------");

//   for(i=0;i<5;i++){
//     printf("\nID = %d , NAME = %s ,Marks = %f ",s1[i].id,s1[i].name,s1[i].marks);

//   }

//   printf("THIS RECORD FETCH BY THE STUDENT");

//   return 0;
  

// }


#include<stdio.h>
int main(){
  int i ,num,flag = 1;

  printf("Enter the num to check is prime or not===  ");
  scanf("%d",&num);

  for(i=2;i<=num/2;i++){
    if(num%i==0){
      flag=0;
      break;
    }
  }
      if(flag==1){
        printf("num is  prime");
      }else{
        printf("num is  not prime");
      }
    
  
  return 0;
}

























