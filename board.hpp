#include <array>
#include <iostream>

class Board {
public:
	void move_figure();
	void print();
	Board (std::array<std::array<int, 8>, 8> b) : board_(b) {}
private:
	std::array<std::array<int,8>, 8> board_;
};

void move_figure(int& pos1, int& pos2) {
	
}

void Board::print() { // Ужасно!
	for (auto& row : board_) {
		for (int& column : row) {
			switch (column) {
				case 0:
					std::cout << "# ";
					break;
				case 1:
					std::cout << "♟︎ ";
					break;
				case -1:
					std::cout << "♙ ";
					break;
				default:
					break;
			}
		}
		std::cout << std::endl;
	}
}
