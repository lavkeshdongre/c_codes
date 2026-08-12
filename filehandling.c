// #include<stdio.h>
// int main(){
//   FILE *fp;
//   fp = fopen("DEMO.txt","w");

//   fprintf(fp,"new data inserted");
//   fclose(fp);


//   return 0;
// }



// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char buff[255];
//   fp = fopen("DEMO.txt","r");
//   while(fscanf(fp,"%s",buff)!=EOF)
//   {
//     printf("%s ",buff);
//   }
//   fclose(fp);

//   return 0;
// }





// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char name[20],city[30];
//   fp=fopen("./output/DEMO.txt","r");
//   scanf("%s %s",name,city);
//   fprintf(fp,"Hello i am %s and iam from %s",name,city);
//   fclose(fp);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char buff[255];
//   fp = fopen("DEMO.txt","r");
//   while(fscanf(fp,"%s",buff)!=EOF)
//   {
//     printf("%s ",buff);
//   }
//   fclose(fp);

//   return 0;
// }

// #include<stdio.h>
// int main(){
//   FILE *fp;
//   fp=fopen("file.txt","w");//opening file

//   fputc('a',fp);   //writing single character into the file 

//   fclose(fp);//closing file
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char c;
//   fp=fopen("file.txt","r");//opening file

//   while((c=fgetc(fp))!=EOF){
//     printf("%c",c);
//   } 

//   fclose(fp);//closing file
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   FILE *fp;
//   fp=fopen("file.txt","w");//opening file

//   fputs("HELLO THIS IS THE C PROGRAM OF FILE HANDLING",fp);   //writing single character into the file 

//   fclose(fp);//closing file
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char text[300];
//   fp=fopen("file.txt","r");//opening file
//   printf("%s",fgets(text,200,fp));  //writing single character into the file 

//   fclose(fp);//closing file
//   return 0;
// }


//seek()
// #include<stdio.h>
// int main(){
//   FILE *fp;
//   fp=fopen("lavkesh.txt","w");//opening file

//   fputs("c programming",fp);   //writing single character into the file 
//   fseek(fp,7,SEEK_SET);
//   fputs("practical",fp);
//   fclose(fp);//closing file
//   return 0;
// }

// rewind




// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char c[300];
//   fp=fopen("../lavkesh.txt","w");//opening file
//   fputs("Hello C Program...",fp);
//   fclose(fp);//closing file
//   return 0;
// }/


// #include<stdio.h>
// int main(){
//   FILE *fp;
//   char c[300];
//   fp=fopen("../lavkesh.txt","r");//opening file
//   printf("%s",fgets(c,200,fp));
//   rewind(fp);
//   printf("%s",fgets(c,200,fp));

//   fclose(fp);//closing file
//   return 0;
// }


//ftell method

#include<stdio.h>
int main(){
FILE *fp;
int length;

fp = fopen("lavkesh.txt","r");
fseek(fp,0,SEEK_END);
length = ftell(fp);

fclose(fp);

printf("Size of file: %d bytes",length);
return 0;

}
