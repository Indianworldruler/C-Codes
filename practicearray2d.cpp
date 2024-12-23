#include<iostream>
using namespace std;

int main()
{
    int rows, columns, i, j;
    char sign;
    cout<<"\n Make sure that both the matrix are of same dimentions !!!"<<"\n";
    cout<<"\n";
    cout<<"\n Enter number of rows for 1st array: "<<"\t";
    cin>>rows;
    cout<<"\n Enter number of columns for 1st array: ";
    cin>>columns;
    int arr1[rows][columns];
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cout<<"\n Enter element at "<<i<<" "<<j<<": ";
            cin>>arr1[i][j];
        }
    }
    cout<<"\n The 1st matrix is: "<<"\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j=0; j<columns; j++) 
        {
            cout << arr1[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<"\n Enter Operator (+, -, *, /): ";
    cin>>sign;
    cout<<"\n Enter number of rows for 2st array: "<<"\t";
    cin>>rows;
    cout<<"\n Enter number of columns for 2nd array: ";
    cin>>columns;
    int arr2[rows][columns];
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cout<<"\n Enter element at "<<i<<" "<<j<<": ";
            cin>>arr2[i][j];
        }
    }
    cout<<"\n The 2nd matrix is: "<<"\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j=0; j<columns; j++) 
        {
            cout << arr2[i][j] << " ";
        }
        cout<<endl;
    }
    int resultAdd[rows][columns], resultSub[rows][columns], resultMul[rows][columns], resultDiv[rows][columns];
    switch(sign) 
    {
        case '+':
            for(int i=0; i<rows; i++) 
            {
                for(int j=0; j<columns; j++) 
                {
                    resultAdd[i][j] = arr1[i][j] + arr2[i][j];
                }
            }
            cout<<"Result of addition is: "<<"\n";
            for(i=0; i<rows; i++)
            {
                for(j=0; j<columns; j++)
                {
                    cout << resultAdd[i][j]<<" ";
                }
                cout<<endl;
            }
            break;

        case '-':
            for(int i= 0; i<rows; i++) 
            {
                for(int j=0; j<columns; j++) 
                {
                    resultSub[i][j] = arr1[i][j] - arr2[i][j];
                }
            }
            cout<<"Result of subtraction is: "<<"\n";
            for(i=0; i<rows; i++)
            {
                for(j=0; j<columns; j++)
                {
                    cout << resultSub[i][j]<<" ";
                }
                cout<<endl;
            }
            break;

        case '*':
            for(int i=0; i<rows; i++) 
            {
                for(int j=0; j<columns; j++) 
                {
                    resultMul[i][j] = arr1[i][j] * arr2[i][j];
                }
            }
            cout<<"Result of multiplication is: "<<"\n";
            for(i=0; i<rows; i++)
            {
                for(j=0; j<columns; j++)
                {
                    cout << resultMul[i][j]<<" ";
                }
                cout<<endl;
            }
            break;

        case '/':
            for(int i=0; i<rows; i++) 
            {
                for(int j=0; j<columns; j++) 
                {
                    if(arr2[i][j] != 0) 
                    {
                        resultDiv[i][j] = arr1[i][j] / arr2[i][j];
                    } 
                    else 
                    {
                        cout<<"\n Division by zero at index"<<" "<<i<<" "<<j<< "is not allowed"<<"\n";
                        resultDiv[i][j] = 0; 
                    }
                }
            }
            cout<<"Result of Division is: "<<"\n";
            for(i=0; i<rows; i++)
                {
                    for(j=0; j<columns; j++)
                        {
                            cout << resultDiv[i][j]<<" ";
                        }
                            cout<<endl;
                }
            break;

        default:
            cout << "\nInvalid operation!\n";
            return 1; 
    }
    return 0;
}