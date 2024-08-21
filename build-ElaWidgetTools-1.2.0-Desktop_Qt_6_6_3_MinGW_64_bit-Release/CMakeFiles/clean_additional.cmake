# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "example\\CMakeFiles\\ElaWidgetToolsExample_autogen.dir\\AutogenUsed.txt"
  "example\\CMakeFiles\\ElaWidgetToolsExample_autogen.dir\\ParseCache.txt"
  "example\\ElaWidgetToolsExample_autogen"
  "src\\CMakeFiles\\elawidgettools_autogen.dir\\AutogenUsed.txt"
  "src\\CMakeFiles\\elawidgettools_autogen.dir\\ParseCache.txt"
  "src\\elawidgettools_autogen"
  )
endif()
