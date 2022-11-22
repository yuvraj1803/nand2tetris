// make R2 0

@R2
M=0
// ANS = 0
@0
D=A
@ANS
M=D

// I = 0
@0
D=A
@I
M=D


// ANS += R0
// I++
// IF (I == R1) END

(LOOP)
@R0
D=M
@ANS
M=M+D
@1
D=A
@I
M=M+D
@I
D=M
@DIFF
M=D
@R1
D=M
@DIFF
M=M-D

@DIFF
D=M
@STOP
D;JEQ
@LOOP
0;JEQ

// SET R2 = ANS

(STOP)
@ANS
D=M
@R2
M=D
@END
0;JMP

(END)
@END
0;JEQ


