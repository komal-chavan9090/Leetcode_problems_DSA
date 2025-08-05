class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        curr_bin = 0
        res = []

        for num in nums:
            curr_bin = (curr_bin << 1) | num  # Shift left and add the current bit
            res.append(curr_bin % 5 == 0)  # Check divisibility by 5

        return res