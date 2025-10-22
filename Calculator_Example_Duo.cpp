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
        cout << "ben tanimlanmayan bir islemi yapamam degil mi? (yes/no):)" <<endl;
        cout << "...";
        cin >> _hataliIslem;

        if(_hataliIslem == "yes")
        {
            cout << "O zaman bir sorun kalamdi. Git ve tekrar islem yap ama bu sefer sinirlarin disina cikma! :/" ;
        }

        else if( _hataliIslem == "no")
        {
            cout << "ne demek no, ozmn kaybol git scriptimden!! :<" ;
        }

        else
        {
            cout << " vay be anliyorum. sen ozmn yes ya da no yazamicak kadar cahilsin. Bundan sonra seni gormezden gelicem, kendi "
            "hayal dunyanda istedigini yapabilirsin. :3" ;
        }
    
}
    return 0;
}