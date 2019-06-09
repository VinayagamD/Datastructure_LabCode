//
// Created by vinay on 6/8/2019.
//

#include "SelectionSort.h"

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void seclectionSort(int arr[], int n) {
    int i, j, minIdx;
//    One by one move boundary of unsorted subarray
    for(i = 0; i < n-1; i++ ){
//        Find the minimum element in unsorted array
        minIdx = i;
        for(j=i+1; j <n ; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
//     Swap the found minimum element with the first element
        swap(&arr[minIdx],&arr[i]);
    }

}

void printArray(int *arr, int size) {
    for(int i=0; i<size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

void readArray(int arr[],int size) {
    cout << "Enter the numbers one by one "<< endl;
    for(int i=0;i< size ;i ++){
        cin >> arr[i];
    }
}

int main(){
    int n ;
    cout << "\nNumber sorting \n";
    cout << "Enter total number of items:\t";
    cin >> n;
    int arr[n];
    readArray(arr,n);
    cout << "\nArray Before sorting "<< endl;
    printArray(arr,n);
    seclectionSort(arr,n);
    cout << "\n_______________________________\n" << endl;
    cout << "\nArray After sorting in ascending order\n" << endl;
    printArray(arr,n);
    getch();
    return 0;
}
