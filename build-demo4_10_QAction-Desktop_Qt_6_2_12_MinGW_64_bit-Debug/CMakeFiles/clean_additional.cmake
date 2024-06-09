# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\demo4_10_QAction_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\demo4_10_QAction_autogen.dir\\ParseCache.txt"
  "demo4_10_QAction_autogen"
  )
endif()
