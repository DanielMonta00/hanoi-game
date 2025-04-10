#include "Peg.h"
//#include <SFML/Graphics.hpp>

Peg::Peg(float x, float y) {
    // Set the size and position of the peg
    shape.setSize(sf::Vector2f(20.0f, 200.0f));  // Width = 20px, Height = 100px default size
    shape.setFillColor(sf::Color::White);         // Set the peg color to white
    shape.setPosition(x, y);                     // Set the position based on arguments
}

// Constructor to set the size and position of the peg
Peg::Peg(float width, float height, float x, float y) {
    shape.setSize(sf::Vector2f(width, height));  // Set width and height of the peg  
    shape.setFillColor(sf::Color::White);         // Set the peg color to white
    shape.setPosition(x, y);                     // Set the position based on arguments
}

void Peg::draw(sf::RenderWindow& window) {
    window.draw(shape);  // Draw the peg on the window
}

void Peg::setPosition(float x, float y) {
    shape.setPosition(x, y);  // Set position of peg
}

sf::Vector2f Peg::getPosition() const {
    return shape.getPosition();  // Return the position of the peg
}
