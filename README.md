C How to Program 9e, Paul Deitel, Harvey Deitel

Chapter 5: Functions

5.54 (The Tortoise and the Hare Race) In this problem, you’ll recreate one of the truly
great moments in history—the classic race of the tortoise and the hare. You’ll use random-
number generation to develop a simulation of this memorable event.

Our contenders begin the race at “square 1” of 70 squares. Each square represents
a possible position along the racecourse. The finish line is at square 70. The
first contender to reach or pass square 70 is rewarded with a pail of fresh carrots and
lettuce. The course weaves its way up a slippery mountainside, so occasionally, the
contenders lose ground.

There’s a clock that ticks once per second. With each tick, adjust the animals’
positions according to the following rules:

Tortoise:

Fast plod - 50% - 3 squares forward

Slip - 20% - 6 squares backward

Slow plod - 30% - 1 square forward

Hare:

Sleep - 20% - No move at all

Big hop - 20% - 9 squares forward

Big slip - 10% - 12 squares backward

Small hop - 30% - 1 square forward

Small slip - 20% - 2 squares backward

Use variables to keep track of the animals’ positions (i.e., position numbers are
1–70). Start each animal at position 1 (i.e., the “starting gate”). If an animal slips left
before square 1, move the animal back to square 1. If an animal moves past square
70, move the animal back to square 80.

Generate the percentages in the preceding table by producing a random integer,
x, in the range 1 ≤ x ≤ 10. For the tortoise, perform a “fast plod” when 1 ≤ x ≤ 5,
a “slip” when 6 ≤ x ≤ 7, or a “slow plod” when 8 ≤ x ≤ 10. Use a similar technique
to move the hare.

Begin the race by printing

ON YOUR MARK, GET SET

BANG !!!!

AND THEY'RE OFF !!!!

Then, for each tick (i.e., each iteration of a loop), print a 70-position line showing
the letter T in the tortoise’s position and the letter H in the hare’s position. Occasionally,
the contenders will land on the same square. In this case, the tortoise bites the
hare, and your program should print "OUCH!!!" beginning at that position. All print
positions other than the T, the H, or the OUCH!!! (in case of a tie) should be blank.

After printing each line, test whether either animal has reached or passed square
70. If so, then print the winner and terminate the simulation. If the tortoise wins,
print "TORTOISE WINS!!! YAY!!!" If the hare wins, print "Hare wins. Yuch." If both
animals win on the same tick of the clock, you may want to favor the turtle (the
“underdog”), or you may want to print "It's a tie". If neither animal wins, perform
the loop again to simulate the next tick of the clock. When you’re ready to run
your program, assemble a group of fans to watch the race. You’ll be amazed at how
involved your audience gets!
