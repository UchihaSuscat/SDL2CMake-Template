# Game Setup Guide

## File Structure

- **Source Files:** Place your `.cpp` files in the `src` directory.
- **Header Files:** Place your `.h` files in the `include` directory.

## Compatibility

- **WSL2 Ubuntu**
- **Ubuntu-based Distros**

## Setup Instructions

### For Ubuntu-based Distros

1. **Install Dependencies:**

   ```bash
   sudo apt update
   sudo apt install cmake libsdl2-dev libsdl2-image-dev
   ```

2. **Clone the Repository:**

   ```bash
   git clone https://github.com/UchihaSuscat/SDL2CMake-Template.git
   ```

3. **Build the Project:**

   ```bash
   cd SDL2CMake-Template
   mkdir build
   cd build
   cmake ..
   make
   ```

4. **Run the Application:**

   ```bash
   ./main
   ```

### If Using Visual Studio Code

1. **Install Extensions:**

   - CMake
   - CMake Tools

2. **Build and Launch:**

   - Click on the **Build** button.
   - Then click on the **Launch** button.