#ifndef GLOBALS_H
#define GLOBALS_H
#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/VideoMode.hpp>

sf::VideoMode const desktop = sf::VideoMode::getDesktopMode();
const int DISPLAY_WIDTH = desktop.size.x;
const int DISPLAY_HEIGHT = desktop.size.y;
const int WINDOW_SIZE = 1024;
const int CELL_SIZE = 20;
const int GRID_SIZE = WINDOW_SIZE / CELL_SIZE;

#endif // GLOBALS_H
