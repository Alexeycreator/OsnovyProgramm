with open('C:\\Users\\Алексей\\Desktop\\Учеба\\github\\OsnovyProgramm\\SecondSemestr\\Практика учебная\\часть 15\\numbers.txt', 'r') as file:
    count = 0
    for line in file:
        nums = list(map(int, line.split()))
        unique_nums = set(nums)
        if len(nums) == len(unique_nums):
            for i in range(len(nums)):
                for j in range(i+1, len(nums)):
                    if isinstance (((nums[i] * nums[j])**(1/4)),int) :
                        count += 1
                        break
print(count)
