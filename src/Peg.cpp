#include "Peg.h"

Peg::Peg(float x, float y) {
    // Set the size and position of the peg
    shape.setSize(sf::Vector2f(20.0f, 100.0f));  // Width = 20px, Height = 100px
    shape.setFillColor(sf::Color::White);         // Set the peg color to white
    shape.setPosition(x, y);                     // Set the position based on arguments
}

void Peg::draw(sf::RenderWindow& window) {
    window.draw(shape);  // Draw the peg on the window
}
