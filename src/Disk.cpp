#include "Disk.h"

Disk::Disk(float width, float height, sf::Color color, float x, float y) {
    shape.setSize(sf::Vector2f(width, height));  // Set width and height of the disk
    shape.setFillColor(color);                   // Set the color of the disk
    shape.setPosition(x, y);                     // Set the position of the disk
}

void Disk::draw(sf::RenderWindow& window) {
    window.draw(shape);  // Draw the disk on the window
}
