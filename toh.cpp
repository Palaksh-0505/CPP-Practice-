#include<iostream>// try to show the disks' position in each step
using namespace std;

void toh(int n, char a, char b, char c){
    if (n>0){
        toh(n-1,a,c,b);
        cout<<"Moving disc "<<n<<" from "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}

int main(){
    cout<<"Enter the number of disks"<<endl;
    int n;
    cin>>n;
    toh(n,'a','b','c');
}