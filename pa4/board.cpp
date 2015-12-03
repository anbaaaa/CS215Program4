#include "board.h"
using namespace std;

list<Position> Board::adjacent(Position p) const
{
    list <Position> adj;

    // add -1, 0, and 1 to the X and the Y coordinate.  Be careful not to
    // return p itself.
    for (int x = p.x() - 1; x <= p.x() + 1; x++)
        for (int y = p.y() - 1; y <= p.y() + 1; y++)
        {
            if (x == p.x() && y == p.y())
                continue;
            else if (x < 0 || x >= BOARD_SIZE)
                continue;
            else if (y < 0 || y >= BOARD_SIZE)
                continue;
            else
                adj.push_back(Position(x, y));
        }

    return adj;
}

Board::Board()
{
	for (int i=0; i<BOARD_SIZE; i++)
	{
		for (int j=0; j<BOARD_SIZE; j++)
		{
			letters[i][j] = randomLetter();
		}
	}
}

	//prints the board to the screen
void Board::PrintBoard()
{
	for (int i=0; i<BOARD_SIZE; i++)
	{
		cout << "+---+---+---+---+" << endl;
		for (int j=0; j<BOARD_SIZE; j++)
		{
			cout << "| " << letters[i][j] << " ";
		}
		cout << "|" << endl;
	}
	cout << "+---+---+---+---+" << endl;
}

	//checks if word occurs on the board
bool Board::WordOnBoard(string word)
{
	return false;
}

