#include <iostream>
#include <cmath>

#include "Line.h"
#include "RectangleA.h"
#include "RectangleB.h"
#include "Frustum.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");


    int widtha(0), heighta(0), heightF(0), widthb(0), heightb(0);

    cout << "Введiть ширину першого прямокутника: ";
    cin >> widtha;

    cout << "Введiть висоту першого прямокутника: ";
    cin >> heighta;

    cout << "Введiть ширину другого прямокутника: ";
    cin >> widthb;

    cout << "Введiть висоту другого прямокутника: ";
    cin >> heightb;

    cout << "Введiть висоту зрізаної піраміди: ";
    cin >> heightF;

    RectangleA recA(heighta, widtha);
    RectangleB recB(heightb, widthb);
    Frustum pr(heighta, widtha, heightb, widthb, heightF);

    cout << "\t \t \t \t \t Результати: " << endl;
    cout << "Площа прямокутника A: " << recA.AreaRgA() << endl;
    cout << "Площа прямокутника B: " << recB.AreaRg() << endl;
    cout << " Зрізана піраміда " << endl;
    cout << "Площа бiчної зрізаної піраміди: " << pr.SideArea() << endl;
    cout << "Об'єм зрізаної піраміди: " << pr.VolumeP() << endl;


    return 0;
}