#include <iostream>

using namespace std;

int main()
{
    int sayi1 = 0;
    int sayi2 = 1;
    
    cout << sayi1 << endl;
    cout << sayi2 << endl;

    while(sayi1 < 50){
        sayi1 = sayi2 + sayi1;
        cout << sayi1 << endl;
        sayi2 = sayi1 + sayi2;
        cout << sayi2 << endl;
    }

    return 0;
}
