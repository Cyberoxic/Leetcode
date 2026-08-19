static const bool __boost = [] ()
{
    std::cin.tie (nullptr);
    std::cout.tie (nullptr);
    return std::ios_base::sync_with_stdio (false);
}();

// Custom memory pool for dynamic allocation using a pre-allocated buffer
const size_t BUFFER_SIZE = 0x30000000;
alignas (std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void *
operator new (size_t size)
{
    constexpr std::size_t alignment = alignof (std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;
    char *aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;
    return aligned_ptr;
}

void
operator delete (void * /*unused*/, unsigned long /*unused*/) noexcept
{
}
void
operator delete (void * /*unused*/) noexcept
{
}
void
operator delete[] (void * /*unused*/) noexcept
{
}
void
operator delete[] (void * /*unused*/, size_t /*unused*/) noexcept
{
}

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