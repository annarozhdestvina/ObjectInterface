#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <cmath>
#include <cassert>

#include "../Point/Point.h"

namespace protocol {

class AreaInterface;

}// namespace protocol

namespace drawer {
   
class Line {

public:
    Line(const Point& a, const Point& b, protocol::AreaInterface& area);

private:
    void horizontal(const Point& a, const Point& b, protocol::AreaInterface& area);

    void vertical(const Point& a, const Point& b, protocol::AreaInterface& area);

    bool isHorizontal(const Point& a, const Point& b); 
}; 

} // namespace drawer

#endif // LINE_H