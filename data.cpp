#include <data.hpp>

data::data(){

}

data::~data(){

}

void data::set_feature_vector(std::vector<uint8_t> *){
  feature_vector = vect;
}


void data::spend_to_feature_vector(uint8_t val){
  feature_vector->push_back(val);
}

void data::set_enumerated_label(uint8_t val){
  label = val;
}


void data::set_enumerated_label(int val){
  enum_label = val;
}
  
int data::get_feature_vector_size(){
  return feature_vector -> size();
}

uint8_t data::get_label(){
  return label;
}


uint8_t data::get_enumerated_label(){
  return enum_label; 
}

std::vector<uint8_t> *data::get_feature_vector_size(){
  return feature_vector;
}
