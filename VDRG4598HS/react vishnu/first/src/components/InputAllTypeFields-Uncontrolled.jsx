import React from "react";
import { useState } from "react";
const InputTypeFields=()=>{
    let [name,updatename]=useState();
    let [email,updateemail]=useState();
    let [pwd,updatepwd]=useState();
    const change=(e)=>{
        if(e.target.name==='name')
        {
            updatename(e.target.value);
        }
        else if(e.target.name==='email')
        {
            updateemail(e.target.value);
        }
        else if(e.target.name==='pwd')
        {
            updatepwd(e.target.value);
        }
    }
    return(
        <>
            <h1>Input Type Fields component is running</h1>
            <h2>{name} {email} {pwd} </h2>
            Name<input type="text" name="name" value={name} onChange={change} /><br/>
            Email <input type="email" name="email"  value={email} onChange={change} /><br />
            Password <input type="password"  name="pwd" value={pwd} onChange={change} /><br />
        </>
    )
}
export default InputTypeFields