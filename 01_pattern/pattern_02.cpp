/*
    pattern for n = 4 ;

                1
                2   3
                3   4   5
                4   5   6   7   
*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n,value;
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        value = i;
        for(int j=1;j<=i;j++){
            cout<<value;
            value=value+1;
        }
        cout<<endl;
    }
    return 0;
}
