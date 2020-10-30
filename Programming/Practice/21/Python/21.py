def bmi(weight: float, height: float):
    bmi = weight / height**2
    return float(bmi)
def print_bmi(bmi: float):
    if bmi < 18.5:
        print("Underweight")
    if bmi >= 18.5 and bmi < 25:
        print("Normal")
    if bmi >= 25 and bmi < 30:
        print("Overweight")
    if bmi >= 30:
        print("Obesity")
    return
print("Введите значение веса и роста:")
ves, rost = map(float,input().split())
bmi = bmi(ves, rost)
print_bmi(bmi)