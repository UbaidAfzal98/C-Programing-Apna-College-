// What is pointer :
// Pointer is a Variable which stores the address of another variable .
// let us consider a basic example of a pointer 

// #include<stdio.h>
// int main() {

//    int age =22;       // Declaration of simple variable 
//    int *ptr=&age;     // Declaration of Pointer Varible (int *ptr)

//     printf("%d \n",age);
//     printf("%u \n",*ptr);  // aestric(*) tells the actual value in pointer 
//     printf("%u \n",&age);  // & gives the adress of the variable 
//     printf("%u \n",ptr);   // It will give the value of pointer which is adress of age
//     printf("%u \n",&ptr);  // it will give the adress of ptr

//     return 0;
// }

// ******using pointer to perform airthrmetic operations**********
// #include<stdio.h>
// int main() {

//     int a,b,sum,sub,mul,div,reminder;
//     int *ptr1,*ptr2;// declration of pointers
//     ptr1=&a;        // stoes the adress of a
//     ptr2=&b;        // store the addres of b

//     printf("Enter any two Number: \n");
//     scanf("%u %u",ptr1,ptr2);

//     sum=*ptr1 + *ptr2;  // *ptr1 will print the value in ptr1 which is the aderess of "a" so it will print the value of a
//     sub=*ptr1 - *ptr2;
//     mul=*ptr1 * *ptr2;
//     div=*ptr1 / *ptr2;
//     reminder=*ptr1 % *ptr2;

//     printf("The Sum of Two Numbers is %d \n",sum);
//     printf("The Subtraction of Two Numbers is %d \n",sub);
//     printf("The Multiplication of Two Numbers is %d \n",mul);
//     printf("The Quotient of Two Numbers is %d \n",div);
//     printf("The Remainder of Two Numbers is %d \n",reminder);



//     return 0;
// }

// swaping the numbers  using call by refrence and call by value using pointers 
// #include<stdio.h>

// int swap1( int *a,int *b);
// int swap2( int a,int b);

// int main() {

//     int a,b;

//     printf("Enter any two Number: \n");
//     scanf("%d %d",&a,&b); 
//     printf("The Numbers before swap are %d,%d \n\n",a,b);

//     swap2(a,b);// call by value (Which calls the function with the help of value) Numbers will not change here becouse here copy of arguments is passing to the finctoin definaton
//     printf("The Numbers after swap2 if we print the Numbers in Function call section  are %d,%d \n \n",a,b);

//     swap1(&a,&b);// call by refrence (when we call the function with  the  help of the adress of the Number) it will swap the functions because here it is callig by giving adress of the  arguement.


//     return 0;
// }

// int swap1( int *a,int *b) {

//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;

//     printf("The Numbers after swap1 function are %u,%u \n\n",*a,*b);

// }

// int swap2( int a,int b) {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;

//     printf("The Numbers after swap2 if we print the Numbers in Function Defination  are %u,%u \n\n",a,b);

// } 




//********pointer to pointer********
// #include<stdio.h>
// int main() {

//     int n = 10;
//     int *ptr1 = &n;
//     int **ptr2 = &ptr1;

//     printf("%u \n",*ptr1); // prints the  value of n
//     printf("%u \n",&ptr1); // prints the adress of n
//     printf("%u \n",*ptr2); // prints the value of ptr1 which is the adress of n
//     printf("%u \n",&ptr2); //prints the adress of ptr1
//     printf("%u \n",**ptr2);// prints the value of ptr2 which is the adress of ptr1 and then prints the value of ptr1 also which is adress of n so it wll print the value of n

// }


// **************Maximum number between two numbers using pointers**************
// #include<stdio.h>

// int max_num( int *a,int *b);

// int main() {

//     int a,b;

//     printf("Enter any two Number: \n");
//     scanf("%d %d",&a,&b); 
    
//     max_num(&a,&b);
//     return 0;
// }

// int max_num( int *a,int *b) {

//     if(*a > *b) {
//     printf("%d>%d \n",*a,*b);
//     } else {
//         printf("%d>%d \n",*b,*a);
//     }

// }

// Print a to z with pointers
// #include <stdio.h>

// void alpha(int *a);

// int main() {
//     int a;
//     alpha(&a);
//     return 0;
// }

// void alpha(int *a) {
//     for (*a = 'a'; *a <= 'z'; (*a)++)
//     printf("%c", *a);
// }


// *****pointer airthmetic*******
#include<stdio.h>
int main() {

    int age = 24;
    int age2=23;

    int *ptr = &age;
    int *ptr2=&age2;
    printf("%d \n",ptr);

   // ptr++;    // ptr++=ptr+1 ; which actualy means ptr = adresss + 4 byte ,it does not mean that we have to add the value 1 in ptr it means that we have to add that  much size of the data type has taken in the memory, in this case it is 4 because integer takes 4 bytes hence the output will be if adress of age is 2010 then ptr++ is 2014 same with the case ptr--;

    //printf("%d\n",ptr);

    printf("%d-%d=%u \n",ptr,ptr2,ptr - ptr2); // we can add and subtract the Pointers directly
    ptr2=&age;
    printf("%u",ptr == ptr2);// we can compare the pointers also here true that is 1 will print on the console.

}