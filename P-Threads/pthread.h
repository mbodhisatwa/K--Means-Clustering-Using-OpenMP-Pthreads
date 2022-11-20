#ifndef PTHREAD_H
#define PTHREAD_H

#include <malloc.h>


void kmeans_pthread(int num_threads,
					int N,
					int K,
					int* data_points,
					int** data_point_cluster,
					float** centroids,
					int* num_iterations
					);

#endif
