#include "Disk.h"

Disk::Disk(float width, float height, sf::Color color, float x, float y) {
    shape.setSize(sf::Vector2f(width, height));  // Set disk size
    shape.setFillColor(color);                    // Set disk color
    shape.setPosition(x, y);                      // Set initial position
}

void Disk::draw(sf::RenderWindow& window) {
    window.draw(shape);  // Draw the disk on the window
}

void Disk::setPosition(float x, float y) {
    shape.setPosition(x, y);  // Set position of the disk
}

sf::Vector2f Disk::getPosition() const {
    return shape.getPosition();  // Return the position of the disk
}
// Disk is a rectangle, so we can use the rectangle shape's methods to get its position

