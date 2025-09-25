# sample.py

def calc_average(numbers):
    total = 0
    for i in range(0, len(numbers)):
        total = total + numbers[i]
    if len(numbers) == 0:
        return 0
    return total / len(numbers)

# 動作確認
print(calc_average([1, 2, 3, 4]))  # 本来は 2.5 になるはず
print(calc_average([]))            # 0 を返す想定
