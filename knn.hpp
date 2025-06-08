#define _KNN.H 

#include <vector>
#include <data.h>

class knn{

  int k;
  std::vector<data *> *neighbors;
  std::vector<data *> *training_data;
  std::vector<data *> *validation_data;
  std::vector<data *> *test_data;

  public:
  knn(int);
  knn();
  ~knn();

  void find_knearest(data *query_point);
  void set_trainig_data(std::vector<data *> *vect)
  void test_data(std::vector<data *> *vec)
  void validation_data(std::vector <data *> vec1)
  void set_k(int val);


  
}
