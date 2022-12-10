import React from "react";
const Lang = ({ name, duration, fees, img }) => {
    return (
        <>
            <div>
                <h1>Technology : {name} </h1>
                <h2>Duration : {duration} </h2>
                <h2>Fees: {fees}</h2>
                <img src={img} alt="Language" height="150px" />

            </div>
        </>
    )

}
Lang.defaultProps = {
    name: "front end",
    duration: "8 Months",
    fees: 150000
}
export default Lang;