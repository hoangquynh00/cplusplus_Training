#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ThiSinh
{
    string name;
    string ngaysinh;
    float dlt; 
    float dth;
    float dtb;
};

int main()
{
    vector<ThiSinh> List;
    int n; 
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        string n;
        getline(cin, n);
        cin.ignore();
        string date;
        getline(cin, date);
        float dlt;
        cin>>float;
        float dth;
        cin>>float;
        float dtb = (dlt + dth)/2;
        ThiSinh ts = ThiSing();
        
    }
    
}