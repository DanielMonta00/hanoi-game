#ifndef SHAPE_H
#define SHAPE_H

#include <SFML/Graphics.hpp>

class Shape {
public:
    virtual ~Shape() {}  // Virtual destructor for proper cleanup
    virtual void draw(sf::RenderWindow& window) = 0;  // Pure virtual function to draw the shape

    // Common position methods
    virtual void setPosition(float x, float y) = 0;
    virtual sf::Vector2f getPosition() const = 0;
};

#endif // SHAPE_H
