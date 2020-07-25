let eventTargetValue = event => {
    let target = event |> ReactEvent.Form.target;
    ReactDOMRe.domElementToObj(target)##value;
};

/* Note, ReactEventRe is deprecated, use ReactEvent.Form.target, and remove ReactDOMRe.domElementToObj wrapper */