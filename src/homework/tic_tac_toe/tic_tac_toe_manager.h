#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager 
{
  public: 
    void get_winner_totals(int& o, int& w, int& t);
    void save_game(TicTacToe game);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

  private:
    std::vector<TicTacToe> games;
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;

    void update_winner_count(std::string winner);

};
#endif