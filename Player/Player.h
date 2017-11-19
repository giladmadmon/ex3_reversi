/**************
* Student name: Gilad Madmon
* Student ID: 305132599
* Exercise name: Exercise 2
**************/

#ifndef TASK_02_BASEPLAYER_H
#define TASK_02_BASEPLAYER_H

#include <iostream>
#include "Player.h"
#include "../Printer/Printer.h"
using namespace std;
class Player {
 public:
  /**
   * Constructor.
   *
   * @param name the name of the player.
   */
  Player(string &name);
  /**
   * @return the name of the player.
   */
  virtual string GetName();
  /**
   * Asks the player to make a move.
   *
   * @param possible_moves the player possible moves.
   * @param printer the printer in order to communicate with the player.
   * @return the chosen position of the player.
   */
  virtual Position MakeAMove(vector<Position> &possible_moves, Printer &printer) = 0;

 private:
  string name_;
};

#endif //TASK_02_BASEPLAYER_H
