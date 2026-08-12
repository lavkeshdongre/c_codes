// #include<stdio.h>
// int main(){
//   int i,j;

//   for(i=0;i<5;i++){
//     for(j=0;j<=i;j++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//   int r,c;

//   for(r=1;r<6;r++){
//     for(int s=1;s<6-r;s++){
//       printf(" ");
//     }
//     for(c=1;c<=r;c++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   int i,j;

//   for(i=0;i<=5;i++){
//     for(j=0;j<=i;j++){
//       printf("*");
//     }
//     printf("\n");
//   }
// }
// #include<stdio.h>
// int main(){
//   int i,j;
//  for(i=1;i<=5;i++){
//   for(int k=1;k<=5-i;k++){
//     printf(" ");
//   }
//   for(j=1;j<=i;j++){
//     printf("*");

//   }
//   printf("\n");
//  }
 
//   }
// #include<stdio.h>

//   int fact(int a){
//     if(a>1){
//       return  a * fact(a-1);
//     }
//     else{
//       return 1;
//     }
//   }
//   int main(){
//     int i;
//     printf("enter the num -=");
//     scanf("%d",&i);

//     printf("%d",fact(i));
//     return 0;
//   }

// #include<stdio.h>
// int main(){
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//       if(j==1||i==5){
//         printf("*");
//       }else{
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//       if(j==1||i==1||j==5||i==5){
//         printf("*");
//       }else{
//         printf(" ");
//       }
//     }printf("\n");
//   }
// }


// #include<stdio.h>
// int main(){
//   int i,j;
//   for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//       if((i==1 && j==3)||(i==2 && (j==2||j==4))||i==3||(i==4 && (j==1||j==5))||(i==5 && (j==1||j==5))){
//         printf("*");
//       }else{
//         printf(" ");
//       }

//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   int i,j;
//     for(i=1;i<5;i++){
//       for(int s=1; s<(5-i); s++)
// {
//     printf(" ");
// }
//       for(j=1;j<=(2 * i - 1);j++){
//         printf("*");

//       }
//    printf("\n");
//     }
//     return 0;
//   }


  // #include<stdio.h>
  // int main(){
  //   int i ,j;

  //   for(i=0;i<=5;i++){
  //     for(int s=0;s<=(5-i);s++){
  //       printf(" ");
  //     }
  //     for(j=1;j<=(2 * i - 1);j++){
  //       printf("*");
  //     }
  //     printf("\n");
  //   }
//   // }
// #include<stdio.h>

// int main() {
//     int i, j;

//     // Upper Pyramid
//     for(i = 1; i <= 5; i++) {

//         for(int s = 1; s <= (5 - i); s++) {
//             printf(" ");
//         }

//         for(j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     // Lower Inverted Pyramid
//     for(i = 4; i >= 1; i--) {

//         for(int s = 1; s <= (5 - i); s++) {
//             printf(" ");
//         }

//         for(j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,j,k=1;
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("%d",k);
//         }
//         k++;
//     printf("\n");
        
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j,k=1;
//     for(i=5;i>=1;i--){
//         for(k=1;k<5-i;k++){
//             printf(" ");
//         }
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
        
//     printf("\n");
        
//     }
// // }

// #include<stdio.h>
// int main() {
//     int i, j;// Upper Pyramid
//     for(i = 1; i <= 5; i++) {

//         for(int s = 1; s <= (5 - i); s++) {
//             printf(" ");
//         }

//         for(j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }

//         printf("\n");
//     } // Lower Inverted Pyramid
//     for(i = 4; i >= 1; i--) {

//         for(int s = 1; s <= (5 - i); s++) {
//             printf(" ");
//         }

//         for(j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int i = 0;
    for(i=0;i<5;i++){

    }
    printf("count : %d",i);
    return 0;
}