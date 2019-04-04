
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from random import choice

#code to making the object for the dice predictor
throws = []


for i in range(1000):
    one = choice(range(1,7))
    two = choice(range(1,7))
    total = one + two
    throws.append(total)

plt.hist(throws,bins = 30)
plt.legend()
plt.show()
