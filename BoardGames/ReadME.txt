Lab04
Abdul Wasae & Talha Kiani

Extra Credit and Errors at the bottom

Testing:
Check for badly formated inputs
##########################################
H:\CSE332-LAB04\LAB04\Debug>lab04.exe
Incorrect File Name.
Please enter the correct File Name - 'LAb04.exe' space 'TicTacToe' or 'Gomoku'

##########################################

H:\CSE332-LAB04\LAB04\Debug>lab04.exe Tic
Incorrect File Name.
Please enter the correct File Name - 'LAb04.exe' space 'TicTacToe' or 'Gomoku'

##########################################

H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoki
Incorrect File Name.
Please enter the correct File Name - 'LAb04.exe' space 'TicTacToe' or 'Gomoku'

##########################################

H:\CSE332-LAB04\LAB04\Debug>lab04.exe TicTacToe Gomoku
please enter correct File name
Please enter the correct File Name - 'LAb04.exe' space 'TicTacToe' or 'Gomoku'

##########################################

Check for correct file Names:
H:\CSE332-LAB04\LAB04\Debug>lab04.exe TicTacToe

4
3
2
1
0
 01234

Player(X) :
Player 1's turn. Please enter a coordinate to place X on the board OR type 'quit' to exit the game



H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku

19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
0
  012345678910111213141516171819

no win yet
Player(B) :
Player 1's turn. Please enter a coordinate to place B on the board OR type 'quit' to exit the game

##########################################

TicTacToe Tests:

Draw Test:
Player(X): (1,1);(1,3);(2,1);(3,3);(3,2);
Player(O): (1,2);(2,2);(2,3);(3,1);

4
3 XOX
2 OOX
1 XXO
0
 01234

Game Ended.No Win Yet. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again

Invalid Input Test:
H:\CSE332-LAB04\LAB04\Debug>lab04.exe TicTacToe

4
3
2
1
0
 01234

Player(X) :
Player 1's turn. Please enter a coordinate to place X on the board OR type 'quit' to exit the game
4,1

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions
4,4

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions
1,1

Player(X): (1,1);
Player(O):

4
3
2
1 X
0
 01234

Player(O) :
Player 2's turn. Please enter a coordinate to place O on the board OR type 'quit' to exit the game
1,1

Coordinates Already taken by another user.Please enter valid cordinates
1,

Please enter a valid coordinate in a valid format(i.e 1,1)
,2

Please enter a valid coordinate in a valid format(i.e 1,1)

##########################################

TicTacToe Win Tests:

Player(X): (1,1);(1,2);(1,3);
Player(O): (2,1);(3,1);

4
3 X
2 X
1 XOO
0
 01234

Player 1 won
Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again
------------------------------------------------------------------------
Player(X): (1,1);(2,2);(3,3);
Player(O): (2,1);(3,1);

4
3   X
2  X
1 XOO
0
 01234

Player 1 won
Game Ended.No Win Yet. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again
------------------------------------------------------------------------
Player(X): (1,1);(1,3);(2,1);
Player(O): (1,2);(2,2);(3,2);

4
3 X
2 OOO
1 XX
0
 01234

Player 2 won
Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again
------------------------------------------------------------------------
Player(X): (1,3);(2,2);(3,1);
Player(O): (1,2);(1,1);

4
3 X
2 OX
1 O X
0
 01234

Player 1 won
Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again

##########################################

Gomoku Tests:

Invalid points tests:
H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku

19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
0
 012345678910111213141516171819

no win yet
Player(B) :
Player 1's turn. Please enter a coordinate to place B on the board OR type 'quit' to exit the game
1,1

Player(B): (1,1);
Player(W):

19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1 B
0
 012345678910111213141516171819

no win yet
Player(W) :
Player 2's turn. Please enter a coordinate to place W on the board OR type 'quit' to exit the game
1,1

Coordinates Already taken by another user.Please enter valid cordinates
20,20

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions
1,20

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions
21,1

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions
19,

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions
,19

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions
0,0

Please enter a valid coordinate in a valid format(i.e 1,1) within the board Dimensions

------------------------------------------------------------------------
Gomoku Win Tests:
Player(B): (1,1);(1,2);(1,3);(1,4);(1,5);
Player(W): (2,1);(2,2);(3,1);(2,3);

19
18
17
16
15
14
13
12
11
10
9
8
7
6
5 B
4 B
3 BW
2 BW
1 BWW
0
 012345678910111213141516171819

Player 1 won
Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again
------------------------------------------------------------------------
Player(B): (10,10);(11,10);(12,10);(13,10);(14,10);
Player(W): (2,3);(3,3);(4,3);(5,3);

19
18
17
16
15
14
13
12
11
10          BBBBB
9
8
7
6
5
4
3  WWWW
2
1
0
 012345678910111213141516171819

Player 1 won
Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again
------------------------------------------------------------------------
Player(B): (1,1);(1,5);(11,4);(1,18);(10,16);
Player(W): (10,10);(11,11);(12,12);(13,13);(14,14);

19
18 B
17
16          B
15
14              W
13             W
12            W
11           W
10          W
9
8
7
6
5 B
4           B
3
2
1 B
0
 012345678910111213141516171819

Player 2 won
Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again
------------------------------------------------------------------------
Player(B): (11,16);(12,15);(13,14);(14,13);(14,12);(15,12);
Player(W): (1,1);(1,2);(1,4);(1,7);(1,11);

19
18
17
16           B
15            B
14             B
13              B
12              BB
11 W
10
9
8
7 W
6
5
4 W
3
2 W
1 W
0
 012345678910111213141516171819

Player 1 won
Game Ended. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again

------------------------------------------------------------------------
Gomoku quit test
H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku

19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
0
 012345678910111213141516171819

no win yet
Player(B) :
Player 1's turn. Please enter a coordinate to place B on the board OR type 'quit' to exit the game
quit

You have ended the game
Game Ended

Player(B): (1,1);
Player(W): (1,4);

19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4 W
3
2
1 B
0
 012345678910111213141516171819

no win yet
Player(B) :
Player 1's turn. Please enter a coordinate to place B on the board OR type 'quit' to exit the game
1,1

Coordinates Already taken by another user.Please enter valid cordinates
quit

You have ended the game
Game Ended
##########################################

Extra Credit
Check for custom Gomoku Board

H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku 10

10
9
8
7
6
5
4
3
2
1
0
 012345678910

no win yet
Player(B) :
Player 1's turn. Please enter a coordinate to place B on the board OR type 'quit' to exit the game

H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku 7

7
6
5
4
3
2
1
0
 01234567

no win yet
Player(B) :
Player 1's turn. Please enter a coordinate to place B on the board OR type 'quit' to exit the game
------------------------------------------------------------------------
With default 5 in a row are need to win:
Player(B): (1,1);(2,2);(3,3);(4,4);(5,5);
Player(W): (1,2);(1,3);(1,4);(1,5);

7
6
5 W   B
4 W  B
3 W B
2 WB
1 B
0
 01234567

Player 1 won
Game Ended.No Win Yet. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again


------------------------------------------------------------------------
Test for custom WIN points
Player(B): (1,1);(2,2);(3,3);
Player(W): (1,2);(1,3);

7
6
5
4
3 W B
2 WB
1 B
0
 01234567

Player 1 won
Game Ended.No Win Yet. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again

Player(B): (3,5);(4,4);(5,3);
Player(W): (1,1);(1,5);

7
6
5 W B
4    B
3     B
2
1 W
0
 01234567

Player 1 won
Game Ended.No Win Yet. Please type 'LAB04 TicTacToe OR LAB04 Gomoku to play again


------------------------------------------------------------------------
Custom Board and Win Points Tests:
H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku 2
Please enter a valid Dimension. Minimun Board Dimension is 3

H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku 3 2
Minimum Win Point is 3. Please enter 3 or more.

H:\CSE332-LAB04\LAB04\Debug>lab04.exe Gomoku 3 3

3
2
1
0
 0123

no win yet
Player(B) :
Player 1's turn. Please enter a coordinate to place B on the board OR type 'quit' to exit the game
------------------------------------------------------------------------

For Extra Credit I made Two more Constructors of the GameBase Class and same as for Gomoku Class
So that the base class constructors can be called from the constructors of a derived class.
In one constructio I initialized the valued of the board to the parater of the constructor
and in the other constructor which takes three parameters, inaddition to the board 
dimensions I initialized the third parameter to the win point.



##########################################
Ran into a couple of errors such as signed and unsigned mismatch,
Link errors and couple others but I fixed them.



























