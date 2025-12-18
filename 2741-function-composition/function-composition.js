/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(arr) {
    
    return function(x) {
        let result=x
        for(let i=arr.length-1;i>=0;i--){
            result=arr[i](result);
        }
        return result;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */