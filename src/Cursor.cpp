#include "Cursor.h"

Cursor::Cursor(float x, float y, int pegIndex, float pegDistance)
    : currentPeg(pegIndex), pegDistance(pegDistance) {
    // Create the triangle (cursor) as a ConvexShape
    shape.setPointCount(3);  // A triangle has 3 points
    shape.setPoint(0, sf::Vector2f(0, 10));  // Top point of the triangle
    shape.setPoint(1, sf::Vector2f(-10, -10)); // Left point
    shape.setPoint(2, sf::Vector2f(10, -10));  // Right point

    shape.setOrigin(0, 0);  // Set the origin to the top point of the triangle

    shape.setFillColor(sf::Color::Yellow);  // Set the color of the cursor to yellow
    shape.setPosition(x, y);                // Set initial position of the cursor

    xPosition = x;
    yPosition = y;
}

void Cursor::moveLeft() {
    if (currentPeg > 0) {
        currentPeg--;  // Move to the previous peg
        xPosition -= pegDistance;  // Update cursor's position based on peg distance
        shape.setPosition(xPosition, yPosition);  // Update the cursor's graphical position
    }
    else {
        // If the cursor is at the leftmost peg, For example, you could wrap around to the rightmost peg
        if (currentPeg == 0) {
            currentPeg = 2;  // Wrap around to the last peg
            xPosition = 650.0f+10.0f;  // Reset x position to the last peg's position
            shape.setPosition(xPosition, yPosition);  // Update the cursor's graphical position
        }
    }
}

void Cursor::moveRight() {
    if (currentPeg < 2) {
        currentPeg++;  // Move to the next peg
        xPosition += pegDistance;  // Update cursor's position based on peg distance
        shape.setPosition(xPosition, yPosition);  // Update the cursor's graphical position
    }
    else {
        // If the cursor is at the rightmost peg, For example, you could wrap around to the leftmost peg
        if (currentPeg == 2) {
            currentPeg = 0;  // Wrap around to the first peg
            xPosition = 150.0f+10.0f;  // Reset x position to the first peg's position
        shape.setPosition(xPosition, yPosition);  // Update the cursor's graphical position
    }
    }
}

void Cursor::draw(sf::RenderWindow& window) {
    window.draw(shape);  // Draw the cursor on the window
}

void Cursor::setPosition(float x, float y) {
    shape.setPosition(x, y);  // Set position of the cursor
}

sf::Vector2f Cursor::getPosition() const {
    return shape.getPosition();  // Return the position of the cursor
}
// The cursor is a triangle, so we can use the triangle shape's methods to get its position