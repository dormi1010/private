# coding: UTF-8
import urllib3
from bs4 import BeautifulSoup
import time
from selenium import webdriver
from selenium.webdriver.chrome.options import Options


def GetData():

    url = "https://kenkoooo.com/atcoder/atcoder-api/results?user=dormi1010"

    https = urllib3.PoolManager()

    param = {
        'user': 'dormi1010',
        'type': 'json'
    }
    r = https.request('GET', url)

    return r.status


# ブラウザのオプションを格納する変数をもらってきます。
options = webdriver.ChromeOptions()

# Headlessモードを有効にする（コメントアウトするとブラウザが実際に立ち上がります）
# options.set_headless(True)

# ブラウザを起動する
driver = webdriver.Chrome(chrome_options=options)

# ブラウザでアクセスする
driver.get("https://www.nikkei.com/markets/kabu/")

time.sleep(5)

# HTMLを文字コードをUTF-8に変換してから取得します。
html = driver.page_source.encode('utf-8')

# BeautifulSoupで扱えるようにパースします
soup = BeautifulSoup(html, "html.parser")

# idがheikinの要素を表示
print(soup.select_one("#heikin"))
