#include <stdio.h>

int main(){
    FILE *fptr;
    // fptr = fopen("text.txt","r");
    // fptr = fopen("text.txt","w");
    // fptr = fopen("text.txt","a");

    //! file exist checking
    // if(fptr==NULL){
    //     printf("File dosent exists");
    // }
    // else{
    //     fclose(fptr);
    // }

    //! read mode
    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("character is %c \n",ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character is %c \n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character is %c \n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character is %c \n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character is %c \n", ch);
    // fclose(fptr);

    //! write mode
    // char ch;
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');

    //! read mode by fgetc
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));

    //! write mode by fputc
    // fputc('M',fptr);
    // fputc('A',fptr);
    // fputc('N',fptr);
    // fputc('G',fptr);
    // fputc('O',fptr);

    //! reading full sentence in a file
    // char ch ;
    // ch= fgetc(fptr);
    // while(ch!=EOF){
    //     printf("%c",ch);
    //     ch= fgetc(fptr);
    // }
    // printf("\n");

    //! homework problem
    // fptr = fopen("Newtext.txt", "r");
    // int a;
    // fscanf(fptr,"%d",&a);
    // int b;
    // fscanf(fptr,"%d",&b);

    // fclose(fptr);
    // fptr = fopen("Newtext.txt", "w");
    // fprintf(fptr,"%d",a+b);

    return 0;
}