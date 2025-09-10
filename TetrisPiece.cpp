#include "TetrisPiece.h"
#include <iostream>


// Consructor que inicializa la pieza de Tetris con un tipo especifico y una posicion opcional (por defecto 0,0)
TetrisPiece::TetrisPiece(PieceType type, float x, float y)
    : Piece(x, y), type(type), angle(0), speedX(1), speedY(1), moving(true), rotationDir(RotationDirection::CW) {
}


// Metodo para mover la pieza en una direccion dada, si la pieza esta en movimiento
void TetrisPiece::move(Direction dir) {
    if (!moving) return;
    switch (dir) {
    case Direction::UP:    y -= speedY; break;
    case Direction::DOWN:  y += speedY; break;
    case Direction::LEFT:  x -= speedX; break;
    case Direction::RIGHT: x += speedX; break;
    }
}


//Rotar la pieza 90 grados en la direccion de rotacion especificada
void TetrisPiece::rotate() {
    if (rotationDir == RotationDirection::CW)
        angle = (angle + 90) % 360;
    else
		angle = (angle + 270) % 360; // Equivalente a restar 90 grados
}


// Detener la pieza de moverse
void TetrisPiece::stop() {
    moving = false;
}


// Reiniciar la pieza a la posicion y estado inicial
void TetrisPiece::reset() {
    x = 0.0f;
    y = 0.0f;
    angle = 0;
    moving = true;
}

// Getters
PieceType TetrisPiece::getType() const { return type; }
int TetrisPiece::getAngle() const { return angle; }
int TetrisPiece::getSpeedX() const { return speedX; }
int TetrisPiece::getSpeedY() const { return speedY; }
bool TetrisPiece::isMoving() const { return moving; }
RotationDirection TetrisPiece::getRotationDirection() const { return rotationDir; }


// Setters
void TetrisPiece::setType(PieceType t) { type = t; }
void TetrisPiece::setAngle(int a) { angle = a % 360; }
void TetrisPiece::setSpeedX(int sx) { speedX = sx; }
void TetrisPiece::setSpeedY(int sy) { speedY = sy; }
void TetrisPiece::setMoving(bool m) { moving = m; }
void TetrisPiece::setRotationDirection(RotationDirection rd) { rotationDir = rd; }



// Anular el metodo de dibujo
void TetrisPiece::draw() const {
    std::cout << "Drawing Tetris piece of type " << static_cast<int>(type)
        << " at (" << x << ", " << y << ") with angle " << angle << std::endl;
}
