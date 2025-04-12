typedef array<uint8_t, 18> sumfreq_t;

constexpr sumfreq_t precalc() noexcept __attribute__((hot)) {
    sumfreq_t r = {};
    for (uint8_t i = 1; i < 100; i++)
        r[i/10u+i%10u-1]++;
    return r;
}

class Solution {
private:
    static constexpr sumfreq_t FREQ = precalc();

public:
    static int countSymmetricIntegers(const uint low, const uint high) {
        // 2-digit
        uint t = min(high, 99u) / 11 - min(low - 1, 99u) / 11;
        // 4-digit
        if (high > 1000) {
            const uint l4 = max(low, 1000u);
            const uint8_t lh = l4 / 100, ll = l4 % 100, hh = high / 100, hl = high % 100;
            const uint8_t slh = lh / 10u + lh % 10u;
            if (lh == hh) {
                for (uint8_t i = ll; i <= hl; i++)
                    t += i / 10u + i % 10u == slh;
            } else {
                const uint8_t shh = hh / 10u + hh % 10u;
                for (uint8_t i = ll; i < 100; i++)
                    t += i / 10u + i % 10u == slh;
                for (uint8_t i = 1; i <= hl; i++)
                    t += i / 10u + i % 10u == shh;
                for (uint8_t j = lh + 1; j < hh; j++)
                    t += FREQ[j / 10u + j % 10u - 1];
            }
        }
        return t;
    }
};