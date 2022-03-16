def getRectangleCount(coordinate):
    n = len(coordinate)
    y_count = dict()
    ans = 0
    for i in range(n):
        x, y = coordinate[i]
        for j in range(n):
            dx = coordinate[j][0]
            dy = coordinate[j][1]
            if y < dy and x == dx:
                ans += y_count.get((y, dy), 0)
                y_count[(y, dy)] = y_count.get((y, dy), 0) + 1
    return ans


coordinate = [[2, 1], [3, 1], [1, 2], [4, 2], [1, 3], [4, 3], [2, 4], [3, 4]]
print(getRectangleCount(coordinate))