const user = {
    username:"Dhruv",
    price:999,

    WelcomeMessage: function(){
        // console.log(`${this.username},welcome to website`);
    }
}
user.WelcomeMessage()

 const chai = function chai(){
    // console.log(this);
}

const chaii = () => {
    // console.log(this);
}
chai()


const addTwonum = (num1,num2)=>{
    return num1+num2
} //curly braces use hoga to return likhna paege nahitar parenthese me nahi likhna padega
//or
const addTwonumm = (num1,num2)=> (num1,num2)
// console.log(addTwonum(7,8))


//  immediatly invoked function expression(IIFF)


(function chai(){
    console.log('Db conneceted')
})();
chai()

( ()=>{
    console.log(`DB connected Two ${name}`)
}) ('Dhrub')


