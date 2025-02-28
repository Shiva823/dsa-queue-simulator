# Traffic Junction Simulation

This project simulates traffic movement at an intersection using C. The simulation models vehicle movement, traffic signals, and congestion patterns.

![Traffic Simulation Demo](demo.gif)

## Prerequisites

To run this simulation, you need:

- GCC or G++ compiler
- SDL2 library
- MinGW (for Windows)

## Project Structure

```
Traffic-Simulation/
├── include/          # Header files
├── lib/             # Library files
├── src/             # Source files
│   ├── main.c             # Main entry point
│   ├── traffic_simulation.h    # Header definitions
│   ├── traffic_simulation.c    # Implementation
│   └── generator.c       # Vehicle generator
├── bin/             # Executable output
└── README.md
```

## Building the Project

1. Compile both programs:

For the vehicle generator:
```bash
g++ -o bin/generator src/generator.c src/traffic_simulation.c  -Iinclude -Llib -lmingw32 -lSDL2main -lSDL2
```
For the main simulation:
```bash
g++ -Iinclude -Llib -o bin/main.exe src/main.c src/traffic_simulation.c -lmingw32 -lSDL2main -lSDL2
```

## Running the Simulation

1. First, start the vehicle generator:
```bash
./bin/generator.exe
```

2. In a separate terminal, start the main simulation:
```bash
./bin/main.exe
```

3. Watch as vehicles spawn and navigate through the intersection
4. Use the close button (X) to exit the simulation

## How It Works

### Program Components

The simulation consists of two separate programs:

1. **Generator (generator.exe)**: 
   - Generates vehicles with random properties
   - Writes vehicle data to a file for the main program to read
   - Spawns new vehicles every 500 milliseconds

2. **Main Simulation (main.exe)**:
   - Reads vehicle data from the generator
   - Renders the intersection and vehicles
   - Manages traffic flow and vehicle movement
   - Handles traffic light cycles

### Vehicle Types
- Blue: Regular cars
- Red: Ambulances
- Dark Blue: Police cars
- Orange-Red: Fire trucks


### Code Structure

- `main.c`: Program entry point and main simulation loop
- `traffic_simulation.h`: Header file containing structs and function declarations
- `traffic_simulation.c`: Implementation of traffic simulation logic
- `generator.c`: Vehicle generation logic


## Controls

- The simulation runs automatically without user input
- Close the window to exit the program


## References

1. SDL2 Documentation: [https://wiki.libsdl.org/](https://wiki.libsdl.org/)
2. Queue Data Structure: Introduction to Algorithms, CLRS (Cormen, Leiserson, Rivest, Stein)
3. Traffic Flow Theory: Highway Capacity Manual (Transportation Research Board)
4. Intersection Management Algorithms: [IEEE Intelligent Transportation Systems](https://www.computer.org/csdl/proceedings-article/ic3/2017/08284361/12OmNx0RIRe)

## Technical Documentation

For detailed technical documentation about the implementation:

1. **Vehicle Generation**: Vehicles are spawned at regular intervals with randomized properties.
2. **Traffic Light System**: Uses a timer-based system with priority adjustments based on queue lengths and emergency vehicles.
3. **Collision Avoidance**: Vehicles maintain safe distances and respond to traffic signals and other vehicles.
4. **Queue Management**: Each lane maintains its own queue, with priority handling for emergency vehicles.
5. **Red Light Skipping Logic**: The `canVehicleSkipLight()` function determines when a non-emergency vehicle can proceed through a red light based on:
   - Wait time at the intersection
   - Type of turn being made
   - Presence of other vehicles

## Acknowledgments

- SDL2 development team
- Traffic simulation research community
