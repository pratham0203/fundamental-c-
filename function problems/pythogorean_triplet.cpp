#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int max(int x, int y, int z){
    if(x>y){
        if(x>z){
            return x;
        }
        else{
            return y;
        }
    }
    else{
        if(y>z){
            return y;
        }
    return z;
    }
}
bool pythogorean(int n1, int n2, int n3){
    int max_num = max(n1,n2,n3);
    int b;
    int c;
    if(max_num==n1){
        b=n2;
        c=n3;
    }
    else if(max_num==n2){
        b=n1;
        c=n3;
    }
    else{
        b=n1;
        c=n2;
    }
    if(pow(max_num,2)==pow(b,2)+pow(c,2)){
        return true;
    }
    return false;
}
int main(){
    system("CLS");
    int a,b,c;
    cout<<"Enter the three numbers:"<<endl;
    cin>>a>>b>>c;
    if(pythogorean(a,b,c)==true){
        cout<<"They form a Pythogorean Triplet";
    }
    else{
        cout<<"They don't form a Pythogorean Triplet";
    }
    return 0;
}