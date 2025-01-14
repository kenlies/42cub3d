# cub3d

## Rays, rays, rays...

![](media/cub3d.gif)

This is a graphics programming project where the goal is to build a simplified 3D game engine using **raycasting**, inspired by early games like **Wolfenstein 3D**. The primary objective is to render a 3D view from a 2D map, using the **MLX** graphics library.

 - Simulates a 3D perspective by casting rays from the player’s position
 - Detects walls and renders them with appropriate textures and heights
 - Uses a simple map file to define walls ```1```, empty space ```0```, and the player's start position ```N```, ```S```, ```E```, ```W``` (which way they are facing at boot)
 - Implements player controls for moving and rotating within the environment
 - Applys textures to walls and handles floor/ceiling coloring
 - Validates map files and ensures proper resource management

Combines math, graphics, and low-level programming to offer an exciting exercise to building game engines!

This was my ninth project at **Hive Helsinki**, where I gained a deep understanding of how raycasting algorithms work, including the mathematical principles behind simulating a 3D perspective in a 2D environment.
I actually completed this task in late **2023**, but I wanted to redo the commit history and make some minor changes.

## 📖 Topics
  - Raycasting
  - 2D graphics programming
  - 3D graphics simulation
  - Trigonometry
  - File parsing
  - Memory management
  - Error handling

## 🛠️ Langs/Tools
  - C
  - Makefile
  - MLX graphics library

## 🦉 Getting started

  1. ```git clone https://github.com/kenlies/42cub3d```
  2. ```cd 42cub3d```
  3. ```make```
  4. ```./cub3D map1.cub``` for your choice of map

## 💸 Bonus section

A punch of bonus features could have been added, in the end, I only decided to add collision to the walls, which wasn't mandatory.

## 🔨 To improve

Could've added more features/bonuses such as doors, enemies, turn via mouse, etc.
