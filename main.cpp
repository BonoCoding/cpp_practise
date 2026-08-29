#include <iostream>
using namespace std;



int main()
{
//Array initialization
int age[3][3] = {{12, 13 ,55},
                 {16, 32 ,77},
                 {53, 11 ,83}};
int row = 3;
int col = 3;
double ava = 0;              //Stores the average of all elements in the Array
int sum = 0;                //Stores the summation of all elements in the Array


      for (int i = 0; i < row; i++)
      {
          cout <<endl;
          for (int j = 0; j < col; j++)
          {
              cout <<age[i][j]<<" ";  //Display the Elemets of the array

              sum = sum + age[i][j];  //Calculates the sum of all elements in the Array
          }
      }
      ava = sum / (row * col);        //Calculating the avarage of all elemets of the array
      cout <<endl;
      cout <<endl;


      int high = age[0][0];
      int highCol;                 //Stores the Colomn Index with highest element
      int highRow;                 //Stores the Row Index with highest element

      for (int i = 0; i < row; i++)
      {
          for (int j = 0; j < col; j++)
          {
             if (age[i][j]> high)
             {
                 high = age[i][j];
                 highRow = i;         //Tracking index with the highest Element
                 highCol = j;

             }
          }
      }

  cout <<"Highest element is "<<high<<" in index "<<highCol<<highRow<<endl;
  cout <<"Sum is "<<sum<<" Average is "<<ava<<endl;

  cout <<endl;

  int searchAge;
  cout <<"Enter the age you want to search for: ";
  cin >>searchAge;

  bool found = false;              //Tracks the presents of elements which is being searched
  int searchCol , searchRow;

   //Searchig for the element
  for (int i = 0; i < row; i++)
      {
          for (int j = 0; j < col; j++)
          {
              if (searchAge == age[i][j])
              {
                  found = true;
                  searchRow = i;
                  searchCol = j;
                  break;
              }

          }
      }

      if (found)
      {
          cout <<"Age found in index "<<searchRow<<searchCol<<endl;
      }
      else
      {
          cout <<"Age not found!!"<<endl;
      }



    return 0;
}
