#!/usr/bin/python3
"""Module for island_perimeter function."""


def island_perimeter(grid):
    """
    Function that returns the perimeter of
     the island described in grid. We are
     supossing a minimun size of 3x3.
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for row in range(0, rows):
        for col in range(0, cols):
            if grid[row][col] == 0:
                if row - 1 >= 0:
                    if grid[row - 1][col]:
                        perimeter += 1
                if col + 1 < cols:
                    if grid[row][col + 1]:
                        perimeter += 1
                if row + 1 < rows:
                    if grid[row + 1][col]:
                        perimeter += 1
                if col - 1 >= 0:
                    if grid[row][col - 1]:
                        perimeter += 1

    return perimeter
