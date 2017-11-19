/**************
* Student name: Gilad Madmon
* Student ID: 305132599
* Exercise name: Exercise 2
**************/
#ifndef ASS2_PRINTER_H
#define ASS2_PRINTER_H



#include <vector>
#include "../Board/Board.h"
#include "../Board/Position.h"
using namespace std;

//interface

class Printer {
 public:

  /**
   * Prints a board.
   *
   * @param board the board to be printed.
   */
  virtual void PrintBoard(Board &board) = 0;

  /**
   * Print the possible moves.
   *
   * @param possible_moves the possible moves.
   */
  virtual void PrintPossibleMoves(vector<Position> &possible_moves) = 0;

  /**
   * Print that there are no moves.
   *
   * @param color the color of the player whom has bo moves.
   */
  virtual void PrintNoMoves(PlayerColor color) = 0;

  /**
   * Print the current turn.
   *
   * @param color the color of the player whom is his turn.
   */
  virtual void PrintCurrentTurn(PlayerColor color) = 0;

  /**
   * Ask from a player to enter a row.
   */
  virtual void PrintEnterRow() = 0;

  /**
   * Ask from a player to enter a column.
   */
  virtual void PrintEnterCol() = 0;

  /**
   * Tell the player he chose a wrong move.
   */
  virtual void PrintWrongMove() = 0;

  /**
   * Announce the winner.
   *
   * @param color the color of the winner.
   */
  virtual void PrintWinner(PlayerColor color) = 0;

  /**
   * Prints the scores of both players.
   *
   * @param black_score the black score.
   * @param white_score the white score.
   */
  virtual void PrintScore(int black_score, int white_score) = 0;

  /**
   * Tell the player he did not enter a number.
   */
  virtual void PrintNotANumber() = 0;
};
#endif //ASS2_PRINTER_H