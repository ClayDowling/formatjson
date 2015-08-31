#include <cstdlib>
#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>

#include "cJSON.h"

using namespace std;

string get_source(istream& in)
{
    return (string(istreambuf_iterator<char>(in), istreambuf_iterator<char>()));
}

int main(int argc, char **argv)
{
    string raw;

    if (argc > 1) {
        ifstream srcfile(argv[1]);
        raw = get_source(srcfile);
    }
    else {
        raw = get_source(cin);
    }

    cJSON *json = cJSON_Parse(raw.c_str());

    char *out = cJSON_Print(json);

    cout << out << endl;

}
