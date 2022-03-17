#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """
    count = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            try:
                top = grid[row - 1][col]
            except ValueError:
                top = 0
            try:
                bot = grid[row + 1][col]
            except ValueError:
                bot = 0
            try:
                left = grid[row][col - 1]
            except ValueError:
                left = 0
            try:
                right = grid[row][col + 1]
            except ValueError:
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
