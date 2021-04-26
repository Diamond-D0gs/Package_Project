# compile program
clang++ -Wall -std=c++17 src/main.cpp src/miscstuff.cpp src/package.cpp src/overnight.cpp src/twoday.cpp -o package.exe -I include
# execute program
./package.exe