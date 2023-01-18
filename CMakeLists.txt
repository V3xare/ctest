cmake_minimum_required( VERSION 3.5 )
project( Test )

set( CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3" )
set( CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}  -g" )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin" )
set( SOURCE_FILES source/main.cpp )

LINK_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR}/bin )

# Base
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/source/vmath/ )
add_library(
	testmath
	SHARED
	source/utility/testmath.h
)
set_target_properties( testmath PROPERTIES LINKER_LANGUAGE CXX )

#
add_executable( Test ${SOURCE_FILES} )

TARGET_LINK_LIBRARIES(
	Test
	testmath
)