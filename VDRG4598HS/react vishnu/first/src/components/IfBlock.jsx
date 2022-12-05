import React from "react";

const IfExample=()=>{
    if(n%2===0)
    {
      return <First/>
    }
    else
    {
      return <Second/>
    }
}
const IfExample1=()=>{1
    return (
        <>
          {n%2==0?<First/>:<Second/>}
        </>
    )
}
export default IfExample
export {IfExample1}