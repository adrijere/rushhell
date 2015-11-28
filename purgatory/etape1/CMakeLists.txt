SET(EXECUTABLE_OUTPUT_PATH ./)

project(test_fsa)

add_executable(
  test_fsa
  Machine.hpp
  Machine.cpp
  main.cpp
  )
