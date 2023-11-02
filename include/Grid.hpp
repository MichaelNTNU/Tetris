#ifndef TETRIS_GRID_HPP
#define TETRIS_GRID_HPP
#include <iostream>

struct Grid {
    int** matrix; // Dobbel peker for dynamisk to-dimensjonal matrise
    int colLength;
    int rowLength;

    Grid(int c, int r);
    ~Grid();
    void Render();
    void PlacePiece(const int piece[4][4], int x, int y);
    bool CheckCollision(const int piece[4][4], int x, int y);
};

#endif //TETRIS_GRID_HPP
