#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string Name;
    string Hometown;
    int Age;
};


void InPut(vector<NhanVien> &A, int n){
    for(int i=0 ; i<n; i++){
        NhanVien sv;
        cout<<"Nhan vien thu "<<i+1<<endl;
        cin.ignore();
        cout<<"Ten nhan vien: ";
        getline(cin,sv.Name);
        cout<<"Que quan nhan vien: ";
        getline(cin,sv.Hometown);
        cout << "Tuoi nhan vien: ";
        cin >> sv.Age;
        A.push_back(sv);
    }
}
void OutPut(vector<NhanVien> A, int n){
    for (int i = 0; i < n; i++){
        NhanVien sv = A[i];
        cout << "Nhan vien thu " << i + 1 << " : " << endl;
        cout << "Ten nhan vien : " << sv.Name << endl;
        cout << "Que quan nhan vien: " << sv.Hometown << endl;
        cout << "Tuoi nhan vien: " << sv.Age<<endl;
    }
}
void SortAge(vector<NhanVien> &A, int n){
    for(int i = 0; i < n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i].Age > A[j].Age)
               swap(A[i],A[j]);
        }
    }
}
void CheckHome(vector<NhanVien> A, int n){
    for(int i=0 ;i < n; i++){
        if(A[i].Hometown == "Hue"){
            cout << "Nhan vien thu " << i + 1 << " : " << endl;
            cout << "Ten nhan vien : " << A[i].Name << endl;
            cout << "Que quan nhan vien: " << A[i].Hometown << endl;
            cout << "Tuoi nhan vien: " << A[i].Age << endl;
        }
    }
}
int main()
{
    int n;
    cout<<"Nhap vao so luong nhan vien: ";
    cin>>n;
    vector<NhanVien>DanhSachSinhVien;
    InPut(DanhSachSinhVien,n);
    cout<<"Danh sach truoc sx"<<endl;
    OutPut(DanhSachSinhVien,n);
    SortAge(DanhSachSinhVien,n);
    cout<<"Danh sach nhan vien que o Hue"<<endl;
    CheckHome(DanhSachSinhVien,n);
    cout<<"Danh sach sau sap xep"<<endl; 
    OutPut(DanhSachSinhVien,n);
    return 0;
}