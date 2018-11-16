#!/usr/bin/python3
"""island_perimeter module
defines function island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    up, left, right, down = 0, 0, len(grid[0]), len(grid)
    p = 0
    for i in range(up + 1, down - 1):
        for j in range(left + 1, right - 1):
            if grid[i][j] == 1:
                p += 1 if not grid[i - 1][j] else 0
                p += 1 if not grid[i][j - 1] else 0
                p += 1 if not grid[i][j + 1] else 0
                p += 1 if not grid[i + 1][j] else 0
    return p
