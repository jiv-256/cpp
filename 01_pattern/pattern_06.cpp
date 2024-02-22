/*
    pattern for n = 4 ;

                A   A   A   A
                B   B   B   B
                C   C   C   C
                D   D   D   D
            
*/

// code :-

#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    cout<<"Enter the number n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;
}
