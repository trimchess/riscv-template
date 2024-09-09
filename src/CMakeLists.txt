add_executable(${OUTPUT_NAME}
    main.cpp
    )

# pull in common dependencies
target_link_libraries(${OUTPUT_NAME} pico_stdlib)

target_include_directories(${OUTPUT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/include
    ${PROJECT_BINARY_DIR}
    ${LOG_DIRECTORY}
    )

pico_enable_stdio_uart(${OUTPUT_NAME} 1)
pico_enable_stdio_usb(${OUTPUT_NAME} 1)

# create map/bin/hex file etc.
pico_add_extra_outputs(${OUTPUT_NAME})
