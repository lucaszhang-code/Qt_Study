# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appQML_Demo1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appQML_Demo1_autogen.dir\\ParseCache.txt"
  "appQML_Demo1_autogen"
  )
endif()
