import mymod1
import numpy as np

if __name__=='__main__':
    a = np.array([1, 2, 3], dtype=np.float32)
    mymod1.mult_two(a)
    print(a)
