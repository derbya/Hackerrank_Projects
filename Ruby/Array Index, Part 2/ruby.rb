def neg_pos(arr, index)
    # return the element of the array at the position `index` from the end of the list
    arr[-index]
    # Clue : arr[-index]
end

def first_element(arr)
    # return the first element of the array
    arr.first
    # arr.first
end

def last_element(arr)
    # return the last element of the array
    arr.last
    # arr.last
end

def first_n(arr, n)
    arr.take(n)
    # return the first n elements of the array
end

def drop_n(arr, n)
    arr.drop(n)
    # drop the first n elements of the array and return the rest
end
