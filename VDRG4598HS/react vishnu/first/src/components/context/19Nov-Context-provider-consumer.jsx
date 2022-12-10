import React from "react"
import { Course,Name } from "../../App"
const Third_context=()=>{
    return (
        <>
            <h3>Third context is running</h3>
            {/* <h3>{nm} {cr} </h3> */}
            <Name.Consumer>
                {(name)=>{
                    return (<div><h2>{name}</h2>
                    <Course.Consumer>{
                        (cr)=>{
                            return <h2>{cr} </h2>
                        }}</Course.Consumer>
                    </div>)
                }}
            </Name.Consumer>
        </>
    )
}
export default Third_context