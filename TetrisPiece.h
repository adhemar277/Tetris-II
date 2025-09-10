#pragma once
#include "Piece.h"
#include <string>


// Enumeracion para los tipos de piezas de Tetris
enum class PieceType { I, L, J, S, Z, T, O };


// Enumeracion para la direccion de rotacion
enum class RotationDirection { CW, CCW };


// Deriva de la clase Piece
class TetrisPiece : public Piece {
private:
    PieceType type;
    int angle; // 0, 90, 180, 270
    int speedX;
    int speedY;
    bool moving;
    RotationDirection rotationDir;


public:
    TetrisPiece(PieceType type, float x = 0.0f, float y = 0.0f);


    // Anular el metodo de movimiento
    void move(Direction dir) override;


    // Rotate the piece by 90 degrees
    // Ro
    void rotate();


    // Stop the piece's movement 
    void stop();


    // Reset the piece to initial position and state
    void reset();

    // Getters and setters
    PieceType getType() const;
    int getAngle() const;
    int getSpeedX() const;
    int getSpeedY() const;
    bool isMoving() const;
    RotationDirection getRotationDirection() const;


	// Setters
    void setType(PieceType t);
    void setAngle(int a);
    void setSpeedX(int sx);
    void setSpeedY(int sy);
    void setMoving(bool m);

    void setRotationDirection(RotationDirection rd);

    // Override draw method
    void draw() const override;
};

