// for (let index = 0; index < array.length; index++) {
//     const element = array[index];
// }

for(let i =0;i<=10;i++){
    const element = i;
    // console.log(element);
    if(element == 5){
        // console.log("Best number");
    }
}


for(let i = 0;i<=10;i++){
    console.log(`outer loop value:${i}`);
    for(let j =0;j<=10;j++){
        console.log(`inner loop value:${j} and inner loop ${i}`);
    }
}


for(let i = 0;i<=10;i++){
    // console.log(`outer loop value:${i}`);
    for(let j =0;j<=10;j++){
        // console.log(i + '*' + j +' = '+ i*j);
    }
                                           
}


//break and continue

for (let index = 0; index <=20; index++) {
    if(index == 5){
        console.log("Best number");
        break
    }
    // console.log(index);    
}
for (let index = 0; index <=20; index++) {
    if(index == 5){
        console.log("Best number");
        continue // ek baar jane deta hai ek baar ke liye skip kar deta hai jo ata hai usko skip mar dete hai 
    }
    // console.log(index);    
}





//for of
const arr = [1,2,3,4,5,6]
for(const num of arr){
    // console.log(num);
}

const greeting = "Hello world!"
for(const greet of greeting){
    // console.log(`Each char is ${greet}`);
}

//Maps
const map = new Map()
map.set('IN',"India")
map.set('USA',"Unitesd states of america")
map.set('fr',"France")


// console.log(map)
for(const key of map){
    console.log(key);
}
//this is not working for object