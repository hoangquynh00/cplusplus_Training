#include<iostream>
using namespace std;
void SumPointer(int &x, int &y){
    int *ptr1 = &x;
    int *ptr2 = &y;
    cout<<"Tong = "<<*ptr1 + *ptr2<<endl;
    int tong = *ptr1 + *ptr2;
    int *ptr3 = &tong;
    cout<<"dia chi cua Tong = "<<ptr3<<endl;
}
void Caculator(int &ref1 , int &ref2){
    cout<<"tong = "<<ref1 + ref2<<endl;
    cout <<"hieu = "<< ref1 - ref2<<endl;
    cout <<"tich = "<< ref1 * ref2<<endl;
    cout<<"thuong = "<<(float)ref1 / ref2;
    
}
int main()
{
    int x = 10;
    int y = 11;
    int *ptr1 = &x;
    int *ptr2 = &y;
    SumPointer(x,y);
    int x1 = 12;
    int &ref1 = x1;
    int x2 = 13;
    int &ref2 = x2;
    Caculator(ref1,ref2);
}