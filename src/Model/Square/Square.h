#ifndef SQ_H
#define SQ_H

#include "../FigureInterface.h"
#include "../Point/Point.h"
#include "../Drawer/DrawerInterface.h"

class DrawerSquare;

class Square : public FigureInterface {  
public:
    Point _a;
    Point _b;
    Point _c;
    Point _d;
    Square(Point a = Point(), Point b = Point(3.5, 3.0), Point c = Point(3.5, 7.0), Point d = Point(15.5, 7.0)); 
    bool Draw(Area& area, const DrawerInterface* = nullptr) const override;
    
    friend class DrawerSquare;

private:
    DrawerSquare* _defaultDrawer;
};

class DrawerSquare : public DrawerInterface{
public:
    bool Draw(const FigureInterface* object, Area& area) const override;
};




#endif // SQ_H