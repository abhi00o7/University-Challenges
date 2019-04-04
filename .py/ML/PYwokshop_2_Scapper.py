import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

from sklearn.datasets import fetch_mldata
dataset = fetch_mldata('MNIST original')

X = dataset.data
Y = dataset.target

some_digit = X[12345]
some_digit_image = some_digit.reshape(28,28)

plt.imshow(some_digit_image)
plt.show()

form sklearn.model_selection import train_test

from sklearn.tree import DecisionTreeClassifier
dtf = DecisionTreeClassifier(max_depth = 10)

dtf.fit(X_train,Y_train)

dtf.score()