#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; - woah


// typedef std::string text_t;
using text_t = std::string; // ezier

int main()
{
        // std::vector<std::pair<std::string, int>> pairlist_t; - hard
        // pairlist_t pairlist_t; - ez

        std::string cool_text_std = "I am the original.";
        text_t cool_text_typedef = "I am the easier version!";

        return 0;
}