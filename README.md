# Incubyte_Assignment

## Problem Statement
You will be given the initial starting point (x, y, z) of the spacecraft and the direction it is facing (N, S, E, W, Up, Down). The spacecraft receives a character array of commands, and you are required to implement the following functionalities:

1. move the spacecraft forward/backward (f, b): The spacecraft moves one step forward or backward based on its current direction.
2. Turn the spacecraft left/right (l, r): The spacecraft rotates 90 degrees to the left or right, changing its facing direction.
3. Turn the spacecraft up/down (u, d): The spacecraft changes its angle, rotating upwards or downwards.

## Test Cases
1. Commands: "F"</br>
    Expected Final Position: (0, 1, 0)</br>
    Expected Final Direction: N </br>
    1. "F": Move forward -> Current Position: (0, 1, 0), Current Direction: N

2. Commands: "FRUBL"</br>
    Expected Final Position: (0, 1, -1)</br>
    Expected Final Direction: N </br>
    1. "F": Move forward -> Current Position: (0, 1, 0), Current Direction: N
    2. "R": Turn right -> Current Position: (0, 1, 0), Current Direction: E
    3. "U": Move up -> Current Position: (0, 1, 0), Current Direction: U
    4. "B": Move backward -> Current Position: (0, 1, -1), Current Direction: U
    5. "L": Turn left -> Current Position: (0, 1, -1), Current Direction: N

3. Commands: "FFRBLUD"</br>
    Expected Final Position: (-1, 2, 0)</br>
    Expected Final Direction: N </br>
    1. "F": Move forward -> Current Position: (0, 1, 0), Current Direction: N
    2. "F": Move forward -> Current Position: (0, 2, 0), Current Direction: N
    3. "R": Turn right -> Current Position: (0, 2, 0), Current Direction: E
    4. "B": Move backward -> Current Position: (-1, 2, 0), Current Direction: E
    5. "L": Turn left -> Current Position: (-1, 2, 0), Current Direction: N
    6. "U": Turn up -> Current Position: (-1, 2, 0), Current Direction: U
    7. "D": Turn down -> Current Position: (-1, 2, 0), Current Direction: N

4. Commands: "LRRFB"</br>
    Expected Final Position: (0, 0, 0)</br>
    Expected Final Direction: E </br>
    1. "L": Turn left -> Current Position: (0, 0, 0), Current Direction: W
    2. "R": Turn right -> Current Position: (0, 0, 0), Current Direction: N
    3. "R": Turn right -> Current Position: (0, 0, 0), Current Direction: E
    4. "F": Move forward -> Current Position: (1, 0, 0), Current Direction: E  
    5. "B": Move backward -> Current Position: (0, 0, 0), Current Direction: E

5. Commands: "UULBBBRDD"</br>
    Expected Final Position: (-3, 0, 0)</br>
    Expected Final Direction: N </br>
    1. "U": Turn up -> Current Position: (0, 0, 0), Current Direction: U
    2. "R": Turn up -> Current Position: (0, 0, 0), Current Direction: S
    3. "R": Turn left -> Current Position: (0, 0, 0), Current Direction: E
    4. "B": Move backward -> Current Position: (-1, 0, 0), Current Direction: E
    5. "B": Move backward -> Current Position: (-2, 0, 0), Current Direction: E
    6. "B": Move backward -> Current Position: (-3, 0, 0), Current Direction: E
    7. "R": Turn right -> Current Position: (-3, 0, 0), Current Direction: S
    8. "D": Turn down -> Current Position: (-3, 0, 0), Current Direction: D
    9. "D": Turn down -> Current Position: (-3, 0, 0), Current Direction: N
   
6. Commands: "BBBUULR"</br>
    Expected Final Position: (0, -3, 0)</br>
    Expected Final Direction: S </br>
    1. "B": Move backward -> Current Position: (0, -1, 0), Current Direction: N
    2. "B": Move backward -> Current Position: (0, -2, 0), Current Direction: N
    3. "B": Move backward -> Current Position: (0, -3, 0), Current Direction: N
    4. "U": Turn up -> Current Position: (0, -3, 0), Current Direction: U
    5. "U": Turn up -> Current Position: (0, -3, 0), Current Direction: S
    6. "L": Turn left -> Current Position: (0, -3, 0), Current Direction: E
    7. "R": Turn right -> Current Position: (0, -3, 0), Current Direction: S
