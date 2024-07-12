#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int*>vec_pointer;
    int n;
    cout<<"Nhap vao so luong phan tu: ";
    cin>>n;
    for(int i=0 ;i<n;i++){
        int value;
        cin>>value;
        int *ptr = new int( value);
        vec_pointer.push_back(ptr);
    }
    int Sum=0;
    for(int i=0;i<vec_pointer.size();i++){
        Sum+=*(vec_pointer[i]);
    }
    cout << "Tong cac phan tu la: ";
    cout << Sum<<endl;
    cout<<"Cac phan tu so chan la: ";
    for (int i = 0; i < vec_pointer.size(); i++)
    {
        if((*(vec_pointer[i]))%2==0){
            cout <<*(vec_pointer[i])<<" ";
        }
    }
    cout<<endl;
    cout << "Cac phan tu so le la: ";
    for (int i = 0; i < vec_pointer.size(); i++)
    {
        if ((*(vec_pointer[i])) % 2 != 0)
        {
            cout << *(vec_pointer[i]) << " ";
        }
    }
    cout << endl;
    cout<<"Tong 2 phan tu bang target cho truoc: ";
    int score;
    cin >> score;
    for (int i = 0; i < vec_pointer.size()-1; i++)
    {
        for(int j=i+1;j < vec_pointer.size();j++){
            if (((*(vec_pointer[i])) + (*(vec_pointer[j]))) == score)
            {
                cout << *(vec_pointer[i]) << " ";
            }
        }
    }
    cout<<endl;
    cout<<"In ra tan suat xuat hien: ";
    for(int i=0;i<vec_pointer.size();i++){
        *(vec_pointer[i]) = 0;
    }
    for (int i = 0; i < vec_pointer.size(); i++)
    {
        for(int j=i+1;j< vec_pointer.size();j++){
            if ((*(vec_pointer[i])) == (*(vec_pointer[j]))){
                i++;
            }
        }
        cout << "[ " <<i<< "]";
    }

    return 0;
}

