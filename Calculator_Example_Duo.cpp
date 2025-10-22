#include <iostream>
#include <string>
using namespace std;

int main()
{
    int _sayi1, _sayi2, _sonuc, _secilenIslem;
    string _hataliIslem;

    cout << "1. sayi:";
    cin >> _sayi1;
    cout << endl << endl;

    cout << "islem turu (1:+, 2:-, 3:*, 4:/)";
    cin >> _secilenIslem;
    cout << endl << endl; 

    cout << "2. sayi:";
    cin >> _sayi2;
    cout << endl << endl;

        if(_secilenIslem == 1)
    {
        _sonuc = _sayi1 + _sayi2;
        cout << "sonuc:" << _sonuc;
    }

    else if(_secilenIslem == 2)
    {
        _sonuc = _sayi1 - _sayi2;
        cout << "sonuc:" << _sonuc;
    }

    else if(_secilenIslem == 3)
    {
        _sonuc = _sayi1 * _sayi2;
        cout << "sonuc:" << _sonuc;
    }

    else if(_secilenIslem == 4 && _sayi2 != 0)
    {
        _sonuc = _sayi1 / _sayi2;
        cout << "sonuc:" << _sonuc;
    }

else
{

}
    return 0;
}