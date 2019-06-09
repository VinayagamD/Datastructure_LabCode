//
// Created by vinay on 6/9/2019.
//

#include "BubbleSort.h"

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp=temp;
}

void bubbleSort(int arr[], int size) {
    for(int i=0 ;i<size-1;i++){
        for(int j=0;j<size-i-1;i++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for(int i; i< size; i++){
        cout<<arr[i] << "\t";
    }
    cout << endl;
}

void readArray(int arr[], int size) {
    cout << "\nEnter the number one by one \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl;
}


int main(){
    int size;
    cout << "\n SORT THE GIVEN NUMBERS USING BUBBLE SORT \n";
    cout << "\n____________________________________________\n";
    cout << "Enter the total number of items: \t";
    cin >> size;
    int arr[size];
    readArray(arr,size);
    cout << "Array before sorting the element"<<endl;
    printArray(arr, size);
    bubbleSort(arr,size);
    cout << "\n____________________________________________\n";
    cout << "Array after sorting the element using bubble sort"<<endl;
    printArray(arr,size);

    getch();
    return 0;
}
