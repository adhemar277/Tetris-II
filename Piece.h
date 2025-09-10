#pragma once
#include <string>

// Es un enum para las direcciones de movimiento
enum class Direction { UP, DOWN, LEFT, RIGHT };



// Es una clase base para una pieza generica
class Piece {
protected:
    float x;
    float y;


public:
    Piece(float x = 0.0f, float y = 0.0f);
    virtual ~Piece() = default;


	// Es un metodo virtual puro para que las clases derivadas lo implementen
    virtual void move(Direction dir);


   
	// Es un metodo para imprimir las coordenadas actuales
    void printCoordinates() const;


	// Son los metodos para obtener y establecer las coordenadas getters y setters
    float getX() const;
    float getY() const;
    void setX(float x);
    void setY(float y);


	// Es un metodo virtual para que las clases derivadas lo implementen
    virtual void draw() const;
};