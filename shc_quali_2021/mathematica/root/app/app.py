
import json

from flask import Flask, request, render_template, session, redirect, url_for

app = Flask(__name__, static_url_path='/static')

FLAG = 'shc2021{n1c3_sMt_s0lv3r_m0v3z}'


@app.route('/', methods=['GET'])
def index(): return render_template('index.html')

@app.route('/check', methods=['GET'])
def check():

    a = 0
    b = 0
    c = 0
    d = 0

    try:
        a = int(request.args.get('a'))
        b = int(request.args.get('b'))
        c = int(request.args.get('c'))
        d = int(request.args.get('d'))
    except: pass

    checks = [
        (a > 400000),
        (a % 30 == 5),
        (b > 30000000000000000),
        (a**2 < b),
        (b % 2400000000000000 == 3),
        (2*(a+b) == c+(d*100)),
        (d > 40000000000),
        ((d*25)% 4 == 1),
        (d % 99 == 3),
        (d % 5 == 1)
    ]


    check_failed = (False in checks)

    result_json = {}

    if check_failed:
        result_json = {
            'check' : False,
            'msg' : 'Check failed. :('
        }
    else:
        result_json = {
            'check' : True,
            'msg' : ('Flag: ' + FLAG)
        }


    return json.dumps(result_json)
