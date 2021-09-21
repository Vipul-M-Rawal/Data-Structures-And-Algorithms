const express=require("express")

const app=express();
const port=80;
app.get("/",(req,res)=>{
    res.send("this is my home page ")
});
app.get("/about",(req,res)=>{
    res.send("this is my first about page ")
});
app.post("/about",(req,res)=>{
    res.send("this is post of  my first about page ")
});
app.listen(port,()=>{
console.log(`the applicatio started successfully on port ${port}`)
})