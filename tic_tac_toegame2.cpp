#include <iostream>
    #include <string>
    using namespace std;



    int main()
    {
/*
the chart is :
X 2 X
4 5 6
X 8 X
*/
        char Matrix[3][3] = { 'X','2','X','4','5','6','X','8','X' };
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << Matrix[i][j] << "     ";
            }
            cout << endl;
        }
/*
after this for :
X O X
4 5 6
X O X
*/
        int l = 0, m = 0, p[3] = { 0,0,0 };
        for (l; l <= 2; l++)
        {
            for (m; m <= 2; m++)
            {
                if ((Matrix[l][m]) == 'X')
                {
                    p[l]++;
                    if ((p[l]) == 2)
                    {
                        for (m; m >= 0; m--)
                        {
                            if ((Matrix[l][m]) != 'X')
                            {
                                Matrix[l][m] = 'O';
                            }
                        }
                    }
                }
            }
        }


        return 0;
    }
    
    
    
    
    
    
    
    
    
