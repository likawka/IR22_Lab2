//
// Created by Iryna Zinko on 9/16/21.
//

#pragma once

#include "Line.h"

class RectangleA : virtual public Line
{
protected:
    double *AreaRA;
    int *heightA;
    double *PerimetrRA;

public:
    RectangleA(int hei, int widthab);

    ~RectangleA(void);

    double AreaRgA(void);

    double PerimetrRgA(void);
};



