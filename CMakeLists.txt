cmake_minimum_required(VERSION 3.14)
project(SlotMachineHw2)

set(CMAKE_CXX_STANDARD 14)

add_executable(SlotMachineHw2 main.cpp ReelNode.h Reel.h Reel.cpp SlotMachine.h PayoutTable.h SlotMachine.cpp Game.h Game.cpp PayoutTable.cpp)