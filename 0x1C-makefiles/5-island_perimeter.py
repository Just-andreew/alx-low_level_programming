#!/usr/bin/python3
"""Island interpreter perimeter"""

"""
    Calculate the perimeter of the island described in grid.
    Args:
        grid (list): A list of lists of integers where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            actual_pos = grid[row][col]
            if actual_pos == 1:
                if row - 1 == -1 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row + 1 == len(grid) or grid[row + 1][col] == 0:
                    perimeter += 1
                if col - 1 == -1 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col + 1 == len(grid[row]) or grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
