// #include<stdio.h>
// int main(){
//   int size = 0, index = 0;
//   printf("Enter the size:- ");
//   scanf("%d",&size);
//   int arr[size];
//   printf("Enter an element in array:- \n ");

//   for(int i=0;i<size;i++){
//     scanf("%d",&arr[i]);
//   }
//   printf("enter the index:-");
//   scanf("%d",&index);

//   for(int i = 0;i<size;i++){
//     if(i==index){
//       printf("%d",arr[i]);
//     }
//   }
//   return 0;

// }
#include<stdio.h>
int main(){
  int size = 0, index = 0;
  printf("Enter the size:- ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter an element in array:- \n ");

  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }

  int num = 0;

  for(int i = 0;i<size;i++){
    if(arr[i]>num){
      num = arr[i];
    }
  }
  printf("the largest num in arry is %d",num);
  return 0;

}