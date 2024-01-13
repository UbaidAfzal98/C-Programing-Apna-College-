//SR:NO.1***********************************************************************************
//Structure is used to store the value of different variables with different data types
// #include<stdio.h>
// #include<string.h>

// struct student {      // struct is a user defined data type
//     char name[100];
//     int roll_no;
//     float cgpa;
// };
// int main() {

//     struct student s1;

//     printf("Enter The Name of Student \n");
//     scanf("%s",s1.name);
//     printf("Enter The Roll Number of Student \n");
//     scanf("%d",&s1.roll_no);
//     printf("Enter The CGPA of Student \n");
//     scanf("%f",&s1.cgpa);
//     // s1.roll_no=46119;
//     // s1.cgpa=6.72;
//     //s1.name="Ubaid";
//     // strcpy(s1.name,"Ubaid");
    
//     printf("\n********Here is The Data of CSE Student************\n");
//     printf("\nThe Name of the Student is %s\n",s1.name);
//     printf("The Roll Number of Student is %d\n",s1.roll_no);
//     printf("The CGPA of Student is %0.2f\n",s1.cgpa);

//     return 0;
// }


//SR:NO.2 ***********************************************************************************
//Arays in Structures 
// #include<stdio.h>
// #include<string.h>

// struct student {      // struct is a user defined data type
//     char name[100];
//     int roll_no;
//     float cgpa;
// };
// int main() {

//     struct student cse[100];    // This is struct array
//     cse[0].roll_no=46119;
//     cse[0].cgpa=6.72;
//     strcpy(cse[0].name,"Ubaid");

//     printf("The Name of the Student is %s\n",cse[0].name);
//     printf("The Roll Number of Student is %d\n",cse[0].roll_no);
//     printf("The CGPA of Student is %0.2f\n",cse[0].cgpa);

//     return 0;
// }


//SR:NO.3 ***********************************************************************************
//Initilizing structures
// #include<stdio.h>
// #include<string.h>

// struct student {      // struct is a user defined data type
//     char name[100];
//     int roll_no;
//     float cgpa;
// };
// int main() {

//     struct student s1 ={"Ubaid",46119,6.72};
//     struct student s2 ={"Huzaif",46132,6.42};
//     struct student s3 ={"Sumaid",46146,6.9};
    
//     printf("\n********Here is The Data of Students s1 ************\n");
//     printf("\nThe Name of the Student is %s\n",s1.name);
//     printf("The Roll Number of Student is %d\n",s1.roll_no);
//     printf("The CGPA of Student is %0.2f\n",s1.cgpa);

//     printf("\n********Here is The Data of Students s2 ************\n");
//     printf("\nThe Name of the Student is %s\n",s2.name);
//     printf("The Roll Number of Student is %d\n",s2.roll_no);
//     printf("The CGPA of Student is %0.2f\n",s2.cgpa);

//     printf("\n********Here is The Data of Students s3 ************\n");
//     printf("\nThe Name of the Student is %s\n",s3.name);
//     printf("The Roll Number of Student is %d\n",s3.roll_no);
//     printf("The CGPA of Student is %0.2f\n",s3.cgpa);

//     return 0;
// }


//SR:NO.4 ***********************************************************************************
//Pointers to Stucture 
// #include<stdio.h>
// #include<string.h>

// struct student {      // struct is a user defined data type
//     char name[100];
//     int roll_no;
//     float cgpa;
// };
// int main() {

//     struct student s1 ={"Ubaid",46119,6.72};
//     struct student s2 ={"Huzaif",46132,6.42};
//     struct student s3 ={"Sumaid",46146,6.9};

//     struct student *ptr1 = &s1;
//     struct student *ptr2 = &s2;
//     struct student *ptr3 = &s3;

    
//     printf("\n********Here is The Data of Students s1 ************\n");
//     printf("\nThe Name  of Student s1 is %s \n",(*ptr1).name);
//     printf("The Roll Number of Student is %d\n",(*ptr1).roll_no);
//     printf("The CGPA of Student is %0.2f\n",(*ptr1).cgpa);

//     printf("\n********Here is The Data of Students s2 ************\n");
//     printf("\nThe Name of the Student is %s\n",(*ptr2).name);
//     printf("The Roll Number of Student is %d\n",(*ptr2).roll_no);
//     printf("The CGPA of Student is %0.2f\n",(*ptr2).cgpa);

//     printf("\n********Here is The Data of Students s3 ************\n");
//     printf("\nThe Name of the Student is %s\n",(*ptr3).name);
//     printf("The Roll Number of Student is %d\n",(*ptr3).roll_no);
//     printf("The CGPA of Student is %0.2f\n",(*ptr3).cgpa);

//     return 0;
// }

//SR:NO.5 ***********************************************************************************
//Arrow Operator (->) in  Structures
// #include<stdio.h>
// #include<string.h>

// struct student {      // struct is a user defined data type
//     char name[100];
//     int roll_no;
//     float cgpa;
// };

// int main() {

//     struct student s1 ={"Ubaid",46119,6.72};
//     struct student *ptr1 = &s1;

//     printf("The Roll Number of Student without arrow operator is  %d\n",(*ptr1).roll_no);
//     printf("The Roll Number of Student with arrow operator is .......Arrow-> %d\n",ptr1->roll_no);

//     return 0;

// }


//SR:NO.6******************************************************************************************
// Passing Structure to Function
// #include<stdio.h>
// #include<string.h>

// struct student {      // struct is a user defined data type
//     char name[100];
//     int roll_no;
//     float cgpa;
// };

// void printdata(struct student s1);
// int main() {

//     struct student s1 ={"Ubaid",46119,6.72};

//     printdata(s1);                              //call by value
//     s1.roll_no = 46118;                         // call by refrence
//     printf("The New Roll Number of Student is %d\n",s1.roll_no);

//     return 0;

// }

// void printdata(struct student s1) {
//     printf("\n********Here is The Data of Students s1 ************\n");
//     printf("\nThe Name of the Student is %s\n",s1.name);
//     printf("The Roll Number of Student is %d\n",s1.roll_no);
//     printf("The CGPA of Student is %0.2f\n",s1.cgpa);
// }


//SR:NO.7******************************************************************************************
//typedef keyword: It is used to create alias(nicknames) for data types
// #include<stdio.h>
// #include<string.h>

// typedef struct computerEngineerStudent {      // struct is a user defined data type
//     char name[100];
//     int roll_no;
//     float cgpa;
// } ces;                                       //Alias or Nickname

// int main() {

//     ces s1 ={"Ubaid",46119,6.72};

//     printf("\nThe Name of the Student is %s\n",s1.name);
//     printf("The Roll Number of Student is %d\n",s1.roll_no);
//     printf("The CGPA of Student is %0.2f\n",s1.cgpa);

//     return 0;

// }


//SR:NO.8******************************************************************************************
// Enter the marks of 5 students in maths,chemistry and physics (each out of 100) using a structure.Marks having elements roll no,name,chem_marks,maths_marks,physics_marks and then display the percentage of each student "Note Percentage is not printing some issue in the code"
#include<stdio.h>
#include<string.h>

struct marks {
    char name[50];
    int roll_no;
    int chem_marks;
    int maths_marks;
    int physics_marks;
    int percentage;

};
int main() {
    struct marks s1;
    struct marks s2;
    struct marks s3;
    struct marks s4;
    struct marks s5;


    printf("Enter The Name of Five students \n");
    scanf("%s %s %s %s %s", s1.name, s2.name, s3.name, s4.name, s5.name);
    printf("Enter The Roll Number of Five Students Respectively Student \n");
    scanf("%d %d %d %d %d",&s1.roll_no,&s2.roll_no,&s3.roll_no,&s4.roll_no,&s5.roll_no);
    printf("Enter The Chemistry marks  of Students Respectively \n");
    scanf("%d %d %d %d %d",&s1.chem_marks,&s2.chem_marks,&s3.chem_marks,&s4.chem_marks,&s5.chem_marks);
    printf("Enter The Maths marks  of Students Respectively \n");
    scanf("%d %d %d %d %d",&s1.maths_marks,&s2.maths_marks,&s3.maths_marks,&s4.maths_marks,&s5.maths_marks);
    printf("Enter The Physics marks  of Students Respectively \n");
    scanf("%d %d %d %d %d",&s1.physics_marks,&s2.physics_marks,&s3.physics_marks,&s4.physics_marks,&s5.physics_marks);

    s1.percentage=((s1.chem_marks+s1.maths_marks+s1.physics_marks)/300) *100;
    s2.percentage=((s2.chem_marks+s2.maths_marks+s2.physics_marks)/300) *100;
    s3.percentage=((s3.chem_marks+s3.maths_marks+s3.physics_marks)/300) *100;
    s4.percentage=((s4.chem_marks+s4.maths_marks+s4.physics_marks)/300) *100;
    s5.percentage=((s5.chem_marks+s5.maths_marks+s5.physics_marks)/300) *100;

    printf("The Percentage Of Student %s  Having ROll Number %d is %f \n",s1.name,s1.roll_no,s1.percentage);
    printf("The Percentage Of Student %s  Having ROll Number %d is %f \n",s2.name,s2.roll_no,s2.percentage);
    printf("The Percentage Of Student %s  Having ROll Number %d is %f \n",s3.name,s3.roll_no,s3.percentage);
    printf("The Percentage Of Student %s  Having ROll Number %d is %f \n",s4.name,s4.roll_no,s4.percentage);
    printf("The Percentage Of Student %s  Having ROll Number %d is %f \n",s5.name,s5.roll_no,s5.percentage);

    return 0;
}