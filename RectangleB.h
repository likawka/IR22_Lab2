//
// Created by Iryna Zinko on 9/16/21.
//

#pragma once

#include "Line.h"

class RectangleB : virtual public Line
{
protected:
    double *AreaR;
    double *PerimetrR;
    int *height;

public:
    RectangleB(int hei, int widthab);

    ~RectangleB(void);


    double AreaRg(void);

    double PerimetrRg(void);
};
