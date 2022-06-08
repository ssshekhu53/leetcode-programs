I have taken reference from the discussion.
​
Suppose you have alternating bits like,
0101010...10101 (n)
​
Shifting all bits to the right gives,
0010101...01010 (n >> 1)
​
Adding the two produces 1 in all bits.
0101010...10101 (n)
0010101...01010 (n >> 1)
0111111...11111 (n + n >> 1)
​
You can verify if n has alternating bits by checking if (n + n >> 1) has 1s in all bits.
Simply check if the AND result of its increment and itself yields zero.
​
0111111...11111 (all 1s)
1000000...00000 (increment)
0000000...00000 (AND result)