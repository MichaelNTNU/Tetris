#include "Pieces.hpp"
#include "RNG.cpp"
#include <cstdlib> // for rand()




const int Pieces::O[4][4] = {
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
};

const int Pieces::I[4][4] ={
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0}
};

const int Pieces::S[4][4] ={
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 0, 0}
};

const int Pieces::Z[4][4] ={
        {0, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
};

const int Pieces::L[4][4] ={
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
};

const int Pieces::J[4][4] ={
        {0, 0, 1, 0},
        {0, 0, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
};

const int Pieces::T[4][4] ={
        {0, 0, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {0, 0, 0, 0}
};
const int (*Pieces::GetRandomPiece())[4][4] {
    int random = rand() % 7;
    switch(random) {
        case 0: return &O;
        case 1: return &I;
        case 2: return &S;
        case 3: return &Z;
        case 4: return &L;
        case 5: return &J;
        case 6: return &T;
    }
    return nullptr; // Dette bør aldri skje
}