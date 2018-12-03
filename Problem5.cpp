#include<iostream>
int main(){size_t x=10;size_t y=11;while(y<20)
{if((x%y)==0)
y++;else{x++;y=11;}}
std::cout<<x;}
