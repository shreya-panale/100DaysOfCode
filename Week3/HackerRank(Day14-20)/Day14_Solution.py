class Difference:
    def __init__(self, a):
        self.__elements = a
        
	# Add your code here
    def computeDifference(self):
        length = len(self.__elements)
        self.maximumDifference = 0
        for i in range(length):
            for j in range(i+1,length):
                diff=abs(self.__elements[i]-self.__elements[j])
                if(diff>self.maximumDifference):
                    self.maximumDifference = diff
    # End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)