#include<iostream>
#include<stdio.h>
using namespace std;
string DecimalToHexa(int n){
    string ans="";
    int x=1;
    int lastDigit = 0;
    while(x<=n){
        x = x*16;
    }
    x = x/16;
    while(x>0){
        lastDigit = n / x;
        n = n - lastDigit*x;
         
        if(lastDigit>=0 && lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }
        else{
           char c = lastDigit + 'A' - 10;
           ans.push_back(c);
        }
      x = x/16;
    }
    return ans;
}

int main(){
    int n;
    system("CLS");
    cout<<"Enter the Decimal number to convert: "<<endl;
    cin>>n;
    cout<<"The Octal Representation is:\n"<<DecimalToHexa(n);
    return 0;
}