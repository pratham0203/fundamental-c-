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
cout<<"Orginal Array Before Selection Sorting:"<<endl;
     for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
for(int i= 0 ;i < n ;i++){
    for(int j= i+1; j < n; j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp;
        }
    }
}
cout<<"Orginal Array After Selection Sorting:"<<endl;
     for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}