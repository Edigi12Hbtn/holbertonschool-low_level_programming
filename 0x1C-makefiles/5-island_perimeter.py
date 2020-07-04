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

    for row in range(1, rows - 1):
        for col in range(1, cols - 1):
            perimeter += grid[row][col] * (4 - grid[row - 1][col] -
                                           grid[row + 1][col] -
                                           grid[row][col - 1] -
                                           grid[row][col + 1])

    return perimeter
