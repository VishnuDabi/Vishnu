const Child=(Props)=>
{
    console.log(Props);
    return (
        <>
        <h1>Child Component is running.....</h1>
        <h2>Name {Props.name} address {Props.address}</h2>
        </>
    )
}
const First=()=>
{
    return <h1>first Component is ruuning</h1>
}
const Second=()=>
{
    return <h1>second Component is ruuning</h1>
}
export default Child
export {First,Second}
