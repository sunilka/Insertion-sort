#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the no of elements :\n";
    cin>>n;
    int a[n];

    cout<<"PLease enter the elements of the array :\n";
    for(int i=0;i<n;i++)
        cin>> a[i];

    cout<<endl;

    int consider_ele_pos = 1;

    while(consider_ele_pos<n){
        int place = -1;

        for(int i=0;i<consider_ele_pos;i++){
            if(a[consider_ele_pos]< a[i]){
                place = i;
                break;
            }
        }

        if(place != -1){
            int temp = a[consider_ele_pos];
            for(int i=consider_ele_pos;i>place;i--){
                a[i] = a[i-1];
            }
            a[place] = temp;
        }
        consider_ele_pos++;
    }


    cout<<"elements ater performing the insertion sort are \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
