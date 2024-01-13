//SR:NO.1***********************************************************************************
//Dynamic Memory Allocation:It is a way to allocate memory to a data structure during the runtime
/*Functions for DMA
malloc(), calloc(), free() and realloc()*/ 

//Lets check first how much zise our system takes in terms of bytes for charachters, integers and floats and we use 'sizeof' function for this
// #include<stdio.h>
// int main() {
    
//     printf("%d\n",sizeof(int));
//     printf("%d\n",sizeof(char));
//     printf("%d\n",sizeof(float));

//     return 0;
// }


//SR:NO.2***********************************************************************************
// malloc() Function ---> Memmory Allocation
// #include<stdio.h>
// #include<stdlib.h>                    // we need to add this header file for DMA 

// int main() {

//     int *ptr;
//     ptr = (int*)malloc(5*sizeof(int)); //syntax of malloc(int* is type cast)

//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;

//     for(int i=0; i<5; i++) {
//         printf("%d\t",ptr[i]);
//     }

//     return 0;

// }


//SR:NO.3***********************************************************************************
//calloc() ---> Contineous Allocation
// #include<stdio.h>
// #include<stdlib.h>                    // we need to add this header file for DMA 

// int main() {

//     int *ptr;
//     ptr = (int*)calloc(5,sizeof(int)); //syntax of calloc(int* is type cast) it always initilizes with zero

//     // ptr[0] = 1;
//     // ptr[1] = 2;
//     // ptr[2] = 3;
//     // ptr[3] = 4;
//     // ptr[4] = 5;

//     for(int i=0; i<5; i++) {
//         printf("%d\t",ptr[i]);
//     }

//     return 0;

// }


//SR:NO.4***********************************************************************************
//free() Function
//#include<stdio.h>
// #include<stdlib.h>                    // we need to add this header file for DMA 

// int main() {

//     int *ptr;
//     ptr = (int*)calloc(5,sizeof(int)); //syntax of calloc(int* is type cast) it always initilizes with zero

//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;

//     for(int i=0; i<5; i++) {
//         printf("%d\t",ptr[i]);
//     }

//     free(ptr);                         // it will free our dynamic memory

//     ptr = (int*)calloc(2,sizeof(int));

//     for(int i=0; i<2; i++) {
//         printf("%d\t",ptr[i]);
//     }


//     return 0;

// }


//SR:NO.4***********************************************************************************
// realloc() FUnction ---> Reallocation : Increase and Decrease memory using the same pointer and size
#include<stdio.h>
#include<stdlib.h>

int main() {

    int *ptr;

    ptr = (int*)calloc(5,sizeof(int));

    printf("Enter any five Numbers ");
    for(int i=0; i<5;i++) {
    scanf("%d\n",&ptr[i]);
    }

    ptr = realloc(ptr,8);
    printf("Enter new 8 Numbers ");
    for(int i=0; i<8;i++) {
    scanf("%d\n",&ptr[i]);
    }

    for(int i=0; i<8;i++) {
    printf("\nThe Numbers are %d",ptr[i]);
    }

    free(ptr);

    return 0;

}