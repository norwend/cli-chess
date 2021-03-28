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
	short p1,p2,p3,p4 = 0;
	while (true) {
		std::cout << "Ваш ход? (пока только пешки)\n> ";
		std::cin >> p1 >> p2 >> p3 >> p4;
		main_board.move_figure(p1, p2, p3, p4);
		main_board.print();
		p1,p2,p3,p4 = 0;
	}
	return 0;
}
