//
// Created by Iryna Zinko on 9/16/21.
//

#pragma once

#include "Line.h"
#include "RectangleA.h"
#include "RectangleB.h"

class Frustum : public RectangleA, public RectangleB
{
private:
    double* volume, * sidearea, *heightF;

public:
    Frustum(int hga, int wda, int hgb, int wdb, int height);

    ~Frustum(void);

    double SideArea(void);

    double VolumeP(void);
};