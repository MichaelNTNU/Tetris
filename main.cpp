#include "include/Grid.hpp"
#include "include/Pieces.hpp"
#include <thread>
#include <chrono>

int main() {
    Grid grid(20, 10); // 20x10 matrise
    int x = 5, y = 0;

    while (true) {
        const int (*piece)[4][4] = Pieces::GetRandomPiece();
        while (!grid.CheckCollision(*piece, x, y)) {
            grid.PlacePiece(*piece, x, y);
            grid.Render();
            std::this_thread::sleep_for(std::chrono::seconds(1));
            y++;
        }
        y = 0; // Reset y-posisjonen for neste brikke
    }

    return 0;
}
