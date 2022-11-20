#ifndef IO_H
#define IO_H

#include <stdio.h>
#include <malloc.h>

void dataset_in (const char* dataset_filename, int* N, int** data_points);

void clusters_out (const char* cluster_filename, int N, int* cluster_points);


void centroids_out (const char* centroid_filename, int K, int num_iterations, float* centroids);

#endif
