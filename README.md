# Model-Driven Architecture Bank Accounts
## CS 586 Software System Architecture
#### Jiaqi Yan, A20321362 
#### Email: jyan31@hawk.iit.edu

This project is a C++ implementation of 2 bank accounts using MDA architectural pattern.
The project is developed under `CLion` and `Vim`.
To make it be able to compile under various OS platform, I choose to use `CMake`.
The `CMakeList.txt` file is used to generate Makefile.
There are 3 major directory.
Class declaration files (header files) are in `include/`; implementation of all classes are in .cpp files under `src/` directory.
Built binary executable are in `build/`, which also contains generated `Makefile`.
There is a "CS 586 Project Report.pptx" file in `doc/`, which is the report submitted as hard-copy.

There are 5 files under `include/`: Accounts.hpp, AbstractFactory.hpp, Actions.hpp, ModelDrivenArch.hpp, DataStore.hpp.
Correspondingly, there are 5 files under `src/`: Accounts.cpp, AbstractFactory.cpp, Actions.cpp, ModelDrivenArch.cpp, main.cpp.
Source code are presented in pair of (`xxxx.hpp`, `xxxx.cpp`).

To rebuild the project, simply use the following commands:

```bash
mkdir build		
cd build		# change to build directory
cmake ..		# generate build scripts
make 			# complie, link and build executable main
```

To run the project, use `./main`. As the program begins, you should first choose which bank account you want to run.
Then you can follow the prompted manual and choose operation by selecting operation's index number.
If an operation needs parameter(s), you will input each of them.
Enter `q` whenever you want to quit.

