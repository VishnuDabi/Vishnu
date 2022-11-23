import React from "react";
const Props_Child=(props)=>{
    console.log(props);
    return (
        <>
            <h1 align="center">Child component is running...</h1>
            <h2>Name {props.name} addresss {props.address}</h2>
        </>
    )
}
export default Props_Child