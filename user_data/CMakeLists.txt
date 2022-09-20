cmake_minimum_required(VERSION 3.23)
project(user_data)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent) # If not included already

FetchContent_Declare(sciplot_content
        GIT_REPOSITORY https://github.com/sciplot/sciplot.git
        GIT_TAG master)

FetchContent_GetProperties(sciplot_content)
if(NOT sciplot_content_POPULATED)
    FetchContent_Populate(sciplot_content)
endif()

include_directories(${sciplot_content_SOURCE_DIR})

add_executable(user_data main.cpp)
