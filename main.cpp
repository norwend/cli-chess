#include <iostream>
#include <array>
#include <string>

class Figures {
protected:
	virtual void move(int pos1_n, int pos2_n) = 0;
	virtual void on_move() = 0;
	virtual void update() = 0;
	bool color;
	int pos1, pos2;
};

class Pawn : public Figures {
private:
	bool first_move = true;
public:
	virtual void move (int pos1_n, int pos2_n) override {
		if (pos1 == pos1_n && pos1_n - pos2_n <= 2 && first_move == true)
			pos2 = pos2_n;
		if (pos1 == pos1_n && pos1_n - pos2_n <= 1 && first_move != true)
			pos2 = pos2_n;
	}
};

int main() {
	std::array<std::array<int,8>, 8> board = {{ 
	{-4, -3, -2, -5, -6, -2, -3, -4},
	{-1, -1, -1, -1, -1, -1, -1, -1},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{1, 1, 1, 1, 1, 1, 1, 1},
	{4, 3, 2, 5, 6, 2, 3, 4}
	}};
	for (auto& row : board) {
		for (int& column : row) {
			switch (column) {
				case 0:
					std::cout << "# ";
					break;
				case 1:
					std::cout << "♙ ";
					break;
				case -1:
					std::cout << "♟︎ ";
					break;
				default:
					break;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
