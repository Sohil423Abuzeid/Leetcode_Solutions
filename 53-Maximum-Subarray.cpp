class Solution {
public:
\tstruct stree
\t{
\tprivate:
#define L 2*node+1
#define R 2*node+2
#define mid ((l+r)>>1)
typedef int ll;

\t\tint sz = 1;
        int ss ;
\t\tstruct nod {
\t\t\tll ans;
\t\t\tll pre;
\t\t\tll suf;
\t\t\tll sum;
\t\t\tnod() {}
\t\t\tnod(ll a) {
\t\t\t\tans = a;
\t\t\t\tpre =a;
\t\t\t\tsuf = a;
\t\t\t\tsum = a;
\t\t\t}
\t\t};
\t\tvector<nod> seg;
\t\tnod merge(nod& a, nod& b) {
\t\t\tnod ans;
\t\t\tans.sum = a.sum + b.sum;
\t\t\tans.pre = max({ b.pre + a.sum,a.sum + b.sum,a.pre });
\t\t\tans.suf = max({ a.suf + b.sum,a.sum + b.sum,b.suf });
\t\t\tans.ans = max({ a.sum,b.sum,ans.pre,ans.suf,ans.sum,a.ans,b.ans,a.suf + b.pre });
\t\t\treturn ans;
\t\t}
\t\tvoid build(int l, int r, int node, vector<ll>& arr)
\t\t{
\t\t\tif (l == r)
\t\t\t{
\t\t\t\tif (l < arr.size())
\t\t\t\t\tseg[node] = nod(arr[l]);
\t\t\t\telse
\t\t\t\t\tseg[node] = nod(-10000);
\t\t\t\treturn;
\t\t\t}
\t\t\tbuild(l, mid, L, arr);
\t\t\tbuild(mid + 1, r, R, arr);
\t\t\tseg[node] = merge(seg[L], seg[R]);

\t\t}
\t\t
\t\t//ll qurey(int l, int r, int node, ll ql, ll qr) {
\t\t//    if (l > qr || r < ql)return nod(0,0,0,0);
\t\t//    if (l >= ql && r <= qr) { return seg[node]; }
\t\t//    nod a = qurey(l, mid, L, ql, qr);
\t\t//    nod b = qurey(mid + 1, r, R, ql, qr);
\t\t//    return merge(a, b);
\t\t//    //return merge( qurey(l, mid, L, ql, qr), qurey(mid + 1, r, R, ql, qr));
\t\t//}
\tpublic:
\t\tstree(vector<ll>& arr)
\t\t{
\t\t\tsz = 1; while (sz < arr.size())sz *= 2;
\t\t\tseg = vector<nod>(sz * 2);
\t\t\tbuild(0, sz - 1, 0, arr);
\t\t}
\t
\t\tint q() {
\t\t\treturn seg[0].ans ;
\t\t}

#undef L
#undef R
\t};
\tint maxSubArray(vector<int>& nums) {
\t\tstree asd1 = stree(nums);
\t\tint a= asd1.q();
            return a;
\t}
};