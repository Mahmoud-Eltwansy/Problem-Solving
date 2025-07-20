<?php

// https://leetcode.com/problems/longest-common-prefix/
// Solved in O(n*m) , n : nubmer of strings in the array , m : is the length of the shortest string

function longestCommonPrefix($strs)
{
    $ans = "";

    for ($i = 0; $i < strlen($strs[0]); $i++) {
        $char = $strs[0][$i];
        for ($j = 1; $j < sizeof($strs); $j++) {
            if ($char != $strs[$j][$i]) {
                return $ans;
            }
        }
        $ans .= $char;
    }
    return $ans;
}


$strs = ["flower", "flow", "flight"];
echo longestCommonPrefix($strs);