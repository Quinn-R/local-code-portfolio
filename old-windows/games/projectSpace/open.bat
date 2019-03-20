@echo off

cd Source

g++ -std=c++11 GameCode.cpp Common.h FileWR.h -o Game

pause