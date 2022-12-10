import React,{ useContext } from "react"
import { Course,Name } from "../../App"
const Use_context=()=>{
    let nm=useContext(Name);
    let cr=useContext(Course);
    return (
        <>
            <h3>Third context is running</h3>
            <h3>{nm} {cr} </h3>
        </>
    )
}
export default Use_context;