/**************
* Student name: Gilad Madmon
* Student ID: 305132599
* Exercise name: Exercise 2
**************/

#include "Board.h"
Board::Board(int size) {
  this->size_ = size;
  this->board_ = new PlayerColor *[size];
  for (int i = 0; i < size; ++i) {
    this->board_[i] = new PlayerColor[size];
  }

  Reset();
}
// change name
void Board::Reset() {
  int mid_size = size_ / 2;

  for (int i = 0; i < size_; i++) {
    for (int j = 0; j < size_; j++) {
      this->board_[i][j] = NoColor;
    }
  }

  SetColorAtPosition(mid_size, mid_size + 1, Black);
  SetColorAtPosition(mid_size + 1, mid_size, Black);
  SetColorAtPosition(mid_size + 1, mid_size + 1, White);
  SetColorAtPosition(mid_size, mid_size, White);
}
// change
void Board::SetColorAtPosition(int row, int col, PlayerColor color) {
  this->board_[row - 1][col - 1] = color;
}
// change name
PlayerColor Board::GetColorAtPosition(int row, int col) {
  return board_[row-1][col-1];
}
// change
int Board::CountColor(PlayerColor color) {
  int count = 0;

  for (int i = 0; i < size_; ++i) {
    for (int j = 0; j < size_; ++j) {
      if (board_[i][j] == color) {
        count++;
      }
    }
  }

  return count;
}
Board::~Board() {
  for (int i = 0; i < size_; ++i) {
    delete[] this->board_[i];
  }
  delete[] this->board_;
}

int Board::GetSize() {
  return size_;
}