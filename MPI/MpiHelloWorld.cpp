#include <iostream>
#include <mpi.h>

int main(int argc, char* argv[]){
    MPI::Init(argc, argv); // specify the number of processes and where via command-line

    int num_procs = MPI::COMM_WORLD.Get_size();
    int rank = MPI::COMM_WORLD.Get_rank();
    std::cout << "Hello world from process: " << rank << " of " << num_procs << '\n';

    MPI::Finalize();
    return 0;
}
