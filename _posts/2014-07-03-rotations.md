---
title: SO(3) in R
layout: post
category : R
tagline: "Intoduction to the rotations package"
tags : [rotations, R, tutorial]
---
{% include JB/setup %}

Here is how to plot some randomly sampled observations from the location model in $$SO(3)$$

~~~ r
library(rotations)
plot(ruars(20,rcayley,50))
~~~