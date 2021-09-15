#include <iostream>
#include <cmath>

using namespace std;

class Line
{
protected:
    int* linesize;
public:
    Line(int _linesize)
    {
        linesize = new int(_linesize);
        cout << "Line" << endl;

    }

    Line(const Line& ln)
    {
        linesize = new int(*ln.linesize);
    }

    ~Line(void)
    {
        delete linesize;
    }

    int GetLine()
    {
        return *linesize;
    }

    void SetLine(int line)
    {
        *this->linesize = line;
    }

};

class RectangleA : virtual public Line
{
protected:
    double *AreaRA;
    int *heightA;
    double *PerimetrRA;

public:
    RectangleA(int hei, int wida) : Line (wida)
    {
        AreaRA = new double(0);
        PerimetrRA = new double(0);
        heightA = new int(hei);
        cout << "Rectangle" << endl;
    }

    ~RectangleA(void)
    {
        delete AreaRA;
        delete heightA;
    }


    double AreaRgA(void)
    {
        *AreaRA = ((*linesize) * (*heightA));
        return *AreaRA;
    }

    double PerimetrRgA(void)
    {
        *PerimetrRA = ((*linesize)*2 + (*heightA)*2);
        return *PerimetrRA;
    }
};

class RectangleB : virtual public Line
{
protected:
    double *AreaR;
    double *PerimetrR;
    int *height;

public:
    RectangleB(int hei, int wid) : Line (wid)
    {
        AreaR = new double(0);
        PerimetrR = new double(0);
        height = new int(hei);
        cout << "Rectangle" << endl;
    }

    ~RectangleB(void)
    {
        delete AreaR;
        delete height;
    }


    double AreaRg(void)
    {
        *AreaR = ((*linesize) * (*height));
        return *AreaR;
    }
    double PerimetrRg(void)
    {
        *PerimetrR = ((*linesize)*2 + (*height)*2);
        return *PerimetrR;
    }
};

class Frustum : public RectangleA, public RectangleB
{
private:
    double* volume, * sidearea, *heightF;
public:
    Frustum(int hga, int wda, int hgb, int wdb, int height) : RectangleA(hga, wda), RectangleB(hgb, wdb), Line(height)
    {
        volume = new double(0);
        sidearea = new double(0);
        heightF = new double(height);

        cout << "Frustum" << endl;
    }

    ~Frustum(void)
    {
        delete volume;
        delete sidearea;
        delete heightF;
    }

    double SideArea(void)
    {
        *sidearea = ((PerimetrRgA()+PerimetrRg())*(*heightF))/2;
        return *sidearea;
    }

    double VolumeP(void)
    {


        *volume = ((*heightF)*(AreaRgA()+sqrt(AreaRgA()*AreaRg())+AreaRg()))/3;

        return *volume;
    }
};

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