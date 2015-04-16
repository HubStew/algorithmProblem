#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
 
#define BOX_SIZE 1500
 
int row;
int col;
int box[BOX_SIZE][BOX_SIZE];

struct Matrix
{
    int row;
    int col;
};

Matrix q;

queue<Matrix> my_queue;

int rear;
int front;
//Queue queue[30000000];
 
void Init();
void BFS(int col, int row, int col_size, int row_size);
void print();
 
int result_count;
 
int main()
{
 
    cin >> row >> col;
 
    Init();
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
            scanf("%d", &box[i][j]);
    }
 

    BFS(0, 0, col, row);

 
    bool isRipen = true;
 
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (box[i][j] == 0)
            {
                isRipen = false;
            }
        }
    }
 
    if (isRipen == false)
        cout << "-1" << endl;
    else
         cout << box[q.col][q.row]-1 << endl;
 
    return 0;
}
 
void Init()
{
    for (int i = 0; i < BOX_SIZE; i++)
    {
        for (int j = 0; j < BOX_SIZE; j++)
            box[i][j] = -1;
    }
    front = 0;
    rear = 0;
}
 
void BFS(int col, int row, int col_size, int row_size)
{
 
    //cout << row << " " << col << endl;

	for (int i = 1; i <= col_size; i++)
	{
		for (int j = 1; j <= row_size; j++)
		{
			if (box[i][j] == 1)
			{
				Matrix q;
				q.col = i;
				q.row = j;
				my_queue.push(q);
			}
		}
	}

	while(true)
	{
		bool isFinish = true;

		while(true)
		{
			if (my_queue.empty())
				break;

			q = my_queue.front();
			my_queue.pop();
			col = q.col;
			row = q.row;
			//front++;

			if (box[col+1][row] == 0)
			{
				box[col+1][row] = box[col][row] + 1;
				isFinish = false;

				q.col = col+1;
				q.row = row;
				my_queue.push(q);
			}
			if (box[col-1][row] == 0)
			{
				box[col-1][row] = box[col][row] + 1;
				isFinish = false;

				q.col = col-1;
				q.row = row;
				my_queue.push(q);
			}
			if (box[col][row+1] == 0)
			{
				box[col][row+1] = box[col][row] + 1;
				isFinish = false;

				q.col = col;
				q.row = row+1;
				my_queue.push(q);
			}
			if (box[col][row-1] == 0)
			{
				box[col][row-1] = box[col][row] + 1;
				isFinish = false;

				q.col = col;
				q.row = row-1;
				my_queue.push(q);
			}			
		}

		if (isFinish == true)
			break;
	}

}
 
void print()
{
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
            cout << box[i][j];
        cout << endl;
    }
    cout << endl;
}
