#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c;

    cout <<"Masukkan sisi A : ";
    cin >> a;

    cout <<"Masukkan sisi B : ";
    cin >> b;

    cout <<"Masukkan sisi C : ";
    cin >> c;

    if(a==b && a==c)
    {
        cout<<"Segitiga sama sisi"<<endl;
    }
    else if(a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            cout<<"Segitiga sama kaki"<<endl;
        }
    }
    else
    cout<<"Segitiga sembarang"<<endl;
    return 0;
}

