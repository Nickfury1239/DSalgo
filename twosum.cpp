#include <bits/stdc++.h>

using namespace std;
vector<int> twoSum(const vector<int> &A, int B) {
    map <int, int> map1;
    map <int ,int> :: iterator itr, itr2,itr3;
    map <int , int> map2;
    map <int , int> map3;

//    for (int j = 0; j < A.size(); ++j) {
//        for (int i = j+1; i <A.size() ; ++i) {
//            if(A[j]+A[i] == B)
//            {
//                map1
//            }
//        }
//    }
    
    
    for(int i=0;i<A.size(); i++)
    {
        map1.insert(pair <int,int > (i,A[i]));
    }

    itr= map1.begin();
    while(itr!=map1.end()){
        for(int i=itr->first ;i<A.size(); i++)
        {
            if(i == itr->first)
            {continue;}
            else{
                if(A[i]+itr->second == B)
                {
                   map2.insert(pair <int , int > (itr->first+1,i+1));
                }

            }

        }
        itr++;
    }

    itr2= map2.begin();

    int min = itr2->second;
    for(itr2; itr2!=map2.end(); itr2++)
    {
        if(itr2->second<min)
        {
            min = itr2->second;

        }
    }
    cout<<"map2 is : "<<endl;
    cout<<"key      value"<<endl;
    for(itr2=map2.begin(); itr2!=map2.end(); itr2++)
    {
        cout<<itr2->first<<"\t\t"<<itr2->second<<endl;
    }

    for(itr2= map2.begin(); itr2!= map2.end(); itr2++)
    {
        if(itr2->second == min)
        {
            map3.insert(pair <int,int> (itr2->first, itr2->second));
        }
    }
    itr3= map3.begin();
    min = itr3->first;
    for(itr3; itr3!=map3.end(); itr3++)
    {
        if(itr3->first<min)
        {
            min = itr3->first;
        }
    }


 for(itr3= map3.begin(); itr3!= map3.end(); itr3++)
    {
        if(itr3->first == min)
        {
            vector <int> x;
            x.push_back(itr3->first);
            x.push_back(itr3->second);
            return x;
        }
    }
}

int main() {
    vector <int > vect;
    vect = {9, -8, -10, -7, 7, -8, 2, -7, 4, 7, 0, -3, -4, -5, -1, -4, 5, 8, 1, 9, -2, 5, 10, -5, -7, -1, -6, 4, 1, -5, 3, 8, -4, -10, -9, -3, 10, 0, 7, 9, -8, 10, -9, 7, 8, 0, 6, -6, -7, 6, -4, 2, 0, 10, 1, -2, 5, -2};
    vector <int > outcome;
    outcome = twoSum(vect, 0);
    for (int i = 0; i < outcome.size(); ++i) {
        cout<<outcome[i]<<"\t";
    }
    return 0;
}
