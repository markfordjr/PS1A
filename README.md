PS1: LFSR / PhotoMagic
Contact
Name: Marquzes Ford

Section: 202

Time to Complete: <7 days

Description
Explain what the project does.

This project simulates a Fibonacci Linear Feedback Shift Register (LFSR) to generate pseudorandom sequences. It shifts bits left and uses XOR logic with specific tap positions to generate new bits, updating the seed with each step.

Features
Describe the representation you used and why you did things that way as well as any other interesting design decisions you made.

I used a binary string representation for the LFSR since it's straightforward for bit manipulation. The XOR logic checks positions 2, 3, and 5 with the MSB to generate new bits. I chose this method because it's simple and works for simulating a basic LFSR. One interesting decision was how I handled the tap positions, which differed slightly from the assignment but still met the same goal.

Part a
Part b
Issues
What doesn't work. Be honest. You might be penalized if you claim something works and it doesn't.

Some bits in the LFSR weren't shifting correctly at first, likely due to misunderstanding how the tap positions worked. There were also a few struggles with handling edge cases where the seed ended in consecutive zeros.

Tests
Describe what is being tested in your Boost unit tests.

The Boost unit tests cover individual step() operations and larger generate() calls. I tested different seeds to check the output but found it tricky to ensure everything aligned with the expected bit sequence.

Extra Credit
Anything special you did. This is required to earn bonus points.

N/A

Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.

https://www.eetimes.com/tutorial-linear-feedback-shift-registers-lfsrs-part-1/

Credits
List where you got any images or other resources.
