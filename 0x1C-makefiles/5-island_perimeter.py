#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """
    A function that calculates
    the area of an island (grid)
    a 2 * 2 matrix
    """
    area = 0
    for i in range(1, len(grid)-1):
        area += sum(grid[i][1:-1])*2
    return area+2
