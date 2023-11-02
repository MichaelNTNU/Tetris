#ifndef TETRIS_RENDERER_HPP
#define TETRIS_RENDERER_HPP
#include<string>
#include <threepp/threepp.hpp>

class Renderer {
public:
    Renderer();
    ~Renderer();

    void render();

private:
    std::shared_ptr<threepp::GLRenderer> renderer_;
    std::shared_ptr<threepp::PerspectiveCamera> camera_;
    std::shared_ptr<threepp::Scene> scene_;
};

#endif //TETRIS_RENDERER_HPP
