---
layout: post
category : r
tagline: "Sensitivity package"
tags : [sensitivity analysis, APSIM, R]
---

Lessons I have learned from a poorly documented package

* `X1` and `X2` need to be `data.frames` for the `sobol` functions
* How does it not check to see if `omega` is as long as it needs to be in `fast99`?