#ifndef CURSOR_H
#define CURSOR_H

#include "Shape.h"

class Cursor : public Shape {

private:
    sf::ConvexShape shape;  // The triangle shape representing the cursor
    float xPosition;        // Current x position of the cursor
    float yPosition;        // Current y position of the cursor
    int currentPeg;       // Current peg index (0, 1, or 2)
    float pegDistance;      // Distance between pegs

public:
    Cursor(float x, float y, int currentPeg, float pegDistance);  // Constructor to set the initial position of the cursor

    void moveLeft();           // Move the cursor to the left
    void moveRight();          // Move the cursor to the right
    
    void draw(sf::RenderWindow& window) override;  // Draw the cursor
    void setPosition(float x, float y) override;  // Set the cursor position
    sf::Vector2f getPosition() const override;    // Get the cursor position
};

#endif // CURSOR_H
