/*
    pattern for n = 4 ;

                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1

*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        a=1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        int d = i-1;
        for(int m=1;m<i;m++){
            cout<<d;
            d--;
        }
        cout<<endl;
    }
    return 0;
}
