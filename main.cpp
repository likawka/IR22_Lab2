#include <iostream>
#include <cmath>

#include "Line.h"
#include "RectangleA.h"
#include "RectangleB.h"
#include "Frustum.h"

using namespace std;

int main() {

    char *yn = new char(0);

    do {
        setlocale(LC_ALL, "ukr");
        int widthab(0), heighta(0), heightF(0), heightb(0);

        cout << "Введiть ширину  прямокутників: ";
        cin >> widthab;

        cout << "Введiть висоту першого прямокутника: ";
        cin >> heighta;

        cout << "Введiть висоту другого прямокутника: ";
        cin >> heightb;

        cout << "Введiть висоту зрізаної піраміди: ";
        cin >> heightF;

        RectangleA recA(heighta, widthab);
        RectangleB recB(heightb, widthab);
        Frustum pr(heighta, heightb, heightF, widthab);


        cout << "====================================================" << endl;
        cout << " Laboratory work №2, Var. 4" << endl;
        cout << " The program was made by Iryna Zinko " << endl;
        cout << "====================================================" << endl;

        cout << "\t \t \t \t \t Результати: " << endl;
        cout << "\t \t \t \t \t Прямокутники: " << endl;
        cout << "Площа прямокутника A: " << recA.AreaRgA() << endl;
        cout << "Площа прямокутника B: " << recB.AreaRg() << endl;
        cout << "\t \t \t \t \t Зрізана піраміда: " << endl;
        cout << "Площа бiчної зрізаної піраміди: " << pr.SideArea() << endl;
        cout << "Об'єм зрізаної піраміди: " << pr.VolumeP() << endl;

        cout << "====================================================" << endl;
        cout << "Бажаєте продовжити? Введіть y:   " << endl;
        cin >> *yn;
        cout << "====================================================" << endl;

    } while (*yn == 'y');

    return 0;
}