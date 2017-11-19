/**************
* Student name: Gilad Madmon
* Student ID: 305132599
* Exercise name: Exercise 2
**************/

#ifndef TASK_02_BOARD_H
#define TASK_02_BOARD_H

#include "../Player/PlayerColor.h"
class Board {
 protected:
  int size_;
  PlayerColor **board_;
 public:
  /**
   * Constructor.
   *
   * @param size the size of the board.
   */
  Board(int size = 8);
  /**
   * Resets the board to its default start.
   */
  void Reset();
  /**
   * Change the color at specific position on the board.
   *
   * @param row the row of the position
   * @param col the column of the position
   * @param color the color to put in the position
   */
  void SetColorAtPosition(int row, int col, PlayerColor color);
  /**
   * count the cells which are at a given color
   *
   * @param color the color to count
   * @return the result of the count
   */
  int CountColor(PlayerColor color);
  /**
   * get the color at a specific position on the board.
   *
   * @param row the row of the position
   * @param col the column of the position
   * @return the color at the given position
   */
  PlayerColor GetColorAtPosition(int row, int col);
  /**
   * @return the size of the board.
   */
  int GetSize();
  /**
   * Destructor.
   */
  virtual ~Board();
};

#endif //TASK_02_BOARD_H