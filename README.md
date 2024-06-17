# PA1-fourth-project
The challenge is to create a program that will filter financial data to make it "look better".
We assume that we have information about the status of the account over time. From this data we need to select a suitable section for the presentation. In the presentation, we want to document the good management of funds over the long term. That is, we want to select the longest continuous stretch of data (this is the primary criterion), but we also require that the account balance at the end of the selected stretch be greater than or equal to the account balance at the beginning of the selected stretch of data. So in effect we are only interested in the value at the beginning and end of the selected data segment, the values within the selected data segment are not important, they play no role in the selection.

If the input is a sequence of values, e.g. 115 111 57 56 103 96 -1000 100 83 45, the result will be a segment from value 57 to value 83 (is the longest possible and 83 ≥ 57).

The input to the program is a sequence of integers that indicates the state of the account over time. The length of the sequence is limited to at most 250000 values. The input of values ends when EOF (end of input) is detected.

The output of the program is a found segment of maximum length such that the account balance at the end of the segment is greater than or equal to the account balance at the beginning of the segment. The program displays the length of the segment and the start and end indices (indices counted from 0). There may be more than one segment of the same length, then the program displays all possibilities in any order. It may happen that the input sequence does not contain any suitable segment, in which case a special message is displayed (see sample).

If the input is invalid, the program must detect this and display an error message. Display the error message on the standard output (not on the error output). Consider the following as an error:
              input is not an integer,
              the input does not contain at least two values,
              the input is longer than 250000 values.

Values:
115 111 57 56 103 96 -1000 100 83 45
7: 2 - 8
Options: 1
Values:
5 9 11 8 
   4 16 -8 


3 1 3
6: 0 - 5
Options: 1
Values:
23 112 5 11 8 4 16 -8 3 0 1 3
5: 7 - 11
5: 2 - 6
Options: 2
Values:
9 7 3 1 -8 -1000
Not found.
Values:
1 2 3 4 hello
Incorrect input.
