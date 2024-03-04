# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CinemaProject_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CinemaProject_autogen.dir/ParseCache.txt"
  "CinemaProject_autogen"
  )
endif()
