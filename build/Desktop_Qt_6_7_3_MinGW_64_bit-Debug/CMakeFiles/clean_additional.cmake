# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\factory_sewing_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\factory_sewing_autogen.dir\\ParseCache.txt"
  "factory_sewing_autogen"
  )
endif()
