// let a=10;
// let b=4;
// let res =a+b;
// console.log(`addition of ${a} and ${b} is: ${res}`)

//create employee object  with id ,name and salary,
//white an arrow function to increase salary 10%
//1
const employee= {
    name : "sahil",
     id : 1234556,
     salary : 100000,
     increaseSalary:()=>{
        employee.salary=employee.salary+(employee.salary*0.10);
        console.log("updated salary",employee.salary)
  }
};
// console.log(user["salary"]);
console.log(employee);
console.log(employee.increaseSalary());



