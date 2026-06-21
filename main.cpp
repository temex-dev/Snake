#include "globals.h"

int main() {
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode({ WINDOW_SIZE, WINDOW_SIZE }),
        "Snake",
        sf::Style::Default,
        sf::State::Windowed,
        settings);
    window.setFramerateLimit(60);
    window.setPosition({ (DISPLAY_WIDTH / 2) - WINDOW_SIZE / 2, (DISPLAY_HEIGHT / 2) - WINDOW_SIZE / 2 });

    bool gameOver = false;

//===Load font===
    sf::Font font;
    if (!font.openFromFile("../assetts/AdwaitaMono-Bold.ttf")) {
        std::cerr << "Warning: failed to load font ../assetts/AdwaitaMono-Bold.ttf\n";
    }

//===Load background texture===
    sf::Texture background;
    if (!background.loadFromFile("../assetts/background.png")) {
        std::cerr << "Warning: failed to load background texture ../assetts/background.png\n";
    }
    background.setSmooth(true);
    background.setRepeated(true);
    sf::Sprite backgroundSprite(background);
    backgroundSprite.setPosition(sf::Vector2<float>(0.f, 0.f));

//===Main game loop===
    while (window.isOpen() && !gameOver) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
                gameOver = true;
            }
        }

    window.clear();
    window.draw(backgroundSprite);
    sf::Text text(font);
    text.setString("Hello, World!");
    window.draw(text);
    window.display();

    }
    return 0;
}
