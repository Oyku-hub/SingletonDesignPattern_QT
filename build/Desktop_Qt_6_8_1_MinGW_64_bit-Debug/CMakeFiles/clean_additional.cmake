# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DesignPattern_Singleton_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DesignPattern_Singleton_autogen.dir\\ParseCache.txt"
  "DesignPattern_Singleton_autogen"
  )
endif()
