@echo off
set SRC=..\..\_src

g++ .\kt.cpp ^
    %SRC%\Log.cpp ^
-o exam.win