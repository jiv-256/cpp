/*
    pattern for n = 4 ;
                
                1
            2   2
        3   3   3
    4   4   4   4

*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}