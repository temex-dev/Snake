#include "globals.h"
#include <SFML/Window/WindowEnums.hpp>


int main() {
    sf::RenderWindow window(sf::VideoMode({ DISPLAY_WIDTH, DISPLAY_HEIGHT }),
        "Snake",
        sf::Style::Default,
        sf::State::Windowed);
    window.setFramerateLimit(60);
    window.setPosition({ (DISPLAY_WIDTH / 2) - WINDOW_SIZE / 2, (DISPLAY_HEIGHT / 2) - DISPLAY_HEIGHT / 2 });

    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;

    bool gameOver = false;

//main game loop
    while (window.isOpen() && !gameOver) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
                gameOver = true;
            }
        }
        sf::Font font("../assetts/AdwaitaMono-Bold.ttf");
        sf::Text text(font);
        text.setString("Hello, World!");
        window.clear(sf::Color::Black);
        window.draw(text);
        window.display();

    }
    return 0;
}
