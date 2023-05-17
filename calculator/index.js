let input=document.getElementById("input");
let buttons=document.querySelectorAll("button");

let string="";
let arr=Array.from(buttons);
console.log(arr);
arr.forEach(button => {
    button.addEventListener('click', (e)=>{
        if(e.target.innerHTML=="=")
        {
            string=eval(string);
            input.value=string;
            console.log(string);
        }
        else if(e.target.innerHTML=="Clear All")
        {
            string="";
            input.value=string;
        }
        else
        {
            string+=e.target.innerHTML;
            input.value=string;
            console.log(string);
        }
    })
})