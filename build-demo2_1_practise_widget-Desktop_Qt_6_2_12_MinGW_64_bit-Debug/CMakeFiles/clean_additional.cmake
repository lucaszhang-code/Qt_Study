# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\demo2_1_practise_widget_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\demo2_1_practise_widget_autogen.dir\\ParseCache.txt"
  "demo2_1_practise_widget_autogen"
  )
endif()
