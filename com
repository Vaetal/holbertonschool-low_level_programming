#!/bin/bash
git add .
git commit -m "Scripted C Type Commits"
git push
