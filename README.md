
# cpp-training

Micro projects/training with C++. Nothing really fancy.

  

## List of 'projects' inside this repo

- (WIP) Employee Management Application - Load a CSV, modify information, search, filter, etc...

  

## Building/Running

The projects are built with batch .bat scripts so you need a windows machine to compile with the current setup.
You can also compile it yourself with any other method if needed (if you're on Linux/MacOS)
Some projects are exclusive to Windows since it uses the win32 API.

  

Steps:

1. Each 'project' has its own folder inside of [projects](https://github.com/wictorcode/cpp-training/tree/main/projects)
2. For the program you want to run, open a terminal in the corresponding folder and run `.\build.bat`
3. This will compile the object files into `.\build\` and the .exe program will be generated inside of `.\out\`
4. The batch program will ask if you want to run the program. Press **`y`** to run the program or press any other key to exit.

Specific instructions can be found in the projects' respective folders if needed


## TODO
- Make a global script to build & run any project without changing folders