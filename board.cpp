#include "board.h"

class Board
{
    private:
        std::string boardWord;
        int attemptNumber;

    public:
        Board(std::string word)
        {
            boardWord = word;
        }
        std::string get_board_word()
        {
            return boardWord;
        }
};