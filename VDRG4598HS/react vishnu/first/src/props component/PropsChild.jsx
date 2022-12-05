// 1st way
const ChildProps=(Props)=>
{
    return (
        <>
            <h1>Child Component is running.....</h1>
            <h2>Name {Props.name} address {Props.address} </h2>
        </>
    )
}
// 2nd way
const ChildProps1=({name,address})=>
{
    return (
        <>
            <h1>Child Component is running.....</h1>
            <h2>Name {name} address {address} </h2>
        </>
    )
}
export default ChildProps
export {ChildProps1}