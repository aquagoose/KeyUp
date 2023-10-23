#include "Window.h"

namespace Engine {
    Window::Window(const WindowSettings& settings) {
        // TODO: Don't init everything.
        if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {

        }
    }
} // Engine