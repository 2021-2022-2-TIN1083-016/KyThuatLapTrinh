@echo off
set SRC=..\..\_src
set LIB=C:\rtools40\mingw64\lib\

g++ .\time.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
    %SRC%\HttpClient.cpp ^
-DCURL_STATICLIB ^
-o t.exe ^
-static -L%LIB% ^
