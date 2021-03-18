
#include <string>
#include <map>

using namespace std;

class BaseRequest {
public:

  virtual void urlopen(
    enum METHOD_E method, 
    string url, 
    map<string, string> &headers) {

  }

  void request_encode_url(map<string, string> &headers) {

      
  }


private:
  map<string, string> headers_;
};