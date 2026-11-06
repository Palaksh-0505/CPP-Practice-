#include<iostream>
#include<vector>
using namespace std; 
int binary_search(vector<int> &arr,int high,int low,int key){
    int med = low+ (high -low)/2;
    if (arr[med] == key){
        return med;
    }
    else if(arr[med]> key) 
        return (binary_search(arr,med-1,low,key));
    else
        return(binary_search(arr,high,med+1,key));
}
int main(){
    int n;
    cout<<"Entern the number of elements"<<endl;
    cin>>n;
    cout<<"Enter a sorted array"<<endl;
    vector<int> array;
    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        array.push_back(temp);  
    }
    for (int i = 0; i<n;i++){
        cout<<array[i]<<"\t";
    }
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    cout<<binary_search(array,array.size()-1,0,key)+1;
}