cmake_minimum_required(VERSION 3.4.1)
project(dex_builder)

add_definitions(-std=c++20)

set(DB_SOURCES
        dex_builder.cc
        slicer/reader.cc
        slicer/writer.cc
        slicer/dex_ir.cc
        slicer/common.cc
        slicer/dex_format.cc
        slicer/dex_utf8.cc
        slicer/dex_bytecode.cc
        )

set(TEST_SOURCES
        dex_testcase_generator.cc
        )

add_library(${PROJECT_NAME} SHARED ${DB_SOURCES})
add_library(${PROJECT_NAME}_static STATIC ${DB_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC include)
target_include_directories(${PROJECT_NAME}_static PUBLIC include)

target_link_libraries(${PROJECT_NAME} PUBLIC z log)
target_link_libraries(${PROJECT_NAME}_static PUBLIC z log)

set(CFLAGS
        -flto
        -fvisibility=default
        )

target_compile_options(${PROJECT_NAME} PRIVATE ${CFLAGS})
target_link_options(${PROJECT_NAME} PRIVATE -flto)
