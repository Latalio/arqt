#include <string>
#include <regex>

using namespace std;

struct Url {
  string schema;
};


regex _RE_URI(
    "^(?:([a-zA-Z][a-zA-Z0-9+.-]*):)?"
    "(?://([^\\/?#]*))?"
    "([^?#]*)"
    "(?:\?([^#]*))?"
    "(?:#(.*))?$"
);

class HttpUtils
{
private:

public:
    HttpUtils(/* args */);
    ~HttpUtils();

    static void parse_url(string& url) {
        
        smatch m;
        bool found = regex_match(url, m, _RE_URI);
        string scheme = m[1].str();

        

    };
};

HttpUtils::HttpUtils(/* args */)
{
}

HttpUtils::~HttpUtils()
{
}
