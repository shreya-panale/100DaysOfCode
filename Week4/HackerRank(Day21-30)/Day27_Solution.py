def minimum_index(seq):
    if len(seq) == 0:
        raise ValueError("Cannot get the minimum value index from an empty sequence")
    min_idx = 0
    for i in range(1, len(seq)):
        if seq[i] < seq[min_idx]:
            min_idx = i
    return min_idx

# My Code
class TestDataEmptyArray:
    def get_array():
        return []
    
class TestDataUniqueValues: 
    def get_array():
        return [4,8,2,5]
    def get_expected_result():
        arr = [4,8,2,5]
        min = arr[0]
        index = 0
        for i in range(1,len(arr)):
            if(arr[i]<min):
                min = arr[i]
                index = i
        return index
    
class TestDataExactlyTwoDifferentMinimums:
    def get_array():
        return [4,8,2,5,2]
    def get_expected_result():
        arr = [4,8,2,5,2]
        min = arr[0]
        index = 0
        for i in range(1,len(arr)):
            if(arr[i]<min):
                min = arr[i]
                index = i
        return index
# End of My Code        

def TestWithEmptyArray():
    try:
        seq = TestDataEmptyArray.get_array()
        result = minimum_index(seq)
    except ValueError as e:
        pass
    else:
        assert False


def TestWithUniqueValues():
    seq = TestDataUniqueValues.get_array()
    assert len(seq) >= 2

    assert len(list(set(seq))) == len(seq)

    expected_result = TestDataUniqueValues.get_expected_result()
    result = minimum_index(seq)
    assert result == expected_result


def TestiWithExactyTwoDifferentMinimums():
    seq = TestDataExactlyTwoDifferentMinimums.get_array()
    assert len(seq) >= 2
    tmp = sorted(seq)
    assert tmp[0] == tmp[1] and (len(tmp) == 2 or tmp[1] < tmp[2])

    expected_result = TestDataExactlyTwoDifferentMinimums.get_expected_result()
    result = minimum_index(seq)
    assert result == expected_result

TestWithEmptyArray()
TestWithUniqueValues()
TestiWithExactyTwoDifferentMinimums()
print("OK")

