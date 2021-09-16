//
// Created by Iryna Zinko on 9/16/21.
//
#include <iostream>
#include "RectangleB.h"


RectangleB::RectangleB(int hei, int wid) : Line(wid) {
    AreaR = new double(0);
    PerimetrR = new double(0);
    height = new int(hei);
    std::cout << "Created Rectangle" << std::endl;
}

RectangleB::~RectangleB(void) {
    delete AreaR;
    delete height;
}


double RectangleB::AreaRg(void) {
    *AreaR = ((*linesize) * (*height));
    return *AreaR;
}

double RectangleB::PerimetrRg(void) {
    *PerimetrR = ((*linesize) * 2 + (*height) * 2);
    return *PerimetrR;
}


