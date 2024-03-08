/*
    pattern for n = 4 ;

                1
            2   3
        4   5   6
    7   8   9   10
*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}
