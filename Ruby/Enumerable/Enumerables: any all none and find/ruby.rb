def func_any(hash)
    hash.any? {|key, value| key.is_a? Integer}
    # Check and return true if any key object within the hash is of the type Integer
    # If not found, return false.
end

def func_all(hash)
    hash.all? {|key, value| (value.is_a?(Integer)) && (value < 10)}
    # Check and return true if all the values within the hash are Integers and are < 10
    # If not all values satisfy this, return false.
end

def func_none(hash)
    hash.none? {|key, value| value.nil?}
    # Check and return true if none of the values within the hash are nil
    # If any value contains nil, return false.
end

def func_find(hash)
    hash.find {|key, value| ([key, value].all? {|kv| kv.is_a?(Integer)} && value < 20 ) || ([key, value].all? {|kv| kv.is_a?(String)} && value.start_with?('a'))}
    # Check and return the first object that satisfies either of the following properties:
    #   1. There is a [key, value] pair where the key and value are both Integers and the value is < 20 
    #   2. There is a [key, value] pair where the key and value are both Strings and the value starts with `a`.
end
