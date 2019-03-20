clear

#inc/*.hpp

g++ -std=c++11 -pthread src/*.cpp inc/*.hpp engine/*.hpp engine/*/*.cpp -Ilib/SFML-2.5.1/include -o bin/app -Llib/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system

#-Wl,-rpath=$ORIGIN/lib/SFML-2.5.1/lib
#cd obj

#export LD_LIBRARY_PATH=../lib/SFML-2.5.1/lib && ./run
#./run

cd ..
