#include <iostream>

using namespace std;

int main()
{

    int a, b, s;

    cout<<"Digite numero: ";    cin>>a;
    cout<<"Digite numero: ";    cin>>b;

    if (a % 2 != 0 && b % 2 != 0){
        s = a + b;
        if (s % 2 == 0){
            cout<<"Son impares y su suma es par";
        }
    } else {
        cout<<"No son impares";
    }

    return 0;
}
