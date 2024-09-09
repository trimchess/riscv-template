rem set pico_sdk_path=e:\projects\pico\c\pico-sdk\
if exist build\ (
  GOTO DOBUILD 
) else (
  GOTO NOBUILD
)

:DOBUILD
cd build
rd /s /q . 2>nul
cmake -G "NMake Makefiles" ..
rem cmake -G "NMake Makefiles" -DPICO_BOARD=pico_w -DWIFI_SSID="sax-99944" -DWIFI_PASSWORD="6zuy-817b-szsl-smkn" ..
nmake
cd ..
GOTO END

:NOBUILD
echo no build directory exists

:END
