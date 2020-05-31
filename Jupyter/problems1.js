(this["webpackJsonpatcoder-problems"] = this["webpackJsonpatcoder-problems"] || []).push([[0], {
    234: function(e, t, a) {
        e.exports = a(468)
    },
    240: function(e, t, a) {},
    241: function(e, t, a) {},
    453: function(e, t) {},
    468: function(e, t, a) {
        "use strict";
        a.r(t);
        a(235);
        var n = a(0)
          , l = a.n(n)
          , r = a(23)
          , o = a.n(r)
          , c = (a(240),
        a(241),
        a(13))
          , s = a(39)
          , i = a(484)
          , m = a(7)
          , u = a(10)
          , d = a(470)
          , p = a(16);
        var f = e=>{
            return l.a.createElement(d.a, null, l.a.createElement("h2", null, e.title), l.a.createElement(p.BootstrapTable, {
                height: "auto",
                data: (t = e.ranking,
                t.sort((e,t)=>t.problem_count - e.problem_count).reduce((e,t,a)=>{
                    const n = 0 === e.length ? void 0 : e[e.length - 1]
                      , l = n && n.count === t.problem_count ? {
                        rank: n.rank,
                        id: t.user_id,
                        count: t.problem_count
                    } : {
                        rank: a + 1,
                        id: t.user_id,
                        count: t.problem_count
                    };
                    return e.push(l),
                    e
                }
                , [])),
                pagination: !0,
                striped: !0,
                hover: !0,
                search: !0,
                options: {
                    paginationPosition: "top",
                    sizePerPage: 20,
                    sizePerPageList: [{
                        text: "20",
                        value: 20
                    }, {
                        text: "50",
                        value: 50
                    }, {
                        text: "100",
                        value: 100
                    }, {
                        text: "200",
                        value: 200
                    }, {
                        text: "All",
                        value: e.ranking.length
                    }]
                }
            }, l.a.createElement(p.TableHeaderColumn, {
                dataField: "rank"
            }, "#"), l.a.createElement(p.TableHeaderColumn, {
                dataField: "id",
                isKey: !0
            }, "User"), l.a.createElement(p.TableHeaderColumn, {
                dataField: "count"
            }, "Count")));
            var t
        }
          , b = a(27)
          , h = a.n(b)
          , E = a(55)
          , g = a(17);
        const v = e=>"string" === typeof e.id && "string" === typeof e.contest_id && "string" === typeof e.title && ("string" === typeof e.first_user_id || null === e.first_user_id) && ("string" === typeof e.first_contest_id || null === e.first_contest_id) && ("number" === typeof e.first_submission_id || null === e.first_submission_id) && ("string" === typeof e.fastest_user_id || null === e.fastest_user_id) && ("string" === typeof e.fastest_contest_id || null === e.fastest_contest_id) && ("number" === typeof e.fastest_submission_id || null === e.fastest_submission_id) && ("number" === typeof e.execution_time || null === e.execution_time) && ("string" === typeof e.shortest_user_id || null === e.shortest_user_id) && ("string" === typeof e.shortest_contest_id || null === e.shortest_contest_id) && ("number" === typeof e.shortest_submission_id || null === e.shortest_submission_id) && ("number" === typeof e.source_code_length || null === e.source_code_length) && ("number" === typeof e.solver_count || null === e.solver_count) && ("number" === typeof e.point || "undefined" === typeof e.point || null === e.point)
          , y = e=>("number" === typeof e.slope || "undefined" === typeof e.slope) && ("number" === typeof e.intercept || "undefined" === typeof e.intercept) && ("number" === typeof e.difficulty || "undefined" === typeof e.difficulty) && ("number" === typeof e.rawDifficulty || "undefined" === typeof e.rawDifficulty) && ("number" === typeof e.discrimination || "undefined" === typeof e.discrimination) && "boolean" === typeof e.is_experimental
          , _ = e=>void 0 !== e && ("number" === typeof e.slope || "undefined" === typeof e.slope) && ("number" === typeof e.intercept || "undefined" === typeof e.intercept) && "number" === typeof e.difficulty && "number" === typeof e.rawDifficulty && "number" === typeof e.discrimination && "boolean" === typeof e.is_experimental
          , S = e=>"number" === typeof e.slope && "number" === typeof e.intercept && "number" === typeof e.variance && ("number" === typeof e.difficulty || "undefined" === typeof e.difficulty) && ("number" === typeof e.rawDifficulty || "undefined" === typeof e.rawDifficulty) && ("number" === typeof e.discrimination || "undefined" === typeof e.discrimination) && "boolean" === typeof e.is_experimental
          , k = e=>"number" === typeof e.start_epoch_second && "string" === typeof e.rate_change && "string" === typeof e.id && "number" === typeof e.duration_second && "string" === typeof e.title
          , C = e=>"string" === typeof e.id && "string" === typeof e.contest_id && "string" === typeof e.title
          , O = e=>("number" === typeof e.execution_time || null === e.execution_time) && "number" === typeof e.point && "string" === typeof e.result && "string" === typeof e.problem_id && "string" === typeof e.user_id && "number" === typeof e.epoch_second && "string" === typeof e.contest_id && "number" === typeof e.id && "string" === typeof e.language && "number" === typeof e.length
          , j = e=>"number" === typeof e.problem_count && "string" === typeof e.user_id
          , I = e=>"string" === typeof e.user_id && "number" === typeof e.point_sum
          , x = e=>"string" === typeof e.user_id && "number" === typeof e.count && "string" === typeof e.language
          , F = e=>"string" === typeof e.user_id && "number" === typeof e.streak
          , w = e=>"boolean" === typeof e.IsRated && "number" === typeof e.Place && "number" === typeof e.OldRating && "number" === typeof e.NewRating && "number" === typeof e.Performance && "number" === typeof e.InnerPerformance && "string" === typeof e.ContestScreenName && "string" === typeof e.ContestName && "string" === typeof e.EndTime;
        class M {
            constructor(e, t) {
                if (this.rating = void 0,
                this.participationCount = void 0,
                this.internalRating = void 0,
                this.rating = e,
                this.participationCount = t,
                0 === t)
                    this.internalRating = null;
                else {
                    let a;
                    a = e <= 400 ? 400 * (1 - Math.log(400 / e)) : e;
                    const n = (Math.sqrt(1 - Math.pow(.9, 2 * t)) / (1 - Math.pow(.9, t)) - 1) / (Math.sqrt(19) - 1) * 1200;
                    this.internalRating = a + n
                }
            }
        }
        const P = e=>{
            const t = e.last({
                NewRating: 0
            }).NewRating
              , a = e.filter(e=>e.IsRated).count();
            return new M(t,a)
        }
          , N = ["future_contest_2020_final_2_b", "future_contest_2020_qual_b", "future_contest_2019_final_b", "future_contest_2019_qual_b", "future2018career_b", "future_contest_2020_final_b"]
          , A = e=>N.includes(e)
          , D = /[0-9a-zA-Z_]+/
          , T = new RegExp("^".concat(D.source, "$"))
          , L = new RegExp("^\\s*(".concat(D.source, ")\\s*(,\\s*(").concat(D.source, ")\\s*)*$"))
          , R = e=>{
            const t = e.trim();
            return T.exec(t) ? t : ""
        }
          , B = e=>"AC" === e
          , U = e=>!!/^(vjudge\d|luogu_bot\d)$/.exec(e)
          , H = e=>{
            const t = e % 10
              , a = e % 100;
            return 1 === t && 11 !== a ? "st" : 2 === t && 12 !== a ? "nd" : 3 === t && 13 !== a ? "rd" : "th"
        }
          , G = e=>Math.round(e >= 400 ? e : 400 / Math.exp(1 - e / 400))
          , q = ["Grey", "Brown", "Green", "Cyan", "Blue", "Yellow", "Orange", "Red"]
          , z = e=>{
            const t = Math.min(Math.floor(e / 400), q.length - 1);
            return q[t]
        }
          , J = e=>{
            switch (z(e)) {
            case "Grey":
                return "difficulty-grey";
            case "Brown":
                return "difficulty-brown";
            case "Green":
                return "difficulty-green";
            case "Cyan":
                return "difficulty-cyan";
            case "Blue":
                return "difficulty-blue";
            case "Yellow":
                return "difficulty-yellow";
            case "Orange":
                return "difficulty-orange";
            case "Red":
                return "difficulty-red"
            }
        }
          , W = e=>{
            switch (e) {
            case "Grey":
                return "#808080";
            case "Brown":
                return "#804000";
            case "Green":
                return "#008000";
            case "Cyan":
                return "#00C0C0";
            case "Blue":
                return "#0000FF";
            case "Yellow":
                return "#C0C000";
            case "Orange":
                return "#FF8000";
            case "Red":
                return "#FF0000"
            }
        }
          , Y = (e,t)=>{
            let a = Object(m.a)();
            const n = void 0 === t ? e.size : Math.min(t, e.size);
            for (let l = 0; l < n; ++l) {
                const t = Math.floor(Math.random() * (e.size - l)) + l;
                a = a.push(e.get(t)),
                e = e.set(t, e.get(l))
            }
            return a
        }
          , K = "https://kenkoooo.com/atcoder/resources";
        function Z(e, t) {
            return fetch(e).then(e=>e.json()).then(e=>e.filter(t)).then(e=>Object(m.a)(e))
        }
        function V(e, t) {
            return fetch(e).then(e=>e.json()).then(e=>e.filter(t))
        }
        const $ = ()=>{
            return (e = K + "/problem-models.json",
            t = y,
            fetch(e).then(e=>e.json()).then(e=>Object(m.b)(e)).then(e=>e.filter(t))).then(e=>e.map(e=>void 0 === e.difficulty ? e : Object(g.a)({}, e, {
                difficulty: G(e.difficulty),
                rawDifficulty: e.difficulty
            })));
            var e, t
        }
          , Q = function() {
            var e = Object(E.a)(h.a.mark((function e(t) {
                var a;
                return h.a.wrap((function(e) {
                    for (; ; )
                        switch (e.prev = e.next) {
                        case 0:
                            if (!(t.length > 0)) {
                                e.next = 6;
                                break
                            }
                            return e.next = 3,
                            Z("".concat("https://kenkoooo.com/atcoder/proxy", "/users/").concat(t, "/history/json"), w).catch(()=>Object(m.a)());
                        case 3:
                            e.t0 = e.sent,
                            e.next = 7;
                            break;
                        case 6:
                            e.t0 = Object(m.a)();
                        case 7:
                            return a = e.t0,
                            e.abrupt("return", P(a));
                        case 9:
                        case "end":
                            return e.stop()
                        }
                }
                ), e)
            }
            )));
            return function(t) {
                return e.apply(this, arguments)
            }
        }()
          , X = ()=>Z(K + "/contests.json", k).then(e=>e.reduce((e,t)=>e.set(t.id, t), Object(m.b)()))
          , ee = (e,t,a,n)=>{
            if (0 === e.length)
                return Promise.resolve(Object(m.a)());
            const l = e.join(",")
              , r = t.join(",");
            return Z("".concat("https://kenkoooo.com/atcoder/atcoder-api", "/v3/users_and_time?users=").concat(l, "&problems=").concat(r, "&from=").concat(a, "&to=").concat(n), O)
        }
        ;
        let te;
        const ae = ()=>(void 0 === te && (te = Z(K + "/merged-problems.json", v).then(e=>e.filter(e=>!A(e.id)))),
        te);
        let ne;
        const le = ()=>(void 0 === ne && (ne = ae().then(e=>e.reduce((e,t)=>e.set(t.id, t), Object(m.b)()))),
        ne);
        let re;
        const oe = ()=>(void 0 === re && (re = $(),
        re.then(e=>localStorage.setItem("problemModels", JSON.stringify(Array.from(e.entries()))))),
        re);
        let ce;
        const se = ()=>(void 0 === ce && (ce = X()),
        ce);
        let ie;
        const me = ()=>(void 0 === ie && (ie = Z(K + "/problems.json", C).then(e=>e.filter(e=>!A(e.id))).then(e=>e.reduce((e,t)=>e.set(t.id, t), Object(m.b)()))),
        ie)
          , ue = function() {
            var e = Object(E.a)(h.a.mark((function e() {
                var t, a;
                return h.a.wrap((function(e) {
                    for (; ; )
                        switch (e.prev = e.next) {
                        case 0:
                            return e.next = 2,
                            Z(K + "/contest-problem.json", e=>"string" === typeof e.contest_id && "string" === typeof e.problem_id);
                        case 2:
                            return t = e.sent,
                            e.next = 5,
                            me();
                        case 5:
                            return a = e.sent,
                            e.abrupt("return", t.map(({contest_id: e, problem_id: t})=>({
                                contest_id: e,
                                problem: a.get(t)
                            })).reduce((e,{contest_id: t, problem: a})=>void 0 === a ? e : e.update(t, Object(m.a)(), e=>e.push(a)), Object(m.b)()));
                        case 7:
                        case "end":
                            return e.stop()
                        }
                }
                ), e)
            }
            )));
            return function() {
                return e.apply(this, arguments)
            }
        }();
        let de;
        const pe = ()=>(void 0 === de && (de = ue()),
        de);
        let fe = Object(m.b)();
        const be = e=>{
            const t = fe.get(e);
            if (t)
                return t;
            const a = (e=>e.length > 0 ? Z("".concat("https://kenkoooo.com/atcoder/atcoder-api", "/results?user=").concat(e), O) : Promise.resolve(Object(m.a)()).then(e=>e.filter(e=>{
                return t = e.result,
                ["AC", "WA", "TLE", "CE", "RE", "MLE", "OLE", "QLE", "IE", "NG"].includes(t);
                var t
            }
            )))(e);
            return fe = fe.set(e, a),
            a
        }
        ;
        let he;
        const Ee = ()=>(void 0 === he && (he = V(K + "/streaks.json", F).then(e=>e.map(e=>({
            problem_count: e.streak,
            user_id: e.user_id
        })))),
        he);
        let ge;
        const ve = ()=>(void 0 === ge && (ge = V(K + "/ac.json", j).then(e=>e.filter(e=>!U(e.user_id)))),
        ge)
          , ye = (e,t)=>e.map(e=>e[t]).reduce((e,t)=>t ? e.update(t, 0, e=>e + 1) : e, Object(m.b)()).entrySeq().map(([e,t])=>({
            user_id: e,
            problem_count: t
        })).toList()
          , _e = ()=>ae().then(e=>ye(e, "shortest_user_id"))
          , Se = ()=>ae().then(e=>ye(e, "fastest_user_id"))
          , ke = ()=>ae().then(e=>ye(e, "first_user_id"));
        let Ce;
        const Oe = {
            userId: "",
            selectableLanguages: void 0
        };
        let je;
        const Ie = ()=>(void 0 === je && (je = V(K + "/sums.json", I).then(e=>e.map(e=>({
            problem_count: e.point_sum,
            user_id: e.user_id
        }))).then(e=>e.filter(e=>!U(e.user_id)))),
        je)
          , xe = Object(m.b)()
          , Fe = e=>{
            const t = xe.get(e);
            if (t)
                return t;
            const a = Q(e);
            return xe.set(e, a),
            a
        }
        ;
        var we = Object(u.connect)(()=>({
            rankingFetch: {
                comparison: null,
                value: ()=>ve()
            }
        }))(e=>l.a.createElement(f, {
            title: "AC Count Ranking",
            ranking: e.rankingFetch.fulfilled ? e.rankingFetch.value : []
        }));
        var Me = Object(u.connect)(()=>({
            rankingFetch: {
                comparison: null,
                value: Se
            }
        }))(e=>l.a.createElement(f, {
            title: "Fastest Submission Ranking",
            ranking: e.rankingFetch.fulfilled ? e.rankingFetch.value.toArray() : []
        }));
        var Pe = Object(u.connect)(()=>({
            rankingFetch: {
                comparison: null,
                value: ke
            }
        }))(e=>l.a.createElement(f, {
            title: "First AC Ranking",
            ranking: e.rankingFetch.fulfilled ? e.rankingFetch.value.toArray() : []
        }));
        var Ne = Object(u.connect)(()=>({
            rankingFetch: {
                comparison: null,
                value: _e
            }
        }))(e=>l.a.createElement(f, {
            title: "Top Golfers",
            ranking: e.rankingFetch.fulfilled ? e.rankingFetch.value.toArray() : []
        }));
        var Ae = Object(u.connect)(()=>({
            rankingFetch: {
                comparison: null,
                value: Ie
            }
        }))(e=>l.a.createElement(f, {
            title: "Rated Point Ranking",
            ranking: e.rankingFetch.fulfilled ? e.rankingFetch.value : []
        }))
          , De = a(6)
          , Te = a(471)
          , Le = a(472)
          , Re = a(198);
        const Be = e=>l.a.createElement("div", null, l.a.createElement(d.a, {
            className: "justify-content-center my-2 border-bottom"
        }, l.a.createElement("h1", null, e.language)), l.a.createElement(d.a, null, e.ranking.slice(0, e.size).map(({user_id: e, count: t},a)=>l.a.createElement(Te.a, {
            key: e,
            className: "text-center"
        }, l.a.createElement("h5", null, "".concat(a + 1).concat(H(a + 1))), l.a.createElement("h3", null, e), l.a.createElement("h5", {
            className: "text-muted"
        }, t, " AC")))))
          , Ue = [3, 5, 10, 20];
        var He = Object(u.connect)(()=>({
            rankingFetch: {
                comparison: null,
                value: ()=>(void 0 === Ce && (Ce = Z(K + "/lang.json", x).then(e=>e.reduce((e,t)=>e.update(t.language, Object(m.a)(), e=>e.push(t)), Object(m.b)()).map(e=>e.sort((e,t)=>t.count - e.count)))),
                Ce)
            }
        }))(e=>{
            const t = Object(n.useState)(3)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , c = e.rankingFetch.fulfilled ? e.rankingFetch.value : Object(m.b)();
            return l.a.createElement(l.a.Fragment, null, l.a.createElement("div", {
                className: "clearfix"
            }, l.a.createElement(Le.a, {
                className: "float-right"
            }, Ue.map(e=>l.a.createElement(Re.a, {
                key: e,
                color: "secondary",
                onClick: ()=>o(e),
                active: r === e
            }, e)))), l.a.createElement("div", null, c.sortBy((e,t)=>t).map((e,t)=>l.a.createElement(Be, {
                key: t,
                language: t,
                ranking: e,
                size: r
            })).valueSeq().toArray()))
        }
        )
          , Ge = a(512)
          , qe = a(511)
          , ze = a(475)
          , Je = a(476)
          , We = a(474)
          , Ye = a(71)
          , Ke = a.n(Ye)
          , Ze = a(473)
          , Ve = a(127);
        class $e extends l.a.Component {
            constructor(e) {
                super(e),
                this.state = {
                    tooltipOpen: !1
                }
            }
            render() {
                const e = this.props
                  , t = e.id
                  , a = e.difficulty
                  , n = this.state.tooltipOpen
                  , r = ()=>this.setState({
                    tooltipOpen: !n
                })
                  , o = "DifficultyCircle-" + t;
                if (null === a)
                    return l.a.createElement("span", null, l.a.createElement(Ze.a, {
                        className: "difficulty-unavailable-circle",
                        color: "info",
                        id: o,
                        pill: !0
                    }, "?"), l.a.createElement(Ve.a, {
                        placement: "top",
                        target: o,
                        isOpen: n,
                        toggle: r
                    }, "Difficulty is unavailable."));
                const c = a >= 3200 ? 1 : a % 400 / 400
                  , s = function(e) {
                    return e >= 3200 ? e < 3600 ? "#965C2C" : e < 4e3 ? "#808080" : "#ffd700" : W(z(e))
                }(a)
                  , i = parseInt(s.slice(1, 3), 16)
                  , m = parseInt(s.slice(3, 5), 16)
                  , u = parseInt(s.slice(5, 7), 16)
                  , d = Object({
                    borderColor: s,
                    background: a < 3200 ? "linear-gradient(to top, rgba(".concat(i, ", ").concat(m, ", ").concat(u, ", ", 1, ") 0%, rgba(").concat(i, ", ").concat(m, ", ").concat(u, ", ", 1, ") ").concat(100 * c, "%, rgba(").concat(i, ", ").concat(m, ", ").concat(u, ", ", 0, ") ").concat(100 * c, "%, rgba(").concat(i, ", ").concat(m, ", ").concat(u, ", ", 0, ") 100%)") : a < 3600 ? "linear-gradient(to right, ".concat(s, ", #FFDABD, ").concat(s, ")") : "linear-gradient(to right, ".concat(s, ", white, ").concat(s, ")")
                })
                  , p = "Difficulty: ".concat(a);
                return l.a.createElement(l.a.Fragment, null, l.a.createElement("span", {
                    className: "difficulty-circle",
                    style: d,
                    id: o
                }), l.a.createElement(Ve.a, {
                    placement: "top",
                    target: o,
                    isOpen: n,
                    toggle: r
                }, p))
            }
        }
        let Qe;
        !function(e) {
            e[e.Success = 0] = "Success",
            e[e.Failed = 1] = "Failed",
            e[e.Warning = 2] = "Warning",
            e[e.None = 3] = "None"
        }(Qe || (Qe = {}));
        const Xe = ()=>({
            label: Qe.None
        })
          , et = (e,t)=>{
            const a = new Map;
            e.forEach(e=>{
                var t;
                const n = null !== (t = a.get(e.problem_id)) && void 0 !== t ? t : [];
                n.push(e),
                a.set(e.problem_id, n)
            }
            );
            const n = new Map;
            return Array.from(a.keys()).forEach(e=>{
                var l;
                const r = null !== (l = a.get(e)) && void 0 !== l ? l : []
                  , o = r.filter(e=>e.user_id === t).filter(e=>B(e.result))
                  , c = r.filter(e=>e.user_id === t).filter(e=>!B(e.result))
                  , s = r.filter(e=>e.user_id !== t).filter(e=>B(e.result));
                if (o.length > 0) {
                    const t = new Set(o.map(e=>e.language))
                      , a = o.map(e=>e.epoch_second).reduceRight((e,t)=>Math.min(e, t))
                      , l = o.map(e=>e.epoch_second).reduceRight((e,t)=>Math.max(e, t));
                    n.set(e, (d = a,
                    p = l,
                    f = t,
                    {
                        label: Qe.Success,
                        epoch: d,
                        lastAcceptedEpochSecond: p,
                        solvedLanguages: f
                    }))
                } else if (s.length > 0) {
                    const t = new Set(s.map(e=>e.user_id));
                    n.set(e, (u = t,
                    {
                        label: Qe.Failed,
                        solvedRivals: u
                    }))
                } else if (c.length > 0) {
                    c.sort((e,t)=>t.id - e.id);
                    const t = c[c.length - 1];
                    n.set(e, (i = t.result,
                    m = t.epoch_second,
                    {
                        label: Qe.Warning,
                        result: i,
                        epoch: m
                    }))
                } else
                    n.set(e, Xe());
                var i, m, u, d, p, f
            }
            ),
            n
        }
        ;
        var tt = a(50)
          , at = a.n(tt);
        const nt = e=>at.a.unix(e)
          , lt = e=>at()(e, "YYYY-MM-DD")
          , rt = e=>e.format("YYYY-MM-DD")
          , ot = e=>e.format("YYYY-MM-DD HH:mm:ss")
          , ct = e=>e.format("YYYY-MM-DD HH:mm:ss (ddd)")
          , st = ()=>at()()
          , it = e=>{
            const t = Math.floor(e / 3600)
              , a = Math.floor(e / 60) - 60 * t
              , n = e - 3600 * t - 60 * a
              , l = a < 10 ? "0" + a : "" + a
              , r = n < 10 ? "0" + n : "" + n;
            return "".concat(t, ":").concat(l, ":").concat(r)
        }
          , mt = (e,t)=>{
            const a = new URLSearchParams(e.search);
            return Object.keys(t).forEach(e=>a.set(e, t[e])),
            "".concat(e.pathname, "?").concat(a.toString())
        }
          , ut = ()=>fetch("".concat("https://kenkoooo.com/atcoder/atcoder-api", "/v3/recent")).then(e=>e.json()).then(e=>e.filter(O))
          , dt = e=>e.length > 0 ? fetch("".concat("https://kenkoooo.com/atcoder/atcoder-api", "/results?user=").concat(e)).then(e=>e.json()).then(e=>e.filter(O)) : Promise.resolve([])
          , pt = "https://kenkoooo.com/atcoder/internal-api"
          , ft = "".concat(pt, "/user/get")
          , bt = "".concat(pt, "/user/update")
          , ht = e=>"".concat(pt, "/contest/get/").concat(e)
          , Et = "".concat(pt, "/contest/my")
          , gt = "".concat(pt, "/contest/update")
          , vt = "".concat(pt, "/contest/join")
          , yt = "".concat(pt, "/contest/joined")
          , _t = "".concat(pt, "/contest/create")
          , St = "".concat(pt, "/contest/recent")
          , kt = "".concat(pt, "/contest/item/update")
          , Ct = "".concat(pt, "/list/my")
          , Ot = "".concat(pt, "/list/create")
          , jt = "".concat(pt, "/list/delete")
          , It = "".concat(pt, "/list/update")
          , xt = "".concat(pt, "/list/item/update")
          , Ft = "".concat(pt, "/list/item/delete")
          , wt = "".concat(pt, "/list/item/add")
          , Mt = e=>"".concat(pt, "/list/get/").concat(e)
          , Pt = "".concat(pt, "/progress_reset/list")
          , Nt = "".concat(pt, "/progress_reset/add")
          , At = "".concat(pt, "/progress_reset/delete")
          , Dt = e=>{
            switch (e) {
            case "lockout":
                return "Lockout";
            case null:
                return "Normal"
            }
        }
          , Tt = (e,t,a)=>e.filter(e=>{
            var n, l;
            if (e.user_id !== a)
                return !0;
            const r = null !== (n = null === (l = t.items.find(t=>t.problem_id === e.problem_id)) || void 0 === l ? void 0 : l.reset_epoch_second) && void 0 !== n ? n : 0;
            return e.epoch_second > r
        }
        )
          , Lt = e=>"".concat("https://atcoder.jp", "/contests/").concat(e)
          , Rt = (e,t)=>"".concat(Lt(t), "/submissions/").concat(e)
          , Bt = (e,t)=>"".concat(Lt(t), "/tasks/").concat(e)
          , Ut = e=>"https://atcoder.jp/users/".concat(e)
          , Ht = "https://github.com/login/oauth/authorize?client_id=162a5276634fc8b970f7"
          , Gt = ["ABC", "ARC", "AGC", "Other Rated Contests", "PAST", "JOI", "JAG", "Marathon", "Other Contests"]
          , qt = e=>"-" !== e.rate_change && e.start_epoch_second >= 1468670400
          , zt = e=>l.a.createElement("a", {
            href: e.href,
            target: "_blank",
            rel: "noopener",
            className: e.className
        }, e.children);
        var Jt;
        function Wt(e) {
            return e === Jt.All ? "difficulty-red" : e === Jt.Unrated ? "" : J(e)
        }
        !function(e) {
            e[e.All = 0] = "All",
            e[e.Unrated = 1] = "Unrated"
        }(Jt || (Jt = {}));
        var Yt = e=>{
            const t = e.contest
              , a = e.title
              , n = function(e) {
                if (1468670400 > e.start_epoch_second)
                    return Jt.Unrated;
                switch (e.rate_change) {
                case void 0:
                case "-":
                    return Jt.Unrated;
                case "All":
                    return Jt.All;
                case !!/\d+/.test(e.rate_change) && e.rate_change:
                    {
                        const t = /\d+/.exec(e.rate_change);
                        return null !== t ? parseInt(t[0], 10) : Jt.Unrated
                    }
                default:
                    return Jt.Unrated
                }
            }(t);
            return l.a.createElement(l.a.Fragment, null, l.a.createElement("span", {
                className: Wt(n)
            }, "\u25c9"), " ", l.a.createElement(zt, {
                href: Lt(t.id)
            }, void 0 !== a ? a : t.title))
        }
        ;
        var Kt = e=>{
            const t = Object(n.useState)(!1)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , c = e.contestId
              , s = e.problemId
              , i = e.problemTitle
              , m = e.difficulty
              , u = e.showDifficulty
              , d = e.isExperimentalDifficulty
              , p = e.showDifficultyUnavailable
              , f = l.a.createElement(zt, {
                href: Bt(s, c),
                className: e.className
            }, i);
            if (!u || void 0 === m || null === m && !p)
                return f;
            const b = s + "-" + c
              , h = "experimental-" + b
              , E = null === m ? void 0 : J(m);
            return l.a.createElement(l.a.Fragment, null, l.a.createElement($e, {
                id: b,
                difficulty: m
            }), d ? l.a.createElement(l.a.Fragment, null, l.a.createElement("span", {
                id: h,
                role: "img",
                "aria-label": "experimental"
            }, "\ud83e\uddea"), l.a.createElement(Ve.a, {
                placement: "top",
                target: h,
                isOpen: r,
                toggle: ()=>o(!r)
            }, "This estimate is experimental.")) : null, l.a.createElement("a", {
                href: Bt(s, c),
                target: "_blank",
                rel: "noopener",
                className: E
            }, i))
        }
        ;
        const Zt = (e,t)=>1 / (1 + Math.exp(-e.discrimination * (t - e.rawDifficulty)))
          , Vt = (e,t)=>{
            const a = e.slope * t + e.intercept;
            return Math.exp(a)
        }
          , $t = e=>{
            if (null === e)
                return "-";
            if (e < 30)
                return "<1 min";
            {
                const t = Math.round(e / 60);
                return "".concat(t, " mins")
            }
        }
          , Qt = e=>{
            if (null === e)
                return "-";
            if (e < .005)
                return "<1%";
            if (e > .995)
                return ">99%";
            {
                const t = Math.round(100 * e);
                return "".concat(t, "%")
            }
        }
        ;
        let Xt, ea;
        !function(e) {
            e.None = "None",
            e.ContestResult = "ContestResult",
            e.Language = "Language"
        }(Xt || (Xt = {})),
        function(e) {
            e.None = "",
            e.Success = "table-success",
            e.Danger = "table-danger",
            e.Warning = "table-warning",
            e.SuccessBeforeContest = "table-success-before-contest",
            e.SuccessIntime = "table-success-intime",
            e.WarningIntime = "table-warning-intime",
            e.SuccessLanguage = "table-success-language"
        }(ea || (ea = {}));
        const ta = m.d.of(ea.Success, ea.SuccessBeforeContest, ea.SuccessIntime, ea.SuccessLanguage)
          , aa = e=>{
            switch (e) {
            case Qe.Success:
                return ea.Success;
            case Qe.Failed:
                return ea.Danger;
            case Qe.Warning:
                return ea.Warning;
            case Qe.None:
            default:
                return ea.None
            }
        }
          , na = ({colorMode: e, status: t, contest: a, selectedLanguages: n})=>{
            switch (e) {
            case Xt.None:
                return aa(t.label);
            case Xt.ContestResult:
                return a ? t.label === Qe.Success && void 0 !== t.epoch && t.epoch <= a.start_epoch_second + a.duration_second ? t.epoch < a.start_epoch_second ? ea.SuccessBeforeContest : ea.SuccessIntime : t.label === Qe.Warning && t.epoch <= a.start_epoch_second + a.duration_second ? ea.WarningIntime : aa(t.label) : aa(t.label);
            case Xt.Language:
                return t.label === Qe.Success && n && Array.from(t.solvedLanguages).some(e=>n.has(e)) ? ea.SuccessLanguage : aa(t.label)
            }
        }
        ;
        var la = a(477);
        const ra = (e,t,a)=>{
            if (0 === a)
                return [];
            if (a <= 10)
                return n = 1,
                l = a,
                Array.from({
                    length: l - n + 1
                }, (e,t)=>t + n);
            var n, l;
            const r = [e];
            let o = 1;
            for (; ; ) {
                o *= 2;
                const a = e - o + 1;
                if (a < t)
                    break;
                r.unshift(a)
            }
            for (r[0] !== t && r.unshift(t),
            o = 1; ; ) {
                o *= 2;
                const t = e + o - 1;
                if (t > a)
                    break;
                r.push(t)
            }
            return r.slice(-1)[0] !== a && r.push(a),
            r
        }
          , oa = e=>{
            const t = ra(e.currPage, e.pageStartIndex, e.totalPages);
            return l.a.createElement(l.a.Fragment, null, l.a.createElement("div", {
                className: "col-md-2 col-xs-2 col-sm-2 col-lg-2"
            }, l.a.createElement(We.a, {
                className: "react-bs-table-sizePerPage-dropdown"
            }, l.a.createElement(qe.a, {
                caret: !0
            }, e.sizePerPage), l.a.createElement(ze.a, null, e.sizePerPageList.map(t=>l.a.createElement(Je.a, {
                key: t.text,
                onClick: ()=>e.changeSizePerPage(t.value)
            }, t.text))))), l.a.createElement("div", {
                className: "col-md-10 col-xs-10 col-sm-10 col-lg-10",
                style: {
                    display: "block"
                }
            }, l.a.createElement("ul", {
                className: "react-bootstrap-table-page-btns-ul pagination",
                style: {
                    flexWrap: "wrap",
                    justifyContent: "flex-end"
                }
            }, t.map(t=>{
                const a = (t === e.currPage ? "active " : "") + "page-item";
                return l.a.createElement("li", {
                    className: a,
                    key: t,
                    title: t.toString()
                }, l.a.createElement(la.a, {
                    onClick: ()=>e.changePage(t)
                }, t))
            }
            ))))
        }
          , ca = e=>{
            const t = e=>{
                const t = e.problemModel;
                return void 0 === t ? -1 : _(t) ? t.difficulty : -1
            }
              , a = t=>{
                if (null === e.userInternalRating)
                    return null;
                const a = t.problemModel;
                return void 0 === a ? null : S(a) ? Vt(a, e.userInternalRating) : null
            }
              , n = [{
                header: "Date",
                dataField: "contestDate",
                dataSort: !0
            }, {
                header: "Problem",
                dataField: "title",
                dataSort: !0,
                dataFormat: function(e, t) {
                    var a;
                    return l.a.createElement(Kt, {
                        showDifficulty: !0,
                        difficulty: _(t.problemModel) ? t.problemModel.difficulty : null,
                        isExperimentalDifficulty: null === (a = t.problemModel) || void 0 === a ? void 0 : a.is_experimental,
                        problemId: t.mergedProblem.id,
                        problemTitle: t.title,
                        contestId: t.mergedProblem.contest_id
                    })
                }
            }, {
                header: "Contest",
                dataField: "contest",
                dataSort: !0,
                dataFormat: function(e, t) {
                    return e ? l.a.createElement(Yt, {
                        contest: e
                    }) : l.a.createElement("a", {
                        href: Lt(t.mergedProblem.contest_id),
                        target: "_blank",
                        rel: "noopener noreferrer"
                    }, t.contestTitle)
                }
            }, {
                header: "Result",
                dataField: "a",
                dataAlign: "center",
                dataFormat: (e,t)=>{
                    const a = t.status;
                    switch (a.label) {
                    case Qe.Success:
                        return l.a.createElement(Ze.a, {
                            color: "success"
                        }, "AC");
                    case Qe.Failed:
                        return l.a.createElement("div", null, Array.from(a.solvedRivals).map(e=>l.a.createElement(Ze.a, {
                            key: e,
                            color: "danger"
                        }, e)));
                    case Qe.Warning:
                        return l.a.createElement(Ze.a, {
                            color: "warning"
                        }, a.result);
                    case Qe.None:
                        return ""
                    }
                }
            }, {
                header: "Last AC Date",
                dataField: "lastAcceptedDate",
                dataSort: !0
            }, {
                header: "Solvers",
                dataField: "solverCount",
                dataSort: !0,
                dataFormat: function(e, t) {
                    return l.a.createElement("a", {
                        href: (a = t.mergedProblem.contest_id,
                        n = t.mergedProblem.id,
                        "".concat(Lt(a), "/submissions?f.Task=").concat(n, "&f.Status=AC")),
                        target: "_blank",
                        rel: "noopener noreferrer"
                    }, e);
                    var a, n
                }
            }, {
                header: "Point",
                dataField: "point",
                dataSort: !0,
                dataFormat: e=>e >= pa ? l.a.createElement("p", null, "-") : e % 100 === 0 ? l.a.createElement("p", null, e) : l.a.createElement("p", null, e.toFixed(2))
            }, {
                header: "Difficulty",
                dataField: "problemModel",
                dataSort: !0,
                sortFunc: (e,a,n)=>(t(e) - t(a)) * ("asc" === n ? 1 : -1),
                dataFormat: e=>_(e) ? l.a.createElement("p", null, e.difficulty) : l.a.createElement("p", null, "-")
            }, {
                header: "Time",
                dataField: "a",
                dataSort: !0,
                sortFunc: (e,t,n)=>{
                    const l = a(e)
                      , r = a(t);
                    return ((null === l ? -1 : l) - (null === r ? -1 : r)) * ("asc" === n ? 1 : -1)
                }
                ,
                dataFormat: function(e, t) {
                    const n = a(t);
                    return null === n ? l.a.createElement("p", null, "-") : l.a.createElement("p", null, $t(n))
                }
            }, {
                header: "Fastest",
                dataField: "executionTime",
                dataSort: !0,
                dataFormat: (e,t)=>{
                    const a = t.mergedProblem
                      , n = a.fastest_submission_id
                      , r = a.fastest_contest_id
                      , o = a.fastest_user_id;
                    return n && r && o ? l.a.createElement("a", {
                        href: Rt(n, r),
                        target: "_blank",
                        rel: "noopener noreferrer"
                    }, o, " (", e, " ms)") : l.a.createElement("p", null)
                }
            }, {
                header: "Shortest",
                dataField: "codeLength",
                dataSort: !0,
                dataFormat: (e,t)=>{
                    const a = t.mergedProblem
                      , n = a.shortest_submission_id
                      , r = a.shortest_contest_id
                      , o = a.shortest_user_id;
                    return r && n && o ? l.a.createElement("a", {
                        href: Rt(n, r),
                        target: "_blank",
                        rel: "noopener noreferrer"
                    }, o, " (", e, " Bytes)") : l.a.createElement("p", null)
                }
            }, {
                header: "First",
                dataField: "firstUserId",
                dataSort: !0,
                dataFormat: (e,t)=>{
                    const a = t.mergedProblem
                      , n = a.first_submission_id
                      , r = a.first_contest_id
                      , o = a.first_user_id;
                    return n && r && o ? l.a.createElement("a", {
                        href: Rt(n, r),
                        target: "_blank",
                        rel: "noopener noreferrer"
                    }, o) : l.a.createElement("p", null)
                }
            }, {
                header: "Shortest User for Search",
                dataField: "shortestUserId",
                hidden: !0
            }, {
                header: "Fastest User for Search",
                dataField: "fastestUserId",
                hidden: !0
            }, {
                header: "Contest name for Search",
                dataField: "contestTitle",
                hidden: !0
            }];
            return l.a.createElement(p.BootstrapTable, {
                pagination: !0,
                keyField: "id",
                height: "auto",
                hover: !0,
                striped: !0,
                search: !0,
                tableContainerClass: "list-table",
                trClassName: e=>{
                    const t = e.status
                      , a = e.contest;
                    return na({
                        colorMode: Xt.ContestResult,
                        status: t,
                        contest: a
                    })
                }
                ,
                data: e.rowData.filter(t=>e.fromPoint <= t.point && t.point <= e.toPoint).filter(t=>{
                    switch (e.statusFilterState) {
                    case "All":
                        return !0;
                    case "Only AC":
                        return t.status.label === Qe.Success;
                    case "Only Trying":
                        return t.status.label !== Qe.Success
                    }
                }
                ).filter(t=>{
                    const a = !!t.mergedProblem.point;
                    switch (e.ratedFilterState) {
                    case "All":
                        return !0;
                    case "Only Rated":
                        return a;
                    case "Only Unrated":
                        return !a
                    }
                }
                ).filter(t=>{
                    const a = _(t.problemModel) ? t.problemModel.difficulty : -1;
                    return e.fromDifficulty <= a && a <= e.toDifficulty
                }
                ).toArray(),
                options: {
                    paginationPosition: "top",
                    sizePerPage: 20,
                    sizePerPageList: [{
                        text: "20",
                        value: 20
                    }, {
                        text: "50",
                        value: 50
                    }, {
                        text: "100",
                        value: 100
                    }, {
                        text: "200",
                        value: 200
                    }, {
                        text: "All",
                        value: e.rowData.size
                    }],
                    paginationPanel: function(e) {
                        return l.a.createElement(oa, e)
                    }
                }
            }, n.map(e=>l.a.createElement(p.TableHeaderColumn, Object.assign({
                key: e.header,
                tdAttr: {
                    "data-col-name": e.header
                }
            }, e), e.header)))
        }
        ;
        var sa = a(90)
          , ia = a.n(sa);
        const ma = (e,t,a)=>{
            const n = t.get(e.id);
            if (void 0 !== n && (!n.is_experimental || a))
                return void 0 === n.difficulty ? void 0 : Math.floor(Math.min(4e3, n.difficulty) / 400)
        }
          , ua = e=>{
            const t = e.submissions
              , a = e.mergedProblems
              , r = e.problemModels
              , o = e.setFilterFunc
              , c = Object(n.useState)(!0)
              , s = Object(De.a)(c, 2)
              , i = s[0]
              , u = s[1]
              , d = Object(m.c)(0, 4400, 400).map(e=>({
                from: e,
                to: 4e3 === e ? 1e18 : e + 400 - 1
            })).toList()
              , p = t.filter(e=>B(e.result)).reduce((e,t)=>{
                var a;
                const n = null !== (a = e.get(t.user_id)) && void 0 !== a ? a : new Set;
                return n.add(t.problem_id),
                e.set(t.user_id, n),
                e
            }
            , new Map)
              , f = Array.from(p.keys()).map(e=>{
                var t;
                return {
                    userId: e,
                    diffCount: Array.from(null !== (t = p.get(e)) && void 0 !== t ? t : new Set).map(e=>a.get(e)).map(e=>e ? ma(e, r, i) : void 0).reduce((e,t)=>{
                        if (void 0 !== t) {
                            var a;
                            const n = null !== (a = e.get(t)) && void 0 !== a ? a : 0;
                            e.set(t, n + 1)
                        }
                        return e
                    }
                    , new Map)
                }
            }
            )
              , b = a.map(e=>ma(e, r, i)).filter(e=>void 0 !== e).reduce((e,t)=>e.update(t, 0, e=>e + 1), Object(m.b)()).entrySeq().map(([e,t])=>({
                difficultyLevel: e,
                count: t
            })).sort((e,t)=>e.difficultyLevel - t.difficultyLevel);
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(Le.a, {
                className: "mb-2"
            }, l.a.createElement(Re.a, {
                onClick: ()=>u(!i)
            }, i ? "Including \ud83e\uddea" : "Excluding \ud83e\uddea")), l.a.createElement(ia.a, {
                striped: !0,
                bordered: !0,
                hover: !0,
                responsive: !0
            }, l.a.createElement("thead", null, l.a.createElement("tr", null, l.a.createElement("th", null, "Difficulty"), b.map(({difficultyLevel: e})=>l.a.createElement("th", {
                key: e,
                style: {
                    whiteSpace: "nowrap"
                }
            }, l.a.createElement("a", {
                href: window.location.hash,
                onClick: ()=>o(d.get(e, {
                    from: 0
                }).from, d.get(e, {
                    to: 1e18
                }).to)
            }, l.a.createElement($e, {
                difficulty: d.get(e, {
                    from: 1e18
                }).from + 399,
                id: "difficulty-table-level-".concat(e)
            }), d.get(e, {
                from: 0
            }).from, "-")))), l.a.createElement("tr", null, l.a.createElement("th", null, "Total"), b.map(({difficultyLevel: e, count: t})=>l.a.createElement("th", {
                key: e
            }, t)))), l.a.createElement("tbody", null, f.map(({userId: e, diffCount: t})=>l.a.createElement("tr", {
                key: e
            }, l.a.createElement("td", null, e), b.map(({difficultyLevel: e})=>{
                var a;
                return l.a.createElement("td", {
                    key: e
                }, null !== (a = t.get(e)) && void 0 !== a ? a : 0)
            }
            ))))))
        }
          , da = ({submissions: e, mergedProblems: t, setFilterFunc: a})=>{
            const n = new Map;
            e.filter(e=>B(e.result)).forEach(e=>{
                var t;
                const a = null !== (t = n.get(e.user_id)) && void 0 !== t ? t : new Set;
                a.add(e.problem_id),
                n.set(e.user_id, a)
            }
            );
            const r = Array.from(n.keys()).map(e=>{
                var a;
                const l = null !== (a = n.get(e)) && void 0 !== a ? a : new Set
                  , r = new Map;
                return Array.from(l).forEach(e=>{
                    var a;
                    const n = null === (a = t.get(e)) || void 0 === a ? void 0 : a.point;
                    if (n) {
                        var l;
                        const e = null !== (l = r.get(n)) && void 0 !== l ? l : 0;
                        r.set(n, e + 1)
                    }
                }
                ),
                {
                    userId: e,
                    pointCountMap: r
                }
            }
            )
              , o = t.reduce((e,t)=>t.point ? e.update(t.point, 0, e=>e + 1) : e, Object(m.b)()).entrySeq().map(([e,t])=>({
                point: e,
                count: t
            })).sort((e,t)=>e.point - t.point);
            return l.a.createElement(ia.a, {
                striped: !0,
                bordered: !0,
                hover: !0,
                responsive: !0
            }, l.a.createElement("thead", null, l.a.createElement("tr", null, l.a.createElement("th", null, "Point"), o.map(({point: e})=>l.a.createElement("th", {
                key: e
            }, l.a.createElement("a", {
                href: window.location.hash,
                onClick: ()=>a(e)
            }, e)))), l.a.createElement("tr", null, l.a.createElement("th", null, "Total"), o.map(({point: e, count: t})=>l.a.createElement("th", {
                key: e
            }, t)))), l.a.createElement("tbody", null, r.map(({userId: e, pointCountMap: t})=>l.a.createElement("tr", {
                key: e
            }, l.a.createElement("td", null, e), o.map(({point: e})=>{
                var a;
                return l.a.createElement("td", {
                    key: e
                }, null !== (a = t.get(e)) && void 0 !== a ? a : 0)
            }
            )))))
        }
          , pa = 1e18
          , fa = ["All", "Only Trying", "Only AC"]
          , ba = ["All", "Only Rated", "Only Unrated"]
          , ha = "fromPo"
          , Ea = "toPo"
          , ga = "status"
          , va = "rated"
          , ya = "fromDiff"
          , _a = "toDiff"
          , Sa = Object(u.connect)(e=>({
            submissionsFetch: {
                comparison: [e.userId, e.rivals],
                value: ()=>Promise.all(e.rivals.push(e.userId).map(e=>dt(e))).then(e=>e.flatMap(e=>e))
            },
            mergedProblemsFetch: {
                comparison: null,
                value: ()=>le()
            },
            problemModelsFetch: {
                comparison: null,
                value: ()=>oe()
            },
            contestsFetch: {
                comparison: null,
                value: ()=>se()
            },
            userRatingInfoFetch: {
                comparison: e.userId,
                value: ()=>Fe(e.userId)
            },
            loginState: ft,
            progressResetList: Pt
        }))(e=>{
            const t = Object(s.h)()
              , a = Object(s.g)()
              , n = new URLSearchParams(t.search)
              , r = parseInt(n.get(ha) || "0", 10)
              , o = parseInt(n.get(Ea) || pa.toString(), 10)
              , i = (e=>{
                var t = !0
                  , a = !1
                  , n = void 0;
                try {
                    for (var l, r = fa[Symbol.iterator](); !(t = (l = r.next()).done); t = !0) {
                        if (e === l.value)
                            return e
                    }
                } catch (o) {
                    a = !0,
                    n = o
                } finally {
                    try {
                        t || null == r.return || r.return()
                    } finally {
                        if (a)
                            throw n
                    }
                }
                return "All"
            }
            )(n.get(ga))
              , u = (e=>{
                var t = !0
                  , a = !1
                  , n = void 0;
                try {
                    for (var l, r = ba[Symbol.iterator](); !(t = (l = r.next()).done); t = !0) {
                        if (e === l.value)
                            return e
                    }
                } catch (o) {
                    a = !0,
                    n = o
                } finally {
                    try {
                        t || null == r.return || r.return()
                    } finally {
                        if (a)
                            throw n
                    }
                }
                return "All"
            }
            )(n.get(va))
              , p = parseInt(n.get(ya) || "-1", 10)
              , f = parseInt(n.get(_a) || pa.toString(), 10)
              , b = e.mergedProblemsFetch
              , h = e.problemModelsFetch
              , E = e.submissionsFetch
              , v = e.contestsFetch
              , y = e.userRatingInfoFetch
              , _ = b.fulfilled ? b.value : Object(m.b)()
              , S = v.fulfilled ? v.value : Object(m.b)()
              , k = h.fulfilled ? h.value : Object(m.b)()
              , C = E.fulfilled ? E.value : []
              , O = e.loginState.fulfilled && e.loginState.value && e.loginState.value.atcoder_user_id ? e.loginState.value.atcoder_user_id : void 0
              , j = e.progressResetList.fulfilled && e.progressResetList.value ? e.progressResetList.value : void 0
              , I = j && O ? Tt(C, j, O) : C
              , x = et(I, e.userId)
              , F = y.fulfilled ? y.value.internalRating : null
              , w = _.valueSeq().map(e=>{
                var t, a;
                const n = S.get(e.contest_id)
                  , l = n ? rt(nt(n.start_epoch_second)) : ""
                  , r = n ? n.title : ""
                  , o = null !== (t = x.get(e.id)) && void 0 !== t ? t : Xe()
                  , c = o.label === Qe.Success ? rt(nt(o.lastAcceptedEpochSecond)) : ""
                  , s = null !== (a = e.point) && void 0 !== a ? a : pa
                  , i = e.first_user_id ? e.first_user_id : ""
                  , m = null != e.execution_time ? e.execution_time : pa
                  , u = e.source_code_length ? e.source_code_length : pa
                  , d = e.shortest_user_id ? e.shortest_user_id : ""
                  , p = e.fastest_user_id ? e.fastest_user_id : ""
                  , f = k.get(e.id);
                return {
                    id: e.id,
                    title: e.title,
                    contest: n,
                    contestDate: l,
                    contestTitle: r,
                    lastAcceptedDate: c,
                    solverCount: e.solver_count ? e.solver_count : 0,
                    point: s,
                    problemModel: f,
                    firstUserId: i,
                    executionTime: m,
                    codeLength: u,
                    mergedProblem: e,
                    shortestUserId: d,
                    fastestUserId: p,
                    status: o
                }
            }
            ).sort((e,t)=>{
                const a = t.contestDate.localeCompare(e.contestDate);
                return 0 === a ? e.title.localeCompare(t.title) : a
            }
            ).toList()
              , M = _.valueSeq().map(e=>e.point).reduce((e,t)=>t ? e.add(t) : e, Object(m.d)()).toList().sort()
              , P = Object(m.c)(0, 4400, 400).map(e=>({
                from: e,
                to: 4e3 === e ? pa : e + 399
            })).toList();
            return l.a.createElement("div", null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Point Status")), l.a.createElement(d.a, null, l.a.createElement(da, {
                mergedProblems: _,
                submissions: I,
                setFilterFunc: e=>{
                    const n = new URLSearchParams(t.search);
                    n.set(ha, e.toString()),
                    n.set(Ea, e.toString()),
                    a.push(Object(g.a)({}, t, {
                        search: n.toString()
                    }))
                }
            })), l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Difficulty Status")), l.a.createElement(d.a, null, l.a.createElement(ua, {
                mergedProblems: _,
                submissions: I,
                problemModels: k,
                setFilterFunc: (e,n)=>{
                    const l = new URLSearchParams(t.search);
                    l.set(ya, e.toString()),
                    l.set(_a, n.toString()),
                    a.push(Object(g.a)({}, t, {
                        search: l.toString()
                    }))
                }
            })), l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Problem List")), l.a.createElement(d.a, null, l.a.createElement(Ke.a, {
                className: "mr-4"
            }, l.a.createElement(Ge.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, 0 === r ? "Point From" : r), l.a.createElement(ze.a, null, M.map(e=>l.a.createElement(Je.a, {
                key: e,
                tag: c.b,
                to: mt(t, {
                    [ha]: e.toString()
                })
            }, e)))), l.a.createElement(Ge.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, o === pa ? "Point To" : o), l.a.createElement(ze.a, null, M.map(e=>l.a.createElement(Je.a, {
                key: e,
                tag: c.b,
                to: mt(t, {
                    [Ea]: e.toString()
                })
            }, e))))), l.a.createElement(Ke.a, {
                className: "mr-4"
            }, l.a.createElement(We.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, i), l.a.createElement(ze.a, null, fa.map(e=>l.a.createElement(Je.a, {
                key: e,
                tag: c.b,
                to: mt(t, {
                    [ga]: e
                })
            }, e))))), l.a.createElement(Ke.a, {
                className: "mr-4"
            }, l.a.createElement(We.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, u), l.a.createElement(ze.a, null, ba.map(e=>l.a.createElement(Je.a, {
                key: e,
                tag: c.b,
                to: mt(t, {
                    [va]: e
                })
            }, e))))), l.a.createElement(Ke.a, {
                className: "mr-4"
            }, l.a.createElement(Ge.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, -1 === p ? "Difficulty From" : "".concat(p, " - ")), l.a.createElement(ze.a, null, P.map(({from: e, to: a})=>l.a.createElement(Je.a, {
                key: e,
                tag: c.b,
                to: mt(t, {
                    [ya]: e.toString()
                })
            }, l.a.createElement($e, {
                difficulty: a,
                id: "from-difficulty-dropdown-".concat(a)
            }), e, " -")))), l.a.createElement(Ge.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, f === pa ? "Difficulty To" : " - ".concat(f)), l.a.createElement(ze.a, null, P.map(({to: e})=>l.a.createElement(Je.a, {
                key: e,
                tag: c.b,
                to: mt(t, {
                    [ya]: -1 !== p ? p.toString() : "0",
                    [_a]: e.toString()
                })
            }, l.a.createElement($e, {
                difficulty: e,
                id: "from-difficulty-dropdown-".concat(e)
            }), "- ", e < pa ? e : "inf"))))), l.a.createElement(Re.a, {
                outline: !0,
                color: "danger",
                onClick: ()=>a.push(Object(g.a)({}, t, {
                    search: ""
                }))
            }, "Reset")), l.a.createElement(d.a, null, l.a.createElement(ca, {
                fromPoint: r,
                toPoint: o,
                statusFilterState: i,
                ratedFilterState: u,
                fromDifficulty: p,
                toDifficulty: f,
                rowData: w,
                userInternalRating: F
            })))
        }
        );
        var ka = a(479)
          , Ca = a(480)
          , Oa = a(481)
          , ja = a(482)
          , Ia = a(483);
        const xa = e=>{
            const t = e.submissions
              , a = e.problems
              , n = e.problemModels
              , r = a.reduce((e,t)=>(e.set(t.id, t.title),
            e), new Map)
              , o = Array.from(t.reduce((e,t)=>(e.add(t.result),
            e), new Set)).sort().reduce((e,t)=>(e[t] = t,
            e), {})
              , c = Array.from(t.reduce((e,t)=>(e.add(t.language),
            e), new Set)).sort().reduce((e,t)=>(e[t] = t,
            e), {});
            return l.a.createElement(p.BootstrapTable, {
                data: t.sort((e,t)=>t.epoch_second - e.epoch_second).map(e=>Object(g.a)({
                    title: r.get(e.problem_id)
                }, e)),
                keyField: "id",
                height: "auto",
                hover: !0,
                striped: !0,
                search: !0,
                pagination: !0,
                options: {
                    paginationPosition: "top",
                    sizePerPage: 20,
                    sizePerPageList: [{
                        text: "20",
                        value: 20
                    }, {
                        text: "50",
                        value: 50
                    }, {
                        text: "100",
                        value: 100
                    }, {
                        text: "200",
                        value: 200
                    }, {
                        text: "All",
                        value: t.length
                    }],
                    paginationPanel: function(e) {
                        return l.a.createElement(oa, e)
                    }
                }
            }, l.a.createElement(p.TableHeaderColumn, {
                dataSort: !0,
                dataField: "epoch_second",
                dataFormat: e=>ot(nt(e))
            }, "Date"), l.a.createElement(p.TableHeaderColumn, {
                filterFormatted: !0,
                dataSort: !0,
                dataField: "title",
                dataFormat: (e,{problem_id: t, contest_id: a})=>{
                    var r, o;
                    return l.a.createElement(Kt, {
                        difficulty: null === (r = n.get(t)) || void 0 === r ? void 0 : r.difficulty,
                        isExperimentalDifficulty: null === (o = n.get(t)) || void 0 === o ? void 0 : o.is_experimental,
                        showDifficulty: !0,
                        problemId: t,
                        problemTitle: e || "",
                        contestId: a
                    })
                }
            }, "Problem"), l.a.createElement(p.TableHeaderColumn, {
                dataSort: !0,
                dataField: "user_id",
                dataFormat: e=>l.a.createElement(zt, {
                    href: Ut(e)
                }, e)
            }, "User"), l.a.createElement(p.TableHeaderColumn, {
                dataSort: !0,
                filter: {
                    type: "SelectFilter",
                    options: o
                },
                dataField: "result",
                dataAlign: "center",
                dataFormat: e=>B(e) ? l.a.createElement(Ze.a, {
                    color: "success"
                }, e) : l.a.createElement(Ze.a, {
                    color: "warning"
                }, e)
            }, "Status"), l.a.createElement(p.TableHeaderColumn, {
                dataSort: !0,
                dataField: "language",
                filter: {
                    type: "SelectFilter",
                    options: c
                }
            }, "Language"), l.a.createElement(p.TableHeaderColumn, {
                dataSort: !0,
                dataField: "id",
                dataFormat: (e,{id: t, contest_id: a})=>l.a.createElement(zt, {
                    href: Rt(t, a)
                }, "Detail")
            }, "Detail"), l.a.createElement(p.TableHeaderColumn, {
                dataField: "title",
                hidden: !0
            }))
        }
        ;
        function Fa(e) {
            return e.entrySeq().reduce((e,[t,a])=>(e.set(t, a),
            e), new Map)
        }
        var wa = a(19);
        const Ma = ({data: e})=>l.a.createElement("div", null, l.a.createElement(wa.j, {
            width: "100%",
            height: 300
        }, l.a.createElement(wa.i, null, l.a.createElement(wa.h, {
            dataKey: "value",
            data: e,
            outerRadius: "80%",
            fill: "#ff0000"
        }, e.map(e=>l.a.createElement(wa.d, {
            key: e.name,
            fill: e.color
        }))), l.a.createElement(wa.k, null), l.a.createElement(wa.e, null))))
          , Pa = "#32cd32"
          , Na = "#58616a"
          , Aa = ({title: e, trying: t, accepted: a})=>{
            const n = [{
                value: a,
                color: Pa,
                name: "Accepted"
            }, {
                value: t,
                color: Na,
                name: "Trying"
            }];
            return l.a.createElement("div", null, l.a.createElement(Ma, {
                data: n
            }), l.a.createElement("h5", null, e), l.a.createElement("h5", {
                className: "text-muted"
            }, "".concat(a, " / ").concat(a + t)))
        }
          , Da = (e,t,a)=>{
            const n = (e,t)=>{
                const a = e.substring(0, 3)
                  , n = t.substring(0, 3)
                  , l = "abc" === a && "arc" === n;
                switch (t.substring(7, 8)) {
                case "1":
                case "a":
                    return l ? 2 : 0;
                case "2":
                case "b":
                    return l ? 3 : 1;
                case "3":
                case "c":
                    return 2;
                case "4":
                case "d":
                    return 3;
                case "e":
                    return 4;
                case "f":
                    return 5;
                default:
                    return console.error("Unsupported problemId: ".concat(e, "/").concat(t)),
                    0
                }
            }
              , l = e.map(([e,n])=>({
                contestId: e,
                problemIds: n.filter(e=>{
                    var n, l;
                    return !!(null === (n = t.get(e.id)) || void 0 === n || null === (l = n.filter(e=>e.user_id === a)) || void 0 === l ? void 0 : l.find(e=>B(e.result)))
                }
                ).map(e=>e.id)
            })).map(({problemIds: e, contestId: t})=>e.map(e=>n(t, e))).flatMap(e=>e).reduce((e,t)=>(e[t] += 1,
            e), [0, 0, 0, 0, 0, 0]);
            return e.map(([e,t])=>({
                contestId: e,
                problemIds: t.map(e=>e.id)
            })).map(({problemIds: e, contestId: t})=>e.map(e=>n(t, e))).flatMap(e=>e).reduce((e,t)=>(e[t] += 1,
            e), [0, 0, 0, 0, 0, 0]).map((e,t)=>({
                total: e,
                solved: l[t]
            })).filter(e=>e.total > 0)
        }
          , Ta = e=>{
            const t = e.contestToProblems
              , a = Da(Array.from(t).filter(([e])=>e.startsWith("abc")), e.submissions, e.userId)
              , n = Da(Array.from(t).filter(([e])=>e.startsWith("arc")), e.submissions, e.userId)
              , r = Da(Array.from(t).filter(([e])=>e.startsWith("agc")), e.submissions, e.userId);
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(La, {
                problems: a,
                title: "AtCoder Beginner Contest"
            }), l.a.createElement(La, {
                problems: n,
                title: "AtCoder Regular Contest"
            }), l.a.createElement(La, {
                problems: r,
                title: "AtCoder Grand Contest"
            }))
        }
          , La = ({problems: e, title: t})=>l.a.createElement("div", null, l.a.createElement(d.a, {
            className: "my-2 border-bottom"
        }, l.a.createElement("h1", null, t)), l.a.createElement(d.a, {
            className: "my-3"
        }, e.map(({solved: t, total: a},n)=>{
            const r = "ABCDEF".charAt(n);
            return l.a.createElement(Te.a, {
                key: r,
                className: "text-center",
                xs: "6",
                md: 12 / e.length
            }, l.a.createElement(Aa, {
                accepted: t,
                trying: a - t,
                title: "Problem ".concat(r)
            }))
        }
        )));
        var Ra = a(478);
        const Ba = (e,t)=>{
            const a = e.sort((e,t)=>t.problem_count - e.problem_count).find(e=>e.user_id === t);
            if (a) {
                const t = a.problem_count;
                return {
                    rank: e.filter(e=>e.problem_count > t).length,
                    count: t
                }
            }
            return {
                rank: e.length,
                count: 0
            }
        }
          , Ua = Object(u.connect)(e=>({
            shortestRanking: {
                comparison: null,
                value: ()=>_e().then(e=>e.toArray())
            },
            fastestRanking: {
                comparison: null,
                value: ()=>Se().then(e=>e.toArray())
            },
            firstRanking: {
                comparison: null,
                value: ()=>ke().then(e=>e.toArray())
            },
            acRank: {
                comparison: e.solvedCount,
                value: ()=>ve().then(t=>t.filter(t=>t.problem_count > e.solvedCount).length)
            },
            sumRank: {
                comparison: e.ratedPointSum,
                value: ()=>Ie().then(t=>t.filter(t=>t.problem_count > e.ratedPointSum).length)
            },
            streakRank: {
                comparison: e.longestStreak,
                value: ()=>Ee().then(t=>t.filter(t=>t.problem_count > e.longestStreak).length)
            }
        }))(e=>{
            const t = e.longestStreak
              , a = e.currentStreak
              , n = e.prevDateLabel
              , r = e.shortestRanking.fulfilled ? e.shortestRanking.value : []
              , o = e.fastestRanking.fulfilled ? e.fastestRanking.value : []
              , c = e.firstRanking.fulfilled ? e.firstRanking.value : []
              , s = Ba(r, e.userId)
              , i = Ba(c, e.userId)
              , m = Ba(o, e.userId)
              , u = [{
                key: "Accepted",
                value: e.solvedCount,
                rank: e.acRank.fulfilled ? e.acRank.value : void 0
            }, {
                key: "Shortest Code",
                value: s.count,
                rank: s.rank
            }, {
                key: "Fastest Code",
                value: m.count,
                rank: m.rank
            }, {
                key: "First AC",
                value: i.count,
                rank: i.rank
            }, {
                key: "Rated Point Sum",
                value: e.ratedPointSum,
                rank: e.sumRank.fulfilled ? e.sumRank.value : void 0
            }]
              , p = n >= rt(st().add(-1, "day"))
              , f = e.streakRank.fulfilled ? e.streakRank.value : void 0;
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Achievement")), l.a.createElement(d.a, {
                className: "my-3"
            }, u.map(({key: e, value: t, rank: a})=>l.a.createElement(Te.a, {
                key: e,
                className: "text-center",
                xs: "6",
                md: "3"
            }, l.a.createElement("h6", null, e), l.a.createElement("h3", null, t), l.a.createElement("h6", {
                className: "text-muted"
            }, void 0 !== a ? "".concat(a + 1).concat(H(a + 1)) : ""))), l.a.createElement(Te.a, {
                key: "Longest Streak",
                className: "text-center",
                xs: "6",
                md: "3"
            }, l.a.createElement("h6", null, "Longest Streak", " ", l.a.createElement(Ze.a, {
                pill: !0,
                id: "longestStreakTooltip"
            }, "?"), l.a.createElement(Ra.a, {
                target: "longestStreakTooltip",
                placement: "right"
            }, "The longest streak is based on", " ", l.a.createElement("strong", null, "Japan Standard Time"), " (JST, UTC+9).")), l.a.createElement("h3", null, t, " days"), l.a.createElement("h6", {
                className: "text-muted"
            }, void 0 !== f ? "".concat(f + 1).concat(H(f + 1)) : "")), l.a.createElement(Te.a, {
                key: "Current Streak",
                className: "text-center",
                xs: "6",
                md: "3"
            }, l.a.createElement("h6", null, "Current Streak", " ", l.a.createElement(Ze.a, {
                pill: !0,
                id: "currentStreakTooltip"
            }, "?"), l.a.createElement(Ra.a, {
                target: "currentStreakTooltip",
                placement: "right"
            }, "The current streak is based on ", l.a.createElement("strong", null, "Local Time"), ".")), l.a.createElement("h3", null, p ? a : 0, " days"), l.a.createElement("h6", {
                className: "text-muted"
            }, "Last AC: ".concat(n))), l.a.createElement(Te.a, null)))
        }
        )
          , Ha = e=>l.a.createElement(d.a, {
            className: "my-3"
        }, l.a.createElement(wa.j, {
            width: "100%",
            height: 300
        }, l.a.createElement(wa.b, {
            data: e.dailyData,
            margin: {
                top: 5,
                right: 30,
                left: 20,
                bottom: 5
            }
        }, l.a.createElement(wa.c, {
            strokeDasharray: "3 3"
        }), l.a.createElement(wa.l, {
            dataKey: "dateSecond",
            type: "number",
            domain: ["dataMin", "dataMax"],
            tickFormatter: e=>rt(nt(e))
        }), l.a.createElement(wa.m, null), l.a.createElement(wa.k, {
            labelFormatter: e=>rt(nt(e))
        }), l.a.createElement(wa.a, {
            dataKey: "count",
            fill: "#8884d8"
        }))))
          , Ga = e=>l.a.createElement(d.a, {
            className: "my-3"
        }, l.a.createElement(wa.j, {
            width: "100%",
            height: 300
        }, l.a.createElement(wa.g, {
            data: e.climbingData,
            margin: {
                top: 5,
                right: 30,
                left: 20,
                bottom: 5
            }
        }, l.a.createElement(wa.c, {
            strokeDasharray: "3 3"
        }), l.a.createElement(wa.l, {
            dataKey: "dateSecond",
            type: "number",
            domain: ["dataMin", "dataMax"],
            tickFormatter: e=>rt(nt(e))
        }), l.a.createElement(wa.m, null), l.a.createElement(wa.k, {
            labelFormatter: e=>rt(nt(e))
        }), l.a.createElement(wa.f, {
            dataKey: "count",
            stroke: "#8884d8"
        }))));
        function qa(e) {
            const t = e.tableData
              , a = 10 * e.columns
              , n = 10 * e.rows;
            return l.a.createElement("div", {
                style: {
                    width: "100%"
                }
            }, l.a.createElement("svg", {
                viewBox: "0 0 ".concat(a, " ").concat(n),
                style: {
                    width: "100%"
                }
            }, t.map(({date: t, value: a},n)=>{
                const r = void 0 === a ? "#ebedf0" : e.getColor(t, a)
                  , o = Math.floor(n / e.rows)
                  , c = n % e.rows;
                return l.a.createElement("rect", {
                    key: t,
                    id: "rect-".concat(t),
                    x: 10 * o,
                    y: 10 * c,
                    width: 10,
                    height: 10,
                    fill: r
                })
            }
            )), t.map(({date: t, value: a})=>void 0 !== a && l.a.createElement(Ra.a, {
                delay: {
                    show: 0,
                    hide: 0
                },
                key: t,
                placement: "right",
                target: "rect-".concat(t)
            }, e.formatTooltip(t, a))))
        }
        const za = ["#ebedf0", "#c6e48b", "#7bc96f", "#239a3b", "#196127"]
          , Ja = Object(u.connect)(()=>({
            problemModels: {
                comparison: null,
                value: ()=>oe().then(e=>Fa(e))
            }
        }))(e=>{
            const t = Object(n.useState)("Submissions")
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , c = e.submissions
              , s = e.problemModels.fulfilled ? e.problemModels.value : new Map
              , i = ((e,t,a)=>{
                const n = new Map;
                e.forEach(e=>{
                    var t;
                    const a = rt(nt(e.epoch_second))
                      , l = null !== (t = n.get(a)) && void 0 !== t ? t : [];
                    l.push(e),
                    n.set(a, l)
                }
                );
                const l = (e=>{
                    const t = e.date()
                      , a = e.weekday();
                    return e.date(t + 7 - a)
                }
                )(st())
                  , r = l.date(l.date() - 371)
                  , o = [];
                for (let i = 0; i < 371; i++) {
                    const e = rt(at()(r).add(i, "day"));
                    if ("Max Difficulty" === t) {
                        var c;
                        const t = (null !== (c = n.get(e)) && void 0 !== c ? c : []).map(e=>{
                            var t;
                            return null === (t = a.get(e.problem_id)) || void 0 === t ? void 0 : t.difficulty
                        }
                        ).filter(e=>void 0 !== e);
                        if (t.length > 0) {
                            const a = t.reduce((e,t)=>Math.max(e, t), 0);
                            o.push({
                                date: e,
                                value: a
                            })
                        } else
                            o.push({
                                date: e
                            })
                    } else {
                        var s;
                        const t = null === (s = n.get(e)) || void 0 === s ? void 0 : s.length;
                        o.push({
                            date: e,
                            value: t
                        })
                    }
                }
                return o
            }
            )(((e,t)=>{
                switch (t) {
                case "Submissions":
                    return e;
                case "AC":
                case "Max Difficulty":
                    return e.filter(e=>B(e.result));
                case "Unique AC":
                    {
                        const t = e.filter(e=>B(e.result)).sort((e,t)=>t.id - e.id).reduce((e,t)=>(e.set(t.problem_id, t),
                        e), new Map);
                        return Array.from(t.values())
                    }
                }
            }
            )(c, r), r, s)
              , m = "Max Difficulty" === r ? (e,t)=>"".concat(e, " Max Difficulty: ").concat(t) : (e,t)=>((e,t,a)=>"Submissions" === a ? 1 === t ? "".concat(e, " ").concat(t, " submission") : "".concat(e, " ").concat(t, " submissions") : "".concat(e, " ").concat(t, " ").concat(a))(e, t, r)
              , u = "Max Difficulty" === r ? (e,t)=>W(z(t)) : (e,t)=>za[Math.min(t, za.length - 1)];
            return l.a.createElement("div", null, l.a.createElement(d.a, {
                className: "my-3"
            }, l.a.createElement(Le.a, {
                className: "mr-3"
            }, l.a.createElement(Re.a, {
                onClick: ()=>o("Submissions"),
                active: "Submissions" === r
            }, "All Submissions"), l.a.createElement(Re.a, {
                onClick: ()=>o("AC"),
                active: "AC" === r
            }, "All AC"), l.a.createElement(Re.a, {
                onClick: ()=>o("Unique AC"),
                active: "Unique AC" === r
            }, "Unique AC"), l.a.createElement(Re.a, {
                onClick: ()=>o("Max Difficulty"),
                active: "Max Difficulty" === r
            }, "Max Difficulty"))), l.a.createElement(d.a, {
                className: "my-5"
            }, l.a.createElement(qa, {
                tableData: i,
                formatTooltip: m,
                getColor: u,
                columns: 53,
                rows: 7
            })))
        }
        )
          , Wa = e=>{
            const t = e.dailyCount
              , a = e.userSubmissions
              , n = t.reduce((e,{dateLabel: t, count: a})=>{
                const n = lt(t).unix()
                  , l = 0 === e.length ? void 0 : e[e.length - 1];
                return l ? e.push({
                    dateSecond: n,
                    count: l.count + a
                }) : e.push({
                    dateSecond: n,
                    count: a
                }),
                e
            }
            , []);
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Daily Effort")), l.a.createElement(Ha, {
                dailyData: t.map(({dateLabel: e, count: t})=>({
                    dateSecond: lt(e).unix(),
                    count: t
                }))
            }), l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Climbing")), l.a.createElement(Ga, {
                climbingData: n
            }), l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Heatmap")), l.a.createElement(Ja, {
                submissions: a
            }))
        }
        ;
        class Ya extends l.a.Component {
            constructor(e) {
                super(e),
                this.state = {
                    tooltipOpen: !1
                }
            }
            render() {
                const e = this.state.tooltipOpen
                  , t = "HelpBadgeTooltip-" + this.props.id;
                return l.a.createElement(l.a.Fragment, null, l.a.createElement(Ze.a, {
                    color: "secondary",
                    pill: !0,
                    id: t
                }, "?"), l.a.createElement(Ve.a, {
                    placement: "top",
                    target: t,
                    isOpen: e,
                    toggle: ()=>this.setState({
                        tooltipOpen: !e
                    })
                }, this.props.children))
            }
        }
        var Ka = Ya;
        const Za = ["Exclude", "1 Week", "2 Weeks", "4 Weeks", "6 Months", "Don't exclude"]
          , Va = e=>{
            switch (e) {
            case "1 Week":
                return "Exclude problems solved in last 7 days.";
            case "2 Weeks":
                return "Exclude problems solved in last 2 weeks.";
            case "4 Weeks":
                return "Exclude problems solved in last 4 weeks";
            case "6 Months":
                return "Exclude problems solved in last 6 months";
            case "Exclude":
                return "Exclude all the solved problems";
            case "Don't exclude":
                return "Don't exclude solved problems."
            }
        }
          , $a = [{
            text: "10",
            value: 10
        }, {
            text: "20",
            value: 20
        }, {
            text: "50",
            value: 50
        }, {
            text: "100",
            value: 100
        }, {
            text: "All",
            value: Number.POSITIVE_INFINITY
        }]
          , Qa = e=>{
            const t = e.userSubmissions
              , a = e.problems
              , r = e.contests
              , o = e.problemModels
              , c = e.userRatingInfo
              , s = Object(n.useState)(10)
              , i = Object(De.a)(s, 2)
              , m = i[0]
              , u = i[1]
              , f = Object(n.useState)("Moderate")
              , b = Object(De.a)(f, 2)
              , h = b[0]
              , E = b[1]
              , v = Object(n.useState)(!0)
              , y = Object(De.a)(v, 2)
              , k = y[0]
              , C = y[1]
              , O = Object(n.useState)("Exclude")
              , j = Object(De.a)(O, 2)
              , I = j[0]
              , x = j[1];
            if (t.isEmpty())
                return null;
            const F = new Map;
            t.filter(e=>B(e.result)).forEach(e=>{
                var t;
                const a = null !== (t = F.get(e.problem_id)) && void 0 !== t ? t : 0;
                F.set(e.problem_id, Math.max(e.epoch_second, a))
            }
            );
            const w = (e=>{
                switch (e) {
                case "Easy":
                    return .8;
                case "Moderate":
                    return .5;
                case "Difficult":
                    return .2;
                default:
                    return 0
                }
            }
            )(h)
              , M = (e=>{
                switch (e) {
                case "Easy":
                    return {
                        lowerBound: .5,
                        upperBound: Number.POSITIVE_INFINITY
                    };
                case "Moderate":
                    return {
                        lowerBound: .2,
                        upperBound: .8
                    };
                case "Difficult":
                    return {
                        lowerBound: Number.NEGATIVE_INFINITY,
                        upperBound: .5
                    };
                default:
                    return {
                        lowerBound: Number.NEGATIVE_INFINITY,
                        upperBound: Number.POSITIVE_INFINITY
                    }
                }
            }
            )(h)
              , P = Math.floor((new Date).getTime() / 1e3)
              , N = a.filter(e=>((e,t,a,n)=>{
                const l = n.get(e);
                if (!l)
                    return !0;
                {
                    const e = a - l;
                    switch (t) {
                    case "Exclude":
                        return !1;
                    case "1 Week":
                        return e > 604800;
                    case "2 Weeks":
                        return e > 1209600;
                    case "4 Weeks":
                        return e > 2419200;
                    case "6 Months":
                        return e > 15552e3;
                    case "Don't exclude":
                        return !0
                    }
                }
            }
            )(e.id, I, P, F)).filter(e=>o.has(e.id)).map(e=>Object(g.a)({}, e, {
                difficulty: o.getIn([e.id, "difficulty"], void 0),
                is_experimental: o.getIn([e.id, "is_experimental"], !1)
            })).filter(e=>k || !e.is_experimental).filter(e=>void 0 !== e.difficulty).map(e=>{
                const t = c.internalRating;
                let a, n;
                if (null === t)
                    a = null,
                    n = -1;
                else {
                    const l = o.get(e.id, {
                        slope: void 0,
                        difficulty: void 0,
                        rawDifficulty: void 0,
                        intercept: void 0,
                        discrimination: void 0,
                        is_experimental: !1,
                        variance: void 0
                    });
                    a = S(l) ? Vt(l, t) : null,
                    n = _(l) ? Zt(l, t) : -1
                }
                return Object(g.a)({}, e, {
                    predictedSolveTime: a,
                    predictedSolveProbability: n
                })
            }
            ).sort((e,t)=>Math.abs(e.predictedSolveProbability - w) - Math.abs(t.predictedSolveProbability - w)).filter(e=>M.lowerBound <= e.predictedSolveProbability && e.predictedSolveProbability < M.upperBound).slice(0, m).sort((e,t)=>t.difficulty - e.difficulty).toArray();
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-3 d-flex justify-content-between"
            }, l.a.createElement("div", null, l.a.createElement(Le.a, null, l.a.createElement(Re.a, {
                onClick: ()=>E("Easy"),
                active: "Easy" === h
            }, "Easy"), l.a.createElement(Re.a, {
                onClick: ()=>E("Moderate"),
                active: "Moderate" === h
            }, "Moderate"), l.a.createElement(Re.a, {
                onClick: ()=>E("Difficult"),
                active: "Difficult" === h
            }, "Difficult")), l.a.createElement(Le.a, {
                className: "mx-3"
            }, l.a.createElement(Re.a, {
                onClick: ()=>C(!0),
                active: k
            }, "Show", l.a.createElement("span", {
                role: "img",
                "aria-label": "experimental"
            }, "\ud83e\uddea")), l.a.createElement(Re.a, {
                onClick: ()=>C(!1),
                active: !k
            }, "Hide", l.a.createElement("span", {
                role: "img",
                "aria-label": "experimental"
            }, "\ud83e\uddea"))), l.a.createElement(Le.a, null, l.a.createElement(We.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, Va(I)), l.a.createElement(ze.a, null, Za.map(e=>l.a.createElement(Je.a, {
                key: e,
                onClick: ()=>x(e)
            }, Va(e))))))), l.a.createElement(We.a, {
                direction: "left"
            }, l.a.createElement(qe.a, {
                caret: !0
            }, m === Number.POSITIVE_INFINITY ? "All" : m), l.a.createElement(ze.a, null, $a.map(({text: e, value: t})=>l.a.createElement(Je.a, {
                key: t,
                onClick: ()=>u(t)
            }, e))))), l.a.createElement(d.a, {
                className: "my-3"
            }, l.a.createElement(p.BootstrapTable, {
                data: N,
                keyField: "id",
                height: "auto",
                hover: !0,
                striped: !0
            }, l.a.createElement(p.TableHeaderColumn, {
                dataField: "title",
                dataFormat: (e,{id: t, contest_id: a, is_experimental: n})=>l.a.createElement(Kt, {
                    difficulty: o.getIn([t, "difficulty"], null),
                    isExperimentalDifficulty: n,
                    showDifficulty: !0,
                    problemId: t,
                    problemTitle: e,
                    contestId: a
                })
            }, "Problem"), l.a.createElement(p.TableHeaderColumn, {
                dataField: "contest_id",
                dataFormat: (e,t)=>{
                    const a = r.get(e);
                    return a ? l.a.createElement(Yt, {
                        contest: a
                    }) : l.a.createElement(zt, {
                        href: Lt(t.contest_id)
                    }, e)
                }
            }, "Contest"), l.a.createElement(p.TableHeaderColumn, {
                dataField: "difficulty",
                dataFormat: e=>null === e ? "-" : String(e)
            }, l.a.createElement("span", null, "Difficulty"), l.a.createElement(Ka, {
                id: "difficulty"
            }, "Internal rating to have 50% Solve Probability")), l.a.createElement(p.TableHeaderColumn, {
                dataField: "predictedSolveProbability",
                dataFormat: Qt
            }, l.a.createElement("span", null, "Solve Probability"), l.a.createElement(Ka, {
                id: "probability"
            }, "Estimated probability that you could solve this problem if you competed in the contest.")), l.a.createElement(p.TableHeaderColumn, {
                dataField: "predictedSolveTime",
                dataFormat: $t
            }, l.a.createElement("span", null, "Median Solve Time"), l.a.createElement(Ka, {
                id: "solvetime"
            }, "Estimated time required to solve this problem.")))))
        }
        ;
        var Xa = ({submissions: e})=>{
            const t = e.filter(e=>B(e.result)).reduce((e,t)=>{
                const a = t.language.startsWith("Perl6") ? "Perl6" : t.language.replace(/\d* \(.*\)$/, "")
                  , n = e.get(a);
                return n ? n.add(t.problem_id) : e.set(a, new Set([t.problem_id])),
                e
            }
            , new Map)
              , a = Array.from(t).map(([e,t])=>({
                language: e,
                count: t.size
            })).sort((e,t)=>e.language.localeCompare(t.language));
            return l.a.createElement(d.a, null, a.map(({language: e, count: t})=>l.a.createElement(Te.a, {
                key: e,
                className: "text-center my-3",
                md: "3",
                xs: "6"
            }, l.a.createElement("h6", null, e), l.a.createElement("h3", null, t))))
        }
        ;
        const en = e=>{
            const t = new Map;
            e.problemModels.forEach(e=>{
                if (void 0 !== e.difficulty) {
                    var a;
                    const n = z(e.difficulty)
                      , l = null !== (a = t.get(n)) && void 0 !== a ? a : 0;
                    t.set(n, l + 1)
                }
            }
            );
            const a = e.solvedProblemIds.reduce((t,a)=>{
                const n = e.problemModels.get(a);
                if (void 0 !== (null === n || void 0 === n ? void 0 : n.difficulty)) {
                    var l;
                    const e = z(n.difficulty)
                      , a = null !== (l = t.get(e)) && void 0 !== l ? l : 0;
                    return t.set(e, a + 1),
                    t
                }
                return t
            }
            , new Map)
              , n = q.map(e=>{
                var n, l;
                const r = null !== (n = t.get(e)) && void 0 !== n ? n : 0
                  , o = null !== (l = a.get(e)) && void 0 !== l ? l : 0;
                return {
                    color: W(e),
                    totalCount: r,
                    solved: o
                }
            }
            );
            return l.a.createElement("div", null, l.a.createElement(d.a, {
                className: "my-3"
            }, n.filter(e=>e.totalCount > 0).map(e=>l.a.createElement(Te.a, {
                key: e.color,
                className: "text-center",
                xs: "6",
                md: "3"
            }, l.a.createElement(Ma, {
                data: [{
                    name: "Accepted",
                    color: e.color,
                    value: e.solved
                }, {
                    name: "Trying",
                    color: "#58616a",
                    value: e.totalCount - e.solved
                }]
            }), l.a.createElement("h5", {
                className: "text-muted"
            }, "".concat(e.solved, " / ").concat(e.totalCount))))))
        }
          , tn = ["Achievement", "AtCoder Pie Charts", "Difficulty Pies", "Progress Charts", "Submissions", "Recommendation", "Languages", "All"]
          , an = Object(u.connect)(({userId: e})=>({
            submissionsFetch: {
                comparison: e,
                value: ()=>{
                    return t = Object(m.a)([e]),
                    Promise.all(t.toArray().map(e=>be(e))).then(e=>e.reduce((e,t)=>t.reduce((e,t)=>e.update(t.problem_id, Object(m.a)(), e=>e.push(t)), e), Object(m.b)()));
                    var t
                }
            },
            mergedProblemsFetch: {
                comparison: null,
                value: ()=>le()
            },
            problemModelsFetch: {
                comparison: null,
                value: ()=>oe()
            },
            contestsFetch: {
                comparison: null,
                value: ()=>se()
            },
            userRatingInfoFetch: {
                comparison: e,
                value: ()=>Fe(e)
            },
            contestToProblemsFetch: {
                comparison: null,
                value: ()=>pe()
            }
        }))(e=>{
            const t = Object(s.h)()
              , a = new URLSearchParams(t.search).get("userPageTab")
              , n = tn.find(e=>e === a) || "Achievement"
              , r = e.userId
              , o = e.userRatingInfoFetch
              , i = e.submissionsFetch
              , u = e.mergedProblemsFetch
              , p = e.contestToProblemsFetch
              , f = e.contestsFetch
              , b = e.problemModelsFetch;
            if (i.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            const h = o.fulfilled ? o.value : P(Object(m.a)())
              , E = u.fulfilled ? u.value : Object(m.b)()
              , g = f.fulfilled ? f.value : Object(m.b)()
              , v = b.fulfilled ? b.value : Object(m.b)()
              , y = i.fulfilled ? i.value : Object(m.b)()
              , _ = p.fulfilled ? Fa(p.value.map(e=>e.toArray())) : new Map;
            if (0 === r.length || y.isEmpty())
                return l.a.createElement(Ca.a, {
                    color: "danger"
                }, "User not found!");
            const S = new Set(g.valueSeq().flatMap(e=>{
                const t = qt(e)
                  , a = _.get(e.id);
                return t && a ? a : []
            }
            ).map(e=>e.id))
              , k = y.valueSeq().flatMap(e=>e).filter(e=>e.user_id === r)
              , C = y.map(e=>e.filter(e=>e.user_id === r && B(e.result)).map(e=>e.epoch_second).min()).filter(e=>void 0 !== e).map(e=>rt(nt(e))).reduce((e,t)=>e.update(t, 0, e=>e + 1), Object(m.b)()).entrySeq().map(([e,t])=>({
                dateLabel: e,
                count: t
            })).sort((e,t)=>e.dateLabel.localeCompare(t.dateLabel))
              , O = (e=>e.map(e=>e.dateLabel).reduce((e,t)=>{
                const a = t === rt(lt(e.prevDateLabel).add(1, "day")) ? e.currentStreak + 1 : 1;
                return {
                    longestStreak: Math.max(e.longestStreak, a),
                    currentStreak: a,
                    prevDateLabel: t
                }
            }
            , {
                longestStreak: 0,
                currentStreak: 0,
                prevDateLabel: ""
            }))(C.toArray())
              , j = O.longestStreak
              , I = O.currentStreak
              , x = O.prevDateLabel
              , F = y.entrySeq().filter(([,e])=>e.find(e=>B(e.result))).map(([e])=>e).toArray()
              , w = new Map
              , M = y.valueSeq().flatMap(e=>e).filter(e=>B(e.result)).filter(e=>S.has(e.problem_id)).toArray();
            M.sort((e,t)=>e.id - t.id),
            M.forEach(e=>{
                w.set(e.problem_id, e.point)
            }
            );
            const N = Array.from(w.values()).reduce((e,t)=>e + t, 0);
            return l.a.createElement("div", null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, r)), l.a.createElement(Oa.a, {
                tabs: !0
            }, tn.map(e=>l.a.createElement(ja.a, {
                key: e
            }, l.a.createElement(Ia.a, {
                tag: c.c,
                isActive: ()=>e === n,
                to: mt(t, {
                    userPageTab: e
                })
            }, e)))), ("All" === n || "Achievement" === n) && l.a.createElement(Ua, {
                userId: r,
                solvedCount: F.length,
                ratedPointSum: N,
                longestStreak: j,
                currentStreak: I,
                prevDateLabel: x
            }), ("All" === n || "AtCoder Pie Charts" === n) && l.a.createElement(Ta, {
                contestToProblems: _,
                userId: r,
                submissions: Fa(y.map(e=>e.toArray()))
            }), ("All" === n || "Difficulty Pies" === n) && l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Difficulty Pies")), l.a.createElement(en, {
                problemModels: Fa(v),
                solvedProblemIds: F
            })), ("All" === n || "Progress Charts" === n) && l.a.createElement(Wa, {
                dailyCount: C.toArray(),
                userSubmissions: k.toArray()
            }), ("All" === n || "Submissions" === n) && l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Submissions")), l.a.createElement(xa, {
                problemModels: Fa(v),
                problems: E.valueSeq().toArray(),
                submissions: k.toArray()
            })), ("All" === n || "Languages" === n) && l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Languages")), l.a.createElement(Xa, {
                submissions: k.toArray()
            })), ("All" === n || "Recommendation" === n) && l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2 border-bottom"
            }, l.a.createElement("h1", null, "Recommendation")), l.a.createElement(Qa, {
                userSubmissions: k.toList(),
                problems: E.valueSeq().toList(),
                contests: g,
                problemModels: v,
                userRatingInfo: h
            })))
        }
        );
        function nn(e, t) {
            const a = localStorage.getItem(e)
              , n = l.a.useState(a ? JSON.parse(a) : t)
              , r = Object(De.a)(n, 2)
              , o = r[0]
              , c = r[1];
            return l.a.useEffect(()=>{
                localStorage.setItem(e, JSON.stringify(o))
            }
            , [o, e]),
            [o, c]
        }
        const ln = e=>{
            const t = e.active
              , a = e.setActive;
            return l.a.createElement(d.a, null, l.a.createElement(Le.a, {
                className: "table-tab"
            }, Gt.map((e,n)=>l.a.createElement(Re.a, {
                key: n,
                color: "secondary",
                onClick: ()=>{
                    a(e)
                }
                ,
                active: t === e
            }, e))))
        }
        ;
        var rn = a(485)
          , on = a(486)
          , cn = a(487)
          , sn = a(488);
        var mn = e=>l.a.createElement(i.a, null, l.a.createElement(d.a, {
            className: "my-4"
        }, l.a.createElement(rn.a, {
            check: !0,
            inline: !0
        }, l.a.createElement(on.a, {
            check: !0
        }, l.a.createElement(cn.a, {
            type: "checkbox",
            checked: e.showAccepted,
            onChange: e.toggleShowAccepted
        }), "Show Accepted")), l.a.createElement(rn.a, {
            check: !0,
            inline: !0
        }, l.a.createElement(on.a, {
            check: !0
        }, l.a.createElement(cn.a, {
            type: "checkbox",
            checked: e.showDifficulties,
            onChange: e.toggleShowDifficulties
        }), "Show Difficulty", l.a.createElement(Ka, {
            id: "difficulty"
        }, "Internal rating to have 50% Solve Probability"))), l.a.createElement(We.a, null, l.a.createElement(qe.a, {
            caret: !0
        }, {
            [Xt.None]: "Color By",
            [Xt.ContestResult]: "Contest Result",
            [Xt.Language]: "Language"
        }[e.colorMode]), l.a.createElement(ze.a, null, l.a.createElement(Je.a, {
            header: !0
        }, "Color By"), l.a.createElement(Je.a, {
            onClick: ()=>e.setColorMode(Xt.None)
        }, "None"), l.a.createElement(Je.a, {
            onClick: ()=>e.setColorMode(Xt.ContestResult)
        }, "Contest Result"), l.a.createElement(Je.a, {
            onClick: ()=>e.setColorMode(Xt.Language)
        }, "Language")))), e.colorMode === Xt.Language && !e.selectableLanguages.isEmpty() && l.a.createElement(d.a, {
            className: "my-4"
        }, l.a.createElement(Te.a, {
            className: "px-0"
        }, l.a.createElement(sn.a, {
            body: !0
        }, l.a.createElement(rn.a, {
            check: !0,
            className: "m-0 p-0"
        }, e.selectableLanguages.toArray().sort().map(t=>l.a.createElement(on.a, {
            check: !0,
            key: t,
            style: {
                marginLeft: "2rem"
            }
        }, l.a.createElement(cn.a, {
            type: "checkbox",
            checked: e.selectedLanguages.has(t),
            onChange: ()=>e.toggleLanguage(t)
        }), t)))))))
          , un = a(489);
        var dn = e=>{
            const t = e.contest
              , a = e.problemStatus;
            return e.enableColorfulMode ? l.a.createElement("div", {
                className: "table-problem-timespan"
            }, !a || a.label !== Qe.Success || a.epoch > t.start_epoch_second + t.duration_second ? "" : (e=>{
                let t;
                return e >= 0 ? t = "" : (t = "-",
                e *= -1),
                "".concat(t).concat(Math.floor(e / 60), ":").concat(("0" + e % 60).slice(-2))
            }
            )(a.epoch - t.start_epoch_second)) : null
        }
        ;
        const pn = e=>{
            const t = e.contests
              , a = e.contestToProblems
              , n = e.showSolved
              , r = e.statusLabelMap
              , o = e.colorMode
              , c = e.problemModels
              , s = e.selectedLanguages
              , i = t.sort((e,t)=>t.start_epoch_second - e.start_epoch_second).map(e=>({
                contest: e,
                problems: a.get(e.id, Object(m.a)()).sort((e,t)=>e.title.localeCompare(t.title))
            })).map(({contest: e, problems: t})=>({
                contest: e,
                problemStatus: t.map(e=>({
                    problem: e,
                    status: r.get(e.id)
                }))
            })).filter(({problemStatus: e})=>n || !e.every(({status: e})=>!!e && e.label === Qe.Success)).map(({contest: e, problemStatus: t})=>({
                contest: e,
                problemInfo: t.map(({problem: e, status: t})=>({
                    problem: e,
                    status: t,
                    model: c.get(e.id)
                }))
            }));
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-4"
            }, l.a.createElement("h2", null, e.title)), l.a.createElement("div", null, i.map(({contest: t, problemInfo: a})=>l.a.createElement("div", {
                key: t.id,
                className: "contest-table-responsive"
            }, l.a.createElement("strong", null, l.a.createElement(Yt, {
                contest: t
            })), l.a.createElement(un.a, {
                striped: !0,
                bordered: !0,
                hover: !0,
                responsive: !0
            }, l.a.createElement("tbody", null, l.a.createElement("tr", null, a.map(({problem: a, status: n, model: r})=>{
                const c = n ? na({
                    colorMode: o,
                    status: n,
                    contest: t,
                    selectedLanguages: s
                }) : "";
                return l.a.createElement("td", {
                    key: a.id,
                    className: ["table-problem", c].filter(e=>e).join(" ")
                }, l.a.createElement(Kt, {
                    difficulty: r && r.difficulty ? r.difficulty : null,
                    isExperimentalDifficulty: !!r && r.is_experimental,
                    showDifficultyUnavailable: qt(t),
                    showDifficulty: e.showDifficulty,
                    problemId: a.id,
                    problemTitle: a.title,
                    contestId: a.contest_id
                }), l.a.createElement(dn, {
                    contest: t,
                    problemStatus: n,
                    enableColorfulMode: e.colorMode === Xt.ContestResult
                }))
            }
            ))))))))
        }
          , fn = l.a.memo(e=>{
            const t = e.colorMode
              , a = e.selectedLanguages
              , n = e.contests.map(n=>{
                const l = e.contestToProblems.get(n.id, Object(m.a)()).sort((e,t)=>e.id.localeCompare(t.id))
                  , r = l.map(t=>{
                    var a;
                    return {
                        problem: t,
                        status: null !== (a = e.statusLabelMap.get(t.id)) && void 0 !== a ? a : Xe(),
                        model: e.problemModels.get(t.id)
                    }
                }
                )
                  , o = l.map(l=>{
                    var r;
                    const o = null !== (r = e.statusLabelMap.get(l.id)) && void 0 !== r ? r : Xe();
                    return na({
                        colorMode: t,
                        status: o,
                        contest: n,
                        selectedLanguages: a
                    })
                }
                )
                  , c = (({colorMode: e, colorList: t})=>{
                    switch (e) {
                    case Xt.ContestResult:
                        if (t.every(e=>e === ea.SuccessBeforeContest))
                            return ea.SuccessBeforeContest;
                        if (t.every(e=>e === ea.SuccessIntime))
                            return ea.SuccessIntime;
                        break;
                    case Xt.Language:
                        if (t.every(e=>e === ea.SuccessLanguage))
                            return ea.SuccessLanguage
                    }
                    return t.isSubset(ta) ? ea.Success : ea.None
                }
                )({
                    colorMode: t,
                    colorList: o
                })
                  , s = r.every(({status: e})=>e.label === Qe.Success);
                return {
                    contest: n,
                    id: n.id,
                    problemStatus: r,
                    solvedAll: s,
                    rowColor: c,
                    cellColorList: o
                }
            }
            ).filter(({solvedAll: t})=>e.showSolved || !t).sort((e,t)=>t.contest.start_epoch_second - e.contest.start_epoch_second)
              , r = n.reduce((e,{problemStatus: t})=>Math.max(t.size, e), 0)
              , o = ["A", "B", "C", "D", "E", "F", "F2"].slice(0, r);
            return l.a.createElement(d.a, {
                className: "my-4"
            }, l.a.createElement("h2", null, e.title), l.a.createElement(p.BootstrapTable, {
                data: n,
                tableContainerClass: "contest-table-responsive contest-regular-table-responsive"
            }, l.a.createElement(p.TableHeaderColumn, {
                isKey: !0,
                dataField: "id",
                columnClassName: (e,{rowColor: t})=>t,
                dataFormat: (e,{contest: t})=>l.a.createElement(Yt, {
                    contest: t,
                    title: t.id.toUpperCase()
                })
            }, "Contest"), o.map((t,a)=>l.a.createElement(p.TableHeaderColumn, {
                dataField: t,
                key: t,
                columnClassName: (e,{problemStatus: t, cellColorList: n})=>{
                    const l = t.get(a)
                      , r = n.get(a, ea.None);
                    return ["table-problem", l ? r : "table-problem-empty"].filter(e=>e).join(" ")
                }
                ,
                dataFormat: (t,{contest: n, problemStatus: r})=>{
                    const o = r.get(a)
                      , c = o ? o.model : void 0;
                    return o ? l.a.createElement(l.a.Fragment, null, l.a.createElement(Kt, {
                        difficulty: c && void 0 !== c.difficulty ? c.difficulty : null,
                        isExperimentalDifficulty: !!c && c.is_experimental,
                        showDifficultyUnavailable: !0,
                        showDifficulty: e.showDifficulty,
                        contestId: n.id,
                        problemId: o.problem.id,
                        problemTitle: o.problem.title
                    }), l.a.createElement(dn, {
                        contest: n,
                        problemStatus: o.status,
                        enableColorfulMode: e.colorMode === Xt.ContestResult
                    })) : ""
                }
            }, t))))
        }
        )
          , bn = Object(u.connect)(e=>({
            problemModelsFetch: {
                comparison: null,
                value: ()=>oe()
            },
            contestsFetch: {
                comparison: null,
                value: ()=>se()
            },
            problemsFetch: {
                comparison: null,
                value: ()=>me()
            },
            contestToProblemsFetch: {
                comparison: null,
                value: ()=>pe()
            },
            selectableLanguagesFetch: {
                comparison: e.userId,
                value: ()=>{
                    return t = e.userId,
                    void 0 !== Oe.selectableLanguages && Oe.userId === t || (Oe.userId = t,
                    Oe.selectableLanguages = be(t).then(e=>e.map(e=>e.language).toSet())),
                    Oe.selectableLanguages;
                    var t
                }
            },
            submissions: {
                comparison: [e.userId, e.rivals],
                value: ()=>Promise.all(e.rivals.push(e.userId).map(e=>dt(e))).then(e=>e.flatMap(e=>e))
            },
            loginState: ft,
            progressResetList: Pt
        }))(e=>{
            const t = e.contestsFetch
              , a = e.contestToProblemsFetch
              , r = e.problemModelsFetch
              , o = e.selectableLanguagesFetch
              , c = nn("contestTableTab", "ABC")
              , s = Object(De.a)(c, 2)
              , i = s[0]
              , u = s[1]
              , d = nn("showAccepted", !0)
              , p = Object(De.a)(d, 2)
              , f = p[0]
              , b = p[1]
              , h = nn("showDifficulty", !0)
              , E = Object(De.a)(h, 2)
              , g = E[0]
              , v = E[1]
              , y = nn("colorMode", Xt.None)
              , _ = Object(De.a)(y, 2)
              , S = _[0]
              , k = _[1]
              , C = Object(n.useState)(Object(m.d)())
              , O = Object(De.a)(C, 2)
              , j = O[0]
              , I = O[1]
              , x = r.fulfilled ? r.value : Object(m.b)(JSON.parse(localStorage.getItem("problemModels") || "[]"))
              , F = a.fulfilled ? a.value : Object(m.b)()
              , w = t.fulfilled ? t.value : Object(m.b)()
              , M = o.fulfilled ? o.value : Object(m.d)()
              , P = e.submissions.fulfilled ? e.submissions.value : []
              , N = e.loginState.fulfilled && e.loginState.value && e.loginState.value.atcoder_user_id ? e.loginState.value.atcoder_user_id : void 0
              , A = e.progressResetList.fulfilled && e.progressResetList.value ? e.progressResetList.value : void 0
              , D = N && A ? Tt(P, A, N) : P
              , T = et(D, e.userId)
              , L = w.valueSeq().toArray().filter(e=>{
                return (/^abc\d{3}$/.exec((t = e).id) ? "ABC" : /^arc\d{3}$/.exec(t.id) ? "ARC" : /^agc\d{3}$/.exec(t.id) ? "AGC" : qt(t) ? "Other Rated Contests" : t.id.startsWith("past") ? "PAST" : t.id.startsWith("joi") ? "JOI" : /^(jag|JAG)/.exec(t.id) ? "JAG" : /(^Chokudai Contest|\u30cf\u30fc\u30d5\u30de\u30e9\u30bd\u30f3|^HACK TO THE FUTURE|Asprova)/.exec(t.title) || /(^future-meets-you-contest|^hokudai-hitachi)/.exec(t.id) || ["caddi2019", "pakencamp-2019-day2", "kuronekoyamato-contest2019", "wn2017_1"].includes(t.id) ? "Marathon" : "Other Contests") === i;
                var t
            }
            );
            return l.a.createElement("div", null, l.a.createElement(mn, {
                showAccepted: f,
                toggleShowAccepted: ()=>b(!f),
                showDifficulties: g,
                toggleShowDifficulties: ()=>v(!g),
                colorMode: S,
                setColorMode: k,
                selectableLanguages: M,
                selectedLanguages: j,
                toggleLanguage: e=>I(j.has(e) ? j.delete(e) : j.add(e))
            }), l.a.createElement(ln, {
                active: i,
                setActive: u
            }), ["ABC", "ARC", "AGC"].includes(i) ? l.a.createElement(fn, {
                problemModels: x,
                showDifficulty: g,
                showSolved: f,
                colorMode: S,
                contests: L,
                title: "ABC" === i ? "AtCoder Beginner Contest" : "ARC" === i ? "AtCoder Regular Contest" : "AtCoder Grand Contest",
                contestToProblems: F,
                statusLabelMap: T,
                selectedLanguages: j
            }) : l.a.createElement(pn, {
                problemModels: x,
                showDifficulty: g,
                contests: L,
                title: i,
                contestToProblems: F,
                showSolved: f,
                colorMode: S,
                statusLabelMap: T,
                selectedLanguages: j
            }))
        }
        );
        var hn = a(490)
          , En = a(493)
          , gn = a(494)
          , vn = a(491);
        var yn = a(492);
        const _n = (e,t,a)=>{
            var n;
            return "/" + e + "/" + [R(t), ...(n = a,
            L.exec(n) ? n.split(",").map(e=>e.trim()).filter(e=>e.length > 0) : [])].join("/")
        }
          , Sn = Object(u.connect)(()=>({
            loginState: {
                url: ft
            }
        }))(e=>{
            const t = Object(s.h)().pathname
              , a = (e=>/^\/user/.exec(e) ? "user" : /^\/list/.exec(e) ? "list" : /^\/table/.exec(e) ? "table" : void 0)(t)
              , n = a ? (e=>{
                const t = e.split("/");
                return {
                    userId: t.length >= 3 ? t[2] : "",
                    rivalIdString: t.slice(3).filter(e=>e.length > 0).join(",")
                }
            }
            )(t) : void 0
              , r = null === n || void 0 === n ? void 0 : n.userId
              , o = null === n || void 0 === n ? void 0 : n.rivalIdString
              , i = e.loginState.fulfilled && e.loginState.value && e.loginState.value.atcoder_user_id ? e.loginState.value.atcoder_user_id : ""
              , m = l.a.useState(null !== r && void 0 !== r ? r : "")
              , u = Object(De.a)(m, 2)
              , d = u[0]
              , p = u[1]
              , f = l.a.useState(null !== o && void 0 !== o ? o : "")
              , b = Object(De.a)(f, 2)
              , h = b[0]
              , E = b[1]
              , g = Object(s.g)()
              , v = ()=>{
                const e = _n(null !== a && void 0 !== a ? a : "table", d || i, h);
                g.push({
                    pathname: e
                })
            }
            ;
            l.a.useEffect(()=>{
                r && p(r),
                o && E(o)
            }
            , [r, o]);
            const y = l.a.useMemo(()=>[_n("table", d || i, h), _n("list", d || i, h), _n("user", d || i, h)], [d, i, h])
              , _ = Object(De.a)(y, 3)
              , S = _[0]
              , k = _[1]
              , C = _[2];
            return l.a.createElement(hn.a, {
                color: "light",
                light: !0,
                expand: "lg",
                className: "border-bottom",
                style: {
                    padding: 0
                }
            }, l.a.createElement(vn.a, {
                isOpen: e.isOpen,
                navbar: !0
            }, l.a.createElement(Oa.a, {
                navbar: !0,
                style: {
                    padding: "0.5rem 1rem"
                }
            }, l.a.createElement(yn.a, {
                inline: !0
            }, l.a.createElement(cn.a, {
                className: "mt-2 mr-2 mt-lg-0",
                style: {
                    width: 160
                },
                onKeyPress: e=>{
                    "Enter" === e.key && v()
                }
                ,
                value: d,
                type: "text",
                name: "user_id",
                id: "user_id",
                placeholder: i || "User ID",
                onChange: e=>p(e.target.value)
            }), l.a.createElement(cn.a, {
                className: "mt-2 mr-2 mt-lg-0",
                style: {
                    width: 160
                },
                onKeyPress: e=>{
                    "Enter" === e.key && v()
                }
                ,
                value: h,
                type: "text",
                name: "rival_id",
                id: "rival_id",
                placeholder: "Rival ID, ...",
                onChange: e=>E(e.target.value)
            }), l.a.createElement(Le.a, {
                className: "mt-2 mb-0 mt-lg-0"
            }, l.a.createElement(Re.a, {
                tag: c.c,
                to: S,
                color: "light"
            }, "Table"), l.a.createElement(Re.a, {
                tag: c.c,
                to: k,
                color: "light"
            }, "List"), l.a.createElement(Re.a, {
                disabled: 0 === d.length && 0 === i.length,
                tag: c.c,
                to: C,
                color: "light"
            }, "User"))))))
        }
        )
          , kn = Object(u.connect)(()=>({
            loginState: {
                url: ft
            }
        }))(e=>{
            const t = e.loginState.fulfilled && e.loginState.value && e.loginState.value.internal_user_id.length > 0
              , a = e.loginState.fulfilled && e.loginState.value && e.loginState.value.atcoder_user_id ? e.loginState.value.atcoder_user_id : ""
              , n = l.a.useState(!1)
              , r = Object(De.a)(n, 2)
              , o = r[0]
              , i = r[1];
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(hn.a, {
                color: "dark",
                dark: !0,
                expand: "lg"
            }, l.a.createElement(En.a, {
                tag: c.c,
                to: "/",
                className: "mb-0 h1"
            }, "AtCoder Problems"), l.a.createElement(gn.a, {
                onClick: ()=>i(!o)
            }), l.a.createElement(vn.a, {
                isOpen: o,
                navbar: !0
            }, l.a.createElement(Oa.a, {
                navbar: !0
            }, l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                tag: c.c,
                to: "/table/"
            }, "Problems")), l.a.createElement(We.a, {
                nav: !0,
                inNavbar: !0
            }, l.a.createElement(qe.a, {
                nav: !0,
                caret: !0
            }, "Rankings"), l.a.createElement(ze.a, null, l.a.createElement(Je.a, {
                tag: c.c,
                to: "/ac"
            }, "AC Count"), l.a.createElement(Je.a, {
                tag: c.c,
                to: "/fast"
            }, "Fastest Submissions"), l.a.createElement(Je.a, {
                tag: c.c,
                to: "/short"
            }, "Shortest Submissions"), l.a.createElement(Je.a, {
                tag: c.c,
                to: "/first"
            }, "First AC"), l.a.createElement(Je.a, {
                tag: c.c,
                to: "/sum"
            }, "Rated Point Ranking"), l.a.createElement(Je.a, {
                tag: c.c,
                to: "/streak"
            }, "Streak Ranking"), l.a.createElement(Je.a, {
                tag: c.c,
                to: "/lang"
            }, "Language Owners"))), l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                tag: c.c,
                to: "/submissions/recent"
            }, "Submissions")), l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                href: "https://github.com/kenkoooo/AtCoderProblems/tree/master/doc",
                target: "_blank",
                rel: "noopener noreferrer"
            }, "FAQ")), l.a.createElement(We.a, {
                nav: !0,
                inNavbar: !0
            }, l.a.createElement(qe.a, {
                nav: !0,
                caret: !0
            }, "Links"), l.a.createElement(ze.a, null, l.a.createElement(Je.a, {
                tag: "a",
                href: "https://atcoder.jp/",
                target: "_blank",
                rel: "noopener noreferrer"
            }, "AtCoder"), l.a.createElement(Je.a, {
                tag: "a",
                href: "http://aoj-icpc.ichyo.jp/",
                target: "_blank",
                rel: "noopener noreferrer"
            }, "AOJ-ICPC"), l.a.createElement(Je.a, {
                tag: "a",
                href: "https://github.com/kenkoooo/AtCoderProblems",
                target: "_blank",
                rel: "noopener noreferrer"
            }, "GitHub"), l.a.createElement(Je.a, {
                tag: "a",
                href: "https://twitter.com/kenkoooo",
                target: "_blank",
                rel: "noopener noreferrer"
            }, "@kenkoooo")))), l.a.createElement(Oa.a, {
                className: "ml-auto",
                navbar: !0
            }, l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                tag: c.c,
                to: "/contest/recent"
            }, "Virtual Contests")), l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                tag: c.c,
                to: "/training"
            }, "Training (beta)")), l.a.createElement(ja.a, null, t ? l.a.createElement(Ia.a, {
                tag: c.c,
                to: "/login/user"
            }, "Account (", a, ")") : l.a.createElement(Ia.a, {
                href: Ht
            }, "Login"))))), l.a.createElement(s.b, {
                path: ["/user/:userIds([a-zA-Z0-9_]+)+", "/table/:userIds([a-zA-Z0-9_]*)*", "/list/:userIds([a-zA-Z0-9_]*)*"]
            }, l.a.createElement(Sn, {
                isOpen: o
            })))
        }
        );
        var Cn = Object(u.connect)(()=>({
            rankingFetch: {
                comparison: null,
                value: Ee
            }
        }))(e=>l.a.createElement(f, {
            title: l.a.createElement(l.a.Fragment, null, "Streak Ranking", " ", l.a.createElement(Ze.a, {
                pill: !0,
                id: "streakRankingTooltip"
            }, "?"), l.a.createElement(Ra.a, {
                target: "streakRankingTooltip",
                placement: "right"
            }, "The streak ranking is based on ", l.a.createElement("strong", null, "Japan Standard Time"), " ", "(JST, UTC+9).")),
            ranking: e.rankingFetch.fulfilled ? e.rankingFetch.value : []
        }))
          , On = a(499)
          , jn = a(501)
          , In = a(495)
          , xn = a(496)
          , Fn = a(497)
          , wn = a(498);
        const Mn = e=>{
            const t = Object(n.useState)("")
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , c = Object(n.useState)(-1)
              , s = Object(De.a)(c, 2)
              , i = s[0]
              , m = s[1]
              , u = e.problems.filter(e=>{
                return a = e,
                (t = r).length > 0 && t.split(/\s/).every(e=>e.trim().length > 0 && a.title.toLowerCase().includes(e.toLowerCase()) || Bt(a.id, a.contest_id).toLowerCase().includes(e.toLowerCase()));
                var t, a
            }
            ).slice(0, 20);
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(cn.a, {
                type: "text",
                placeholder: "Search Problems",
                value: r,
                onChange: e=>{
                    o(e.target.value),
                    m(-1)
                }
                ,
                onKeyDown: t=>{
                    if ("Enter" === t.key) {
                        const t = u.length > i ? u[i] : void 0;
                        t && (e.selectProblem(t),
                        o(""),
                        m(-1))
                    } else
                        "ArrowDown" === t.key ? m(Math.min(u.length - 1, i + 1)) : "ArrowUp" === t.key && m(Math.max(-1, i - 1))
                }
            }), l.a.createElement(In.a, null, u.map((t,a)=>l.a.createElement(xn.a, {
                active: a === i,
                key: t.id,
                onClick: ()=>{
                    e.selectProblem(t),
                    o(""),
                    m(-1)
                }
            }, l.a.createElement(Fn.a, null, t.title), l.a.createElement(wn.a, null, Bt(t.id, t.contest_id))))))
        }
        ;
        var Pn = a(500)
          , Nn = a(212);
        const An = {
            displayName: "Level 1",
            problemSelectionParams: [{
                minDifficulty: 0,
                maxDifficulty: 50
            }, {
                minDifficulty: 10,
                maxDifficulty: 100
            }, {
                minDifficulty: 50,
                maxDifficulty: 800
            }, {
                minDifficulty: 800,
                maxDifficulty: 1200
            }, {
                minDifficulty: 1200,
                maxDifficulty: 1600
            }, {
                minDifficulty: 2e3,
                maxDifficulty: 2400
            }]
        }
          , Dn = {
            displayName: "Level 2",
            problemSelectionParams: [{
                minDifficulty: 800,
                maxDifficulty: 1200
            }, {
                minDifficulty: 1200,
                maxDifficulty: 1800
            }, {
                minDifficulty: 2e3,
                maxDifficulty: 2800
            }, {
                minDifficulty: 2800,
                maxDifficulty: 4e3
            }]
        }
          , Tn = {
            displayName: "Level 3",
            problemSelectionParams: [{
                minDifficulty: 400,
                maxDifficulty: 1200
            }, {
                minDifficulty: 1200,
                maxDifficulty: 2400
            }, {
                minDifficulty: 1600,
                maxDifficulty: 3200
            }, {
                minDifficulty: 2400,
                maxDifficulty: 9999
            }, {
                minDifficulty: 2800,
                maxDifficulty: 9999
            }, {
                minDifficulty: 2800,
                maxDifficulty: 9999
            }]
        }
          , Ln = e=>{
            const t = Object(n.useState)(An.problemSelectionParams)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , c = Object(n.useState)(!1)
              , s = Object(De.a)(c, 2)
              , i = s[0]
              , u = s[1]
              , d = Object(n.useState)(!0)
              , p = Object(De.a)(d, 2)
              , f = p[0]
              , b = p[1]
              , v = Object(n.useState)(An)
              , y = Object(De.a)(v, 2)
              , S = y[0]
              , k = y[1];
            return l.a.createElement(yn.a, {
                className: "w-100"
            }, l.a.createElement(rn.a, {
                row: !0
            }, l.a.createElement(Te.a, null, l.a.createElement(On.a, null, l.a.createElement(Pn.a, {
                addonType: "prepend"
            }, l.a.createElement(Nn.a, null, l.a.createElement(cn.a, {
                addon: !0,
                type: "checkbox",
                "aria-label": "Exclude experimental difficulty",
                checked: i,
                onChange: e=>u(e.target.checked)
            }))), l.a.createElement(Nn.a, null, "Exclude experimental difficulty")))), l.a.createElement(rn.a, {
                row: !0
            }, l.a.createElement(Te.a, null, l.a.createElement(On.a, null, l.a.createElement(Pn.a, {
                addonType: "prepend"
            }, l.a.createElement(Nn.a, null, l.a.createElement(cn.a, {
                addon: !0,
                type: "checkbox",
                "aria-label": "Exclude already solved problems by expected participants",
                checked: f,
                onChange: e=>b(e.target.checked)
            }))), l.a.createElement(Nn.a, null, "Exclude already solved problems by expected participants")))), l.a.createElement(rn.a, {
                row: !0
            }, l.a.createElement(Te.a, {
                sm: 6
            }, l.a.createElement(on.a, null, "Difficulty Adjustment Preset"), l.a.createElement(On.a, null, l.a.createElement(We.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, S.displayName), l.a.createElement(ze.a, null, [An, Dn, Tn].map(e=>l.a.createElement(Je.a, {
                onClick: ()=>{
                    k(e),
                    o(e.problemSelectionParams)
                }
                ,
                key: e.displayName
            }, e.displayName))))))), r.map((e,t)=>l.a.createElement(rn.a, {
                row: !0,
                key: t
            }, l.a.createElement(Te.a, {
                sm: 6
            }, l.a.createElement(on.a, null, " Problem ", t + 1), l.a.createElement(Re.a, {
                close: !0,
                onClick: ()=>{
                    const e = [...r];
                    e.splice(t, 1),
                    o(e)
                }
            }), l.a.createElement(On.a, null, l.a.createElement(Pn.a, {
                addonType: "prepend"
            }, l.a.createElement(Nn.a, null, "Min Difficulty")), l.a.createElement(cn.a, {
                placeholder: "Min Difficulty",
                min: 0,
                max: 1e4,
                type: "number",
                value: e.minDifficulty,
                step: 50,
                onChange: a=>{
                    const n = [...r];
                    n[t] = Object(g.a)({}, e, {
                        minDifficulty: parseInt(a.target.value, 10)
                    }),
                    o(n)
                }
            }), l.a.createElement(Pn.a, {
                addonType: "prepend"
            }, l.a.createElement(Nn.a, null, "Max Difficulty")), l.a.createElement(cn.a, {
                placeholder: "Max Difficulty",
                min: 0,
                max: 1e4,
                type: "number",
                value: e.maxDifficulty,
                step: 50,
                onChange: a=>{
                    const n = [...r];
                    n[t] = Object(g.a)({}, e, {
                        maxDifficulty: parseInt(a.target.value, 10)
                    }),
                    o(n)
                }
            }))))), l.a.createElement("div", {
                style: {
                    paddingBottom: 16
                }
            }, l.a.createElement(Re.a, {
                color: "link",
                onClick: ()=>{
                    let e;
                    e = 0 === r.length ? {
                        minDifficulty: 0,
                        maxDifficulty: 1e4
                    } : Object(g.a)({}, r[r.length - 1]),
                    o([...r, e])
                }
            }, "More problem ...")), l.a.createElement(rn.a, {
                row: !0
            }, l.a.createElement(Te.a, {
                sm: 12
            }, l.a.createElement(Re.a, {
                color: "success",
                disabled: 0 === r.length || e.addButtonDisabled,
                onClick: Object(E.a)(h.a.mark((function t() {
                    var a, n, l, o, c, s;
                    return h.a.wrap((function(t) {
                        for (; ; )
                            switch (t.prev = t.next) {
                            case 0:
                                if (a = r.length,
                                n = e.problems.map(t=>({
                                    problem: t,
                                    model: e.problemModels.get(t.id)
                                })),
                                i && (n = n.filter(e=>void 0 !== e.model && !e.model.is_experimental)),
                                !f) {
                                    t.next = 15;
                                    break
                                }
                                return t.prev = 4,
                                t.next = 7,
                                Promise.all(e.expectedParticipantUserIds.map(be)).then(e=>Object(m.a)(e).flatten(!0).filter(e=>B(e.result)).map(e=>e.problem_id).toSet());
                            case 7:
                                l = t.sent,
                                n = n.filter(e=>!l.contains(e.problem.id)),
                                t.next = 15;
                                break;
                            case 11:
                                throw t.prev = 11,
                                t.t0 = t.catch(4),
                                alert("Error happened during fetching submissions. See console."),
                                t.t0;
                            case 15:
                                n = Y(n).toList(),
                                o = [],
                                c = new Set,
                                s = [],
                                r.forEach((e,t)=>{
                                    let a = !1;
                                    n.forEach(t=>{
                                        if (!a && !c.has(t.problem.id))
                                            return _(t.model) && t.model.difficulty >= e.minDifficulty && t.model.difficulty <= e.maxDifficulty ? (c.add(t.problem.id),
                                            o.push(t.problem),
                                            void (a = !0)) : void 0
                                    }
                                    ),
                                    a || s.push(t)
                                }
                                ),
                                o.length < a && alert("Only ".concat(o.length, " problems are prepared. (Failed to assign a problem for problem ").concat(s.map(e=>e + 1).join(","), ")")),
                                e.selectProblem(...o);
                            case 22:
                            case "end":
                                return t.stop()
                            }
                    }
                    ), t, null, [[4, 11]])
                }
                )))
            }, "Add")), l.a.createElement(Te.a, null, e.addButtonDisabled && l.a.createElement("span", null, e.feedbackForDisabledAddButton))))
        }
        ;
        var Rn = Object(u.connect)(e=>({
            userSolvedProblemsMapFetch: {
                comparison: e.expectedParticipantUserIds,
                refreshing: !0,
                value: function() {
                    var t = Object(E.a)(h.a.mark((function t() {
                        var a, n, l, r, o, c, s, i, m;
                        return h.a.wrap((function(t) {
                            for (; ; )
                                switch (t.prev = t.next) {
                                case 0:
                                    a = {},
                                    n = [],
                                    l = !0,
                                    r = !1,
                                    o = void 0,
                                    t.prev = 5,
                                    c = e.expectedParticipantUserIds[Symbol.iterator]();
                                case 7:
                                    if (l = (s = c.next()).done) {
                                        t.next = 22;
                                        break
                                    }
                                    return i = s.value,
                                    t.prev = 9,
                                    t.next = 12,
                                    be(i);
                                case 12:
                                    m = t.sent,
                                    a[i] = m.filter(e=>B(e.result)).map(e=>e.problem_id).toSet(),
                                    t.next = 19;
                                    break;
                                case 16:
                                    t.prev = 16,
                                    t.t0 = t.catch(9),
                                    n.push(i);
                                case 19:
                                    l = !0,
                                    t.next = 7;
                                    break;
                                case 22:
                                    t.next = 28;
                                    break;
                                case 24:
                                    t.prev = 24,
                                    t.t1 = t.catch(5),
                                    r = !0,
                                    o = t.t1;
                                case 28:
                                    t.prev = 28,
                                    t.prev = 29,
                                    l || null == c.return || c.return();
                                case 31:
                                    if (t.prev = 31,
                                    !r) {
                                        t.next = 34;
                                        break
                                    }
                                    throw o;
                                case 34:
                                    return t.finish(31);
                                case 35:
                                    return t.finish(28);
                                case 36:
                                    return n.length > 0 ? e.onSolvedProblemsFetchFinished("Fetch Failed for ".concat(n.join(", "))) : e.onSolvedProblemsFetchFinished(),
                                    t.abrupt("return", a);
                                case 38:
                                case "end":
                                    return t.stop()
                                }
                        }
                        ), t, null, [[5, 24, 28, 36], [9, 16], [29, , 31, 35]])
                    }
                    )));
                    return function() {
                        return t.apply(this, arguments)
                    }
                }()
            }
        }))(e=>l.a.createElement(In.a, null, e.problemSet.valueSeq().map((t,a)=>{
            var n, r;
            const o = t.id
              , c = e.problemMap.get(o)
              , s = c && e.userSolvedProblemsMapFetch.fulfilled ? Object.entries(e.userSolvedProblemsMapFetch.value).filter(([,e])=>e.contains(c.id)).map(([e])=>e) : [];
            return l.a.createElement(xn.a, {
                key: o,
                style: {
                    backgroundColor: s.length > 0 ? "#ffeeee" : ""
                }
            }, l.a.createElement(Re.a, {
                close: !0,
                onClick: ()=>{
                    e.setProblemSet(e.problemSet.filter(e=>e.id !== o))
                }
            }), c ? l.a.createElement(Kt, {
                problemId: c.id,
                contestId: c.contest_id,
                problemTitle: c.title,
                showDifficulty: !0,
                difficulty: null === (n = e.problemModelMap.get(o)) || void 0 === n ? void 0 : n.difficulty,
                isExperimentalDifficulty: null === (r = e.problemModelMap.get(o)) || void 0 === r ? void 0 : r.is_experimental
            }) : o, s.length > 0 && l.a.createElement(l.a.Fragment, null, " solved by ", s.join(", ")), null === t.point ? l.a.createElement(Re.a, {
                style: {
                    float: "right"
                },
                onClick: ()=>{
                    e.setProblemSet(e.problemSet.update(a, e=>Object(g.a)({}, e, {
                        point: 0
                    })))
                }
            }, "Set Point") : null, null !== t.point ? l.a.createElement(On.a, null, l.a.createElement(cn.a, {
                type: "number",
                value: t.point,
                onChange: t=>{
                    const n = parseInt(t.target.value, 10)
                      , l = isNaN(n) ? 0 : n;
                    e.setProblemSet(e.problemSet.update(a, e=>Object(g.a)({}, e, {
                        point: l
                    })))
                }
            }), l.a.createElement(Pn.a, {
                addonType: "append"
            }, l.a.createElement(Re.a, {
                onClick: ()=>{
                    e.setProblemSet(e.problemSet.update(a, e=>Object(g.a)({}, e, {
                        point: null
                    })))
                }
            }, "Unset"))) : null)
        }
        )));
        const Bn = (e,t,a)=>{
            const n = t < 10 ? "0" + t : "" + t
              , l = a < 10 ? "0" + a : "" + a
              , r = "".concat(e, "T").concat(n, ":").concat(l, ":00+09:00");
            return at()(r).unix()
        }
        ;
        var Un = Object(u.connect)(()=>({
            problemMapFetch: {
                comparison: null,
                value: ()=>me()
            },
            problemModelsFetch: {
                comparison: null,
                value: ()=>oe()
            },
            loginState: {
                url: ft
            }
        }))(e=>{
            const t = Object(n.useState)(e.initialTitle)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , c = Object(n.useState)(e.initialMemo)
              , i = Object(De.a)(c, 2)
              , u = i[0]
              , p = i[1]
              , f = Object(n.useState)(e.initialStartDate)
              , b = Object(De.a)(f, 2)
              , h = b[0]
              , E = b[1]
              , g = Object(n.useState)(e.initialStartHour)
              , v = Object(De.a)(g, 2)
              , y = v[0]
              , _ = v[1]
              , S = Object(n.useState)(e.initialStartMinute)
              , k = Object(De.a)(S, 2)
              , C = k[0]
              , O = k[1]
              , j = Object(n.useState)(e.initialEndDate)
              , I = Object(De.a)(j, 2)
              , x = I[0]
              , F = I[1]
              , w = Object(n.useState)(e.initialEndHour)
              , M = Object(De.a)(w, 2)
              , P = M[0]
              , N = M[1]
              , A = Object(n.useState)(e.initialEndMinute)
              , D = Object(De.a)(A, 2)
              , T = D[0]
              , L = D[1]
              , R = Object(n.useState)(e.initialProblems)
              , B = Object(De.a)(R, 2)
              , U = B[0]
              , H = B[1]
              , G = Object(n.useState)(e.initialMode)
              , q = Object(De.a)(G, 2)
              , z = q[0]
              , J = q[1]
              , W = Object(n.useState)("")
              , Y = Object(De.a)(W, 2)
              , K = Y[0]
              , Z = Y[1]
              , V = Object(n.useState)("")
              , $ = Object(De.a)(V, 2)
              , Q = $[0]
              , X = $[1]
              , ee = Q.length > 0
              , te = K.length > 0 ? K.split(" ") : [];
            if (e.loginState.rejected)
                return l.a.createElement(s.a, {
                    to: "/"
                });
            const ae = e.problemMapFetch
              , ne = e.problemModelsFetch;
            if (!ae.fulfilled || !ne.fulfilled)
                return null;
            const le = ae.value
              , re = ne.value
              , oe = Bn(h, y, C)
              , ce = Bn(x, P, T)
              , se = r.length > 0 && oe <= ce
              , ie = (...e)=>{
                let t = U;
                e.forEach(e=>{
                    U.every(t=>t.id !== e.id) && (t = t.push({
                        id: e.id,
                        point: null,
                        order: null
                    }))
                }
                ),
                H(t)
            }
            ;
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, null, l.a.createElement(Te.a, null, l.a.createElement("h1", null, e.pageTitle))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(on.a, null, "Contest Title"), l.a.createElement(cn.a, {
                type: "text",
                placeholder: "Contest Title",
                value: r,
                onChange: e=>o(e.target.value)
            }))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(on.a, null, "Description"), l.a.createElement(cn.a, {
                type: "text",
                placeholder: "Description",
                value: u,
                onChange: e=>p(e.target.value)
            }))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(on.a, null, "Mode"), l.a.createElement(On.a, null, l.a.createElement(We.a, null, l.a.createElement(qe.a, {
                caret: !0
            }, Dt(z)), l.a.createElement(ze.a, null, l.a.createElement(Je.a, {
                onClick: ()=>J(null)
            }, Dt(null)), l.a.createElement(Je.a, {
                onClick: ()=>J("lockout")
            }, Dt("lockout"))))))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(on.a, null, "Start Time"), l.a.createElement(On.a, null, l.a.createElement(cn.a, {
                type: "date",
                value: h,
                onChange: e=>E(e.target.value)
            }), l.a.createElement(cn.a, {
                type: "select",
                value: y,
                onChange: e=>_(Number(e.target.value))
            }, Object(m.c)(0, 24).map(e=>l.a.createElement("option", {
                key: e
            }, e))), l.a.createElement(cn.a, {
                type: "select",
                value: C,
                onChange: e=>O(Number(e.target.value))
            }, Object(m.c)(0, 60, 5).map(e=>l.a.createElement("option", {
                key: e
            }, e)))))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(on.a, null, "End Time"), l.a.createElement(On.a, null, l.a.createElement(cn.a, {
                type: "date",
                value: x,
                onChange: e=>F(e.target.value)
            }), l.a.createElement(cn.a, {
                type: "select",
                value: P,
                onChange: e=>N(Number(e.target.value))
            }, Object(m.c)(0, 24).map(e=>l.a.createElement("option", {
                key: e
            }, e))), l.a.createElement(cn.a, {
                type: "select",
                value: T,
                onChange: e=>L(Number(e.target.value))
            }, Object(m.c)(0, 60, 5).map(e=>l.a.createElement("option", {
                key: e
            }, e)))))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(on.a, null, "Expected Participants", l.a.createElement(Ka, {
                id: "help-expected-participants"
            }, "This list is used for checking if the problems in the list are already solved by each participant.")), l.a.createElement(cn.a, {
                placeholder: "AtCoder ID list separated by space",
                value: K,
                invalid: ee,
                onChange: e=>{
                    Z(e.target.value)
                }
            }), ee && l.a.createElement(jn.a, null, Q))), l.a.createElement(d.a, null, l.a.createElement(Te.a, null, l.a.createElement(on.a, null, "Problems"))), l.a.createElement(d.a, null, l.a.createElement(Te.a, null, l.a.createElement(Rn, {
                onSolvedProblemsFetchFinished: e=>{
                    X(e || "")
                }
                ,
                problemModelMap: re,
                problemMap: le,
                problemSet: U,
                setProblemSet: H,
                expectedParticipantUserIds: te
            }))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(Mn, {
                problems: le.valueSeq().toArray(),
                selectProblem: ie
            }))), l.a.createElement(d.a, null, l.a.createElement(Te.a, null, l.a.createElement("div", {
                style: {
                    padding: 8,
                    border: "solid 1px lightgray"
                }
            }, l.a.createElement(on.a, null, "Bacha Gacha"), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(Ln, {
                problems: le.valueSeq().toList(),
                problemModels: re,
                selectProblem: ie,
                expectedParticipantUserIds: te,
                addButtonDisabled: ee,
                feedbackForDisabledAddButton: Q && "Please fix expected participants field first"
            })))))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(Re.a, {
                disabled: !se,
                color: se ? "success" : "link",
                onClick: ()=>e.buttonPush({
                    title: r,
                    memo: u,
                    startSecond: oe,
                    endSecond: ce,
                    problems: U,
                    mode: z
                })
            }, e.buttonTitle))))
        }
        );
        var Hn = Object(u.connect)(()=>({
            createContest: (e,t)=>({
                createContestResponse: {
                    url: _t,
                    method: "POST",
                    headers: {
                        "Content-Type": "application/json"
                    },
                    body: JSON.stringify(e),
                    andThen: e=>({
                        updateResponse: {
                            url: kt,
                            method: "POST",
                            headers: {
                                "Content-Type": "application/json"
                            },
                            body: JSON.stringify({
                                contest_id: e.contest_id,
                                problems: t.map((e,t)=>Object(g.a)({}, e, {
                                    order: t
                                }))
                            })
                        }
                    })
                }
            }),
            createContestResponse: {
                value: null
            },
            updateResponse: {
                value: null
            }
        }))(e=>{
            const t = e.createContestResponse.fulfilled ? e.createContestResponse.value : null
              , a = e.updateResponse.fulfilled ? e.updateResponse.value : null;
            if (null !== t && null !== a) {
                const e = t.contest_id;
                return l.a.createElement(s.a, {
                    to: "/contest/show/".concat(e)
                })
            }
            const n = st()
              , r = 5 - n.minutes() % 5
              , o = n.add(r, "minute")
              , c = rt(o)
              , i = o.hour()
              , u = o.minute();
            return l.a.createElement(Un, {
                pageTitle: "Create Contest",
                initialTitle: "",
                initialMemo: "",
                initialStartDate: c,
                initialStartHour: i,
                initialStartMinute: u,
                initialEndDate: c,
                initialEndHour: i,
                initialEndMinute: u,
                initialProblems: Object(m.a)(),
                initialMode: null,
                buttonTitle: "Create Contest",
                buttonPush: ({title: t, memo: a, startSecond: n, endSecond: l, problems: r, mode: o})=>e.createContest({
                    title: t,
                    memo: a,
                    start_epoch_second: n,
                    duration_second: l - n,
                    mode: o
                }, r.toArray())
            })
        }
        )
          , Gn = a(32);
        const qn = e=>{
            const t = "https://kenkoooo.com/atcoder/#/contest/show/".concat(e.id)
              , a = "https://twitter.com/intent/tweet?url=".concat(encodeURIComponent(t), "&text=").concat(encodeURIComponent(e.title), "&hashtags=AtCoderProblems");
            return l.a.createElement(Re.a, {
                href: a,
                rel: "noopener noreferrer",
                target: "_blank",
                color: "primary"
            }, "Tweet")
        }
          , zn = e=>{
            const t = Object(n.useState)(e.remain)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1];
            return Object(n.useEffect)(()=>{
                if (r <= 0)
                    return;
                const e = setInterval(()=>{
                    o(r - 1)
                }
                , 1e3);
                return ()=>clearInterval(e)
            }
            , [r]),
            r <= 0 ? null : l.a.createElement("span", null, it(r))
        }
        ;
        var Jn = a(94)
          , Wn = a.n(Jn)
          , Yn = a(122)
          , Kn = a.n(Yn);
        const Zn = (e,t)=>{
            const a = e.reduce((e,t)=>{
                const a = e.get(t.user_id);
                return a ? (a.push(t),
                e.set(t.user_id, a)) : e.set(t.user_id, [t]),
                e
            }
            , new Map);
            return t.map(e=>{
                const t = a.get(e);
                return t ? {
                    userId: e,
                    bestSubmissionInfo: (e=>{
                        const t = e.sort((e,t)=>e.id - t.id).reduce((e,t)=>e ? e.point < t.point || !B(e.result) && B(t.result) ? t : e : t, void 0);
                        if (!t)
                            return;
                        const a = e.filter(e=>e.id < t.id).length;
                        return {
                            bestSubmission: t,
                            trialsBeforeBest: a
                        }
                    }
                    )(t)
                } : {
                    userId: e
                }
            }
            )
        }
        ;
        var Vn = e=>l.a.createElement(l.a.Fragment, null, l.a.createElement("p", {
            style: {
                textAlign: "center"
            }
        }, l.a.createElement("span", {
            style: {
                color: "limegreen",
                fontWeight: "bold"
            }
        }, e.maxPoint), " ", l.a.createElement("span", {
            style: {
                color: "red"
            }
        }, 0 === e.trials ? "" : "(".concat(e.trials, ")"))), l.a.createElement("p", {
            style: {
                textAlign: "center"
            }
        }, l.a.createElement("span", {
            style: {
                color: "gray"
            }
        }, 0 === e.maxPoint ? "-" : it(e.time))));
        const $n = (e,t,a)=>t.reduce((t,n)=>{
            var l;
            const r = n.id
              , o = n.point
              , c = null === (l = a.find(t=>t.userId === e && t.problemId === r)) || void 0 === l ? void 0 : l.bestSubmissionInfo;
            if (!c || 0 === c.bestSubmission.point)
                return t;
            const s = c.bestSubmission;
            return null === o || B(s.result) ? {
                trialsBeforeBest: t.trialsBeforeBest + c.trialsBeforeBest,
                lastBestSubmissionTime: Math.max(t.lastBestSubmissionTime, s.epoch_second),
                point: t.point + (o || s.point)
            } : t
        }
        , {
            trialsBeforeBest: 0,
            lastBestSubmissionTime: 0,
            point: 0
        });
        function Qn(e, t, a, n, l, r) {
            Wn.a.use(Kn()("atcoder-problems"));
            const o = new Map
              , c = new Map;
            var s = !0
              , i = !1
              , m = void 0;
            try {
                for (var u, d = l[Symbol.iterator](); !(s = (u = d.next()).done); s = !0) {
                    const e = u.value;
                    o.set(e.id, e);
                    const t = r.get(e.id);
                    if (!_(t))
                        return [];
                    if (!S(t))
                        return [];
                    c.set(e.id, t)
                }
            } catch (k) {
                i = !0,
                m = k
            } finally {
                try {
                    s || null == d.return || d.return()
                } finally {
                    if (i)
                        throw m
                }
            }
            const p = []
              , f = [];
            for (let _ = -1025; _ <= 4025; _ += 50) {
                p.push(_);
                let e = 0
                  , t = 0
                  , r = n - a;
                var b = !0
                  , h = !1
                  , E = void 0;
                try {
                    for (var g, v = l[Symbol.iterator](); !(b = (g = v.next()).done); b = !0) {
                        const a = g.value
                          , n = c.get(a.id)
                          , l = n.rawDifficulty > -1e4 ? Zt(n, _) : 1;
                        if (Wn.a.float() >= l)
                            continue;
                        const o = n.slope * _ + n.intercept
                          , s = Wn.a.logNormal(o, Math.sqrt(n.variance))();
                        if (s > r)
                            break;
                        e += a.point ? a.point : 1,
                        t += s,
                        r -= s
                    }
                } catch (k) {
                    h = !0,
                    E = k
                } finally {
                    try {
                        b || null == v.return || v.return()
                    } finally {
                        if (h)
                            throw E
                    }
                }
                console.log(_, e, t),
                f.push({
                    score: e,
                    penalty: t
                })
            }
            const y = function(e) {
                const t = []
                  , a = new Map
                  , n = e.length;
                for (let i = 0; i < n; i++) {
                    let n = 1e4
                      , m = -1e4;
                    for (; Math.round(m) < Math.round(n); ) {
                        const t = (m + n) / 2;
                        if (!a.has(t)) {
                            let n = 0;
                            var l = !0
                              , r = !1
                              , o = void 0;
                            try {
                                for (var c, s = e[Symbol.iterator](); !(l = (c = s.next()).done); l = !0) {
                                    const e = c.value;
                                    n += 1 / (1 + Math.pow(6, (t - e) / 400))
                                }
                            } catch (k) {
                                r = !0,
                                o = k
                            } finally {
                                try {
                                    l || null == s.return || s.return()
                                } finally {
                                    if (r)
                                        throw o
                                }
                            }
                            a.set(t, n)
                        }
                        a.get(t) < i + .5 ? n = t : m = t
                    }
                    t.push(Math.round(m))
                }
                return t
            }(p);
            return e.map(e=>{
                const n = t.filter(t=>t.userId === e).filter(e=>{
                    var t;
                    const a = null === (t = e.bestSubmissionInfo) || void 0 === t ? void 0 : t.bestSubmission.result;
                    return a && B(a)
                }
                ).map(e=>e.bestSubmissionInfo ? {
                    time: e.bestSubmissionInfo.bestSubmission.epoch_second - a,
                    id: e.problemId
                } : void 0).filter(e=>void 0 !== e).sort((e,t)=>e.time - t.time)
                  , l = n.map(e=>{
                    var t;
                    const a = null === (t = o.get(e.id)) || void 0 === t ? void 0 : t.point;
                    return a || 1
                }
                ).reduce((e,t)=>e + t, 0)
                  , r = n.reduce((e,t)=>Math.max(e, t.time), 0)
                  , c = f.map(e=>l > e.score || l === e.score && r < e.penalty ? 0 : 1).reduce((e,t)=>e + t, 0);
                let s;
                return s = 0 === c ? y[0] : c === y.length ? y[y.length - 1] : (y[c - 1] + y[c]) / 2,
                {
                    performance: s,
                    userId: e
                }
            }
            )
        }
        const Xn = e=>void 0 === e.estimatedPerformance ? null : l.a.createElement("p", {
            className: J(e.estimatedPerformance),
            style: {
                textAlign: "center",
                fontWeight: "bold"
            }
        }, G(e.estimatedPerformance));
        function el(e, t) {
            return null !== e.order && null !== t.order ? e.order - t.order : e.id.localeCompare(t.id)
        }
        const tl = Object(u.connect)(e=>({
            submissions: {
                comparison: null,
                value: ()=>ee(e.users, e.problems.map(e=>e.item.id), e.start, e.end),
                refreshInterval: e.enableAutoRefresh ? 6e4 : 1e9,
                force: e.enableAutoRefresh
            },
            problemModels: {
                comparison: null,
                value: ()=>oe()
            }
        }))(e=>{
            const t = e.showProblems
              , a = e.problems
              , n = e.users
              , r = e.start
              , o = e.end
              , c = e.problemModels.fulfilled ? e.problemModels.value : Object(m.b)()
              , s = ((e,t,a)=>a.flatMap(a=>{
                const n = e.get(a);
                return Zn(n || [], t).map(e=>Object(g.a)({
                    problemId: a
                }, e))
            }
            ))(e.submissions.fulfilled ? e.submissions.value.filter(e=>"CE" !== e.result).reduce((e,t)=>{
                var a;
                const n = null !== (a = e.get(t.problem_id)) && void 0 !== a ? a : [];
                return n.push(t),
                e.set(t.problem_id, n),
                e
            }
            , new Map) : new Map, n, a.map(e=>e.item.id))
              , i = ((e,t,a)=>e.map(e=>{
                const n = $n(e, t, a);
                return Object(g.a)({
                    userId: e
                }, n)
            }
            ).sort((e,t)=>e.point === t.point ? e.lastBestSubmissionTime === t.lastBestSubmissionTime ? e.trialsBeforeBest - t.trialsBeforeBest : e.lastBestSubmissionTime - t.lastBestSubmissionTime : t.point - e.point).map(e=>e.userId))(n, a.map(e=>e.item), s)
              , u = e.enableEstimatedPerformances ? Qn(n, s, r, o, a.map(e=>e.item), c) : []
              , d = a.map(e=>Object(g.a)({
                contestId: e.contestId,
                title: e.title
            }, e.item))
              , p = u.length > 0;
            return l.a.createElement(un.a, {
                striped: !0
            }, l.a.createElement("thead", null, l.a.createElement("tr", null, l.a.createElement("th", null, "#"), l.a.createElement("th", null, "Participant"), t ? d.sort(el).map((e,t)=>l.a.createElement("th", {
                key: t
            }, "".concat(t + 1, ". "), e.contestId && e.title ? l.a.createElement(Kt, {
                problemId: e.id,
                contestId: e.contestId,
                problemTitle: e.title
            }) : e.id, null !== e.point ? " (".concat(e.point, ")") : null)) : null, l.a.createElement("th", {
                style: {
                    textAlign: "center"
                }
            }, "Score"), p ? l.a.createElement("th", {
                style: {
                    textAlign: "center"
                }
            }, "Estimated Performance") : null)), l.a.createElement("tbody", null, i.map((e,n)=>{
                var o;
                const c = $n(e, a.map(e=>e.item), s);
                return l.a.createElement("tr", {
                    key: n
                }, l.a.createElement("th", null, n + 1), l.a.createElement("th", null, e), t ? d.sort(el).map(t=>{
                    var a;
                    const n = null === (a = s.find(a=>a.userId === e && a.problemId === t.id)) || void 0 === a ? void 0 : a.bestSubmissionInfo;
                    if (!n)
                        return l.a.createElement("td", {
                            key: t.id,
                            style: {
                                textAlign: "center"
                            }
                        }, "-");
                    const o = n.bestSubmission
                      , c = n.trialsBeforeBest + (B(n.bestSubmission.result) ? 0 : 1)
                      , i = null !== t.point ? B(o.result) ? t.point : 0 : o.point;
                    return l.a.createElement("td", {
                        key: t.id
                    }, l.a.createElement(Vn, {
                        trials: c,
                        maxPoint: i,
                        time: o.epoch_second - r
                    }))
                }
                ) : null, l.a.createElement("td", null, l.a.createElement(Vn, {
                    trials: c.trialsBeforeBest,
                    maxPoint: c.point,
                    time: c.lastBestSubmissionTime - r
                })), p ? l.a.createElement("td", null, l.a.createElement(Xn, {
                    estimatedPerformance: null === (o = u.find(t=>t.userId === e)) || void 0 === o ? void 0 : o.performance
                })) : null)
            }
            )))
        }
        );
        var al = a(502)
          , nl = a(503);
        const ll = ["success", "danger", "warning", "info", "primary"]
          , rl = Object(u.connect)(e=>({
            submissions: {
                comparison: null,
                value: ()=>ee(e.participants, e.problems.map(e=>e.item.id), e.start, e.end),
                refreshInterval: e.enableAutoRefresh ? 6e4 : 1e9,
                force: e.enableAutoRefresh
            }
        }))(e=>{
            const t = e.submissions.fulfilled ? e.submissions.value : [];
            t.sort((e,t)=>e.id - t.id);
            const a = new Map;
            for (let l = 0; l < e.participants.length; l++) {
                const t = ll[l % ll.length];
                a.set(e.participants[l], t)
            }
            const n = new Map
              , r = new Map;
            t.filter(e=>B(e.result)).forEach(t=>{
                if (!n.has(t.problem_id)) {
                    var l, o, c, s, i;
                    const m = null !== (l = null === (o = e.problems.find(e=>e.item.id === t.problem_id)) || void 0 === o || null === (c = o.item) || void 0 === c ? void 0 : c.point) && void 0 !== l ? l : t.point
                      , u = t.user_id
                      , d = t.epoch_second
                      , p = null !== (s = a.get(u)) && void 0 !== s ? s : ll[0];
                    n.set(t.problem_id, {
                        point: m,
                        userId: u,
                        epochSecond: d,
                        color: p
                    }),
                    r.set(u, (null !== (i = r.get(u)) && void 0 !== i ? i : 0) + m)
                }
            }
            );
            const o = Math.min(5, Math.ceil(Math.sqrt(e.problems.length)))
              , c = [];
            for (let l = 0; l < e.problems.length; l += o) {
                const t = [];
                for (let a = l; a < o + l; a++)
                    if (e.problems.length <= a)
                        t.push({
                            problem: void 0,
                            status: void 0
                        });
                    else {
                        const l = e.problems[a]
                          , r = n.get(l.item.id);
                        t.push({
                            problem: l,
                            status: r
                        })
                    }
                c.push(t)
            }
            const s = e.participants.map(e=>{
                var t;
                return {
                    userId: e,
                    point: null !== (t = r.get(e)) && void 0 !== t ? t : 0
                }
            }
            );
            return s.sort((e,t)=>t.point - e.point),
            l.a.createElement(l.a.Fragment, null, l.a.createElement(un.a, null, l.a.createElement("thead", null, l.a.createElement("tr", null, l.a.createElement("th", null, "User"), l.a.createElement("th", null, "Pt"))), l.a.createElement("tbody", null, s.map(({userId: e, point: t})=>l.a.createElement("tr", {
                key: e
            }, l.a.createElement("td", null, e), l.a.createElement("td", null, t))))), c.map((e,t)=>l.a.createElement(d.a, {
                key: t
            }, e.map(({problem: e, status: t},a)=>l.a.createElement(Te.a, {
                key: a
            }, e ? l.a.createElement(sn.a, {
                inverse: !!t,
                color: t ? t.color : void 0
            }, l.a.createElement(al.a, {
                tag: "h3"
            }, e.title && e.contestId ? l.a.createElement(Kt, {
                problemId: e.item.id,
                contestId: e.contestId,
                problemTitle: e.title,
                className: t ? "text-white" : "text-link"
            }) : e.title), l.a.createElement(nl.a, {
                className: "text-center"
            }, t ? l.a.createElement("h3", null, l.a.createElement("p", null, t.userId), l.a.createElement("p", null, "+ ", t.point, " pt")) : l.a.createElement("h3", null, e.item.point ? "".concat(e.item.point, " pt") : null))) : null)))))
        }
        )
          , ol = Object(u.connect)(e=>({
            problemModelGet: {
                comparison: null,
                value: ()=>oe()
            },
            userInfoGet: {
                url: ft
            },
            contestInfoFetch: {
                force: !0,
                url: ht(e.contestId)
            },
            problemMapFetch: {
                comparison: null,
                value: ()=>le()
            },
            joinContest: ()=>({
                joinContestPost: {
                    url: vt,
                    method: "POST",
                    headers: {
                        "Content-Type": "application/json"
                    },
                    body: JSON.stringify({
                        contest_id: e.contestId
                    }),
                    andThen: ()=>({
                        contestInfoFetch: {
                            url: ht(e.contestId),
                            force: !0
                        }
                    })
                }
            }),
            joinContestPost: {
                value: null
            }
        }))(e=>{
            const t = Object(n.useState)(!1)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , i = Object(s.g)()
              , u = e.contestInfoFetch
              , p = e.userInfoGet
              , f = e.problemMapFetch;
            if (u.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            if (u.rejected)
                return l.a.createElement(Ca.a, {
                    color: "danger"
                }, "Failed to fetch contest info.");
            const b = f.fulfilled ? f.value : Object(m.b)()
              , h = u.value
              , E = p.fulfilled && p.value ? p.value.atcoder_user_id : null
              , g = p.fulfilled && p.value ? p.value.internal_user_id : null
              , v = E || ""
              , y = null !== g
              , _ = "" !== v
              , S = h.start_epoch_second
              , k = h.start_epoch_second + h.duration_second
              , C = _ && h.participants.includes(v)
              , O = Math.floor(Date.now() / 1e3)
              , j = !C && _ && O < k
              , I = h.owner_user_id === g
              , x = h.participants.length * h.problems.length <= (O < k ? 100 : 500)
              , F = S < O
              , w = h.problems.map(e=>{
                const t = b.get(e.id);
                return t ? {
                    item: e,
                    contestId: t.contest_id,
                    title: t.title
                } : {
                    item: e
                }
            }
            );
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h1", null, h.title), l.a.createElement("h4", null, h.memo))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, null, l.a.createElement(un.a, null, l.a.createElement("tbody", null, l.a.createElement("tr", null, l.a.createElement("th", null, "Mode"), l.a.createElement("td", null, Dt(h.mode), " ", x ? null : "(Performance estimation is disabled)")), l.a.createElement("tr", null, l.a.createElement("th", null, "Time"), l.a.createElement("td", null, ct(nt(S)), " -", " ", ct(nt(k)), " (", Math.floor(h.duration_second / 60), " minutes)")), S < O && O < k ? l.a.createElement("tr", null, l.a.createElement("th", null, "Remain"), l.a.createElement("td", null, l.a.createElement(zn, {
                remain: k - O
            }))) : null)))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, y ? _ ? null : l.a.createElement(Ca.a, {
                color: "warning"
            }, "Please set the AtCoder ID from", " ", l.a.createElement(c.c, {
                to: "/login/user"
            }, "here"), ", before you join the contest.") : l.a.createElement(Ca.a, {
                color: "warning"
            }, "Please ", l.a.createElement("a", {
                href: Ht
            }, "Login"), " before you join the contest."), l.a.createElement(Le.a, null, j ? l.a.createElement(Re.a, {
                onClick: ()=>e.joinContest()
            }, "Join") : null, I ? l.a.createElement(Re.a, {
                onClick: ()=>i.push({
                    pathname: "/contest/update/".concat(h.id)
                })
            }, "Edit") : null, l.a.createElement(qn, {
                title: h.title,
                id: h.id
            })), " ", l.a.createElement(Re.a, {
                outline: !r,
                active: r,
                onClick: ()=>o(!r)
            }, l.a.createElement(Gn.e, {
                icon: r ? Gn.a : Gn.c
            }), " Auto Refresh", " ", r ? "Enabled" : "Disabled"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, "lockout" === h.mode ? l.a.createElement(rl, {
                showProblems: F,
                problems: w,
                participants: h.participants,
                enableAutoRefresh: r,
                start: S,
                end: k
            }) : l.a.createElement(tl, {
                showProblems: F,
                problems: w,
                users: h.participants,
                enableEstimatedPerformances: x,
                start: S,
                end: k,
                enableAutoRefresh: r
            }))))
        }
        );
        var cl = ()=>{
            const e = Object(s.i)().contestId;
            return e ? l.a.createElement(ol, {
                contestId: e
            }) : l.a.createElement(s.a, {
                to: "/contest/recent"
            })
        }
          , sl = a(507)
          , il = a(508)
          , ml = a(513)
          , ul = a(504)
          , dl = a(505)
          , pl = a(506)
          , fl = Object(u.connect)(()=>({
            myListFetch: Ct,
            createListFetch: {
                value: null
            },
            createNewList: ()=>({
                createListFetch: {
                    url: Ot,
                    method: "POST",
                    body: JSON.stringify({
                        list_name: "New List"
                    })
                }
            }),
            deleteList: e=>({
                deleteResponse: {
                    url: jt,
                    method: "POST",
                    body: JSON.stringify({
                        internal_list_id: e
                    }),
                    andThen: ()=>({
                        myListFetch: {
                            url: Ct,
                            refreshing: !0,
                            force: !0
                        }
                    })
                }
            }),
            deleteResponse: {
                value: null
            }
        }))(e=>{
            const t = e.createListFetch
              , a = e.myListFetch;
            if (t.fulfilled && null !== t.value) {
                const e = t.value.internal_list_id;
                return l.a.createElement(s.a, {
                    to: "/problemlist/".concat(e)
                })
            }
            if (a.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            if (a.rejected || !a.value)
                return l.a.createElement(Ca.a, {
                    color: "danger"
                }, "Failed to fetch list info.");
            const n = a.value;
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(Re.a, {
                color: "success",
                onClick: ()=>e.createNewList()
            }, "Create New List"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(In.a, null, n.map(({internal_list_id: t, internal_list_name: a, items: n})=>l.a.createElement(bl, {
                key: t,
                internalListId: t,
                internalListName: a,
                listItemCount: n.length,
                deleteList: e.deleteList
            }))))))
        }
        );
        const bl = e=>{
            const t = Object(n.useState)(!1)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , s = ()=>o(!r);
            return l.a.createElement(xn.a, null, l.a.createElement(Re.a, {
                style: {
                    float: "right"
                },
                color: "danger",
                onClick: ()=>o(!0)
            }, "Remove"), l.a.createElement(ml.a, {
                isOpen: r,
                toggle: s
            }, l.a.createElement(ul.a, {
                toggle: s
            }, "Remove ", e.internalListName, "?"), l.a.createElement(dl.a, null, "Do you really want to remove ", e.internalListName, "?"), l.a.createElement(pl.a, null, l.a.createElement(Re.a, {
                color: "danger",
                onClick: ()=>{
                    s(),
                    e.deleteList(e.internalListId)
                }
            }, "Remove"), " ", l.a.createElement(Re.a, {
                color: "secondary",
                onClick: s
            }, "Cancel"))), l.a.createElement(Fn.a, null, l.a.createElement(c.b, {
                to: "/problemlist/".concat(e.internalListId)
            }, e.internalListName.length > 0 ? e.internalListName : "(no name)")), l.a.createElement(wn.a, null, l.a.createElement(Ze.a, {
                pill: !0
            }, e.listItemCount)))
        }
          , hl = e=>l.a.createElement(p.BootstrapTable, {
            data: e.contests,
            pagination: !0,
            keyField: "id",
            height: "auto",
            hover: !0,
            striped: !0,
            options: {
                paginationPosition: "top",
                sizePerPage: 10,
                sizePerPageList: [{
                    text: "10",
                    value: 10
                }, {
                    text: "20",
                    value: 20
                }, {
                    text: "50",
                    value: 50
                }, {
                    text: "200",
                    value: 200
                }, {
                    text: "All",
                    value: e.contests.length
                }]
            }
        }, l.a.createElement(p.TableHeaderColumn, {
            dataField: "title",
            dataFormat: (e,t)=>l.a.createElement(c.b, {
                to: "/contest/show/".concat(t.id)
            }, e)
        }, "Title"), l.a.createElement(p.TableHeaderColumn, {
            dataField: "memo"
        }, "Description"), l.a.createElement(p.TableHeaderColumn, {
            dataField: "mode",
            dataFormat: e=>Dt(e)
        }, "Start"), l.a.createElement(p.TableHeaderColumn, {
            dataField: "start_epoch_second",
            dataFormat: (e,t)=>{
                const a = nt(t.start_epoch_second);
                return ct(a)
            }
        }, "Start"), l.a.createElement(p.TableHeaderColumn, {
            dataField: "end_epoch_second",
            dataFormat: (e,t)=>{
                const a = nt(t.start_epoch_second + t.duration_second);
                return ct(a)
            }
        }, "End"), l.a.createElement(p.TableHeaderColumn, {
            dataField: "duration",
            dataFormat: (e,t)=>((e,t)=>{
                const a = Math.floor(Date.now() / 1e3);
                if (e + t <= a || a < e) {
                    const e = Math.floor(t / 60);
                    return "".concat(Math.floor(e / 60)) + ":" + "0".concat(e % 60).slice(-2)
                }
                {
                    const n = t - (a - e);
                    return l.a.createElement(zn, {
                        remain: n
                    })
                }
            }
            )(t.start_epoch_second, t.duration_second)
        }, "Duration"))
          , El = Object(u.connect)(()=>({
            ownedContestsGet: {
                url: Et
            },
            joinedContestsGet: {
                url: yt
            }
        }))(e=>{
            const t = Object(s.g)()
              , a = e.joinedContestsGet.fulfilled ? e.joinedContestsGet.value : []
              , n = e.ownedContestsGet.fulfilled ? e.ownedContestsGet.value : [];
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(Re.a, {
                color: "success",
                onClick: ()=>{
                    t.push({
                        pathname: "/contest/create"
                    })
                }
            }, "Create New Contest"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h2", null, "My Contests"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(hl, {
                contests: n ? n.sort((e,t)=>t.start_epoch_second + t.duration_second - e.start_epoch_second - e.duration_second) : []
            }))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h2", null, "Joined Contests"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(hl, {
                contests: a ? a.sort((e,t)=>t.start_epoch_second + t.duration_second - e.start_epoch_second - e.duration_second) : []
            }))))
        }
        )
          , gl = Object(u.connect)(()=>({
            progressResetList: {
                url: Pt
            },
            problems: {
                comparison: null,
                value: ()=>me().then(e=>e.valueSeq().toArray())
            },
            addResetProgressResponse: {
                value: null
            },
            addResetProgress: e=>({
                addResetProgressResponse: {
                    force: !0,
                    refreshing: !0,
                    url: Nt,
                    method: "POST",
                    body: JSON.stringify({
                        problem_id: e,
                        reset_epoch_second: Math.floor((new Date).getTime() / 1e3)
                    }),
                    andThen: ()=>({
                        progressResetList: {
                            force: !0,
                            url: Pt
                        }
                    })
                }
            }),
            deleteResetProgress: e=>({
                deleteResetProgressResponse: {
                    force: !0,
                    refreshing: !0,
                    url: At,
                    method: "POST",
                    body: JSON.stringify({
                        problem_id: e
                    }),
                    andThen: ()=>({
                        progressResetList: {
                            force: !0,
                            url: Pt
                        }
                    })
                }
            }),
            deleteResetProgressResponse: {
                value: null
            }
        }))(e=>{
            const t = e.progressResetList.fulfilled && e.progressResetList.value ? e.progressResetList.value.items : [];
            t.sort((e,t)=>e.reset_epoch_second - t.reset_epoch_second);
            const a = e.problems.fulfilled ? e.problems.value : [];
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h2", null, "Reset Progress"))), l.a.createElement(d.a, null, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(Mn, {
                problems: a,
                selectProblem: t=>e.addResetProgress(t.id)
            }))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(un.a, null, l.a.createElement("thead", null, l.a.createElement("tr", null, l.a.createElement("th", null, "Problem"), l.a.createElement("th", null, "Reset at"), l.a.createElement("th", null, "Delete"))), l.a.createElement("tbody", null, t.map(t=>{
                const n = a.find(e=>e.id === t.problem_id);
                return l.a.createElement("tr", {
                    key: t.problem_id
                }, l.a.createElement("td", null, n ? l.a.createElement(Kt, {
                    problemId: n.id,
                    contestId: n.contest_id,
                    problemTitle: n.title
                }) : t.problem_id), l.a.createElement("td", null, ot(nt(t.reset_epoch_second))), l.a.createElement("td", null, l.a.createElement(Re.a, {
                    color: "danger",
                    onClick: ()=>e.deleteResetProgress(t.problem_id)
                }, l.a.createElement(Gn.e, {
                    icon: Gn.d
                }))))
            }
            ))))))
        }
        )
          , vl = Object(u.connect)(()=>({
            userInfoGet: {
                url: ft
            },
            updateUserInfo: e=>({
                updateUserInfoResponse: {
                    force: !0,
                    refreshing: !0,
                    url: bt,
                    method: "POST",
                    body: JSON.stringify({
                        atcoder_user_id: e
                    })
                }
            }),
            updateUserInfoResponse: {
                value: null
            }
        }))(e=>{
            const t = e.userInfoGet
              , a = e.updateUserInfoResponse;
            if (t.rejected || a.rejected)
                return l.a.createElement(s.a, {
                    to: "/"
                });
            if (t.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            {
                const r = t.value
                  , o = Object(n.useState)(r && r.atcoder_user_id ? r.atcoder_user_id : "")
                  , c = Object(De.a)(o, 2)
                  , s = c[0]
                  , i = c[1]
                  , m = Object(n.useState)("Account Info")
                  , u = Object(De.a)(m, 2)
                  , p = u[0]
                  , f = u[1]
                  , b = a.refreshing
                  , h = !b && a.fulfilled && null !== a.value;
                return l.a.createElement(l.a.Fragment, null, l.a.createElement(Oa.a, {
                    tabs: !0
                }, l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                    active: "Account Info" === p,
                    onClick: ()=>{
                        f("Account Info")
                    }
                }, "Account Info")), l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                    active: "My Contests" === p,
                    onClick: ()=>{
                        f("My Contests")
                    }
                }, "My Contests")), l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                    active: "Problem Lists" === p,
                    onClick: ()=>{
                        f("Problem Lists")
                    }
                }, "Problem Lists")), l.a.createElement(ja.a, null, l.a.createElement(Ia.a, {
                    active: "Reset Progress" === p,
                    onClick: ()=>{
                        f("Reset Progress")
                    }
                }, "Reset Progress"))), l.a.createElement(sl.a, {
                    activeTab: p
                }, l.a.createElement(il.a, {
                    tabId: "Account Info"
                }, l.a.createElement(d.a, {
                    className: "my-2"
                }, l.a.createElement(Te.a, {
                    sm: "12"
                }, l.a.createElement("h2", null, "Account Info"))), l.a.createElement(d.a, {
                    className: "my-2"
                }, l.a.createElement(Te.a, {
                    sm: "12"
                }, l.a.createElement(on.a, null, "AtCoder User ID"), l.a.createElement(cn.a, {
                    type: "text",
                    placeholder: "AtCoder User ID",
                    value: s,
                    onChange: e=>i(e.target.value)
                }))), l.a.createElement(d.a, {
                    className: "my-2"
                }, l.a.createElement(Te.a, {
                    sm: "12"
                }, l.a.createElement(Re.a, {
                    disabled: b,
                    onClick: ()=>e.updateUserInfo(s)
                }, b ? "Updating..." : "Update"))), l.a.createElement(d.a, {
                    className: "my-2"
                }, l.a.createElement(Te.a, {
                    sm: "12"
                }, l.a.createElement(Ca.a, {
                    color: "success",
                    isOpen: h
                }, "Updated")))), l.a.createElement(il.a, {
                    tabId: "My Contests"
                }, l.a.createElement(El, null)), l.a.createElement(il.a, {
                    tabId: "Problem Lists"
                }, l.a.createElement(fl, null)), l.a.createElement(il.a, {
                    tabId: "Reset Progress"
                }, l.a.createElement(gl, null))))
            }
        }
        )
          , yl = Object(u.connect)(()=>({
            contestListGet: {
                url: St
            },
            userInfoGet: {
                url: ft
            }
        }))(e=>{
            const t = Object(s.g)()
              , a = e.contestListGet.fulfilled ? e.contestListGet.value.sort((e,t)=>t.start_epoch_second - e.start_epoch_second) : []
              , n = Math.floor(Date.now() / 1e3)
              , r = a.filter(e=>e.start_epoch_second > n)
              , o = a.filter(e=>e.start_epoch_second <= n && n < e.start_epoch_second + e.duration_second)
              , c = a.filter(e=>e.start_epoch_second + e.duration_second <= n);
            return l.a.createElement(l.a.Fragment, null, e.userInfoGet.fulfilled && e.userInfoGet.value ? l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(Re.a, {
                color: "success",
                onClick: ()=>{
                    t.push({
                        pathname: "/contest/create"
                    })
                }
            }, "Create New Contest"))) : null, l.a.createElement(d.a, {
                className: "my-2  border-bottom"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h2", null, "Running Contests"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(hl, {
                contests: o.sort((e,t)=>e.start_epoch_second + e.duration_second - (t.start_epoch_second + t.duration_second))
            }))), l.a.createElement(d.a, {
                className: "mt-5 border-bottom"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h2", null, "Upcoming Contests"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(hl, {
                contests: r.sort((e,t)=>e.start_epoch_second - t.start_epoch_second)
            }))), l.a.createElement(d.a, {
                className: "mt-5 border-bottom"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h2", null, "Recent Contests"))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(hl, {
                contests: c.sort((e,t)=>t.start_epoch_second + t.duration_second - (e.start_epoch_second + e.duration_second))
            }))))
        }
        )
          , _l = Object(u.connect)(e=>({
            contestInfoFetch: {
                url: ht(e.contestId)
            },
            updateContest: (t,a)=>({
                updateResponse: {
                    url: gt,
                    method: "POST",
                    headers: {
                        "Content-Type": "application/json"
                    },
                    body: JSON.stringify(t),
                    then: ()=>({
                        url: kt,
                        method: "POST",
                        headers: {
                            "Content-Type": "application/json"
                        },
                        body: JSON.stringify({
                            contest_id: e.contestId,
                            problems: a.map((e,t)=>Object(g.a)({}, e, {
                                order: t
                            }))
                        })
                    })
                }
            }),
            updateResponse: {
                value: null
            }
        }))(e=>{
            const t = e.contestId
              , a = e.contestInfoFetch
              , n = e.updateResponse;
            if (a.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            if (a.rejected || !a.value)
                return l.a.createElement(Ca.a, {
                    color: "danger"
                }, "Failed to fetch contest info.");
            const r = a.value;
            if (n.fulfilled && null !== n.value)
                return l.a.createElement(s.a, {
                    to: "/contest/show/".concat(t)
                });
            const o = nt(r.start_epoch_second)
              , c = nt(r.start_epoch_second + r.duration_second)
              , i = r.problems.sort((e,t)=>null !== e.order && null !== t.order ? e.order - t.order : e.id.localeCompare(t.id));
            return l.a.createElement(Un, {
                pageTitle: "Update Contest",
                initialTitle: r.title,
                initialMemo: r.memo,
                initialStartDate: rt(o),
                initialStartHour: o.hour(),
                initialStartMinute: o.minute(),
                initialEndDate: rt(c),
                initialEndHour: c.hour(),
                initialEndMinute: c.minute(),
                initialProblems: Object(m.a)(i),
                initialMode: r.mode,
                buttonTitle: "Update",
                buttonPush: ({title: a, memo: n, startSecond: l, endSecond: r, problems: o, mode: c})=>{
                    e.updateContest({
                        id: t,
                        title: a,
                        memo: n,
                        start_epoch_second: l,
                        duration_second: r - l,
                        mode: c
                    }, o.toArray())
                }
            })
        }
        );
        var Sl = ()=>{
            const e = Object(s.i)().contestId;
            return e ? l.a.createElement(_l, {
                contestId: e
            }) : l.a.createElement(s.a, {
                to: "/contest/recent"
            })
        }
        ;
        const kl = Object(u.connect)(e=>({
            userInfoFetch: ft,
            problemListFetch: Mt(e.listId),
            updateList: t=>({
                updateListResponse: {
                    url: It,
                    method: "POST",
                    body: JSON.stringify({
                        internal_list_id: e.listId,
                        name: t
                    }),
                    force: !0
                }
            }),
            updateListResponse: {
                value: null
            },
            problems: {
                comparison: null,
                value: ()=>me()
            },
            addItem: t=>({
                problemListFetch: {
                    url: wt,
                    method: "POST",
                    body: JSON.stringify({
                        internal_list_id: e.listId,
                        problem_id: t
                    }),
                    then: ()=>Mt(e.listId)
                }
            }),
            deleteItem: t=>({
                problemListFetch: {
                    url: Ft,
                    method: "POST",
                    body: JSON.stringify({
                        internal_list_id: e.listId,
                        problem_id: t
                    }),
                    then: ()=>Mt(e.listId)
                }
            }),
            updateItem: (t,a)=>({
                problemListFetch: {
                    url: xt,
                    method: "POST",
                    body: JSON.stringify({
                        internal_list_id: e.listId,
                        problem_id: t,
                        memo: a
                    }),
                    then: ()=>Mt(e.listId)
                }
            })
        }))(e=>{
            const t = e.problemListFetch
              , a = e.userInfoFetch
              , r = a.fulfilled && a.value ? a.value.internal_user_id : null;
            if (t.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            if (t.rejected || !t.value)
                return l.a.createElement(Ca.a, {
                    color: "danger"
                }, "Failed to fetch list info.");
            const o = t.value
              , c = o.internal_user_id === r
              , s = Object(n.useState)(!1)
              , i = Object(De.a)(s, 2)
              , m = i[0]
              , u = i[1]
              , p = e.problems.fulfilled ? e.problems.value.valueSeq().toArray() : [];
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement("h2", null, l.a.createElement(Ol, {
                modifiable: c,
                saveText: t=>e.updateList(t),
                initialText: o.internal_list_name
            })))), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, m ? l.a.createElement(Mn, {
                problems: p,
                selectProblem: t=>{
                    e.addItem(t.id)
                }
            }) : c ? l.a.createElement(Re.a, {
                color: "success",
                onClick: ()=>u(!m)
            }, "Add") : null)), l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement(Te.a, {
                sm: "12"
            }, l.a.createElement(In.a, null, o.items.map(t=>{
                const a = p.find(e=>e.id === t.problem_id);
                return l.a.createElement(Cl, {
                    modifiable: c,
                    key: t.problem_id,
                    item: t,
                    problem: a,
                    saveText: a=>e.updateItem(t.problem_id, a),
                    deleteItem: ()=>e.deleteItem(t.problem_id)
                })
            }
            )))))
        }
        )
          , Cl = e=>{
            const t = e.item
              , a = e.problem
              , r = Object(n.useState)(!1)
              , o = Object(De.a)(r, 2)
              , c = o[0]
              , s = o[1]
              , i = Object(n.useState)(t.memo)
              , m = Object(De.a)(i, 2)
              , u = m[0]
              , d = m[1];
            return l.a.createElement(xn.a, {
                onDoubleClick: ()=>{
                    e.modifiable && s(!0)
                }
            }, e.modifiable ? l.a.createElement(Le.a, {
                style: {
                    float: "right"
                }
            }, c ? l.a.createElement(Re.a, {
                color: "success",
                onClick: ()=>{
                    s(!1),
                    e.saveText(u)
                }
            }, "Save") : l.a.createElement(Re.a, {
                onClick: ()=>s(!0)
            }, "Edit"), c ? null : l.a.createElement(Re.a, {
                color: "danger",
                onClick: ()=>e.deleteItem()
            }, "Remove")) : null, l.a.createElement(Fn.a, null, a ? l.a.createElement(zt, {
                href: Bt(a.id, a.contest_id)
            }, a.title) : t.problem_id), l.a.createElement(wn.a, null, c ? l.a.createElement(cn.a, {
                type: "textarea",
                value: u,
                onChange: e=>d(e.target.value),
                onKeyDown: t=>{
                    t.ctrlKey && "Enter" === t.key && (s(!1),
                    e.saveText(u))
                }
            }) : l.a.createElement("pre", null, u)))
        }
          , Ol = e=>{
            const t = Object(n.useState)(e.initialText)
              , a = Object(De.a)(t, 2)
              , r = a[0]
              , o = a[1]
              , c = Object(n.useState)(!1)
              , s = Object(De.a)(c, 2)
              , i = s[0]
              , m = s[1];
            return l.a.createElement(l.a.Fragment, null, i ? l.a.createElement(l.a.Fragment, null, l.a.createElement(cn.a, {
                type: "text",
                value: r,
                onChange: e=>o(e.target.value),
                onBlur: ()=>{
                    m(!i),
                    e.saveText(r)
                }
                ,
                onKeyDown: t=>{
                    "Enter" === t.key && (m(!i),
                    e.saveText(r))
                }
            }), l.a.createElement(Re.a, {
                color: "success",
                onClick: ()=>{
                    m(!i),
                    e.saveText(r)
                }
            }, "Save")) : l.a.createElement(l.a.Fragment, null, l.a.createElement("span", {
                onDoubleClick: ()=>{
                    e.modifiable && m(!i)
                }
            }, r.length > 0 ? r : "(empty)"), " ", l.a.createElement(Re.a, {
                onClick: ()=>{
                    e.modifiable && m(!i)
                }
            }, "Edit Title")))
        }
        ;
        var jl = ()=>{
            const e = Object(s.i)().listId;
            return e ? l.a.createElement(kl, {
                listId: e
            }) : l.a.createElement(s.a, {
                to: "/"
            })
        }
        ;
        const Il = Object(u.connect)(()=>({
            submissions: {
                comparison: null,
                value: ut
            },
            problemModels: {
                comparison: null,
                value: ()=>oe().then(e=>Fa(e))
            },
            problems: {
                comparison: null,
                value: ()=>me().then(e=>e.valueSeq().toArray())
            }
        }))(e=>{
            if (e.submissions.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            if (e.submissions.rejected)
                return l.a.createElement(Ca.a, {
                    color: "danger"
                }, "Failed to fetch contest info.");
            const t = e.submissions.value.sort((e,t)=>t.id - e.id)
              , a = e.problems.fulfilled ? e.problems.value : []
              , n = e.problemModels.fulfilled ? e.problemModels.value : new Map;
            return l.a.createElement(d.a, null, l.a.createElement("h1", null, "Recent Submissions"), l.a.createElement(xa, {
                submissions: t,
                problems: a,
                problemModels: n
            }))
        }
        );
        var xl = a(509)
          , Fl = a(510);
        const wl = e=>{
            const t = e.submissions.filter(e=>B(e.result)).reduce((e,t)=>(e.add(t.problem_id),
            e), new Set)
              , a = Object(s.j)().url;
            return l.a.createElement(i.a, {
                fluid: !0
            }, l.a.createElement(d.a, null, l.a.createElement("h1", null, "Training")), e.courses.map((e,n)=>{
                const r = e.set_list.map(e=>e.problems.length).reduce((e,t)=>e + t, 0)
                  , o = e.set_list.map(e=>e.problems.filter(e=>t.has(e.problem_id)).length).reduce((e,t)=>e + t, 0)
                  , s = (m = o / r,
                Math.round(1e4 * m) / 100);
                var m;
                return l.a.createElement(xl.a, {
                    key: n,
                    fluid: !0
                }, l.a.createElement(i.a, {
                    fluid: !0
                }, l.a.createElement("h3", {
                    className: "display-4"
                }, e.title), l.a.createElement(Fl.a, {
                    striped: !0,
                    color: "success",
                    value: s
                }, s, " %"), l.a.createElement("p", {
                    className: "lead"
                }, e.set_list.length, " sets /", " ", e.set_list.map(e=>e.problems.length).reduce((e,t)=>e + t, 0), " ", "problems"), l.a.createElement("ul", null, e.set_list.map((e,a)=>{
                    const n = e.problems.filter(e=>t.has(e.problem_id)).length;
                    return l.a.createElement("li", {
                        key: a,
                        className: "lead"
                    }, e.title, " ", l.a.createElement(Ze.a, {
                        color: n === e.problems.length ? "success" : "secondary"
                    }, n, " / ", e.problems.length))
                }
                )), l.a.createElement("p", {
                    className: "lead"
                }, l.a.createElement(Re.a, {
                    size: "lg",
                    color: "success",
                    tag: c.b,
                    to: "".concat(a, "/").concat(e.title)
                }, "Challenge"))))
            }
            ))
        }
          , Ml = e=>{
            const t = e.submissions.filter(e=>B(e.result)).reduce((e,t)=>(e.set(t.problem_id, t),
            e), new Map);
            return l.a.createElement(un.a, {
                striped: !0,
                hover: !0
            }, l.a.createElement("thead", null, l.a.createElement("tr", null, l.a.createElement("th", {
                style: {
                    width: "10%",
                    textAlign: "right"
                }
            }, "#"), l.a.createElement("th", {
                style: {
                    width: "10%"
                }
            }, "Status"), l.a.createElement("th", null, "Problem"), l.a.createElement("th", {
                style: {
                    width: "10%"
                }
            }, "Solution"))), l.a.createElement("tbody", null, e.problems.map((e,a)=>{
                const n = t.get(e.id);
                return l.a.createElement("tr", {
                    key: a
                }, l.a.createElement("th", {
                    scope: "row",
                    style: {
                        width: "10%",
                        textAlign: "right"
                    }
                }, a + 1), l.a.createElement("td", {
                    className: "text-success"
                }, n ? l.a.createElement(Gn.e, {
                    icon: Gn.a
                }) : null), l.a.createElement("td", null, l.a.createElement(Kt, {
                    problemId: e.id,
                    problemTitle: e.title,
                    contestId: e.contest_id
                })), l.a.createElement("td", null, n ? l.a.createElement(zt, {
                    href: Rt(n.id, n.contest_id)
                }, l.a.createElement(Gn.e, {
                    icon: Gn.b
                })) : null))
            }
            )))
        }
          , Pl = e=>{
            const t = [{
                value: e.solved,
                color: "#32cd32",
                name: "Accepted"
            }, {
                value: e.total - e.solved,
                color: "#58616a",
                name: "Trying"
            }];
            return l.a.createElement("div", null, l.a.createElement(Ma, {
                data: t
            }), l.a.createElement("h5", null, e.title))
        }
          , Nl = Object(u.connect)(()=>({
            problems: {
                comparison: null,
                value: ()=>me().then(e=>Fa(e))
            }
        }))(e=>{
            var t, a;
            const r = e.course
              , o = Object(n.useState)(r.set_list[0].order)
              , c = Object(De.a)(o, 2)
              , s = c[0]
              , m = c[1]
              , u = r.set_list;
            u.sort((e,t)=>e.order - t.order);
            const p = null !== (t = null === (a = u.find(e=>e.order === s)) || void 0 === a ? void 0 : a.problems) && void 0 !== t ? t : [];
            p.sort((e,t)=>e.order - t.order);
            const f = e.submissions
              , b = f.filter(e=>B(e.result)).reduce((e,t)=>(e.add(t.problem_id),
            e), new Set)
              , h = e.problems.fulfilled ? e.problems.value : void 0
              , E = p.map(e=>null === h || void 0 === h ? void 0 : h.get(e.problem_id)).filter(e=>void 0 !== e);
            return l.a.createElement(i.a, {
                fluid: !0
            }, l.a.createElement(d.a, {
                className: "my-2"
            }, l.a.createElement("h2", null, r.title)), l.a.createElement(d.a, {
                className: "my-2"
            }, u.map((e,t)=>l.a.createElement(Te.a, {
                key: t,
                className: "text-center",
                xs: "6",
                md: 12 / u.length
            }, l.a.createElement(Pl, {
                title: e.title,
                solved: e.problems.filter(e=>b.has(e.problem_id)).length,
                total: e.problems.length
            })))), l.a.createElement(Oa.a, {
                tabs: !0
            }, u.map((e,t)=>l.a.createElement(ja.a, {
                key: t
            }, l.a.createElement(Ia.a, {
                active: s === e.order,
                onClick: ()=>m(e.order)
            }, l.a.createElement("h3", null, e.title))))), l.a.createElement(d.a, null, l.a.createElement(Ml, {
                problems: E,
                submissions: f
            })))
        }
        )
          , Al = e=>e.loading ? l.a.createElement(Ca.a, {
            color: "primary"
        }, "Loading user info...") : e.user ? e.user.atcoder_user_id ? l.a.createElement(Ca.a, {
            color: "success"
        }, "Training as ", e.user.atcoder_user_id) : l.a.createElement(Ca.a, {
            color: "warning"
        }, l.a.createElement(c.b, {
            to: "/login/user"
        }, "Set your AtCoder ID.")) : l.a.createElement(Ca.a, {
            color: "danger"
        }, l.a.createElement("a", {
            href: Ht
        }, "Login"), " to record your progress.")
          , Dl = Object(u.connect)(()=>({
            courses: {
                comparison: null,
                value: ()=>(()=>{
                    return Promise.all([(e = "boot_camp_for_beginners.json",
                    fetch("".concat("/atcoder/static_data/courses", "/").concat(e)).then(e=>e.json()))]);
                    var e
                }
                )()
            },
            progress: {
                comparison: null,
                value: ()=>fetch(ft).then(e=>e.json()).then(e=>e && e.atcoder_user_id ? be(e.atcoder_user_id).then(e=>e.toArray()).then(t=>({
                    user: e,
                    submissions: t
                })) : e ? {
                    user: e,
                    submissions: []
                } : {
                    user: void 0,
                    submissions: []
                })
            }
        }))(e=>{
            const t = Object(s.j)().path;
            if (e.courses.pending)
                return l.a.createElement(ka.a, {
                    style: {
                        width: "3rem",
                        height: "3rem"
                    }
                });
            if (e.courses.rejected)
                return l.a.createElement(Ca.a, {
                    color: "danger"
                }, "Failed to fetch course info.");
            const a = e.progress.fulfilled ? e.progress.value : {
                user: void 0,
                submissions: []
            }
              , n = a.user
              , r = a.submissions
              , o = e.progress.pending
              , c = e.courses.value;
            return l.a.createElement(l.a.Fragment, null, l.a.createElement(Al, {
                user: n,
                loading: o
            }), l.a.createElement(s.d, null, l.a.createElement(s.b, {
                exact: !0,
                path: t
            }, l.a.createElement(wl, {
                submissions: r,
                courses: c
            })), l.a.createElement(s.b, {
                path: "".concat(t, "/:courseTitle"),
                render: ({match: e})=>{
                    const t = e.params.courseTitle
                      , a = c.find(e=>e.title === t);
                    return a ? l.a.createElement(Nl, {
                        submissions: r,
                        course: a
                    }) : null
                }
            })))
        }
        );
        var Tl = ()=>l.a.createElement(c.a, null, l.a.createElement("div", null, l.a.createElement("div", {
            className: "sticky-top"
        }, l.a.createElement(kn, null)), l.a.createElement(i.a, {
            className: "my-5",
            style: {
                width: "100%",
                maxWidth: "90%"
            }
        }, l.a.createElement(s.d, null, l.a.createElement(s.b, {
            exact: !0,
            path: "/ac",
            component: we
        }), l.a.createElement(s.b, {
            exact: !0,
            path: "/fast",
            component: Me
        }), l.a.createElement(s.b, {
            exact: !0,
            path: "/short",
            component: Ne
        }), l.a.createElement(s.b, {
            exact: !0,
            path: "/first",
            component: Pe
        }), l.a.createElement(s.b, {
            exact: !0,
            path: "/sum",
            component: Ae
        }), l.a.createElement(s.b, {
            exact: !0,
            path: "/streak",
            component: Cn
        }), l.a.createElement(s.b, {
            exact: !0,
            path: "/lang",
            component: He
        }), l.a.createElement(s.b, {
            path: "/user/:userIds([a-zA-Z0-9_]+)+",
            render: ({match: e})=>{
                const t = e.params.userIds
                  , a = (null !== t && void 0 !== t ? t : "").split("/")[0];
                return l.a.createElement(an, {
                    userId: a
                })
            }
        }), l.a.createElement(s.b, {
            path: "/table/:userIds([a-zA-Z0-9_]*)*",
            render: ({match: e})=>{
                const t = e.params.userIds
                  , a = (null !== t && void 0 !== t ? t : "").split("/")[0]
                  , n = (null !== t && void 0 !== t ? t : "/").split("/")
                  , r = Object(m.a)(n).skip(1).filter(e=>e.length > 0);
                return l.a.createElement(bn, {
                    userId: a,
                    rivals: r
                })
            }
        }), l.a.createElement(s.b, {
            path: "/list/:userIds([a-zA-Z0-9_]*)*",
            render: ({match: e})=>{
                const t = e.params.userIds
                  , a = (null !== t && void 0 !== t ? t : "").split("/")[0]
                  , n = (null !== t && void 0 !== t ? t : "/").split("/")
                  , r = Object(m.a)(n).skip(1).filter(e=>e.length > 0);
                return l.a.createElement(Sa, {
                    userId: a,
                    rivals: r
                })
            }
        }), l.a.createElement(s.b, {
            path: "/contest/show/:contestId([a-zA-Z0-9_-]+)",
            component: cl
        }), l.a.createElement(s.b, {
            path: "/contest/create",
            component: Hn
        }), l.a.createElement(s.b, {
            path: "/contest/update/:contestId([a-zA-Z0-9_-]+)",
            component: Sl
        }), l.a.createElement(s.b, {
            path: "/contest/recent",
            component: yl
        }), l.a.createElement(s.b, {
            path: "/login/user",
            component: vl
        }), l.a.createElement(s.b, {
            path: "/problemlist/:listId([a-zA-Z0-9_-]+)",
            component: jl
        }), l.a.createElement(s.b, {
            path: "/submissions/recent",
            component: Il
        }), l.a.createElement(s.b, {
            path: "/training",
            component: Dl
        }), l.a.createElement(s.a, {
            path: "/",
            to: "/table/"
        })))));
        o.a.render(l.a.createElement(Tl, null), document.getElementById("root"))
    }
}, [[234, 1, 2]]]);
//# sourceMappingURL=main.79c5931a.chunk.js.map
