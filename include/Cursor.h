#ifndef CURSOR_H
#define CURSOR_H

#include <SFML/Graphics.hpp>
#include "Peg.h"

class Cursor : public sf::ConvexShape {

    private:
    int currentPeg;
    float pegDistance;
    float xPosition, yPosition;
    Disk* pickedDisk;

public:
    Cursor(float x, float y, float pegDistance);

    void moveLeft();
    void moveRight();
    void pickUpDisk(Peg& peg);
    void placeDisk(Peg& peg);

    int getCurrentPeg() const {
        return currentPeg;
    }
    void setCurrentPeg(int peg) {
        currentPeg = peg;
    }
    float getXPosition() const {
        return xPosition;
    }
    void setXPosition(float x) {
        xPosition = x;
        setPosition(x, yPosition);
    }
    float getYPosition() const {
        return yPosition;
    }
    void setYPosition(float y) {
        yPosition = y;
        setPosition(xPosition, y);
    }
    Disk* getPickedDisk() const {
        return pickedDisk;
    }
    void setPickedDisk(Disk* disk) {
        pickedDisk = disk;
    }

};

#endif
