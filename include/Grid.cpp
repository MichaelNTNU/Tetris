#include "Grid.hpp"

Grid::Grid(int c, int r) : colLength(c), rowLength(r) {
    matrix = new int*[colLength];
    for (int i = 0; i < colLength; i++) {
        matrix[i] = new int[rowLength]();
    }
}

Grid::~Grid() {
    for (int i = 0; i < colLength; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void Grid::Render() {
    for (int col = 0; col < colLength; col++) {
        for (int row = 0; row < rowLength; row++) {
            std::cout << matrix[col][row];
        }
        std::cout << std::endl;
    }
}

void Grid::PlacePiece(const int piece[4][4], int x, int y) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (piece[i][j] == 1) {
                matrix[x + i][y + j] = 1; // Plasserer brikken på den gitte posisjonen
            }
        }
    }
}
bool Grid::CheckCollision(const int piece[4][4], int x, int y) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (piece[i][j] == 1 && (y + j >= rowLength || matrix[x + i][y + j] == 1)) {
                return true;
            }
        }
    }
    return false;
}

