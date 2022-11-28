# CMakeList.txt : CMake project for Cartana, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Cartana "Cartana.cpp" "Cartana.h" "src/core/core.cpp" "src/core/core.h" "src/core/command/command.cpp"  "src/core/command/result/result.cpp" "src/core/command/result/result.h" "src/core/command/resulttypes/resulttypes.h" "src/core/log/log.cpp" "src/core/command/handler/commandhandler.cpp" "src/core/command/handler/commandhandler.h" "src/core/command/command.h")

# TODO: Add tests and install targets if needed.
