#include <iostream>
using namespace std;
int main(){
//Creating the array
cout<<"Enter the number of integers"<<endl;
int n;
cin>>n;
int arr[n];
cout<<"Enter the elements"<<endl;
for (int i = 0; i<n;i++){
    cin>>arr[i];
}
cout<<endl<<"----------------------"<<endl;
cout<<"Enter the number to be found"<<endl;
int key;
cin>>key;
for(int j = 0; j<n;j++){
    if (arr[j] == key){
    cout<<"the key was found at position "<<j+1<<" (1 based indexing) "<<endl;
    return 0;
}
}
cout<<"The key was not found"<<endl;
}