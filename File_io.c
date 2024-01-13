//SR:NO.1*****************************************************************************************
//File read and write mode and opening the file, closing the File
// #include<stdio.h>
// int main() {
//     FILE *fptr; // FILE is the inbuild Structure in c programing
//     fptr = fopen("Test.txt","r");    //will store the null value in pointer in read mode if file does not exist  
//     fptr = fopen("Test.txt","w"); in write mode  it will create that file like Text.txt will be created
//     if(fptr == 0) {
//         printf("File does't exist \n");
//     } else {
//         fclose(fptr);
//     }
// }


//SR:NO.2*****************************************************************************************
// Reading from a file 
// #include<stdio.h>
// int main() {

//     FILE *fptr;
//     fptr = fopen("Test.txt","r");

//     char ch;                      // Same can be done with integers and other datatypes
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);

//     fclose(fptr);

//     return 0;
// }


//SR:NO.3*****************************************************************************************
// Writing in a File
// #include<stdio.h>
// int main() {

//     FILE *fptr;
//     //fptr = fopen("Test.txt","w"); This will delete the old value and will insert the new ones
//     fptr = fopen("Test.txt","a"); //This will add the value to the old one 'a' stands apend

//     fprintf(fptr,"%c",'M');
//     fprintf(fptr,"%c",'A');
//     fprintf(fptr,"%c",'N');
//     fprintf(fptr,"%c",'G');
//     fprintf(fptr,"%c",'O');

//     fclose(fptr);

//     return 0;

// }


//SR:NO.4*****************************************************************************************
//Read and Write char :fgetc(fptr),fputc('A',fptr)
// #include<stdio.h>
// int main() {

//     FILE *fptr;
    // fptr = fopen("Test.txt","r");

    // printf("%c\n",fgetc(fptr));   //For Reading using fgetc() function
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    // fptr = fopen("Test.txt","w");

    // printf("%c\n",fputc('M',fptr));  //For writing using fputc() function
    // printf("%c\n",fputc('A',fptr));
    // printf("%c\n",fputc('N',fptr));
    // printf("%c\n",fputc('G',fptr));
    // printf("%c\n",fputc('O',fptr));

//     fptr = fopen("Test.txt","a");      // For apending the value in file

//     printf("%c\n",fputc('M',fptr));  //For writing using fputc() function
//     printf("%c\n",fputc('A',fptr));
//     printf("%c\n",fputc('N',fptr));
//     printf("%c\n",fputc('G',fptr));
//     printf("%c\n",fputc('O',fptr));

//     fclose(fptr);

//     return 0;

// }


//SR:NO.5*****************************************************************************************
//EOF(End of File)
// #include<stdio.h>
// int main() {

//     FILE *fptr;
//     fptr = fopen("Test.txt","r");

//     char ch;
//     while (ch != EOF)
//     {
//         printf("%c",ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");

//     fclose(fptr);

//     return 0;

// }


//SR:NO.6*****************************************************************************************
//Write a detils of student from a user and then store that data into a file
// #include<stdio.h>
// int main() {
//     FILE *ptr;
//     ptr=fopen("Student.txt","w");

//     char name[100];
//     int roll_no;
//     float cgpa;

//     printf("Enter the name of a student \n");
//     scanf("%s",name);
//     printf("Enter the Roll Number of a student \n");
//     scanf("%d",&roll_no);
//     printf("Enter the CGPA of a student \n");
//     scanf("%f",&cgpa);

//     fprintf(ptr,"The Name of Student is %s\n",name);
//     fprintf(ptr,"The Roll NUmber of Student is %d\n",roll_no);
//     fprintf(ptr,"The CGPA of Student is %0.2f\n",cgpa);

//     fclose(ptr);

//     return 0;
// }


//SR:NO.7*****************************************************************************************
// Take a Natural number from user and print the number of odd Numbers upto that number
#include<stdio.h>
int main() {

    FILE *fptr;
    fptr = fopen("odd.txt","w");

    int n;
    printf("Enter The Number upto which you want to print the odd Number\n");
    scanf("%d",&n);
    fprintf(fptr,"The Odd Numbers Upto %d are Given Below \n",n);

    for(int i=0; i<=n; i++) {
        if(i % 2 != 0) {

            fprintf(fptr,"%d\t",i);
        }
    }
     fclose(fptr);

     return 0;
}