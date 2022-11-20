#include "io.h"
#include "sequential.h"

#include <stdlib.h>
#include <time.h>

/*
	Arguments:
		arg1: K (no of clusters)
		arg2: input filename (data points)
		arg3: output filename (data points & cluster)
		arg4: output filename (centroids of each iteration)
*/

int main(int argc, char const *argv[])
{
	if (argc < 5){
		printf("\nLess Arguments\n");
		return 0;
	}

	if (argc > 5){
		printf("\nToo many Arguments\n");
		return 0;
	}

	int N;					//no. of data points (input)
	int K;					//no. of clusters to be formed (input)
	int* data_points;		//data points (input)
	int* cluster_points;	//clustered data points (to be computed)
	float* centroids;			//centroids of each iteration (to be computed)
	int num_iterations;    //no of iterations performed by algo (to be computed)

	clock_t start_time, end_time;
	double computation_time;

	K = atoi(argv[1]);

	dataset_in (argv[2], &N, &data_points);

	start_time = clock();

	kmeans_sequential(N, K, data_points, &cluster_points, &centroids, &num_iterations);
	end_time = clock();

	clusters_out (argv[3], N, cluster_points);
	centroids_out (argv[4], K, num_iterations, centroids);

	computation_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
	printf("Time Taken: %lf \n", computation_time);
	
	return 0;
}
