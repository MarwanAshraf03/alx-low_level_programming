#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """
    A function that calculates
    the perimeter of an island (grid)
    a 2 * 2 matrix
    """
    # grid = grid[1:len(grid)-1]
    perimeter = 0
    add = 0
    for i in range(1, len(grid)-1):
        for j in range(1, len(grid[i])-1):
            add = grid[i][j]
            if add == 1:
                add *= 4
                if grid[i][j-1] == 1:
                    add -= 1
                if grid[i-1][j] == 1:
                    add -= 1
                if grid[i][j+1] == 1:
                    add -= 1
                if grid[i+1][j] == 1:
                    add -= 1
            perimeter += add
    return perimeter
