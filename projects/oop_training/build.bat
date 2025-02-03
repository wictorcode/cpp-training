@echo off
::======================================================
:: SETTINGS
::======================================================
set executable_name=program
::======================================================
:: COMPILATION
::======================================================
echo Compiling...

:: Loop over all .cpp files in the src folder recursively
:: for (/R to say it's recursive and pass the base folder to it aka ./src) every %%f (file) that respects the (condition) (being a .cpp file)
:: compile it into an object file inside of .\build\ 
for /R .\src %%f in (*.cpp) do (
    g++ -c "%%f" -o ".\build\%%~nf.o"
)


:: Loop over all .cpp files in the src/engine folder

:: Link all object files into the final executable
g++ .\build\*.o -o .\out\%executable_name%.exe

echo Compilation finished!

::======================================================
:: USER INPUT & RUN PROGRAM
::======================================================
set /p userChoice=Run? [y] 

if /i "%userChoice%"=="y"  (
    echo :::::::::::::::::::::::::::::::::::::::::::::
    echo :::::::::::::::::: RUNNING ::::::::::::::::::
    echo ::::::::::::::::::::::::::::::::::::::::::::: 
    .\out\%executable_name%.exe
    exit
)
