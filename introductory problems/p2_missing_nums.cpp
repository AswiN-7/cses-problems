#include <iostream>
using namespace std;

void swap(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}
int main(){
    int n;
    // printf("enter numbers : ");
    scanf("%d", &n);
    int num[n];
    // cout<<"n "<<n<<endl;
    for(int i=0;i<n-1;i++){
        // printf("enter number %d : ", i);
            scanf("%d", &num[i]);
        // cout << i<<endl;
    }
    // for(int i = 0;i<n-1;i++){
    //     for(int j=i+1;j<n-1;j++){
    //         if(num[i]>num[j]){
    //             // printf("%d", num[i]);
    //             int temp = num[i];
    //             num[i]=num[j];
    //             num[j] = temp;
    //         }
    //     }
    // }

    quickSort(num, 0, n-2);
    for(int i=0;i<n;i++){
            if(num[i]!=i+1){
                cout << i+1;
                break;
            }
                
    }
}