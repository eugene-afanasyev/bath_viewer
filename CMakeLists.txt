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

add_executable(bath_viewer src/main.cpp inc/main_window.hpp src/main_window.cpp src/start_page.cpp inc/start_page.hpp inc/page.hpp src/grd_page.cpp inc/grd_page.hpp inc/start_pt_input.hpp src/start_pt_input.cpp inc/separator.hpp)
target_link_libraries(bath_viewer
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Charts
        )

