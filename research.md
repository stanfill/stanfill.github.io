---
title: Research
tagline: 
group: navigation
layout: page
---
{% include JB/setup %}


### EM Videos

* Segmenting [EM vidoes with an anode in them](http://stanfill.github.io/Compare_BG_Functions.nb.html)
* Segmenting [Core shell videos](http://stanfill.github.io/Binning_core_shell_videos.nb.html)

### Uncertainty in Complex Computer Models

* Complex computer models, e.g. [APSIM](http://www.apsim.info/), are subject to several sources of uncertainty, including but not limited to:
  + imperfect knowledge about input and internal parameter values
  + the model's imperfect representation of the true process
  
* Understanding how uncertainty in parameter and input values is propagated through the simulator informs future studies.  That is, a thorough sensitivity analysis will identify which parameters require further investigation to reduce the uncertainty in the final product.

* Traditional sensitivity analysis methods require a large number of simulator runs.  If the simulator takes a long time to run then sensitivity analysis is impractical and sometimes impossible.  The use of efficient emulators or other approximations to the simulator is an important tool that allows for a complete sensitivity analysis of even the most complex computer models.

* Currently I am working to develop an efficient way to conduct a sensitivity analysis of APSIM that incorporates spatial and temporal effects using emulators.

### Statistics in SO(3)

* [My dissertation](http://lib.dr.iastate.edu/etd/13760/) covered several topics about statistical methods for the rotation group SO(3)
  + Chapter two considers various intrinsic and extrinsic estimators for the central orientation (or mean) based on a sample of rotationally symmetric random rotations. This chapter also can be found in [Technometrics](http://amstat.tandfonline.com/doi/abs/10.1080/00401706.2013.826145#.U_bQrvmSync).
  + Non-parametric confidence regions for the central orientation are considered in chapter three.  An extended and polished version of this chapter can be found in the [Journal of Multivariate Analysis](http://www.sciencedirect.com/science/article/pii/S0047259X14002681).
  + Several asymptotic properties of the extrinsic median on SO(3) are derived and it is compared to the extrinsic mean with respect to efficiency and robustness in chapter four.
  + Chapter five describes the R package `rotations`, which can also can be found in [The R Journal](http://journal.r-project.org/archive/2014-1/).

* Currently I am working on several related topics
  + I am developing a test for outliers in SO(3)
  + Introducing the concept of influence functions in SO(3)
  + Deriving asymptotic properties of intrinsic (geometeric) estimators for the central orientation
