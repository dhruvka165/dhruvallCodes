//if
const isuserLoggedin = true
const temprature = 41

if(2 == "2"){
    // console.log("executed");
}

if (temprature <50){
    // console.log("Less than 50");
}else{
    // console.log("Tempreture is grater than 50");
}

// let balance = 1000;
// if(balance >= 1000){
//     console.log("Balance is 1000 or more");
// } else if (balance > 750){
//     console.log("Balance is more than 750");
// } else if(balance > 500){
//     console.log("Balance is more than 500");
// } else {
//     console.log("Balance is 500 or less");
// }


const userloggedIn = true
const debitcard = true
const LoggedinFromGoogle = true
const LoggedinFromEail = true

if (userloggedIn && debitcard  ){
    console.log("Allow to buy a cource");
}else if (LoggedinFromEail || LoggedinFromGoogle){
    console.log("User logged in");
}else{
    console.log("First of all sing in and must you have debitcard");
}

