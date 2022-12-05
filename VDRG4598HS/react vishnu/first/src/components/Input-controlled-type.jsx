import React from "react";
import { useState } from "react";
const EmpData=()=>{
    let [emp,updateemp]=useState({name:'',email:'',pwd:''});
    const change=(e)=>{
        updateemp({...emp,[e.target.name]:e.target.value});
    }
    return(
        <>
            <h1>EmpData component running...</h1>
            <h2>{emp.name} {emp.email} {emp.pwd} </h2>
            Name<input type="text" name="name" value={emp.name} onChange={change} /><br/>
            Email <input type="email" name="email"  value={emp.email} onChange={change} /><br />
            Password <input type="password"  name="pwd" value={emp.pwd} onChange={change} /><br />
        </>
    )
}
export default EmpData;