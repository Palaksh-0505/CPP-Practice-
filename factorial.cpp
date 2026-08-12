#include<iostream>
using namespace std;
unsigned long long factorial( int n,unsigned long long sum){
    if (n == 0){
        return sum;
    }
    else{
       sum=sum*n;
       n=n-1;
       sum= factorial(n,sum);
    }
} 
int main(){
    int n;
    unsigned long long sum;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<factorial(n,1);
}
// using unsigned long long because the factorial increases to a large number, i.e. 18! is the largest 16 digit factorial,therefore to execute a bigger
//number we require a data type which can store larger numbers which is unsigned long long