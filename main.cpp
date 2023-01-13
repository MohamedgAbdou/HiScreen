#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Lines");

    // Create letter H
    sf::Vertex line1[] = {
        sf::Vertex(sf::Vector2f(325.f, 200.f)),
        sf::Vertex(sf::Vector2f(325.f, 400.f))
    };
    sf::Vertex line2[] = {
        sf::Vertex(sf::Vector2f(475.f, 200.f)),
        sf::Vertex(sf::Vector2f(475.f, 400.f))
    };
    sf::Vertex line3[] = {
        sf::Vertex(sf::Vector2f(325.f, 300.f)),
        sf::Vertex(sf::Vector2f(475.f, 300.f))
    };

    // Create the letter i
    sf::Vertex line4[] = {
        sf::Vertex(sf::Vector2f(525.f, 200.f)),
        sf::Vertex(sf::Vector2f(525.f, 400.f))
    };

    // Run the main loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Draw the lines
        window.draw(line1, 2, sf::Lines);
        window.draw(line2, 2, sf::Lines);
        window.draw(line3, 2, sf::Lines);
        window.draw(line4, 2, sf::Lines);

        window.display();
    }

    return 0;
}
