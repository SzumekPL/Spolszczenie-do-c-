#include <iostream>
#include "spolszczenie.h"

stala dokladna PI = 3.1415;

klasa Kolo
{
    dokladna r;
publiczne:
    Kolo() : r(0.0){}
    Kolo(dokladna _r) : r(_r){}
    dokladna pole()
    {
        zwroc PI * r * r;
    }
};
uzyj nazw std;

start()
{
    rzeczywista i = 0.0;
    napis str = "koniec";
    Kolo* wskaznik;
    zawsze
    {
        jezeli(i++ < 5)
        {
            wskaznik = new Kolo(dokladna(i)+2);
            wyjscie << wskaznik->pole() << nowa_linia;
        }
        jezeli_nie
        {
            wyjscie << str << nowa_linia;
            przerwij;
        }
    }
    zwroc 0;
}
