//
// Created by Iryna Zinko on 9/16/21.
//


#include <iostream>
#include <cmath>
#include "Frustum.h"
#include "Line.h"
#include "RectangleA.h"
#include "RectangleB.h"

Frustum::Frustum(int hga, int wda, int hgb, int wdb, int height) : RectangleA(hga, wda), RectangleB(hgb, wdb), Line(height)
    {
        volume = new double(0);
        sidearea = new double(0);
        heightF = new double(height);

        std::cout << "Created Frustum" << std::endl;
    }

Frustum::~Frustum(void)
    {
        delete volume;
        delete sidearea;
        delete heightF;
    }

    double Frustum::SideArea(void)
    {
        *sidearea = ((PerimetrRgA()+PerimetrRg())*(*heightF))/2;
        return *sidearea;
    }

    double Frustum::VolumeP(void)
    {
        *volume = ((*heightF)*(AreaRgA()+sqrt(AreaRgA()*AreaRg())+AreaRg()))/3;

        return *volume;
    }


