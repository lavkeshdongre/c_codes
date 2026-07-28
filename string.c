#include <stdio.h>
#include<string.h>
// int main(){
//   char ch[50];
//   printf("enter the string:--");
//   scanf("%s",&ch);

//   printf(" Enter string is:=%s",ch);
// }

// int main(){
//   char str[50]="hello";
//   char str1[50]="world";  
//   char str2[50];

  // printf("length of the string is:=%d",strlen(str));
  // printf("\nstring after concatenation is:=%s",strcat(str,str1));
  // printf("\nstring after copying is:=%s",strcpy(str2,str1));
  // printf("\nstring after comparison is:=%d",strcmp(str,str1));
  // printf("\nstring after reverse is:=%s",strrev(str));
  // printf("\nstring after upper case is:=%s",strupr(str1));
  // printf("\nstring after lower case is:=%s",strlwr(str1));

  // printf("length of the string is:=%d",strstr(str,str1));

//   if(strcmp(str,str1)==0){
//     printf("the string is  eqaul");
//   }else{
//     printf("string is not equal");
//   }

// }



// int main(){
//   char ch[100];
//   int count=0,i=0;

//   printf("enter the string:-");
//   scanf("%s",&ch);
//   while(ch[i]!='\0'){

//   if(ch[i] == 'a'||ch[i] == 'e'||ch[i] == 'i'||ch[i] == 'o'||ch[i] == 'u'){
//     count++;
//   }
//   i++;
// }
// printf("THE TOTAL vowel in this string is = %d",count);

// return 0;
// }

// int main(){
//   char ch;

//   printf("enter the char you want to chk ");
//   scanf("%c",&ch);

//   if(ch>= 'a' && ch <= 'z'){
//     printf("%c  this is lower case",ch);
//   }
//   else if(ch>= 'A' && ch <= 'Z'){
//     printf("%c THe given char is the  uppercase");
//   }
//   else if(ch >= '0' && ch <= '9'){
//     printf(" %c bro this is the digit");
//   }
//   else{
//     printf("this is the special character");
//   }
//   return 0;
// }
// /Character Type	ASCII Range
//Uppercase Letters	'A' to 'Z' (65–90)
//Lowercase Letters	'a' to 'z' (97–122)
//Digits	'0' to '9' (48–57)

// int main(){
//   char str1[100];
//    int i=0;
//   printf("Enter name:-");
//   fgets(str1, sizeof(str1),stdin);
//   while(str1[i]!='\0'){
//    if(str1[i] >= 'a' && str1[i] <= 'z'){
//     str1[i] = str1[i] - 32;
//    }
//    i++;
//   }
//    printf("%s",str1);

//    return 0;

    
//   }

  // int main(){
  //   char st[100];
  //   int i= 0;

  //   printf("enter the name :=");
  //   fgets(st,sizeof(st),stdin);

  //   while(st[i]!='\0'){
  //     if(st[i]>= 'A' && st[i]<= 'Z'){
  //       st[i]=st[i] + 32 ;
  //     }
  //     i++;
  //   }
  //   printf("%s",st); 

  //   return 0;

  // }


int main(){
  char id[50];
  char pass[50];

  printf("ENTER THE USERNAME :- ");
  scanf("%s",id);

  printf("\nENTER THE PASSWORD:-");
  scanf("%s",pass);


  if(strcmp(id,"admin")==0 && strcmp(pass,"admin@123")==0){
    printf("\n--------------------- LOGIN SUCCESSFULYY--------------------------------");
  }

  else{
    printf("\n INVALID USER");
  }
  return 0;
}