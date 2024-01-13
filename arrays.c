//******write a program to enter the three prices and print total cost with 18% GST******
// #include<stdio.h>
// int main() {

//     float prices[3];
//     printf("Enter three Prices : \n");
//     scanf("%f %f %f",&prices[0],&prices[1],&prices[2]);
    
//     float Total=(prices[0]+prices[1]+prices[2]);
//     float Totalgst=Total + (0.18*100);


//     printf("The Total cost Without  GST is %0.2f \n",Total);
//     printf("With 18percent GST is you have to pay %0.2f\n",Totalgst);


//     return 0;
// }

// Note:**********arrays are it self poiners********
#include<stdio.h>
void arrays(int aar[],int n);

int main() {
    int arr[]={1,2,3,4,5,6};

    arrays( arr,6);
    return 0;
}




void arrays(int aar[],int n) {
    for(int i = 0; i<n; i++) {
        printf("%d \t",aar[i]);
    }
}

