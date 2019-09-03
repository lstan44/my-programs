#!/usr/bin/env bash
d=$1
if [[ -z "$d" ]]; then
  echo "You must provide a valid directory path."
  exit
fi

if [[ ! -d "$d" ]]; then
  echo "The path provided is not valid."
  exit
fi

cd $d
if [[ $(ls | grep .pdf$ | wc -l) -gt 0 ]]; then
  if [[ ! -d "myPDFs" ]]; then
    mkdir "myPDFs"
    pdfs=$d"/*.pdf"
    pdf_folder=$d"/myPDFs"
    mv $pdfs $pdf_folder
  fi
fi
