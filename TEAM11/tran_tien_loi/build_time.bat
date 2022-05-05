@echo off
set SRC=..\..\_src
set LIB=C:\msys64\mingw64\lib

g++ .\time.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
    %SRC%\HttpClient.cpp ^
-o t.exe ^
-IC:/msys64/mingw64/include -LC:/msys64/mingw64/lib -lcurl