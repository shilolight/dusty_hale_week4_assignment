#include"character.h"

class opponent: public character {
    public:
        opponent();
        std::string attack();
        bool spawn_minion();
};