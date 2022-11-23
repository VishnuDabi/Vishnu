import React from "react";
const Child=()=>{
    return <h1>Child component is running.....</h1>
}
const First=()=>
{
    return    <h1>First Component is running </h1>
}
const Second=()=>{
    return <h1>Second component is running......</h1>
}
export default Child        // default name can be changed during import 
export {First,Second}       