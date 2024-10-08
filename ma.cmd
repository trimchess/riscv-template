@echo off
if exist build\ (
  GOTO DOBUILD 
)

mkdir build

:DOBUILD
cd build
rd /s /q . 2>nul

cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug ..
cmake --build . --target all -j
cd ..
GOTO END

:NOBUILD
echo no build directory exists

:END
pause
