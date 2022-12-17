// import React from "react";
// import { useEffect } from "react";
// import { useState } from "react";
// import axios from "axios";
// const Add=()=>{
//    let [data,updatedata]=useState([]);
//    let [product,updateproduct]=useState({name:'',price:0,cat:'',cpm:''});
//     useEffect(()=>{
//         show();
//     });
//     async function show()
//     {
//         var res=await axios.get("http://restapiss.herokuapp.com/product/");
//         updatedata(res.data);
//     }
//     function change(e)
//     {
//         updateproduct({...product,[e.target.name]:e.target.value});
//         return (
//             <>
//             <table className="border table">
//                 <thead>
//                     <tr>
//                         <th>Id</th>
//                         <th>Name</th>
//                         <th>Price</th>
//                         <th>Category</th>
//                         <th>Company</th>
//                     </tr>
//                 </thead>
//                 <tbody>
//                     {data.map((v) => (<tr key={v.id}>
//                         <td>{v.id}</td>
//                         <td>{v.name}</td>
//                         <td>{v.price}</td>
//                         <td>{v.cat}</td>
//                         <td>{v.cmp}</td>
//                     </tr>
//                     ))}
//                 </tbody>
//             </table>
//             <form onSubmit={(e)=>{
//           e.preventDefault();
//           async function addData()
//           {
//             var res=await axios.post("https://restapiss.herokuapp.com/product/",product);
//             if(res.status===201)
//             {
//               alert("product added sucessfully");
//             }
//           }
//           addData();
//       }}>
//         Name<input type="text" name="name" value={product.name} onChange={change} /><br/>
//         Price<input type="number" name="price" value={product.price} onChange={change} /><br/>
//         Category<input type="text" name="cat" value={product.cat} onChange={change} /><br/>
//         Company<input type="text" name="cmp" value={product.cmp} onChange={change} /><br/>
//         <button className='btn btn-primary' onClick={change}>Add Product</button>
//       </form>
//         </>
//         )
//     }
    
// }
// export default Add;

import React, { useEffect, useState } from 'react'
// import './App.css';
// import '../node_modules/bootstrap/dist/css/bootstrap.min.css';

import axios from 'axios';
const Add = () => {
  let [data,updatedata]=useState([]);
  let [product,updateproduct]=useState({name:'',price:0,cat:'',cmp:''});
  useEffect(()=>{
    show();
  });  
  async function show()
  {
    var res=await axios.get("https://restapiss.herokuapp.com/product/");
    updatedata(res.data);
  }
  function change(e)
  {
    updateproduct({...product,[e.target.name]:e.target.value});
  }
  return (
    <>
      <h1>Add component is running</h1>
      <table className='table table-bordered text-center table-hover'>
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
          {data.map((v)=>{
            return(<tr key={v.id}>
              <td>{v.id}</td>
              <td>{v.name}</td>
              <td>{v.price}</td>
              <td>{v.cat}</td>
              <td>{v.cmp}</td>
            </tr>)
          })}
        </tbody>
      </table>
      <form onSubmit={(e)=>{
          e.preventDefault();
          async function addData()
          {
            var res=await axios.post("https://restapiss.herokuapp.com/product/",product);
            if(res.status===201)
            {
              alert("product added sucessfully");
            }
          }
          addData();
      }}>
        Name<input type="text" name="name" value={product.name} onChange={change} /><br/>
        Price<input type="number" name="price" value={product.price} onChange={change} /><br/>
        Category<input type="text" name="cat" value={product.cat} onChange={change} /><br/>
        Company<input type="text" name="cmp" value={product.cmp} onChange={change} /><br/>
        <button className='btn btn-primary'>Add Product</button>
      </form>
    </> 
  )
}
export default Add;