# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(OUTPUT_NAME APP)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(USERHOME $ENV{USERPROFILE})

set(PICO_SDK_PATH ${USERHOME}/.pico-sdk/sdk/2.0.0)
set(PICO_TOOLCHAIN_PATH $ENV{PICO_RISCV_TOOLCHAIN_PATH})
set(PICO_PLATFORM rp2350-riscv CACHE STRING "Pico Platform")
set(PICO_BOARD pico2 CACHE STRING "Pico Board")
set(pioasm_HINT ${USERHOME}/.pico-sdk/tools/2.0.0/pioasm)
set(pioasm_DIR ${pioasm_HINT})
set(picotool_HINT ${USERHOME}/.pico-sdk/picotool/2.0.0/picotool)
set(picotool_DIR ${picotool_HINT})

include(${USERHOME}/.pico-sdk/sdk/2.0.0/external/pico_sdk_import.cmake)

project(${OUTPUT_NAME} C CXX ASM)
project(${OUTPUT_NAME} C CXX ASM)

pico_sdk_init()

include(CMakePrintHelpers)
cmake_print_variables(PICO_SDK_PATH)
cmake_print_variables(PICO_TOOLCHAIN_PATH)
cmake_print_variables(PICO_COMPILER)
cmake_print_variables(PICO_DEFAULT_COMPILER)
cmake_print_variables(PICO_GCC_TRIPLE)
cmake_print_variables(PICO_PLATFORM)
cmake_print_variables(PICO_BOARD)

add_subdirectory(src)