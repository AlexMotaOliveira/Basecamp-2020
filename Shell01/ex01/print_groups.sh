#!/bin/sh
groups $FT_USER | sed 's/ /,/g'   | tr -d '\n' 
# sed - stream editor for filtering and transforming text
# groups - print the groups a user is in