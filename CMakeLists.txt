cmake_minimum_required(VERSION 3.20)
project(bath_viewer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Charts
        Widgets
        REQUIRED)

add_executable(bath_viewer src/main.cpp inc/MainWindow.hpp src/MainWindow.cpp src/StartPage.cpp inc/StartPage.hpp inc/page.hpp src/grdtrackPage.cpp inc/grdtrackPage.hpp)
target_link_libraries(bath_viewer
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Charts
        )

