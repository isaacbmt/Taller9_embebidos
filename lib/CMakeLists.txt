cmake_minimum_required(VERSION 3.16)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(LIBRARY_NAME random_generator)
set(SRC_FILES random_generator.c)
set(INCLUDE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/../include/random_generator.h)

add_library(${LIBRARY_NAME} SHARED ${SRC_FILES} ${INCLUDE_FILES})

install(TARGETS ${LIBRARY_NAME} DESTINATION lib)
install(FILES ${INCLUDE_FILES} DESTINATION include)