// main.cpp
#include <SFML/Graphics.hpp>

int main() {
    // Create a window with a size of 800x600 pixels and a title
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tower of Hanoi");

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

        // Display the content drawn to the window
        window.display();
    }

    return 0;
}
