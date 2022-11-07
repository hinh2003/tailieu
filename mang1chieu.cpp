#include<iostream>
#define MAX 100

using namespace std ;
void nhapmang(int arr[], int n){
    
    for(int i  = 0 ;i <=n; i ++){
        cout<<"Phan tu arr["<<i<<"] = " <<endl;
        cin>>arr[i] ;
    }
}
void xuatmang(int arr[], int n){
    
    for(int i  = 0 ;i <=n; i ++){
        cout<<arr[i] <<endl ;
    }

}
int main(){
    int n ;
    cin>>n ;
    
    int arr[MAX] ;
    nhapmang(arr,n);
    xuatmang(arr,n);

}