#ifndef DISK_H
#define DISK_H

#include "Shape.h"

class Disk : public Shape {
public:
    Disk(float width, float height, sf::Color color, float x, float y);
    void draw(sf::RenderWindow& window) override;
    void setPosition(float x, float y) override;
    sf::Vector2f getPosition() const override;

private:
    sf::RectangleShape shape;  // Disk is a rectangle
};

#endif // DISK_H

