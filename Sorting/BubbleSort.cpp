#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    system("CLS");
    int n;
    cout<<"Enter the number of elements in Array: ";
    cin>>n;
    cout<<"Enter the Elements:"<<endl;
    int arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
cout<<"Orginal Array Before Bubble Sorting:"<<endl;
     for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
}


cout<<"Orginal Array After Bubble Sorting:"<<endl;
     for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}