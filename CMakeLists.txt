cmake_minimum_required(VERSION 3.10)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")

# Library
add_executable(assert asserts.cpp)
add_executable(change_letter_case change_letter_case change_letter_case.cpp)

add_executable(literal literal.cpp)
add_executable(move move.cpp)
add_executable(enum enum.cpp)
add_executable(types types.cpp)

# Algorithms
add_executable(lambdas lambdas.cpp)
add_executable(functor functors.cpp)
add_executable(lexographic_ordering lexographic_ordering.cpp)
add_executable(sorting sorting.cpp)
add_executable(iters iters.cpp)

# Callback
add_executable(callback1 pointers_to_function.cpp)

# Templates
add_executable(variadic variadic.cpp)
add_executable(templates templates.cpp)

# Memory
add_executable(shared_pointers shared_pointers.cpp)
add_executable(shared_pointers2 shared_pointers_2.cpp)
add_executable(unique_pointer  unique_pointer.cpp)

# Threads
add_executable(thread1 thread_1.cpp)
add_executable(thread2 thread_2.cpp)
add_executable(thread3 thread_3.cpp)
add_executable(thread4 thread_safe_counters.cpp)

# Stream
add_executable(sstream1 sstream.cpp)

