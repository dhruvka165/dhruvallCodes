const button = document.getElementById("addButton");
const listElement = document.getElementById("mylist");
button.addEventListener("click",function(){
    const newitem =document.createElement("li");
    newitem.textContent = "Newitem";

    var button = document.querySelector("button");
    button.addEventListener("click", function() {
        var heading = document.getElementById("myHeading");
        heading.style.color = "red";
    });
    
    listElement.appendChild(newitem);
});

