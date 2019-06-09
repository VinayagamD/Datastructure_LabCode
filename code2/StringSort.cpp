//
// Created by vinay on 6/9/2019.
//

#include "StringSort.h"

void readNames(int n, char a[10][25]) {
    cout << "\nEnter the names (Not exceeding 10 characters)\n";
    for(int i = 0; i < n ;i++){
        cin >> a[i];
    }
}

void sortNames(int n, char a[10][25]) {
    char temp[25];
    for(int i =0; i< n-1; i++){
        for(int j = i+1; j <n;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
}

void printNames(int n, char a[10][25]) {
    for(int i =0 ; i<n;i++){
        cout << a[i] << endl;
    }
}

int main(){
    char a[10][25];
    int n;
    cout << "String Sorting"<<endl;
    cout << "Enter maximum number of names:\t";
    cin >> n;
    readNames(n,a);
    cout << "\nNames Before Sorting alphabetically\n";
    printNames(n,a);
    sortNames(n,a);
    cout << "\n________________________________________________\n";
    cout << "\nNames After Sorting alphabetically \n";
    printNames(n,a);
    return  0;
}


