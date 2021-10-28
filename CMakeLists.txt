cmake_minimum_required(VERSION 3.16)
project(taller9)

add_subdirectory(lib)

set(SOURCE src/main.c)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(main ${SOURCE})

target_link_libraries(main rpitimer)

install (TARGETS main DESTINATION bin)

set(MAJOR "0")
set(MINOR "1")
set(PATCH "1")
set(CPACK_SOURCE_GENERATOR "TGZ")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "${CMAKE_PROJECT_NAME}-${MAJOR}.${MINOR}.${PATCH}")
set(CPACK_SOURCE_IGNORE_FILES "/build/;${CPACK_SOURCE_IGNORE_FILES}")
include(CPack)
