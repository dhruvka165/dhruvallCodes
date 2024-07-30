const userEmail = "H@dhruv.ai"
if(userEmail){
    console.log("Got user email");
}
else{
    console.log("Fon't have useer email");
}


//falsy value :
//  false,,0,-0,BigInt On,"",null,undefined,NAN

//truthey values
// "0",'false'," ",[],{},function(){}\


const emptObj = {}
if(Object.keys(emptObj).length ===0){
    console.log("Object is Empty");
}


//Nullish colescaling Operator (??) :null undefined
let val1
val1 = 5 ?? 10
console.log(val1);
val2  = null ?? 10
console.log(val2);



//condition ? true : false

const iceTeaprice = 100
iceTeaprice <= 80 ? console.log("less than 80") : console.log("More than 80");