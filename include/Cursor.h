#ifndef CURSOR_H
#define CURSOR_H

#include <SFML/Graphics.hpp>
#include "Peg.h"

class Cursor : public sf::ConvexShape {
public:
    Cursor(float x, float y, float pegDistance);

    void moveLeft();
    void moveRight();
    void pickUpDisk(Peg& peg);
    void placeDisk(Peg& peg);

private:
    int currentPeg;
    float pegDistance;
    float xPosition, yPosition;
    Disk* pickedDisk;
};

#endif
