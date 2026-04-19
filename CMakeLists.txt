# Specify the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Define the project name and its version
project(TrustIssues VERSION 1.0)

# Set C++17 as the required standard for modern features
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell the compiler where to look for header files (.h)
include_directories(include)

# Automatically collect all source files (.cpp) from the src directory
file(GLOB SOURCES "src/*.cpp")

# Link everything together to create the final executable
# ${PROJECT_NAME} refers to "TrustIssues" automatically
add_executable(${PROJECT_NAME} ${SOURCES})