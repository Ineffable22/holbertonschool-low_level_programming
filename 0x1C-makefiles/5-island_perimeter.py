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
            try:
                top = grid[row - 1][col]
            except:
                top = 0
            try:
                bot = grid[row + 1][col]
            except:
                bot = 0
            try:
                left = grid[row][col - 1]
            except:
                left = 0
            try:
                right = grid[row][col + 1]
            except:
                right = 0
            if top == 0 and grid[row][col] == 1:
                count += 1
            if bot == 0 and grid[row][col] == 1:
                count += 1
            if left == 0 and grid[row][col] == 1:
                count += 1
            if right == 0 and grid[row][col] == 1:
                count += 1
    return count
