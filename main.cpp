#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>

using namespace std;

struct Node
{
    std::shared_ptr<int> keys{nullptr}; // list of keys
    int t; // minimum degree 
    std::vector<std::unique_ptr<Node>> C;
    
};





int main(int argc, char const *argv[])
{
    std::cout << "hello world!" << std::endl;
    return 0;
}
