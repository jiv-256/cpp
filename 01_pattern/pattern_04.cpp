/*
    pattern if you take input n = 4 ;

                1
                2   1
                3   2   1
                4   3   2   1 
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
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
    return 0;
}
