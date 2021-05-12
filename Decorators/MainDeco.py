def div(a,b):
    print(a/b)


def smart_div(func):

    def inner(a,b):
        if a<b:
            a,b = b,a
        #calling fucn with swapped values    
        return func(a,b)

    return inner 


div1 = smart_div(div)

div1(2,4)

# like a logic is numerator should be less than deno but user is free to give input in any form.
