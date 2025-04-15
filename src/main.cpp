// main.cpp
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Peg.h"
#include "Disk.h"
#include "Cursor.h"
#include "Game.hpp"

const float PEG_WIDTH = 20.0f;  // Width of the peg
const float PEG_HEIGHT = 200.0f;  // Height of the peg
const float PEG_DISTANCE = 250.0f;  // Distance between pegs

const float DISK_MIN_WIDTH = 80.0f;  // Width of the disks
const float DISK_WIDTH_DIFF = 20.0f;  // Difference in width between disks
const float DISK_HEIGHT = 20.0f;  // Height of the disks

const float PEG1_X = 150.0f;  // X position of peg 1
const float PEG2_X = PEG1_X+PEG_DISTANCE;  // X position of peg 2
const float PEG3_X = PEG1_X+2*PEG_DISTANCE;  // X position of peg 3

const float PEG_Y = 300.0f;  // Y position of peg 1

const float NUM_DISKS = 4;  // Number of disks

int main() {
    // Create a window with a size of 800x600 pixels and a title
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tower of Hanoi");

    // Create game
    Game game;
    

    // Create three pegs at different x positions but the same y position (400)
    Peg peg1(PEG_WIDTH, PEG_HEIGHT,PEG1_X, PEG_Y);  // First peg at (150, 300)
    Peg peg2(PEG_WIDTH, PEG_HEIGHT,PEG2_X, PEG_Y);  // Second peg at (400, 300)
    Peg peg3(PEG_WIDTH, PEG_HEIGHT,PEG3_X, PEG_Y);  // Third peg at (650, 300)

    // add pegs to a vector for easy access
    std::vector<Peg*> pegs;
    pegs.push_back(&peg1);
    pegs.push_back(&peg2);
    pegs.push_back(&peg3);

    //Spawn disks using game
    
    std::vector<Disk> disks = game.spawnDisks(NUM_DISKS);
    // Add disks to the first peg
    for (int i = NUM_DISKS-1; i >=0 ; --i) {
        peg1.addDisk(&disks.at(i));
    }
    
    // Create disks with different widths, colors, and positions
    // Disk disk1(DISK_MIN_WIDTH+2*DISK_WIDTH_DIFF, DISK_HEIGHT, sf::Color::Red, PEG1_X-120.0f/2+PEG_WIDTH/2,PEG_Y+PEG_HEIGHT-DISK_HEIGHT,1);  // Large disk on peg 1
    // Disk disk2(DISK_MIN_WIDTH+DISK_WIDTH_DIFF, DISK_HEIGHT, sf::Color::Green, PEG1_X-100.0f/2+PEG_WIDTH/2,PEG_Y+PEG_HEIGHT-2*DISK_HEIGHT,1);  // Medium disk on peg 1
    // Disk disk3(DISK_MIN_WIDTH,  DISK_HEIGHT, sf::Color::Blue, PEG1_X-80.0f/2+PEG_WIDTH/2,PEG_Y+PEG_HEIGHT-3*DISK_HEIGHT,1);   // Small disk on peg 1

    // Add disks to peg 1
    // peg1.addDisk(&disk1);
    // peg1.addDisk(&disk2);
    // peg1.addDisk(&disk3);
    // Create a cursor at the initial position of peg 1
    Cursor cursor(150.0f+10.0f, 240.0f,PEG_DISTANCE);  // Cursor starts at peg 1

    // Variables to track key press states

    bool leftKeyPressed = false;  // Flag to track if the left key is pressed
    bool rightKeyPressed = false;  // Flag to track if the right key is pressed
    bool upKeyPressed = false;  // Flag to track if the up key is pressed
    bool downKeyPressed = false;  // Flag to track if the down key is pressed
    // Set the frame rate limit to 60 FPS
    window.setFramerateLimit(60);  // Limit the frame rate to 60 frames per second
    

    // Game loop — runs while the window is open
    while (window.isOpen()) {
        // Event handling loop
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();  // Close the window if the user presses the close button
            }
            if (event.type == sf::Event::KeyPressed) {
                // Check for left and right arrow key presses and ensure one press is registered
                if (event.key.code == sf::Keyboard::Left && !leftKeyPressed) {
                    std::cout << "Left key pressed\n";
                    cursor.moveLeft();  // Move the cursor left
                    leftKeyPressed = true;  // Set the key press state to true
                }
                if (event.key.code == sf::Keyboard::Right && !rightKeyPressed) {
                    std::cout << "Right key pressed\n";
                    cursor.moveRight();  // Move the cursor right
                    rightKeyPressed = true;  // Set the key press state to true
                }
                if (event.key.code == sf::Keyboard::Up && !upKeyPressed) {
                    std::cout << "Up key pressed\n";
                    cursor.pickUpDisk(*pegs.at(cursor.getCurrentPeg()));  // Pick up a disk from peg 1
                    upKeyPressed = true;  // Set the key press state to true
                }
                if (event.key.code == sf::Keyboard::Down && !downKeyPressed) {
                    std::cout << "Down key pressed\n";
                    cursor.placeDisk(*pegs.at(cursor.getCurrentPeg()));  // Place the disk on peg 
                    //change disk position
                    // get peg position
                    float pegPosX = pegs.at(cursor.getCurrentPeg())->getPosition().x;
                    // put disk
                    pegs.at(cursor.getCurrentPeg())->getDisks().back()->setPositionX(pegPosX+PEG_WIDTH/2-pegs.at(cursor.getCurrentPeg())->getDisks().back()->getSize()/2);
                    pegs.at(cursor.getCurrentPeg())->getDisks().back()->setPositionY(PEG_Y+PEG_HEIGHT-DISK_HEIGHT*pegs.at(cursor.getCurrentPeg())->getDisks().size());
                    downKeyPressed = true;  // Set the key press state to true
                }
            }
            if (event.type == sf::Event::KeyReleased) {
                // Reset key states when the keys are released
                if (event.key.code == sf::Keyboard::Left) {
                    leftKeyPressed = false;
                }
                if (event.key.code == sf::Keyboard::Right) {
                    rightKeyPressed = false;
                }
                if (event.key.code == sf::Keyboard::Up) {
                    upKeyPressed = false;
                }
                if (event.key.code == sf::Keyboard::Down) {
                    downKeyPressed = false;
                }
            }
        }


        // Clear the screen with a color (black)
        window.clear(sf::Color::Black);

        // Draw the three pegs
        window.draw(peg1);
        window.draw(peg2);
        window.draw(peg3);

        // Draw the disks on their respective pegs
        peg1.drawWithDisks(window);  // Draw disks on peg 1
        peg2.drawWithDisks(window);  // Draw disks on peg 2
        peg3.drawWithDisks(window);  // Draw disks on peg 3

        // Draw the cursor
        window.draw(cursor); 
        if (cursor.getPickedDisk()) {
            window.draw(*cursor.getPickedDisk());  // Draw the picked disk
        }

        // Display the content drawn to the window
        window.display();
    }

    return 0;
}
