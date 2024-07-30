function sayMyname(){
    // console.log("kanziya Dhruv");
}
sayMyname()

// function addTwoNumbers(Number1,Number2){
//     console.log(Number1+Number2);
// }

function addTwoNumbers(Number1, Number2) {
    let result = Number1 + Number2;
    return result;
}
let result = addTwoNumbers(3, 4); // Store the result of the function call in a variable
// console.log(result); // Log the result

function loginUserMessage(username){
    if(username === undefined){
        // console.log("Please Enter a username");
        return
    }
    return `${username} just logged in`
}
// console.log(loginUserMessage("dhruv"));

function calculatePrice(val1,val2,...num1){
    return num1
}
console.log(calculatePrice(200,400,500,2000));


const user={
    username:"dhruv",
    age:18
}
function handleObject(anyobject){
    console.log(`username is ${anyobject.username} and age is ${anyobject.age}`)
}
handleObject(user)