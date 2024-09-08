add_executable(${OUTPUT_NAME}
    main.cpp
    )

# pull in common dependencies
target_link_libraries(${OUTPUT_NAME} pico_stdlib)

if (PICO_CYW43_SUPPORTED)
    target_link_libraries(${OUTPUT_NAME} pico_cyw43_arch_none)
endif()

pico_enable_stdio_uart(${OUTPUT_NAME} 1)
pico_enable_stdio_usb(${OUTPUT_NAME} 1)

# create map/bin/hex file etc.
pico_add_extra_outputs(${OUTPUT_NAME})
