#ifndef OMP_H
#define OMP_H

#include <malloc.h>


void kmeans_omp(int num_threads,
				int N,
				int K,
				int* data_points,
				int** data_point_cluster,
				float** centroids,
				int* num_iterations
				);

#endif
