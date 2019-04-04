import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

dataset = pd.read_csv('dataset/DemographicData.csv') 
X = dataset.iloc[:, 2].values
y = dataset.iloc[:, 3].values
z = dataset.iloc[:, 4].values

from sklearn.preprocessing import LabelEncoder
l = LabelEncoder()
z = l.fit_transform(z)

l.classes

plt.scatter(X[z == 0], y[z == 0], c = "r", label = "High Income")
plt.scatter(X[z == 1], y[z == 1], c = "g", label = "Low Income")
plt.scatter(X[z == 2], y[z == 2], c = "yellow", label = "Lower Middle Income")
plt.scatter(X[z == 3], y[z == 3], c = "b", label = "Upper Middle Income")
plt.xlabel('Birth Rate')
plt.ylabel('Internet Users')
plt.legend()
plt.title('A case study to describe the relationship between Birth Rate and Internet Users')
plt.show()



my_list = list(range(10000000))
my_arr = np.array(range(10000000))

%time for i in range(10):my_list2 = my_list*2
%time for i in range(10):my_arr2 = my_arr*2

x = np.arange(-10,10,0.01)
y = np.power(np.e, -x)/(1+np.power(np.e,-x))

plt.plot(x,y)
plt.show()