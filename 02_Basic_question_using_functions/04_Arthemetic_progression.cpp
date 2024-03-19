// write a programe for calculating nth term of an AP(Arthemetic progression)
// we know that an = ( a + (n - 1)d {in which a is first term , d is step diffrence, n is no of terms}

#include<iostream>
using namespace std;
int ap(int a, int n,int d){
    int sol = a + ((n-1)*d);
    return sol;
}
int main(){
    int a,n,d;
    cout<<"Enter the first term of ap"<<endl;
    cin>>a;
    cout<<"Enter the no of term in ap"<<endl;
    cin>>n;
    cout<<"Enter the step diffrence in ap"<<endl;
    cin>>d;
    cout<<"nth term term of ap is : "<<ap(a, n,d);
}