//Q. 44:

//Tri-Hexagonal Puzzle(Arrays )

//"Little Johnny wants to play with his friends today. But his babysitter won't let him go! After a lot of begging, the heartless nanny gives him her brand new electronic puzzle and says: ""If you solve the puzzle then you are free to go"". Not being aware of Little Johnny's IT skills, the nanny leaves the kid alone.
//Rapidly, Little Johnny sends you an e-mail asking for your help.
//The puzzle consists of three hexagons as shown in the figure. Each vertex is painted black or white. Some of them belong to just one hexagon and some of them belong to more than one. Exactly four of them are painted black, and the other nine are white. The goal is to make the shared vertexes black by means of allowed moves: rotating a hexagon 60 degrees clockwise or counter-clockwise.
//Can you help Little Johnny?
//Input
//Input starts with an integer T, the number of puzzles to solve (1<=T<=100). T lines follow, each one having 13 binary digits, corresponding to the top-down, left to right labeling of the vertexes in the puzzle. A '0' means the i-th vertex is painted white, while a '1' means it is painted black.
//Output
//For each test case output M on a single line, the minimum number of moves required to solve the puzzle. Then print M lines, each one describing a move in the following manner: two space separated integers H and C, the rotated hexagon (upper left is 0, upper right is 1, lower one is 2) and the direction (0 for counter-clockwise, 1 for clockwise).
//If there is more than one solution, any will suffice.
//"
//


#include <stdio.h>
int n;
char puzzle[14];
int States[715];
int ParentIndex[715];
int ParentMove[715];
const int BITS[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096};
const int Moves[6][7] = {{10,12,9,6,4,7,10},
                 {10,7,4,6,9,12,10},
                 {5,3,6,9,11,8,5},
                 {5,8,11,9,6,3,5},
                 {4,6,3,1,0,2,4},
                 {4,2,0,1,3,6,4}};
const int GoalState=0x258;
int count;
int GetChild(int move,int parent)
{
    int chld=parent,i;
    for(i=0;i<6;i++)
    {
        if((parent&BITS[Moves[move][i+1]])!=0)
            chld|=BITS[Moves[move][i]];
        else
            chld&=(~BITS[Moves[move][i]]);
    }
    return chld;
}
int FindIndex(int chld)
{
    int i;
    for(i=count-1;i>=0;i--)
        if(chld==States[i])
            return i;
    return -1;
}
void GenerateStates()
{
    int ptr,move,chld;
    States[0]=GoalState;
    ptr=0;
    count=1;
    while(ptr<count)
    {
        for(move=0;move<6;move++)
        {
            chld=GetChild(move,States[ptr]);
            if(FindIndex(chld)==-1)
            {
                States[count]=chld;
                ParentIndex[count]=ptr;
                ParentMove[count++]=move^0x1;
            }
        }
        ptr++;
    }
}
int ConvertToInt(char puzzle[])
{
    int i,state = 0;
    for(i=0;i<13;i++)
    {
        if(puzzle[i]=='1')
            state|=BITS[13-i-1];
    }
    return state;
}
void FindPath(int state)
{
    int i=0,j,path[12],index;
    index=FindIndex(state);
    while(index!=0)
    {
        path[i++]=ParentMove[index];
        index=ParentIndex[index];
    }
    printf("%d\n",i);
    for(j=0;j<i;j++)
        printf("%d %d\n",(path[j]>>1),(path[j]%2));
}
int main() 
{
	int i,t;
    scanf("%d",&t);
    GenerateStates();
    while(t--)
    {
        scanf("%s",puzzle);
        FindPath( ConvertToInt(puzzle) );
    }
	return 0;
}
