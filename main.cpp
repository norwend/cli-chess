#include "board.hpp"

int main() {
	Board main_board({{ 
		{-4, -3, -2, -5, -6, -2, -3, -4},
		{-1, -1, -1, -1, -1, -1, -1, -1},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{1, 1, 1, 1, 1, 1, 1, 1},
		{4, 3, 2, 5, 6, 2, 3, 4}
	}});
	main_board.print();
	return 0;
}
