#include<stdio.h>
// int main(){
//   int  num = 10,st=9;

//   printf("The value of num %d %d",num,st);
//   printf("\nThe value of num %u %u",&num,&st);
  
//   return 0;

// }

// int main(){
//   int *ptr=NULL;
//    if(ptr!=NULL){
//     printf("The Value of ptr is %d",*ptr);
//    }else{
//     printf("NULL POINTER");
//    }
//    return 0;
// }

// int main(){
//   int a=10;
//   int *ptr=&a;

//   printf("%d",a);
//   printf("\n%p",a);
//   printf("\n%p",ptr);
//   printf("\n%d",*ptr);
// }

// int main(){
//   int a=10,b=20,c;
//   int *p,*q;

//   p=&a;
//   q=&b;

//   c=*p+*q;
//   printf("Addition of  C= %p",c);
// }
int add(int a,int b){
  int c;
  c = a+b;
  return c;
}
int main(){
  int a,b;
  int (*p)(int ,int);
  int result;
  printf("Enter a and b");
  scanf("%d%d",&a,&b);

  p=add;
  result=(*p)(a,b);

  printf("Addition:%d",result);
  return 0;
}







