<?php


//https://leetcode.com/problems/length-of-last-word/description/
// Solved in O(n) time complexity and handled all the test cases using this if condition.

function lengthOfLastWord($s)
{

    $words = explode(" ", $s);
    $n = count($words);
    for ($i = $n - 1; $i >= 0; $i--) {
        if ($words[$i] !== "") {
            return strlen($words[$i]);
        }
    }
}


echo lengthOfLastWord("   fly me   to   the moon  ");
