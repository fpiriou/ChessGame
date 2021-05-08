cmake_minimum_required(VERSION 3.0.0)
project(ChessGame VERSION 0.1.0)

include(CTest)
enable_testing()

# Set externals libraries path
set(EXTERNAL_LIB_PATH ../../Libraries)

# SFML library

## Set SFML path
set(SFML_DIR "${EXTERNAL_LIB_PATH}/SFML-2.5.1")

## Set sfml headers path
set(SFML_INCLUDE_DIR ${SFML_DIR}/include)

## Set sfml libs path
set(SFML_LIB_DIR ${SFML_DIR}/lib)

## Add sfml headers
include_directories(${PROJECT_NAME} ${SFML_INCLUDE_DIR})

## Add sfml libraries
link_directories(${PROJECT_NAME} ${SFML_LIB_DIR})

# Find the sfml libraries
find_library(SFML_AUDIO_LIB NAMES sfml-audio PATHS ${SFML_LIB_DIR})
find_library(SFML_GRAPHICS_LIB NAMES sfml-graphics PATHS ${SFML_LIB_DIR})
find_library(SFML_NETWORK_LIB NAMES sfml-network PATHS ${SFML_LIB_DIR})
find_library(SFML_SYSTEM_LIB NAMES sfml-system PATHS ${SFML_LIB_DIR})
find_library(SFML_WINDOW_LIB NAMES sfml-window PATHS ${SFML_LIB_DIR})

include_directories(${PROJECT_NAME} includes)

set(HEADERS 
includes/core/Board.h
includes/GUI/MainScreen.h
includes/GUI/Button.h
includes/GUI/IGuiFacade.h
includes/GUI/SFMLGuiFacade.h
includes/GUI/IMouse.h
includes/GUI/SFMLMouse.h
includes/GUI/IGameMode.h
includes/GUI/PlayGameMode.h
includes/core/Main.h
)

set(SOURCES
sources/core/Board.cpp
sources/GUI/MainScreen.cpp
sources/GUI/Button.cpp
sources/GUI/SFMLGuiFacade.cpp
sources/GUI/SFMLMouse.cpp
sources/GUI/PlayGameMode.cpp
sources/core/Main.cpp
sources/GUI/GameMode.cpp
sources/GUI/WelcomeGameMode.cpp
)

add_executable(${PROJECT_NAME} 
main.cpp
${SOURCES}
${HEADERS}
)

target_link_libraries(${PROJECT_NAME}
${SFML_AUDIO_LIB}
${SFML_GRAPHICS_LIB}
${SFML_NETWORK_LIB}
${SFML_SYSTEM_LIB}
${SFML_WINDOW_LIB}
)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
