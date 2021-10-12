#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    system("CLS");
    int n;
    cout<<"Number of Elements in the Array"<<endl;
    cin>>n;
    
    int arr[n];

    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    const int N =1e6+2;
    bool check[N];

    for(int i=0;i<N;i++){
        check[i]= 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]= 1;
        }
    }
    int ans = -1;
    for(int j=1;j<N;j++){
        if(check[j]== 0){
            ans = j;
            break;
        }
    }

    cout<<"The Answer is: "<<ans;
    return 0;
}