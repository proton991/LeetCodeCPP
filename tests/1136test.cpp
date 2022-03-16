#include "catch.hpp"
#include "BFS/1136-Parallel-Courses/1136.hpp"

TEST_CASE("1136-Parallel-Courses" "[1136]")
{
    Solution1136 solution;
    vector<vector<int>> input1 = {{1,2}, {2,3}, {3,1}};
    REQUIRE(solution.minimumSemesters(3, input1)==-1);
}