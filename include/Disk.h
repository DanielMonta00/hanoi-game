#ifndef DISK_H
#define DISK_H

#include <SFML/Graphics.hpp>

class Disk : public sf::RectangleShape {

private:
    float size;
    int currentPeg;
    float positionX, positionY;
    bool isPicked;

public:
    Disk(float width, float height, sf::Color color, float x, float y, int peg = 0)
        : sf::RectangleShape(sf::Vector2f(width, height)), size(width), currentPeg(peg), positionX(x), positionY(y), isPicked(false) {
        setFillColor(color);
        setPosition(x, y);
    }

    float getSize() const {
        return size;
    }

    int getCurrentPeg() const {
        return currentPeg;
    }
    void setCurrentPeg(int peg) {
        currentPeg = peg;
    }
    float getPositionX() const {
        return positionX;
    }
    float getPositionY() const {
        return positionY;
    }
    void setPositionX(float x) {
        positionX = x;
        sf::RectangleShape::setPosition(x, positionY);
    }
    void setPositionY(float y) {
        positionY = y;
        sf::RectangleShape::setPosition(positionX, y);
    }


};

#endif


