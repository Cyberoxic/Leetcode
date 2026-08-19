
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> ret{ "1" };
        ret.reserve(n++);
        for (size_t i = 2; i != n; ++i) {
            bool by3{ !(i % 3) }, by5{ !(i % 5) };
            if (by3 && by5) {
                ret.emplace_back("FizzBuzz");
            }
            else if (by3) {
                ret.emplace_back("Fizz");
            }
            else if (by5) {
                ret.emplace_back("Buzz");
            }
            else {
                std::string& str = ret.emplace_back();
                size_t j = i;
                do {
                    str.push_back('0' + j % 10);
                } while (j /= 10);
                std::reverse(str.begin(), str.end());
            }
        }
        return ret;
    }
};