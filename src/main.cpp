// main.cpp
#include <SFML/Graphics.hpp>
#include <Peg.h>
#include <Disk.h>

const float PEG_WIDTH = 20.0f;  // Width of the peg
const float PEG_HEIGHT = 200.0f;  // Height of the peg
const float DISK_HEIGHT = 20.0f;  // Height of the disk
const float PEG1_X = 150.0f;  // X position of peg 1
const float PEG2_X = 400.0f;  // X position of peg 2
const float PEG3_X = 650.0f;  // X position of peg 3
const float PEG_Y = 300.0f;  // Y position of peg 1
// const float DISK_WIDTH = 100.0f;  // Width of the disk

int main() {
    // Create a window with a size of 800x600 pixels and a title
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tower of Hanoi");

    // Create three pegs at different x positions but the same y position (400)
    Peg peg1(PEG_WIDTH, PEG_HEIGHT,PEG1_X, PEG_Y);  // First peg at (150, 300)
    Peg peg2(PEG_WIDTH, PEG_HEIGHT,PEG2_X, PEG_Y);  // Second peg at (400, 300)
    Peg peg3(PEG_WIDTH, PEG_HEIGHT,PEG3_X, PEG_Y);  // Third peg at (650, 300)

    // Create disks with different widths, colors, and positions
    Disk disk1(120.0f, DISK_HEIGHT, sf::Color::Red, PEG1_X-120.0f/2+PEG_WIDTH/2,PEG_Y+PEG_HEIGHT);  // Large disk on peg 1
    Disk disk2(100.0f, DISK_HEIGHT, sf::Color::Green, PEG1_X-100.0f/2+PEG_WIDTH/2,PEG_Y+PEG_HEIGHT-DISK_HEIGHT);  // Medium disk on peg 1
    Disk disk3(80.0f,  DISK_HEIGHT, sf::Color::Blue, PEG1_X-80.0f/2+PEG_WIDTH/2,PEG_Y+PEG_HEIGHT-2*DISK_HEIGHT);   // Small disk on peg 1

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

         // Draw the disks
         disk1.draw(window);
         disk2.draw(window);
         disk3.draw(window);

        // Display the content drawn to the window
        window.display();
    }

    return 0;
}
