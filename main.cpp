#include "globals.h"

int main() {

    unsigned int gameGrid[GRID_SIZE][GRID_SIZE] = { 0 };



    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode({ WINDOW_SIZE, WINDOW_SIZE }),
        "Snake",
        sf::Style::Titlebar | sf::Style::Close,
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

//===Load textures===
    sf::Texture background;
    if (!background.loadFromFile("../assetts/background.png")) {
        std::cerr << "Warning: failed to load background texture ../assetts/background.png\n";
    }
    background.setSmooth(true);
    background.setRepeated(true);

    sf::Texture snakeHead;
    if (!snakeHead.loadFromFile("../assetts/snake_head.png")) {
        std::cerr << "Warning: failed to load snake head texture ../assetts/snake_head.png\n";
    }
    snakeHead.setSmooth(false);
    snakeHead.setRepeated(false);

    sf::Texture snakeBody;
    if (!snakeBody.loadFromFile("../assetts/snake_body.png")) {
        std::cerr << "Warning: failed to load snake body texture ../assetts/snake_body.png\n";
    }
    snakeBody.setSmooth(false);
    snakeBody.setRepeated(false);

    sf::Texture snakeTail;
    if (!snakeTail.loadFromFile("../assetts/snake_tail.png")) {
        std::cerr << "Warning: failed to load snake tail texture ../assetts/snake_tail.png\n";
    }
    snakeTail.setSmooth(false);
    snakeTail.setRepeated(false);

//===Create sprites===
    sf::Sprite backgroundSprite(background);
    backgroundSprite.setPosition(sf::Vector2f(0.f, 0.f));

    sf::Sprite snakeHeadSprite(snakeHead),
        snakeBodySprite(snakeBody),
        snakeTailSprite(snakeTail);

    const float scale = SPRITE_SCALE;

    snakeHeadSprite.setScale({ scale, scale });
    snakeBodySprite.setScale({ scale, scale });
    snakeTailSprite.setScale({ scale, scale });

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
    window.draw(snakeHeadSprite);
    window.draw(snakeBodySprite);
    window.draw(snakeTailSprite);
    sf::Text text(font);
    text.setString("Hello, World!");
    window.draw(text);
    window.display();

    }
    return 0;
}
