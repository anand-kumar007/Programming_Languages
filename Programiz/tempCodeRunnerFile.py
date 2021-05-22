
class A :
    num = 10

class B(A) :
    pass

class C(A):
    num = 1

class D(B,C):
    pass 


print(D.num) 
#what will happen ? 


#      A 
#     /  \
#    /    \
#    B     C 
#    \     /
#     \   /
#       D       MRO says : go D->B->C->A 


# check the MRO if you want or draw the graph
print(D.mro())