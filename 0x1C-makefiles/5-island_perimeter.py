#!/usr/bin/python3
"""
    a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
"""

def island_perimeter(grid):
    """ returns the perimeter of island in grid """
    n = len(grid)
    m = len(grid[0])
    ret = 0
    edges = 0

    for i in range(n):
        for j in range(m):
            if grid[i][j] == 1:
                ret += 1
                if j >= 1 and grid[i][j - 1] == 1:
                    edges += 1 
                if i >= 1 and grid[i - 1][j] == 1:
                    edges += 1
    return ((ret << 2) - (edges << 1))




