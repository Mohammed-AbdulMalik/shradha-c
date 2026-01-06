#include <stdio.h>
#include <math.h>
#include <string.h>

void printHello();
int refernece(int *ptr);

void swap_num(int *ptr1, int *ptr2);

void cal(int a, int b, int *sum, int *pro, int *div);

void printArr(int arr[],int n);
void printArrP(int *arr,int n);

void storeTable(int arr[][10],int n,int number);

void printString(char arr[]);

int strLen(char arr[]);

void saltPassword(char password[]);

void slice(char atr[],int n,int m);
int main()
{
    //! intializations
    // int a=1,e;
    // e=1;

    // int a,b,c=3;
    // printf("%d ",c);
    // printf("%d ",a);

    //! logical operator
    // int a=1;
    // int b=3;
    // printf("%d",a && b);

    //  int a=1;
    // int b=0;
    // printf("%d",a && b);

    //! functions
    // printHello();

    //! math library functions
    // printf("%f",pow(3,2));

    //! pointers and addresses
    // int a=9;
    // int *b=&a;
    // int c= *b;
    // printf("%d",c);
    // printf("%p \n",&a);
    // printf("%u \n",&a);
    // printf("%u \n",b);
    // printf("%u \n",&b);

    // int age =22;
    // int *ptr =&age;
    // printf("%d \n",age);
    // printf("%d \n",*ptr);
    // printf("%d \n",*(&age));

    // int a;
    // int *ptr;
    // ptr=&a;
    // *ptr=10;
    // printf("%d \n",a);
    // printf("%d \n",*ptr);

    // *ptr+=5;
    // printf("%d \n",*ptr);
    // printf("%d \n",a);

    //! double pointer
    // int i=9;
    // int *ptr=&i;
    // int **pptr = &ptr;
    // printf("%d \n",**pptr);

    //! call by reference
    // int a=4;
    // printf("%d \n",a);
    // printf("%d \n",refernece(&a));

    //    int a=4;
    //    int b=5;
    //    printf("Before swap: a=%d, b=%d \n",a,b);
    //    swap_num(&a,&b);
    //    printf("After swap: a=%d, b=%d \n",a,b);

    // int a = 2;
    // int b = 4;
    // int sum,pro,div;
    // cal(a, b, &sum, &pro, &div);
    // printf("Sum: %d\nProduct: %d\nDivision: %d\n", sum, pro, div);

    //! Arrays
    // int marks[3];
    // printf("enter mark1 :");
    // scanf("%d",&marks[0]);
    // printf("enter mark2 :");
    // scanf("%d",&marks[1]);
    // printf("enter mark3 :");
    // scanf("%d",&marks[2]);
    // printf("mark1=%d\nmark2=%d\nmark3=%d\n",marks[0],marks[1],marks[2]);

    //! pointer Arrithemetic (int --> 4 bytes)
    // int age =22;
    // int *ptr = &age;
    // printf("Age: %u\n",ptr);
    // ptr++;
    // printf("Age: %u\n",ptr);
    // ptr--;
    // printf("Age: %u\n",ptr);

    //! comparision and arithemetic operation on pointers
    // int age =21;
    // int _age=102;
    // int __age=34;
    // int *ptr1 = &age;
    // int *ptr2 = &_age;
    // int *ptr3 = &__age;
    // printf("Age: %u _Age:%u Age-_Age= %u\n",ptr1,ptr2,ptr1-ptr3);   // ----> doubt section
    // ptr2=&age;
    // printf("comparision %d",ptr1==ptr2);

    //! Array Pointers
    // int array[5];
    // int *ptr= &array[0];
    // for(int i=0;i<5;i++){
    //     printf("Enter number %d: ",i+1);
    //     scanf("%d",ptr+i);
    // }
    // for(int i=0;i<5;i++){
    //     printf("Number %d: %d\n",i+1,*(ptr+i));
    // }

    //! printitng Array
    // int arr[]={1,2,3,4,5};
    // printArr(arr,5);
    // printArrP(arr,5);

    //! 2D Array
    // int tables[2][10];
    // storeTable(tables,0,2);
    // storeTable(tables,1,3);

    // for(int i=0;i<10;i++){
    //     printf("%d ",tables[0][i]);
        
    // }
    // printf("\n");
    // for (int i = 0; i < 10; i++){
    //     printf("%d ", tables[1][i]);
    // }


    //! Strings
    // char name[] ={'m','a','l','i','k','\0'};
    // printString(name);

    // char name[50];
    // scanf("%s",name);
    // printf("%s",name);

    //! fgets and puts string functions
    // char sentence[100];
    // fgets(sentence,100,stdin);
    // puts(sentence);

    //! String Pointer
    // char *ptr ="malik";
    //! when we use printf with %s it will assume the pointer as a series of charecters so instead of address the string will be printed
    // printf("%s \n",ptr);         
    // puts(ptr);
    // ptr="malik is a good student";
    // puts(ptr);

    //! error pointers concept
    // int *ptr=22;
    // pritnf("%d\n", ptr);

    //! length of string
    // char name[100];
    // fgets(name,100,stdin);   // includes new line so length+1
    // printf("Length is %d \n" ,strLen(name));

    //! string functions
    // char name[] ="malik";
    // int length = strlen(name);
    // printf("%d\n",length);

    // char old[]="malik";
    // char new[]="king";
    // strcpy(old,new);
    // puts(old);

    // char old[]="malik";
    // char new[]="king";
    // strcat(old,new);
    // puts(old);

    // char first[]="Apple";
    // char second[]="Banana";
    // printf("%d\n",strcmp(first,second));

    //! taking input string using  %c
    // char name[100];
    // char ch ;
    // int i=0;
    // while(ch != '\n'){
    //     scanf("%c",&ch);
    //     name[i]=ch;
    //     i++;
    // }
    // name[i]='\0';

    // char password[100];
    // scanf("%s",password);
    // saltPassword(password);

    char name[]="Abdul Malik";
    slice(name,6,10);
    



    return 0;
}
void slice(char str[],int n,int m){
    char newStr[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    printf("%s\n",newStr);
}

void saltPassword(char password[]){
    char salt[]="123";
    char saltPassword[100];
    strcpy(saltPassword,password);
    strcat(saltPassword,salt);
    printf("Salted Password: %s\n",saltPassword);
}

int strLen(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}


void printString(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

void storeTable(int arr[][10],int n,int number){
    for(int i=0;i<10;i++){
        arr[n][i] = number * (i+1);
    
    }
}

void printArrP(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);   //! arr[i] is equivalent to *(arr+i)
    }
    printf("\n");
}
void cal(int a, int b, int *sum, int *pro, int *div)
{
    *sum = a + b;
    *pro = a * b;
    *div = a / b;
}

void swap_num(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int refernece(int *ptr)
{
    *ptr = *ptr + 6;
    return *ptr;
}

void printHello()
{
    printf("Hello malik \n");
}