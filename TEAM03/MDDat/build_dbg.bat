@echo off
set SRC=..\..\_src
set LIB=C:\msys64\mingw64\lib
set INC=C:/msys64/mingw64/include

g++ .\time.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
    %SRC%\HttpClient.cpp ^
-o t.exe ^
-I%INC% -L%LIB% ^
-lcurl 