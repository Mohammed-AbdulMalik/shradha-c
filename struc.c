#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

typedef struct computerEnginner{
    char name[100];
    int roll;
    float cgpa;
}coe;

struct vector {
    int x;
    int y;
};

void print(struct student s1 );

void addVector(struct vector v1, struct vector v2);
int main(){
    //! structures
    // struct student s1;
    // s1.roll=27;
    // s1.cgpa=9.32;
    // strcpy(s1.name,"Malik");
    
    // printf("Student Name: %s\n", s1.name);
    // printf("Student Roll: %d\n", s1.roll);
    // printf("Student CGPA: %f\n", s1.cgpa);

    // struct student ece[5];
    // ece[0].roll=12;
    // ece[0].cgpa=9.21;
    // strcpy(ece[0].name,"shradha");

    // printf("Student Name: %s\n",ece[0].name);

    // struct student s1 = {"anil kapoor",12,9.65};
    // printf("Student Name: %s\n", s1.name);
    // printf("Student Roll: %d\n", s1.roll);
    // printf("Student CGPA: %f\n", s1.cgpa);


    //! pointer to structure

    // struct student s1 = {"anil kapoor",12,9.65};
    // printf("Student Name: %s\n", s1.name);

    // struct student *p = &s1;
    // printf("Student Name: %s\n", (*p).name);
    // printf("Student Name: %s\n", p->name);

    //! structure in function parameter

    // struct student s1 = {"anil kapoor",12,9.65};
    // print(s1);

    //! typedef keyword in structures
    // coe s1={"malik",9.32,11};
    // printf("Student Name: %s\n", s1.name);

    //! homework

    struct vector v1={2,3};
    struct vector v2={4,5};
    addVector(v1,v2);



    return 0;
}

void addVector(struct vector v1,struct vector v2){
    printf("Adding vector %d\n", v1.x+v2.x);
    printf("Adding vector %d\n", v1.y+v2.y);

}

void print(struct student s1){
    printf("Student Name: %s\n", s1.name);
    printf("Student Roll: %d\n", s1.roll);
    printf("Student CGPA: %f\n", s1.cgpa);
}