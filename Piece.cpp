#include "Piece.h"
#include <iostream>



// Constructor con posicion por defecto (0,0)
Piece::Piece(float x, float y) : x(x), y(y) {}


// Mover la pieza en una direccion dada

void Piece::move(Direction dir) {
    switch (dir) {
    case Direction::UP:    y -= 1.0f; break;
    case Direction::DOWN:  y += 1.0f; break;
    case Direction::LEFT:  x -= 1.0f; break;
    case Direction::RIGHT: x += 1.0f; break;
    }
}


// Imprimir las coordenadas actuales
void Piece::printCoordinates() const {
    std::cout << "Piece coordinates: (" << x << ", " << y << ")" << std::endl;
}

// Getters y setters

float Piece::getX() const { return x; }
float Piece::getY() const { return y; }
void Piece::setX(float xVal) { x = xVal; }
void Piece::setY(float yVal) { y = yVal; }


// Metodo virtual para dibujar una pieza o la pieza
void Piece::draw() const {
    std::cout << "Drawing generic piece at (" << x << ", " << y << ")" << std::endl;
}
