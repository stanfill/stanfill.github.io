---
layout: page
title: 
tagline: Bryan Stanfill
---
{% include JB/setup %}

Welcome to my website/blog.  It is underconstruction while I figure out [JB](http://jekyllbootstrap.com/).
    
## Recent posts

An introduction to the  [`rotations`](http://cran.r-project.org/web/packages/rotations/index.html) package in R:

<ul class="posts">
  {% for post in site.posts %}
    <li><span>{{ post.date | date_to_string }}</span> &raquo; <a href="{{ BASE_PATH }}{{ post.url }}">{{ post.title }}</a></li>
  {% endfor %}
</ul>



