#pragma once

#include <SDL.h>
#include <glm/glm.hpp>
#include <string>

namespace Engine {

    struct WindowSettings {
        std::string Title;
        glm::ivec2 Size;
    };

    class Window {
    private:
        SDL_Window* _window;
        SDL_GLContext _context;

    public:
        explicit Window(const WindowSettings& settings);
        ~Window();
    };

} // Engine
