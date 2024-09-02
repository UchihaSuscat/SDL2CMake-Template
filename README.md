ADD  .cpp FILES IN src 
ADD .h FILES IN include

ONLY WORKS ON WSL2 UBUNTU (ALSO WORKS ON UBUNTU)

STEPS TO SETUP
(UBUNTU BASED DISTROS)
sudo apt install cmake libsdl2-dev libsdl2-image-dev
git clone https://github.com/UchihaSuscat/SDL2CMake-Template.git
cd SDL2CMake-Template
mkdir build
cmake ..
make
./main

if using vc Code 
install CMake and CMake Tools extensions
click build, and then the launch button 