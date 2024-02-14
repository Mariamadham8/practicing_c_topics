//Designated Initialization of Arrays ::

//this simply to place a number in specified index and place the other indeces to 0
//NOTE THIS => in arr1 the legth of the array determined by the largest index 9 which len=10

//NOTE THIS EITHER: in arr2 we combine the 2 ways of initialization

//NOTE THIS EITHER: in arr3 we see that [2]=4 is already placed by 3 what is ggoing to happen that 4 will overwrite 3

/*
#include<stdio.h>
int main() {
    int arr[10] = {[0]=1, [5]=2, [6]=3};
    int arr1[10] = {[2]=3, [9]=2, [0]=1};
    int arr2[] = {1, 2, [5]=4, 5, [3]=3};
    int arr3[] = {1, 2, 3, [2]=4, [6]=45};

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; i++) {
        printf("%d ", arr3[i]);
    }
}
*/

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//revese order pro

/*
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int res[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(int i = n - 1, j = 0; j < n && i >= 0; i--, j++) {
        res[j] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//frequancy array!!
//the idea of that frequancy انا هذود الاندكس بتاع الفاليو اللي هتتكرر واحد 

//عديها تاني
/*
#include <stdio.h>
#define ARRAY_SIZE 10 
int main() {
    int dataset[] = {1, 3, 5, 3, 7, 1, 5, 3, 9, 3}; 
    int frequency[ARRAY_SIZE] = {0}; 

    int i;
    int dataset_size = sizeof(dataset) / sizeof(dataset[0]); 
    
    for (i = 0; i < dataset_size; i++) {
        int value = dataset[i];
        frequency[value]++;
    }
    printf("Frequency of each element:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (frequency[i] > 0) {
            printf("%d occurs %d times\n", i, frequency[i]);
        }
    }

    return 0;
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
 
 //row sum &col sum problem :
 /*
#include <stdio.h>
int main() {
    int a[3][4]={{1,2,3,4},
                {1,2,3,4},
                {1,2,3,4} 
    };
   
   
    for(int i =0;i<3;i++){
         int sum_row=0;
    for(int j=0;j<4;j++){
        sum_row += a[i][j];
    }
      printf(" row: %d\t",sum_row);
    printf("\n");
    }
  
    for(int i =0;i<4;i++){
         int sum_col =0;
    for(int j=0;j<3;j++){
        sum_col += a[j][i];
    }
    printf("col  :%d",sum_col);
    printf("\n");
    }
   
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>

int main() {
    int n, q;
    printf("Enter number of rows and columns for matrix 1: ");
    scanf("%d %d", &n, &q);

    int arr[n][q];
    printf("Enter elements for matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int n2, q2;
    printf("Enter number of rows and columns for matrix 2: ");
    scanf("%d %d", &n2, &q2);

    int arr2[n2][q2];
    printf("Enter elements for matrix 2:\n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < q2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    if (q != n2) {
        printf("Matrix multiplication not possible. Invalid dimensions.\n");
        return 0;
    }
int res[n][q2];
int temp, result , j;

for(int i=0;i<n;i++){
    temp=0;
    for(j=0;j<q;j++){
        result += arr[i][j] * arr2[temp][i]; 
        temp++ ;
    }
     res[i][j] =result ;
     result=0;
}
for(int i=0;i<n;i++){
    for(int j=0;j<q;j++){
       printf("%d \t",res[i][j]);
    }
    printf("\n");
}

}
