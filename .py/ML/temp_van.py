import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import matplotlib

from sklearn.datasets import fetch_mldata
mnist = fetch_mldata('MNIST original')

X = mnist.data
y = mnist.target

some_digit = X[19000]   
some_digit_image = some_digit.reshape(28, 28)

plt.imshow(some_digit_image, cmap = matplotlib.cm.binary)
plt.show()

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.2, random_state = 0)

from sklearn.tree import DecisionTreeClassifier
dtf = DecisionTreeClassifier(max_depth = 10)
dtf.fit(X_train, y_train)

dtf.score(X_train, y_train)
dtf.score(X_test, y_test)
dtf.score(X, y)


dtf.predict(X[[30000, 14000, 19000], 0:784])












