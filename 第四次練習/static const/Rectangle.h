//#pragma once
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
    Rectangle();
    Rectangle(double, double);
    double getArea() const;
    double getWidth() const;
    double getHeight() const;
    void setWidth(double);
    void setHeight(double);
    static int geNumOfRect();

private:
    double width, height;
    static int numOfRect;
};

#endif