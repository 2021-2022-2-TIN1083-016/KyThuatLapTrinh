@echo off
set SRC=..\..\_src

g++ .\ktra.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
-o ktra.exe