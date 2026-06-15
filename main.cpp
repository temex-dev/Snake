#include "globals.h"


int main() {
    sf::RenderWindow window(sf::VideoMode({ DISPLAY_WIDTH, DISPLAY_HEIGHT }),
        "Snake",
        sf::Style::Default,
        sf::State::Windowed);
    window.setFramerateLimit(60);
    window.setPosition({});
    window.setPosition({ (DISPLAY_WIDTH / 2) - WINDOW_SIZE / 2, (DISPLAY_HEIGHT / 2) - DISPLAY_HEIGHT / 2 });

    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;

    bool gameOver = false;

    while (window.isOpen() && !gameOver) {

    }

    return 0;
}
