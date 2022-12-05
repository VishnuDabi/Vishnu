import React from "react";
const Child=()=>{
return <h1>hello</h1>
}
const Child1=()=>{
    return (
        <div>
            <h2>name</h2>
            <p>addres:indore</p>
        </div>
    )
}
const Child2=()=>{
    return (
        <React.Fragment>
            <p>skills</p>
            <img src="" alt="no img" />
            <p>br</p>
        </React.Fragment>
    )
}
export default Child
export {Child1,Child2}
