@echo off
set SRC=..\..\_src
set INC=C:/rtools40/mingw64/include
set LIB=C:/rtools40/mingw64/lib

g++ .\time.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
    %SRC%\HttpClient.cpp ^
-o t.exe ^
-DCURL_STATICLIB -I%INC% -L%LIB% ^
-lcurl -lnormaliz -lssh2 -lssl -lcrypto -lz ^
-lcrypt32 -lgdi32 -lws2_32 -lwldap32