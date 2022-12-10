import React from "react";
import PropTypes from 'prop-types';
const ChildProptypes = ({name,mob,addresses}) => {
    return (
        <div>{name} {mob} {addresses} </div>
    )
}
ChildProptypes.prototype={
    name:PropTypes.string,
    mob:PropTypes.number,
    addresses:PropTypes.array
}
export default ChildProptypes;