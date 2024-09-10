# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(OUTPUT_NAME APP)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(USERHOME $ENV{USERPROFILE})
set(PICO_CXX_ENABLE_EXCEPTIONS 1)
set(PROJECT_NAME ${OUTPUT_NAME})

set(PICO_SDK_PATH $ENV{PICO_SDK_PATH})

set(PICO_TOOLCHAIN_PATH $ENV{PICO_RISCV_TOOLCHAIN_PATH})
set(PICO_PLATFORM rp2350-riscv CACHE STRING "Pico Platform")
#set(PICO_TOOLCHAIN_PATH $ENV{PICO_ARM_TOOLCHAIN_PATH})
#set(PICO_PLATFORM rp2350 CACHE STRING "Pico Platform")

set(PICO_BOARD pico2 CACHE STRING "Pico Board")
set(pioasm_HINT ${USERHOME}/.pico-sdk/tools/2.0.0/pioasm)
set(pioasm_DIR ${pioasm_HINT})
set(picotool_HINT ${USERHOME}/.pico-sdk/picotool/2.0.0/picotool)
set(picotool_DIR ${picotool_HINT})
set(LOG_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/port/logging" CACHE STRING "Local Config")
include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(${OUTPUT_NAME} C CXX ASM)
project(${OUTPUT_NAME} VERSION 1.0)

configure_file(config/config.h.in config.h)

pico_sdk_init()

include(CMakePrintHelpers)
cmake_print_variables(PICO_SDK_PATH)
cmake_print_variables(PICO_TOOLCHAIN_PATH)
cmake_print_variables(PICO_COMPILER)
cmake_print_variables(PICO_DEFAULT_COMPILER)
cmake_print_variables(PICO_GCC_TRIPLE)
cmake_print_variables(PICO_PLATFORM)
cmake_print_variables(PICO_BOARD)
cmake_print_variables(PROJECT_NAME)
cmake_print_variables(OUTPUT_NAME)
cmake_print_variables(LOG_DIRECTORY)

add_subdirectory(src)