#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main()
{
    // Create the main window
     sf::RenderWindow window(sf::VideoMode(1400, 900), "Big Tic Tac Toe");
    // Create the grid lines
    sf::RectangleShape horizontalLine(sf::Vector2f(900, 2));
    sf::RectangleShape verticalLine(sf::Vector2f(2, 900));
    // Draw the horizontal lines
    for (int i = 0; i <= 9; i++)
    {
        horizontalLine.setPosition(0, i * 100);
        window.draw(horizontalLine);
         horizontalLine.setFillColor(sf::Color::Black);
        if (i==2|| i==5)
            {window.draw(horizontalLine);
         horizontalLine.setFillColor(sf::Color::Red);}}
          // Draw the vertical lines
    for (int i = 0; i <= 9; i++)
    {
        verticalLine.setPosition(i * 100, 0);
        window.draw(verticalLine);
        verticalLine.setFillColor(sf::Color::Black);

          if (i==2|| i==5)
            {window.draw(verticalLine);
         verticalLine.setFillColor(sf::Color::Red);}

    }
         // Create the X and O textures
    sf::Texture xTexture;
    xTexture.loadFromFile("Resources\\cross.png");
    sf::Sprite xSprite(xTexture);
    xSprite.setScale(0.5, 0.5);
    sf::Texture oTexture;
    oTexture.loadFromFile("Resources\\circle.png");
    sf::Sprite oSprite(oTexture);
    oSprite.setScale(0.5, 0.5);

        // Create the game board
    int board[9][9] = {0};

    // Create a variable to keep track of whose turn it is
    int player = 1;




}
