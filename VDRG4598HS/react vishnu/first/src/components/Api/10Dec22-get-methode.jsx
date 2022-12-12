import React from "react";
import '../../../node_modules/bootstrap/dist/css/bootstrap.min.css';
import axios from 'axios';
import { useState,useEffect } from "react";
const GetData = () => {
    let [data, updatedata] = useState([]);
    useEffect(() => {
        show();
    },[]);
    async function show() {
        var res = await axios("https://restapiss.herokuapp.com/product/");
        updatedata(res.data);
        console.log(res.data)
    }
    return (
        <>
            <h1>App component is Running</h1>
            <table className="border table">
                <thead>
                    <tr>
                        <th>Id</th>
                        <th>Name</th>
                        <th>Price</th>
                        <th>Category</th>
                        <th>Company</th>
                    </tr>
                </thead>
                <tbody>
                    {data.map((v) => (<tr key={v.id}>
                        <td>{v.id}</td>
                        <td>{v.name}</td>
                        <td>{v.price}</td>
                        <td>{v.cat}</td>
                        <td>{v.cmp}</td>
                    </tr>
                    ))}
                    <tr>

                    </tr>
                </tbody>
            </table>
        </>
    )

}
export default GetData;