import numpy as np
import random
A = np.mat("4,9,1;9,16,25;36,49,64")
print("Value of matrix A \n",A)
print("\n")
eigen = np.linalg.eigvals(A)
print("Eigen values of Matrix A \n",eigen)
#print(help(np))
print(help(random))
