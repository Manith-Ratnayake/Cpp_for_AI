#define 

#include <vector>
#include <stdio.h>




class Data {

  std::vector<uint8_t> *featureVector;
  uint8_t label;
  int enum_label;

  public:
  data();
  ~data();
  void set_feature_vector(std::vector<uint8_t> *);
  void append_to_feature_vector(uint8_t);
  void set_enumerated_label(int);
  
  int get_feature_vector_size();
  uint8_t get_label();
  uint8_t get_enumerated_label();

  std::vector<uint8_t> *get_feature_vector();


  

}
