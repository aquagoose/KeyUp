#include "Utils.h"
#include <cstdarg>

namespace Core {
    std::string FormatString(const char* text, ...) {
        va_list args;
        va_start(args, text);

        // Must calculate length before we alloc the string.
        int length = vsnprintf(nullptr, 0, text, args);

        std::string newText(length, '\0');
        vsnprintf(newText.data(), length + 1, text, args);

        va_end(args);

        return newText;
    }
}