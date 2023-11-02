#ifndef TETRIS_PIECES_HPP
#define TETRIS_PIECES_HPP

class Pieces {
public:
    static const int O[4][4];
    static const int I[4][4];
    static const int S[4][4];
    static const int Z[4][4];
    static const int L[4][4];
    static const int J[4][4];
    static const int T[4][4];

    static const int (*GetRandomPiece())[4][4];
};

#endif //TETRIS_PIECES_HPP
