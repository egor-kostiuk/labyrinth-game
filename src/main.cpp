#include <SFML/Graphics.hpp>
#include "Constants.h"

int main()
{
  // Create the main window
  sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "SFML window");

  // Start the game loop
  while (window.isOpen())
  {
    // Process events
    while (const std::optional event = window.pollEvent())
    {
      // Close window: exit
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    // Clear screen
    window.clear();

    // Update the window
    window.display();
  }
}