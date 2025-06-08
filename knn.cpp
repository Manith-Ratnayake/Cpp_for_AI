#include <knn.hpp>
#include <cmath>
#include <map>
#include <stdint.h>
#include <data_handler.hpp>

knn::knn(int value){

}

knn::knn(){

}


knn::~knn(){
  
}

void knn::find_knearest(data *query_point){
  
}

void knn::set_trainig_data(std::vector<data *> *vect){
  training_data = vect;
}

void knn::test_data(std::vector<data *> *vec){
  test_data = vect;
}

void knn::validation_data(std::vector <data *> vec1){
  validation_data = vect;
}

void knn::set_k(int val){
  k = val;
}

int predict();

double knn::calculate_distance(data* query_point, data* input){
  #ifdef EUCLIDEN
  #elif defined MANHATTAN
  #endif 
}
double knn::validate_performance();
double knn::test_performance();

}
