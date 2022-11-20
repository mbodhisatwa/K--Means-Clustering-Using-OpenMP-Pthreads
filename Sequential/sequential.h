#ifndef SEQUENTIAL_H
#define SEQUENTIAL_H

#include <malloc.h>

void kmeans_sequential(int N,
					int K,
					int* data_points,
					int** data_point_cluster,
					float** centroids,
					int* num_iterations
					);

#endif
