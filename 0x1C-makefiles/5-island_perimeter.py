#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """
    count = 0
    max_grid = len(grid) > 100 if len(grid) == 100 else len(grid)
    for row in range(max_grid):
        max_row = len(grid[row]) > 100 \
            if len(grid[row]) == 100 else len(grid[row])
        for col in range(max_row):
            if grid[row][col] == 1:
                top = grid[row - 1][col] if row - 1 != -1 else 0
                bot = grid[row + 1][col] if row + 1 != max_grid else 0
                left = grid[row][col - 1] if col - 1 != -1 else 0
                right = grid[row][col + 1] if col + 1 != max_row else 0
                if top == 0:
                    count += 1
                if bot == 0:
                    count += 1
                if left == 0:
                    count += 1
                if right == 0:
                    count += 1
    return count
