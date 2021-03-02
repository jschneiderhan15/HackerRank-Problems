#!/bin/python

import math
import os
import random
import re
import sys

//Class to practice If-Else Statements.

if __name__ == '__main__':
    n = int(raw_input().strip())
if (n % 2 != 0):
    print("Weird")
elif(n % 2 == 0 and n >= 2 and n <= 5):
    print("Not Weird")
elif(n % 2 == 0 and n >= 6 and n <= 20):
    print("Weird")
elif(n % 2 == 0):
    print ("Not Weird")
