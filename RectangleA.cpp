//
// Created by Iryna Zinko on 9/16/21.
//
#include <iostream>

#include "RectangleA.h"
#include "Line.h"


RectangleA::RectangleA(int hei, int widthab) : Line (widthab)
    {
        AreaRA = new double(0);
        PerimetrRA = new double(0);
        heightA = new int(hei);
        std::cout << "Created Rectangle" << std::endl;
    }

RectangleA::~RectangleA(void)
    {
        delete AreaRA;
        delete heightA;
    }


double RectangleA::AreaRgA(void)
    {
        *AreaRA = ((*linesize) * (*heightA));
        return *AreaRA;
    }

double RectangleA::PerimetrRgA(void)
    {
        *PerimetrRA = ((*linesize)*2 + (*heightA)*2);
        return *PerimetrRA;
    }

