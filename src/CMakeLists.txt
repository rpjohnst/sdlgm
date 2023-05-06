find_package(sdl2 REQUIRED)

add_executable(sdlgm sdlgm.cpp)
target_compile_features(sdlgm PRIVATE cxx_std_17)
target_link_libraries(sdlgm PRIVATE SDL2::SDL2 SDL2::SDL2main)
