from urllib.request import CacheFTPHandler


class Class:
    company = "Youtube"
    employee = ["Shauary","Shubham","Programmer","Data Scientist"]
    @classmethod
    def change_company(cls,name):
        cls.company = name
    def remove_employee(self,name,id):
            Class.employee.index(name)
            print("The employee is removed")

s = Class()
s.remove
employee("Deepak",23)