cmake_minimum_required(VERSION 3.0.0)
project(dicegame VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(SFML REQUIRED graphics window system)


set(SOURCE_FILES main.cpp)
set(HEADER_FILES game.hpp player.hpp playerlist.hpp )

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
