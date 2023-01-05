""" Advent of Code Day 3 Part 1"""
import os
os.chdir("/Users/noahduran/Desktop/Advent of Code/Day 3")

"""Importing ascii lowercase and uppercase to use when comparing compartments"""
from string import ascii_lowercase, ascii_uppercase
key = ascii_lowercase + ascii_uppercase

with open("rucksacks.txt") as f:
    line = f.read().strip()

priority = 0

"""Set apart rucksacks based on each new line"""
compartments = line.split("\n")
for sides in compartments:
    a = len(sides)
    sideOne = sides[:(a//2)] #side 1 checking from 0 to half the length
    sideTwo = sides[(a//2):] #side 2 checking from half the length to the end

    for i, item in enumerate(key):
        if item in sideOne and item in sideTwo:
            priority += key.index(item) + 1 #add one on the end for the key starts from 0

print(priority)
