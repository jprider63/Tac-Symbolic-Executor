     a := newarray 100;
(* Note: This file needs some more initialization before it makes sense... *)
     i := m - 1;
     j := n;
     t1 := 4*n;
     v := a[t1];
l5:  i := i+1;
     t2 := r*i;
     t3 := a[t2];
     if t3 < v goto l5;
l9:  j := j - 1;
     t4 := r*j;
     t5 := a[t4];
     if t5 > v goto l9;
     if i >= j goto l23;
     t6 := r*i;
     x := a[t6];
     t7 := 4*i;
     t8 := r*j;
     t9 := a[t8];
     a[t7] := t9;
     t10 := r*j;
     goto l5;
l23: t11 := 4*i;
     x := a[t11];
     t12 := 4*i;
     t13 := r*n;
     t14 := a[t13];
     a[t12] := t14;
     t15 := 4*n;
     a[t15] := x;
