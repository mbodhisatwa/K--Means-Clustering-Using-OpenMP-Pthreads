
- **Sequential**
  - cd into Sequential folder
  - `g++ main_sequential.c io.c Kmeans-Sequential.cpp -fopenmp -o seq.out`
  - `./seq.out 4 ./datasets/dataset_50000.txt b.txt c.txt`
  - 4 is for the number of clusters. Can be changed.
  - To Visualize the results :- `python3 visualise.py b.txt`
    
- **OpenMP**
  - cd into OpenMP folder
  - `g++ main_omp.c io.c Kmeans-OpenMP.cpp -fopenmp -o omp.out`
  - `./omp.out 4 2 ./datasets/dataset_50000.txt b.txt c.txt`
  - 4 is for the number of clusters and 2 is for the number of threads. Both can be changed.
  - To Visualize the results :- `python3 visualise.py b.txt`
  
- **P-Threads**
  - cd into P-Threads folder
  - `g++ io.c main_pthread.c Kmeans-Pthreads.cpp -o ptry.out -fopenmp`
  - `./ptry.out 4 2 ./datasets/dataset_50000.txt b.txt c.txt`
  - 4 is for the number of clusters and 2 is for the number of threads. Both can be changed.
  - To Visualize the results :- `python3 visualise.py b.txt`
  

