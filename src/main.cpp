// main.cpp
#include <SFML/Graphics.hpp>
#include <Peg.h>

int main() {
    // Create a window with a size of 800x600 pixels and a title
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tower of Hanoi");

    // Create three pegs at different x positions but the same y position (400)
    Peg peg1(150.0f, 400.0f);  // First peg at (150, 400)
    Peg peg2(400.0f, 400.0f);  // Second peg at (400, 400)
    Peg peg3(650.0f, 400.0f);  // Third peg at (650, 400)

    // Game loop — runs while the window is open
    while (window.isOpen()) {
        // Event handling loop
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();  // Close the window if the user presses the close button
            }
        }

        // Clear the screen with a color (black)
        window.clear(sf::Color::Black);

        // Draw the three pegs
        peg1.draw(window);
        peg2.draw(window);
        peg3.draw(window);

        // Display the content drawn to the window
        window.display();
    }

    return 0;
}
