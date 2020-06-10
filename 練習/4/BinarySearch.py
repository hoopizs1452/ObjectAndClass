def binarySearch(lst, key):
    low = 0
    high = len(lst) - 1 # Last index in lst
      
    while high >= low:
        mid = (low + high) // 2
        if key < lst[mid]:
            high = mid - 1
        elif key == lst[mid]:
            return mid
        else:
            low = mid + 1
      
    return -1

list1 = [1, 3, 5, 7, 9, 11, 13, 15, 17]
list2 = [1.1, 3.3, 5.5, 7.7, 9.9, 11.1, 13.3, 15.5, 17.7]

n1 = int(input())
n2 = int(input())
n3 = int(input())
n4 = float(input())
n5 = float(input())
n6 = float(input())

print("list1:{}\n{} at {}\n{} at {}\n{} at {}".format(list1, n1, binarySearch(list1, n1), n2, binarySearch(list1, n2), n3, binarySearch(list1, n3)))
print("list2:{}\n{} at {}\n{} at {}\n{} at {}".format(list2, n4, binarySearch(list2, n4), n5, binarySearch(list2, n5), n6, binarySearch(list2, n6)))