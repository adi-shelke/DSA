import React, { useState } from 'react';

const ResizableBox = ({ initialWidth }) => {
    const [width, setWidth] = useState(initialWidth);

    const handleResize = (event) => {
        const newWidth = event.target.offsetWidth;
        setWidth(newWidth);
    };

    return (
        <div
            style={{ width: `${width}px`, border: '1px solid black' }}
            onMouseMove={handleResize}
        >
            Resizable Box
        </div>
    );
};

export default ResizableBox;