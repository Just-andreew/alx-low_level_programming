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
        for col in range(len(grid[row]):
            if grid[row][col] == 1:
                perimeter += 4  # Start with 4 sides.

                # Check the neighbors (left, right, up, and down) and reduce the perimeter for each adjacent land.
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 1
                if row < len(grid) - 1 and grid[row + 1][col] == 1:
                    perimeter -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 1
                if col < len(grid[row]) - 1 and grid[row][col + 1] == 1:
                    perimeter -= 1

    return perimeter
