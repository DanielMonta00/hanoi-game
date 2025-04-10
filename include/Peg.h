#ifndef PEG_H
#define PEG_H

#include "Shape.h"

class Peg : public Shape {
public:
    Peg(float x, float y);
    // Constructor to set the size and position of the peg
    Peg(float width, float height, float x, float y);  
    void draw(sf::RenderWindow& window) override;
    void setPosition(float x, float y) override;
    sf::Vector2f getPosition() const override;

private:
    sf::RectangleShape shape;  // Peg is a rectangle
};

#endif // PEG_H

