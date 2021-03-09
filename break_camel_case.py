#Complete the solution so that the function will break up camel casing, using a space between words.

def solution(s):
    list = []
    for i in s:
        if i == i.upper():
            list.append(" "), 
            list.append(i)
        else:
            list.append(i)
            
    return ''.join(list)