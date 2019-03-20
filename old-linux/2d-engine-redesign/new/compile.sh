clear

clear

clear

g++ -o bin/run src/main.cpp src/common.h src/interact/interact.cpp src/sfml/sfml.cpp src/sfml/sound.cpp src/sfml/events.cpp src/sfml/window.cpp -I -lsfml-graphics -lsfml-window -lsfml-system

cd bin

./run

cd ..
