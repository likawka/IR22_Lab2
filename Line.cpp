//
// Created by Iryna Zinko on 9/16/21.
//
#include <iostream>
#include "Line.h"


Line::Line(int _linesize) {
    linesize = new int(_linesize);
    std::cout << "Line" << std::endl;

}

Line::Line(const Line &ln) {
    linesize = new int(*ln.linesize);
}

Line::~Line(void) {
    delete linesize;
}

