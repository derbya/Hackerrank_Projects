def select_arr(arr)
    arr.select {|a| a.odd?}
  # select and return all odd numbers from the Array variable `arr`
end

def reject_arr(arr)
    arr.reject {|a| a % 3 == 0}
  # reject all elements which are divisible by 3
end

def delete_arr(arr)
    arr.delete_if {|a| a < 0}
  # delete all negative elements
end

def keep_arr(arr)
    arr.keep_if {|a| a >= 0}
  # keep all non negative elements ( >= 0)
end
