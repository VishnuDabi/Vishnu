import React from "react"
const InternalCss = () => {
   let styls={color:'blue',backgroundColor:'#1045'};
   let styls1={color:'#1235',backgroundColor:"#606"}
   return (
    <>
        <h1 style={styls}>Internal css Styling</h1>
        <h1 style={styls1}>hello</h1>
    </>
   ) 
    
}
export default InternalCss