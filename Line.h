//
// Created by Iryna Zinko on 9/16/21.
//

#pragma once



class Line {

protected:
    int* linesize;
public:
    Line(int _linesize);

    Line(const Line& ln);

    ~Line(void);

};



