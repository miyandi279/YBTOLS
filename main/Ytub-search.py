#code by : @ Miyandi279
#Youtube : Miyandi279
#Team    : Bengkulu Cyber Team
#web team : http://bcset.rf.gd

import urllib.request
from bs4 import BeautifulSoup
import requests
import urllib.parse
import re

TxtToSearch = input("Text to search: ")
query = urllib.parse.quote(TxtToSearch)
url = "https://www.youtube.com/results?search_query=" + query
response = urllib.request.urlopen(url)
html = response.read()
soup = BeautifulSoup(html, "html.parser")
for vid in soup.findAll(attrs={"class":"yt-uix-tile-link"}):
  a = ("https://www.youtube.com" + vid["href"])
  def scrape_info(url): 
    r = requests.get(url) 
    s = BeautifulSoup(r.text, "html.parser") 
    title = s.find("span", class_="watch-title").text.replace("\n", "") 
    data = title 
    return data
  if __name__ == "__main__": 
    url1 = a
    data1= scrape_info(url1)
    data1 = (a, ''.join(data1))
    print("".join(data1))
        
       
