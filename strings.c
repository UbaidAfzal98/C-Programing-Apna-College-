// *********************initilization and printing of strings of strings****************
// #include<stdio.h>
// int main() {

    // char arr[]={'U','b','a','i','d','\0'};  //strings alawys terminated with \0 ie:Null character
    // char *ptr=arr;
    // while (*ptr != '\0')    // This will check how much index has to move or find
    // {
    //     printf("%c",*ptr);
    //     ptr++;
    // }

    // we can also use %s to use to print our Numbers like 
    // char arr[]={"Ubaid"}; // this is another way of initilizing strings with automaed \0 
    // printf("%s",arr);

    // char arr[50];
    // printf("Enter your First Name ");
    // scanf("%s",arr);             // taking input from user 
    // printf("Your First name is %s ",arr);
    
    // But above scanf can print only first name it can not detect the space between characters so for that we use gets or fgets and puts
    // char arr[50];
    // printf("Enter your First Name ");
    // fgets(arr,sizeof(arr),stdin);             // taking input from user using fgets function which is an inbulid function in c
    // puts("Your  name is :");
    // puts(arr);
    // return 0;

//}


// ****************Standard libarary Function for Strings*******************
// //strlen() Fumction gives us the length of the strings but we have to write 'string.h' header file also 
// #include<stdio.h>
// #include<string.h>
// int main() {
//     char arr[]={"Ubaid"};
//     int a=strlen(arr);
//     printf("The lenght of the String is %d ",a);
//     return 0;
// }
//strcpy() Fumction copies the value of one  string to another but we have to write 'string.h' header file also 
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char arr1[] = "Ubaid"; // You can directly initialize a character array with a string literal
//     char arr2[50];
    
//     strcpy(arr2, arr1);
    
//     printf("Now the Value of arr2 is %s", arr2);

//     return 0;
// }
//strcat() Fumction concaticates the value of one  string to another but we have to write 'string.h' header file also 
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char arr1[50] = "Ubaid "; // You can directly initialize a character array with a string literal
//     char arr2[]="Afzal";
    
//     strcat(arr1, arr2);
    
//     printf("Now the The string Holds the value  %s", arr1);

//     return 0;
// }
//strcmp() Function compares the value of one  string to another but we have to write 'string.h' header file also 
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char arr1[50] = "Ubaid"; // You can directly initialize a character array with a string literal
//     char arr2[]="Afzal";
    
//     int val = strcmp(arr1, arr2);
    
//     printf("After comparing the value is  %d", val);

//     return 0;
// }
//strupr() Function  is used to write the upper case of the letters but we have to write 'string.h' header file also 
#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000]; // You can directly initialize a character array with a string literal

    printf("Enter anything i will convert it into upper case letters");
    fgets(arr,sizeof(arr),stdin);
    
    strupr(arr);   // simlarly the finction strlwr will give the lower case letters
    printf("The Upper case of this is :%s",arr);
    return 0;
}