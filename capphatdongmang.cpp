#include<iostream>

using namespace std ;

int main(){
    cout<<"Nhap chieu dai mang" ;
    int length ;

    cin>> length ;
    int *array = new int(length) ;//kich thuoc mang co the la bien so
    
    //su dung mang
    //..
    //VIdu
    int fixedArray[] = {1,02,3} ;
   
    int *dynamicArray1 = new int[3] {1,2,3};//ok
    int *array1 = new int[10] ();//10 phan tu 0


    delete[] array ; //tra lai vung nho mang array cho he dieu hanh


}