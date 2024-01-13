// *************Basics of Functons****************
// #include<stdio.h>

// void ubaid(); //Declaration of Function

// int main(){
//     ubaid(); //Function Call
//     ubaid();
//     ubaid();
//     ubaid();
//     ubaid(); 
//     return 0;
// }
//  void ubaid(){ //Functin Defination 
//     printf("Ubaid \n");
//  }



//***********Multiplcation using functions*************
// #include<stdio.h>
//  int print_table(int n);

//  int main(){
//     int n;
//     printf("Entre The Number of which you want Multiplication \n");
//     scanf("%d",&n);
//     print_table(n);
//     return 0;
    
//  }
//  int print_table(int n){
//     for(int i = 1; i <= 10; i++){
//         printf("%dx%d=%d \n",n,i,i*n);
//     }

//  }




// *********write a function to calculate area of a square,a circle and a rectangle********
// #include<stdio.h>
//  int square(int n);
//  float circle(float r);
//  int rectangle(int l,int y);

//  int main(){
//     int n,r,l,y;
//     printf("Entre the side of a Square \n");
//     scanf("%d",&n);
//     printf("Entre the radius of a circle \n");
//     scanf("%d",&r);
//     printf("Entre the lenth and beadth of a rectangle respectively \n");
//     scanf("%d %d",&l,&y);

//     square( n);
//     circle(r);
//     rectangle(l,y);
//     return 0;
    
//  }
//  int square(int n){
//     printf("The area of square is %d \n ",n*n);
//     }

// float circle(float r){
//     printf("The area of a circle is %f \n",3.14*r*r);
// }

//  int rectangle(int l,int y){
//     printf("The area of a rectnagle is %d ",l*y);
//  }



//******* Write a function to convert celcius to Fahrenheit*************
// #include<stdio.h>
//  float conv(float c);

//  int main(){
//     float c;
//     printf("Entre the Degree of Temperature in Celcius i will Convert it into Fahrenheit \n");
//     scanf("%f",&c);

//     conv(c);
//     return 0;
    
//  }
//  float conv(float c){
//     printf("The Value of  %0.2fC' in Farhenhiet is %0.2fF' \n ",c,(c*1.8)+32);
// }


//************* write a program to swap the two numbers ****************
// #include<stdio.h>
//  int swap(int a,int b);

//  int main(){
//     int a,b;
//     printf("Entre the any Two Numbers  \n");
//     scanf("%d %d",&a,&b);

//     swap(a,b);
//     return 0;
    
//  }
//  int swap(int a,int b){
//    int temp=a;
//    a=b;
//    b=temp;
//    printf("The numbers after swapping are %d and %d \n",a,b);
// }



 // ******* min. and max. Number using functions 
//  #include<stdio.h>
//  int minmax(int a,int b);

//  int main(){
//     int a,b;
//     printf("Entre the any Two Numbers  \n");
//     scanf("%d %d",&a,&b);

//     minmax(a,b);
//     return 0;
    
//  }
//  int minmax(int a,int b){
//    if(a > b) {
//    printf("The %d is greater tham %d \n",a,b);
//    }
//    else {
//    printf("The %d Number is Smaller than %d \n",a,b);
//    }
// }



// ******* Pow of any Number using Custom Functions*************
#include<stdio.h>
#include<math.h>
 int power(int n, int m,int x);
 
 int main(){
    int n,m,x;

    printf("Enter The Number : \n");
    scanf("%d",&n);
    printf("Enter The Power of the Number \n");
    scanf("%d",&m);

    power(n,m,x);

    return 0;
    
 }

 int power(int n, int m,int x){
    x=pow(n,m);
    printf(" %d^%d is %d \n",n,m,x);
    }
    


