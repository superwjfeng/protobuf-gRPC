cmake_minimum_required(VERSION 3.2)
project(protobuf)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

# # 获取当前目录下的所有子文件夹
# file(GLOB SUBDIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *)

# # 遍历所有子文件夹并添加到项目
# foreach(SUBDIR ${SUBDIRS})
#     if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUBDIR})
#         add_subdirectory(${SUBDIR})
#     endif()
# endforeach()

# include_directories(${Protobuf_INCLUDE_DIRS})

add_subdirectory(bike_demo)

