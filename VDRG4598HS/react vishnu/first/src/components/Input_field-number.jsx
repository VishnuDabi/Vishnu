import React from "react";
import { useState } from "react";
const App_input_field = () => {
    var [n, updatevalue] = useState(5);
    const change = (e) => {
        updatevalue(e.target.value);
        console.log(e.target.value);
        console.log(e.target.name);
        console.log(e.target.type);
    }
    return (
        <>
            <h1>Data component is running</h1>
            <input type='number' name="n" value={n} onChange={change} />
            <button onClick={change}>Increase</button>
        </>
    )
}
export default App_input_field