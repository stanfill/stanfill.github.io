---
layout: page
title: Bryan Stanfill
tagline: 
---
{% include JB/setup %}

Welcome to my website.  It is underconstruction while I figure out [JB](http://jekyllbootstrap.com/).
    
## First Post

First (useless) post:

<ul class="posts">
  {% for post in site.posts %}
    <li><span>{{ post.date | date_to_string }}</span> &raquo; <a href="{{ BASE_PATH }}{{ post.url }}">{{ post.title }}</a></li>
  {% endfor %}
</ul>



