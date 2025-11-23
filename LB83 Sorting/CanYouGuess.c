#include <stdio.h>

void swap(int* arr, int i, int j) 
{ 
    int temp = arr[i]; 
    arr[i] = arr[j]; 
    arr[j] = temp; 
} 

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int arr[25];
        for (int j = 0; j < 25; j++)
        {
            scanf("%d", &arr[j]);     
        }
        for (int j = 0; j < 24; j++)
        {
            for (int k = 0; k < 24; k++)
            {
                if (arr[k] > arr[k+1]){
                    swap(arr, k, k+1);
                }
            }
        }
        int res[5];
        res[0] = arr[0]/2;
        res[1] = arr[1]-res[0];
        res[4] = arr[24]/2;
        for (int j = 2; j < 23; j++)
        {
            if (arr[j] - res[0] == arr[24-j] - res[4]){
                res[2] = arr[j] - res[0];
                break;
            }
        }
        res[3] = arr[23]-res[4];
        printf("Case #%d:", i+1);
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", res[j]);
        }
        printf("\n");
    }
    
}