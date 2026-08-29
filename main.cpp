#include <iostream>

using namespace std;

class Bono{

  public :

      int age = 12;
      void display ()
      {

          cout <<"I love you!!!"<<age <<endl;
      }


};

int main()
{
int age[3][3] = {{12, 13 ,55},
                 {16, 32 ,77},
                 {53, 11 ,83}};
int row = 3;
int col = 3;
double ava = 0;
int sum = 0;

      for (int i = 0; i < row; i++)
      {
          cout <<endl;
          for (int j = 0; j < col; j++)
          {
              cout <<age[i][j]<<" ";

              sum = sum + age[i][j];
          }
      }
      ava = sum / (row * col);
      cout <<endl;


      int high = age[0][0];
      int highCol;
      int highRow;

      for (int i = 0; i < row; i++)
      {
          for (int j = 0; j < col; j++)
          {
             if (age[i][j]> high)
             {
                 high = age[i][j];
                 highRow = i;
                 highCol = j;

             }
          }
      }

  cout <<"Highest element is "<<high<<" in index "<<highCol<<highRow<<endl;
  cout <<"Sum is "<<sum<<" Average is "<<ava<<endl;

  int searchAge;

  cout <<"Enter the age you want to search for ";
  cin >>searchAge;

  bool found = false;
  int searchCol , searchRow;


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

      Bono me;

      me.age = 16;

      me.display();


    return 0;
}
