@echo off

set /P MPATH=Enter MingW PATH:
set /P IPATH=Enter Resource PATH:
echo " "
echo Compiler :  %MPATH%
echo Install/Resources path : %IPATH% 
echo " "
echo Compiling By Command Line :  %MPATH% main.cpp -static-libgcc -static-libstdc++ -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive -o %IPATH%hrk.exe

%MPATH% main.cpp -static-libgcc -static-libstdc++ -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive -o %IPATH%hrk.exe

echo " "
echo Done , check ur current Directory if has new binaries file , that return to the tool 

echo 
echo run "hrk.exe" to see help menu , if not found please check ur "Compiler if match with this builder (for MingW) or compiler settings (Version,Place Holder)"
echo if everyhting good and didn't build Please Contact Owner for the shit "https://t.me/ABDO10_DZ \ abdo10_dz@pm.me"
PAUSE
   
