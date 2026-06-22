#ifndef GLOBALS_H
#define GLOBALS_H
#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>

sf::VideoMode const desktop = sf::VideoMode::getDesktopMode();
const int DISPLAY_WIDTH  = desktop.size.x;
const int DISPLAY_HEIGHT = desktop.size.y;

const int SPRITE_SIZE  = 16;
const int SPRITE_SCALE = 5;
const int CELL_SIZE    = SPRITE_SIZE * SPRITE_SCALE;

const int WINDOW_SIZE = 960;
const int GRID_SIZE   = WINDOW_SIZE / CELL_SIZE;



enum class Direction { Up, Down, Left, Right };

inline sf::Vector2f gridToPixel(sf::Vector2i cell) {
    return {
        static_cast<float>(cell.x * CELL_SIZE),
        static_cast<float>(cell.y * CELL_SIZE)
    };
}

#endif // GLOBALS_H
