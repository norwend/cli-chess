#include <array>
#include <iostream>

class Board {
public:
	void move_figure(const int&, const int&, const int&, const int&);
	void print();
	Board (std::array<std::array<int, 8>, 8> b) : board_(b) {}
private:
	std::array<std::array<int,8>, 8> board_;
};

void Board::move_figure(const int& pos1, const int& pos2, const int& pos1_n, const int& pos2_n) {
	switch (board_[pos1][pos2]) {
		case 1:
			std::cout << pos1 << pos2 << pos1_n << pos2_n;
		if (pos2 == pos2_n && pos1_n - pos1 <= 2 && pos1 == 6) {
			board_[pos1][pos2] = 0;
			board_[pos1_n][pos2_n] = 1;
		}
		break;
	}
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
				case 2:
					std::cout << "♝ ";
					break;
				case 3:
					std::cout << "♞ ";
					break;
				case 4:
					std::cout << "♜ ";
					break;
				case 5:
					std::cout << "♛ ";
					break;
				case 6:
					std::cout << "♚ ";
					break;
				case -1:
					std::cout << "♙ ";
					break;
				case -2:
					std::cout << "♗ ";
					break;
				case -3:
					std::cout << "♘ ";
					break;
				case -4:
					std::cout << "♖ ";
					break;
				case -5:
					std::cout << "♕ ";
					break;
				case -6:
					std::cout << "♔ ";
					break;
				default:
					break;
			}
		}
		std::cout << std::endl;
	}
}
