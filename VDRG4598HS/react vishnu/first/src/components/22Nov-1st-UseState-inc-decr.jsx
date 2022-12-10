import React, { useEffect } from "react";
import { useState } from "react";
const AppUseState=()=>{
    // useEffect(()=>{
    //     alert('Useeffect called succesfully');               // problem repeat again again
    // });
    // useEffect(() => {
    //     alert('Useeffect called succesfully');                      // add blank array for only one time showing this code 
    // }, [])
    // useEffect(() => {
    //     alert('Useeffect called succesfully');                      // n not initialize so write this code below variables 
    // }, [n])
    
    
    let [n,updateValue]=useState(0);
    let [n1,updateValue1]=useState(0);
    useEffect(() => {
        alert('Useeffect called succesfully');                      // by using n inside array, alert showing only when n variable change 
    }, [n])
    return(
        <>
            <button onClick={()=>
            {
                updateValue(n+1);
            }}>Increment</button>
            <input type="text" value={n} readOnly />
            <input type="text" value={n1} readOnly />
            <button onClick={()=>{
                updateValue1(n1+1);
            }}>Decrement</button>
        </>
    )
}
export default AppUseState;