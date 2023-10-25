#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter
island_perimeter2 = __import__('tst').island_perimeter

if __name__ == "__main__":

    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    prm = island_perimeter(grid)
    prm2 = island_perimeter2(grid)
    print(50 * "-")
    print(prm)
    print(prm2)