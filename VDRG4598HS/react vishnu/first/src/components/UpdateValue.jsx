import {React,useState} from "react";
const UpdatevalueFunc=()=>{
    var [a,updatevalue]=useState(5);
    const change=(e)=>{
      updatevalue(a+1);
    }
    return(
      <>
      <h1>Data component is running</h1>
      <h2>value of a={a}</h2>
      <button onClick={change}>Increase</button>
    </>
    )
  }
  export default UpdatevalueFunc