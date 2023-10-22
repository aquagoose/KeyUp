cmake_minimum_required(VERSION 3.26)
project(KeyUp)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

# ---------- SDL2 ----------

add_subdirectory(lib/SDL)

if(TARGET SDL2::SDL2main)
    target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2main)
endif()

# Must link with SDL2 statically on windows as for some reason linking with shared SDL causes the entry point to disappear.
# Should probably look into this at some point.
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2-static)

# ---------- GLAD ----------

add_subdirectory(lib/glad)
target_link_libraries(${PROJECT_NAME} PRIVATE glad)

# ---------- GLM ----------

add_subdirectory(lib/glm)
target_link_libraries(${PROJECT_NAME} PRIVATE glm)