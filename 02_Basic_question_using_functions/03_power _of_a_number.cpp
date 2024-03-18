// write a programe for calculating Power of  a number (a^b = ?)
#include<iostream>
using namespace std;
int Power(int a,int b){
    int ans = 1;
    for(int i = 1;i<=b;i++){
        ans = ans * a;
    }
    return ans;

}
int main(){
    int a,b;
    cout<<"enter the value of A"<<endl;
    cin>>a;
    cout<<"enter the value of B"<<endl;
    cin>>b;
    cout<<endl;
    cout<<Power(a,b);
}
