cmake_minimum_required(VERSION 3.25...4.2) 
project(celeritas
        VERSION 0.1.0
        DESCRIPTION "Low-latency order book and matching engine built in C++20"
        LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_library(celeritas src/placeholder.cpp)
target_include_directories(celeritas PUBLIC include)
add_executable(celeritas-replay apps/main.cpp)
target_link_libraries(celeritas-replay PRIVATE celeritas)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG        v1.18.0
        GIT_SHALLOW    TRUE
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_subdirectory(tests)