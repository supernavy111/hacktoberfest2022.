class Solution:
    def bs(self, l, key, start, end):
        mid= (start+end+1)//2
        #print("mid, l[mid]:", mid)
        if end>=start:
            if l[mid]>key:
                return self.bs(l, key, start, mid-1)
            elif l[mid]<key:
                return self.bs(l, key, mid+1, end)
            else:
                return mid
        else:
            return -1
        
    def search(self, nums: List[int], target: int) -> int:
        start=0
        end=len(nums)-1
        mid=(start+end+1)//2
        
        return self.bs(nums, target, start, end)
