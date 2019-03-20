clear

#inc/*.hpp

g++ src/*.cpp inc/*.hpp -o bin/app

#-Wl,-rpath=$ORIGIN/lib/SFML-2.5.1/lib
#cd obj

#export LD_LIBRARY_PATH=../lib/SFML-2.5.1/lib && ./run
#./run

cd ..
