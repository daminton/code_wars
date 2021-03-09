""" Given a Divisor and a Bound , Find the largest integer N , Such That ,

Conditions :
N is divisible by divisor

N is less than or equal to bound

N is greater than 0. """

def max_multiple(divisor, bound):
    my_list = []
    i = 1
    for i in range(1, bound):
        if i * divisor <= bound:
            my_list.append(i)
            i+=1
        else:
            return max(my_list) * divisor