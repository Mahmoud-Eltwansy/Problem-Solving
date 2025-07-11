<?php

// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

// This is an O(n) solution in PHP
function replaceElements($arr)
{

    $maxRight = -1;

    $n = sizeof($arr);

    for ($i = $n - 1; $i >= 0; $i--) {
        $current = $arr[$i];
        $arr[$i] = $maxRight;

        if ($current > $maxRight) {
            $maxRight = $current;
        }
    }
    return $arr;
}

var_dump(replaceElements([17, 18, 5, 4, 6, 1]));
