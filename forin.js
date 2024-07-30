const myObject = {
    js:'javascript',
    cpp:'c++',
    rb:'Ruby',
    swift:'swift by apple'
}

for (const key in myObject) {
    // console.log(`${key} shortcut for ${myObject[key]}`);
}
const programming = ["js","rubey","py","java","cpp"]

programming.forEach(function(val){
    // console.log(val);
})
programming.forEach((item,index,arr)=>{
    // console.log(item,index,arr);
})

const myCoding = [
    {
        languageName:"javascript",
        languageFilename:'js'
    },
    {
        languageName:"python",
        languageFilename:'py'
    },
    {
        languageName:"c++",
        languageFilename:'cpp'
    },
]

myCoding.forEach((item)=>{
    console.log(item.languageFilename);
})

const myNums = [1,2,3,4,5,6,7,8,9]
const newNums = myNums.filter((num)=>num >4)
console.log(newNums);

myNums.forEach((num)=>{
    if(num>4){
        newNums.push(num)
    }
})

console.log(newNums);