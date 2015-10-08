---
title: Nonparametric confidence regions for the central orientation of random rotations
layout: post
category : articles
tagline: "An accessible summary of results"
tags : []
---
{% include JB/setup %}

In this article my co-authors and I propose two methods to infer about the central orientation of rotationally symmetric distributed data in $SO(3)$.  Again in English: we proposed two methods that can be used to learn about the mean of a sample where each datum is an object's orientation in three-dimensions.  We illustrate our methods with an sample of crystal orientations on the surface of a piece of nickle, which can be hard to envision.  Consider instead (think of an accessible example)

The main result of the article is a central limit-type theorem for the angle-axis pair of centered mean orientation.  In particular, the squared length of the scaled vector $$h$$ (in Euclidean space) follows a $$\chi^2$$ distribution for samples that are sufficiently large, where $$h$$ is associated with the centerd rotation $$S^\top\hat{S}_n$$ (in $$SO(3)$$).  From this 


This brings up an important question: why not just create a confidence region for the mean orientation itself?  Why do we need to transform the data into vectors, derive the result and translate the result back into the space we care about, $$SO(3)$$?  The simple answer is because we have a multivariate central limit theorem that can be applied to the vector $$h$$, which takes care of a lot of book keeping that would need to be done otherwise.

~~~ r
library(rotations)
data(nickel)
loc698 <- subset(nickel, location == 698)

Rs <- as.SO3(loc698[,5:13])
Shat <- mean(Rs)
lsa_direct <- region(Rs, method = "direct", type = "asymptotic", estimator = "mean", alp = 0.1)
lsa_trans <- region(Rs, method = "transform", type = "asymptotic", estimator = "mean", alp = 0.1)
boot_direct <- region(Rs, method = "direct", type = "bootstrap", estimator = "mean", alp = 0.1)
boot_trans <- region(Rs, method = "transform", type = "bootstrap", estimator = "mean", alp = 0.1)
~~~


