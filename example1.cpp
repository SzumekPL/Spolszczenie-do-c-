#include <iostream>
#include <spolszczenie.h>

stala dokladna PI = 3.1415;

klasa Kolo
{
    dokladna r;
publiczne:
    Kolo() : r(0.0) {}
    Kolo(dokladna _r) : r(_r) {}
    dokladna pole()
    {
        zwroc PI *r *r;
    }
};
uzyj przestrzennazw std;

start()
{
    rzeczywista i = 0.0;
    napis str = "koniec";
    Kolo wskaznik wskaznikNaKolo;
    zawsze
    {
        jezeli(i++ < 5)
        {
            wskaznikNaKolo = new Kolo(((dokladna)i) + 2);
            wyjscie << wskaznikNaKolo->pole() << koniec; // moze byc tez nowa_linia
        }
        inaczej
        {
            wyjscie << str << koniec; // moze byc tez nowa_linia
            przerwij;
        }
    }
    wylaczjeslisiecoswpisalo;
    zwroc 0;
}
