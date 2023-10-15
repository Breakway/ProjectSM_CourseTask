cmake_minimum_required(VERSION 3.24.0)

project(Example C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(./libs/googletest)

set(Headers
	#src/Example.hpp
)

set(Sources
	src/main.cpp
	#src/Example.cpp
)

#add_library(${PROJECT_NAME} STATIC ${Sources} ${Headers})
add_executable(${PROJECT_NAME} ${Sources} ${Headers})

add_subdirectory(Adder) #dirname

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_directories(${PROJECT_NAME} PRIVATE Adder)

target_link_libraries(${PROJECT_NAME} Adder) # libname

add_subdirectory(./tests)
