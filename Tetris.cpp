#include "TetrisPiece.h"
#include <iostream>



int main() 
{

	// Crear una pieza de Tetris del tipo I en la posicion (5,0)
	TetrisPiece piece(PieceType::I, 5.0f, 0.0f);

    piece.draw();
    piece.printCoordinates();


	// Mover la pieza hacia abajo con move()

    piece.move(Direction::DOWN);
    piece.printCoordinates();


	// Girar la pieza con rotate()
    piece.rotate();
    std::cout << "Angle after rotation: " << piece.getAngle() << std::endl;


	// Detener la pieza, se deve dejar de moverse con stop()
    piece.stop();
	piece.move(Direction::DOWN); // No deve moverse
    piece.printCoordinates();

 
	// Reiniciar la pieza con reset()

    piece.reset();
    piece.printCoordinates();

	// Graficar la pieza con draw()
	piece.draw();
	piece.printCoordinates();

    return 0;
}
