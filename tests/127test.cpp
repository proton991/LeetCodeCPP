#include "catch.hpp"
#include "BFS/127-Word-Ladder/127.hpp"

TEST_CASE("127-Word-Ladder" "[127]")
{
    Solution solution;
    vector<string> input1 = {"hot","dot","dog","lot","log","cog"};
    REQUIRE(solution.ladderLengthBidirectionDFS("hit", "cog", input1)==5);
}