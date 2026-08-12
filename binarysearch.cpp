#include<iostream>
using namespace std;
void binary_entry(int arr[],int size){
    if(size == 0){
        return;
    }
    else{
        binary_entry(arr,size-1);
        cout<<"Enter the element"<<endl;
        cin>>arr[size-1];
        return;
    }
}
void binary_search(int arr[],int key,int low,int high){
    int mid=(low+high)/2;
    if(key == arr[mid]){
        cout<<"the element was found in the "<<mid+1<<" th position"<<endl;
    }
    else if(key<arr[mid]){
        binary_search(arr,key,low,mid);
    }
    else if(key>arr[mid]){
        binary_search(arr,key,mid+1,high);
    }
    else{
        cout<<"The element is not found in the given array";
    }
}
void arr_print(int arr[],int size){
    int s=0;
    while(s!= size){
        cout<<arr[s]<<" ";
        s=s+1;
    }
    cout<<endl;
}
int main(){
    int size,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    binary_entry(arr,size);
    cout<<"The array is"<<endl;
    arr_print(arr,size);
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    binary_search(arr,key,0,size-1);
}