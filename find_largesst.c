#include<iostream>

#include<vector>

using namespace std;

int max(vector<int> &v)
{
    int max=v[0];

    for(int i=1;i<v.size();i++)
    {
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    

    return max;
}





int main()
{

    int v;

vector<int> vec1;

int n,element;


cout<<"enter the size of array";
cin>>n;


for(int i=0;i<n;i++)
{
    cout<<"enter element of vector"<<endl;
    cin>>element;
    vec1.push_back(element);
}


max(vec1);

cout<<max(vec1)<<".."<<endl;


return 0;


}