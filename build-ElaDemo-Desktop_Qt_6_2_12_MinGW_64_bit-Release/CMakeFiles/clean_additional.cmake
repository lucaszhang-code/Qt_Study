# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\ElaDemo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ElaDemo_autogen.dir\\ParseCache.txt"
  "ElaDemo_autogen"
  )
endif()
