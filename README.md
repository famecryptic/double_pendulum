# Double Pendulum
A double pendulum is a pendulum with another pendulum attached to its end. This code simulates the temporal evolution of the
double pendulum by solving a set of coupled ordinary differential equations (using the Runge Kutta method) with given user specified
initial conditions. The rendering is done using the SDL2 library. 

## How To Install & Run (Linux)

1. Install the C++ compiler g++ using the following command:
```bash
sudo apt-get install g++
```

2. To check which version is installed run the following command:
```bash
g++ --version
```

3. Install the SDL2 library using the following command:
```bash
sudo apt install libsdl2-image-dev
```

4. Clone the remote repository to your local machine using the following command:
```bash
git clone https://github.com/frederic-hallein/double-pendulum
```
5. To compile the project, go inside the `/double_pendulum` directory and run the following command: 
```bash
make all
``` 
This should create a `main` executable file in the same directory. 

6. Run the executable by using the following command: 
```bash
./main
```

7. Set up the initial conditions of the double pendulum or type `d` to run the default values. 

## Screencast

[Screencast from 2024-08-06 14-48-29.webm](https://github.com/user-attachments/assets/11727669-aa58-4828-b112-ed4d8f248b12)
