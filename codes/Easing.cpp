// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Easing__Func(
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float t,
        int32_t type,
        const MethodInfo *method)
{
  float32x2_t v5; // d7
  float z; // s8
  float y; // v3.s[1]
  float v8; // s9
  float32x2_t v9; // d10
  float32x2_t v10; // d0
  float v11; // s1
  float v12; // s0
  float v13; // s0
  float v14; // s1
  float32x2_t v15; // d0
  float v16; // s1
  float v17; // s0
  float v18; // s2
  float32x2_t v19; // d1
  float v20; // s2
  float32x2_t v21; // d1
  float v22; // s0
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float32x2_t v26; // d1
  float32x2_t v27; // d0
  float v28; // s1
  float32x2_t v29; // d0
  float v30; // s1
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s0
  float32x2_t v35; // d1
  float v36; // s0
  float v37; // s0
  float v38; // s0
  float v39; // s0
  float32x2_t v40; // d1
  float v41; // s0
  float v42; // s1
  float32x2_t v43; // d2
  float v44; // s1
  float v45; // s0
  float v46; // s0
  float v47; // s0
  float32x2_t v48; // d2
  unsigned __int64 v52; // [xsp+0h] [xbp-30h]
  unsigned __int64 v53; // [xsp+0h] [xbp-30h]
  unsigned __int64 v54; // [xsp+0h] [xbp-30h]
  unsigned __int64 v55; // [xsp+0h] [xbp-30h]
  unsigned __int64 v56; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5.n64_u64[0] = *(unsigned __int64 *)&from.fields.x;
  z = from.fields.z;
  y = to.fields.y;
  v8 = to.fields.z - from.fields.z;
  v9.n64_u64[0] = vsub_f32(*(float32x2_t *)&to.fields.x, *(float32x2_t *)&from.fields.x).n64_u64[0];
  switch ( type )
  {
    case 0:
      v10.n64_u64[0] = vmul_n_f32(v9, t).n64_u64[0];
      v11 = v8 * t;
      goto LABEL_37;
    case 1:
      v29.n64_u64[0] = vmul_n_f32(v9, t).n64_u64[0];
      v30 = v8 * t;
      goto LABEL_36;
    case 2:
      v22 = (float)(t + -2.0) * (float)(v8 * t);
      v5.n64_u64[0] = vsub_f32(v5, vmul_n_f32(vmul_n_f32(v9, t), t + -2.0)).n64_u64[0];
      goto LABEL_41;
    case 3:
      v17 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v25 = v8 * 0.5;
        v26.n64_u64[0] = vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        goto LABEL_30;
      }
      v33 = v8 * -0.5;
      v34 = (float)((float)(v17 + -1.0) * (float)((float)(v17 + -1.0) + -2.0)) + -1.0;
      v35.n64_u64[0] = vmul_n_f32(vmul_f32(v9, (float32x2_t)0xBF000000BF000000LL), v34).n64_u64[0];
      goto LABEL_45;
    case 4:
      v15.n64_u64[0] = vmul_n_f32(v9, t).n64_u64[0];
      v16 = v8 * t;
      goto LABEL_35;
    case 5:
      v13 = t + -1.0;
      v14 = v13 * v13;
      goto LABEL_22;
    case 6:
      v17 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v20 = v8 * 0.5;
        v21.n64_u64[0] = vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        goto LABEL_29;
      }
      v41 = v17 + -2.0;
      v42 = v41 * v41;
      goto LABEL_48;
    case 7:
      v27.n64_u64[0] = vmul_n_f32(v9, t).n64_u64[0];
      v28 = v8 * t;
      goto LABEL_34;
    case 8:
      v31 = (float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_39;
    case 9:
      v17 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v18 = v8 * 0.5;
        v19.n64_u64[0] = vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        goto LABEL_12;
      }
      v43.n64_u64[0] = vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v44 = v8 * 0.5;
      v45 = 2.0
          - (float)((float)(v17 + -2.0)
                  * (float)((float)(v17 + -2.0) * (float)((float)(v17 + -2.0) * (float)(v17 + -2.0))));
      goto LABEL_49;
    case 10:
      v28 = (float)(v8 * t) * t;
      v27.n64_u64[0] = vmul_n_f32(vmul_n_f32(v9, t), t).n64_u64[0];
LABEL_34:
      v16 = v28 * t;
      v15.n64_u64[0] = vmul_n_f32(v27, t).n64_u64[0];
LABEL_35:
      v30 = v16 * t;
      v29.n64_u64[0] = vmul_n_f32(v15, t).n64_u64[0];
LABEL_36:
      v10.n64_u64[0] = vmul_n_f32(v29, t).n64_u64[0];
      v11 = v30 * t;
LABEL_37:
      v5.n64_u64[0] = vadd_f32(v5, v10).n64_u64[0];
      z = from.fields.z + v11;
      goto LABEL_55;
    case 11:
      v13 = t + -1.0;
      v14 = v13 * (float)(v13 * (float)(v13 * v13));
LABEL_22:
      v23 = v13 * v14;
      v24 = 1.0;
      goto LABEL_23;
    case 12:
      v17 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v41 = v17 + -2.0;
        v42 = v41 * (float)(v41 * (float)(v41 * v41));
LABEL_48:
        v47 = v41 * v42;
        v44 = v8 * 0.5;
        v43.n64_u64[0] = vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v45 = v47 + 2.0;
LABEL_49:
        v48.n64_u64[0] = vmul_n_f32(v43, v45).n64_u64[0];
        v37 = v44 * v45;
        v5.n64_u64[0] = vadd_f32(v5, v48).n64_u64[0];
      }
      else
      {
        v18 = v17 * (float)(v8 * 0.5);
        v19.n64_u64[0] = vmul_n_f32(vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL), v17).n64_u64[0];
LABEL_12:
        v20 = v17 * v18;
        v21.n64_u64[0] = vmul_n_f32(v19, v17).n64_u64[0];
LABEL_29:
        v25 = v17 * v20;
        v26.n64_u64[0] = vmul_n_f32(v21, v17).n64_u64[0];
LABEL_30:
        v35.n64_u64[0] = vmul_n_f32(vmul_n_f32(v26, v17), v17).n64_u64[0];
        v37 = v17 * (float)(v17 * v25);
LABEL_53:
        v5.n64_u64[0] = vadd_f32(v5, v35).n64_u64[0];
      }
      z = z + v37;
LABEL_55:
      result.fields.z = z;
      LODWORD(result.fields.y) = v5.n64_u32[1];
      LODWORD(result.fields.x) = v5.n64_u32[0];
      return result;
    case 13:
      v55 = *(_QWORD *)&from.fields.x;
      v36 = cosf(t * 1.5708);
      v5.n64_u64[0] = v55;
      v35.n64_u64[0] = vsub_f32(v9, vmul_n_f32(v9, v36)).n64_u64[0];
      v37 = v8 - (float)(v8 * v36);
      goto LABEL_53;
    case 14:
      v52 = *(_QWORD *)&from.fields.x;
      v12 = sinf(t * 1.5708);
      goto LABEL_5;
    case 15:
      v53 = *(_QWORD *)&from.fields.x;
      v8 = v8 * -0.5;
      v9.n64_u64[0] = vmul_f32(v9, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
      v23 = cosf(t * 3.1416);
      v5.n64_u64[0] = v53;
      v24 = -1.0;
LABEL_23:
      v12 = v23 + v24;
      goto LABEL_52;
    case 16:
      v52 = *(_QWORD *)&from.fields.x;
      v12 = exp2f((float)(t + -1.0) * 10.0);
LABEL_5:
      v5.n64_u64[0] = v52;
      goto LABEL_52;
    case 17:
      v54 = *(_QWORD *)&from.fields.x;
      v31 = exp2f(t * -10.0);
      v5.n64_u64[0] = v54;
LABEL_39:
      v12 = 1.0 - v31;
      goto LABEL_52;
    case 18:
      v38 = t + t;
      v56 = v5.n64_u64[0];
      if ( (float)(t + t) >= 1.0 )
      {
        v8 = v8 * 0.5;
        v9.n64_u64[0] = vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v12 = 2.0 - exp2f((float)(v38 + -1.0) * -10.0);
      }
      else
      {
        v9.n64_u64[0] = vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v8 = v8 * 0.5;
        v12 = exp2f((float)(v38 + -1.0) * 10.0);
      }
      v5.n64_u64[0] = v56;
      goto LABEL_52;
    case 19:
      v39 = sqrtf(1.0 - (float)(t * t)) + -1.0;
      v40.n64_u64[0] = vmul_n_f32(v9, v39).n64_u64[0];
      v22 = v8 * v39;
      v5.n64_u64[0] = vsub_f32(v5, v40).n64_u64[0];
LABEL_41:
      z = from.fields.z - v22;
      goto LABEL_55;
    case 20:
      v12 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
LABEL_52:
      v35.n64_u64[0] = vmul_n_f32(v9, v12).n64_u64[0];
      v37 = v8 * v12;
      goto LABEL_53;
    case 21:
      v32 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v46 = sqrtf(1.0 - (float)((float)(v32 + -2.0) * (float)(v32 + -2.0))) + 1.0;
        v35.n64_u64[0] = vmul_n_f32(vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL), v46).n64_u64[0];
        v37 = (float)(v8 * 0.5) * v46;
      }
      else
      {
        v33 = v8 * -0.5;
        v34 = sqrtf(1.0 - (float)(v32 * v32)) + -1.0;
        v35.n64_u64[0] = vmul_n_f32(vmul_f32(v9, (float32x2_t)0xBF000000BF000000LL), v34).n64_u64[0];
LABEL_45:
        v37 = v33 * v34;
      }
      goto LABEL_53;
    default:
      goto LABEL_55;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o Easing__Func_56119096(
        UnityEngine_Color_o from,
        UnityEngine_Color_o to,
        float t,
        int32_t type,
        const MethodInfo *method)
{
  float g; // v4.s[1]
  float v7; // s0
  __int64 v8; // v4.d[1]
  float32x4_t v9; // q4
  float32x4_t v10; // q1
  float v11; // s0
  float v12; // s1
  float32x4_t v13; // q1
  float32x4_t v14; // q1
  float32x4_t v15; // q1
  float32x4_t v16; // q1
  float32x4_t v17; // q0
  float32x4_t v18; // q1
  float v19; // s0
  float32x4_t v20; // q1
  float32x4_t v21; // q1
  float v22; // s0
  float v23; // s1
  float v24; // s0
  float32x4_t v25; // q1
  float v26; // s0
  float32x4_t v27; // q0
  float32x4_t v28; // q1
  float v29; // s0
  float32x4_t v30; // q2
  float v31; // s0
  float v32; // s1
  float32x4_t v33; // q2
  float32x4_t v34; // q2
  float v35; // s0
  float v36; // s1
  float32x4_t v37; // q3
  float v38; // s0
  float32x4_t v39; // q2
  float32x4_t v40; // q2
  float32x4_t v45; // q1
  float32x4_t v46; // [xsp+0h] [xbp-30h]
  float32x4_t v47; // [xsp+0h] [xbp-30h]
  float32x4_t v48; // [xsp+0h] [xbp-30h]
  UnityEngine_Color_o v49; // [xsp+10h] [xbp-20h]
  UnityEngine_Color_o v50; // [xsp+10h] [xbp-20h]
  UnityEngine_Color_o v51; // [xsp+10h] [xbp-20h]
  UnityEngine_Color_o v52; // [xsp+10h] [xbp-20h]
  UnityEngine_Color_o v53; // [xsp+10h] [xbp-20h]
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  g = to.fields.g;
  v7 = t;
  v8 = *(_QWORD *)&to.fields.b;
  v9 = vsubq_f32((float32x4_t)to, (float32x4_t)from);
  switch ( type )
  {
    case 0:
      goto LABEL_35;
    case 1:
      v10 = vmulq_n_f32(v9, t);
      goto LABEL_33;
    case 2:
      v17 = vmulq_n_f32(vmulq_n_f32(v9, t), t + -2.0);
      goto LABEL_37;
    case 3:
      v7 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v20.n128_u64[0] = 0x3F0000003F000000LL;
        v20.n128_u64[1] = 0x3F0000003F000000LL;
        v13 = vmulq_f32(v9, v20);
        goto LABEL_32;
      }
      v36 = -1.0;
      v37.n128_u64[0] = 0xBF000000BF000000LL;
      v37.n128_u64[1] = 0xBF000000BF000000LL;
      v38 = (float)(v7 + -1.0) * (float)((float)(v7 + -1.0) + -2.0);
      v34 = vmulq_f32(v9, v37);
      goto LABEL_44;
    case 4:
      v13 = vmulq_n_f32(v9, t);
      goto LABEL_32;
    case 5:
      v11 = t + -1.0;
      v12 = v11 * v11;
      goto LABEL_21;
    case 6:
      v7 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v28.n128_u64[0] = 0x3F0000003F000000LL;
        v28.n128_u64[1] = 0x3F0000003F000000LL;
        v21 = vmulq_f32(v9, v28);
        goto LABEL_31;
      }
      v31 = v7 + -2.0;
      v32 = v31 * v31;
      goto LABEL_43;
    case 7:
      v21 = vmulq_n_f32(v9, t);
      goto LABEL_31;
    case 8:
      v7 = 1.0
         - (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0))));
      goto LABEL_35;
    case 9:
      v7 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v16.n128_u64[0] = 0x3F0000003F000000LL;
        v16.n128_u64[1] = 0x3F0000003F000000LL;
        v15 = vmulq_f32(v9, v16);
        goto LABEL_30;
      }
      v33.n128_u64[0] = 0x3F0000003F000000LL;
      v33.n128_u64[1] = 0x3F0000003F000000LL;
      v34 = vmulq_f32(v9, v33);
      v35 = 2.0
          - (float)((float)(v7 + -2.0) * (float)((float)(v7 + -2.0) * (float)((float)(v7 + -2.0) * (float)(v7 + -2.0))));
      goto LABEL_45;
    case 10:
      v15 = vmulq_n_f32(v9, t);
      goto LABEL_30;
    case 11:
      v11 = t + -1.0;
      v12 = v11 * (float)(v11 * (float)(v11 * v11));
LABEL_21:
      v7 = (float)(v11 * v12) + 1.0;
      goto LABEL_35;
    case 12:
      v7 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v31 = v7 + -2.0;
        v32 = v31 * (float)(v31 * (float)(v31 * v31));
LABEL_43:
        v40.n128_u64[0] = 0x3F0000003F000000LL;
        v40.n128_u64[1] = 0x3F0000003F000000LL;
        v38 = v31 * v32;
        v36 = 2.0;
        v34 = vmulq_f32(v9, v40);
LABEL_44:
        v35 = v38 + v36;
        goto LABEL_45;
      }
      v14.n128_u64[0] = 0x3F0000003F000000LL;
      v14.n128_u64[1] = 0x3F0000003F000000LL;
      v15 = vmulq_n_f32(vmulq_f32(v9, v14), v7);
LABEL_30:
      v21 = vmulq_n_f32(v15, v7);
LABEL_31:
      v13 = vmulq_n_f32(v21, v7);
LABEL_32:
      v10 = vmulq_n_f32(v13, v7);
      goto LABEL_33;
    case 13:
      v47 = v9;
      v52 = from;
      v26 = cosf(t * 1.5708);
      from = v52;
      v27 = vsubq_f32(v47, vmulq_n_f32(v47, v26));
      goto LABEL_46;
    case 14:
      v46 = v9;
      v49 = from;
      v7 = sinf(t * 1.5708);
      goto LABEL_5;
    case 15:
      v18.n128_u64[0] = 0xBF000000BF000000LL;
      v18.n128_u64[1] = 0xBF000000BF000000LL;
      v46 = vmulq_f32(v9, v18);
      v50 = from;
      v19 = cosf(t * 3.1416);
      from = v50;
      v7 = v19 + -1.0;
      goto LABEL_18;
    case 16:
      v46 = v9;
      v49 = from;
      v7 = exp2f((float)(t + -1.0) * 10.0);
LABEL_5:
      from = v49;
      goto LABEL_18;
    case 17:
      v46 = v9;
      v51 = from;
      v22 = exp2f(t * -10.0);
      from = v51;
      v7 = 1.0 - v22;
LABEL_18:
      v10 = v46;
      goto LABEL_33;
    case 18:
      v29 = t + t;
      v53 = from;
      if ( (float)(t + t) >= 1.0 )
      {
        v45.n128_u64[0] = 0x3F0000003F000000LL;
        v45.n128_u64[1] = 0x3F0000003F000000LL;
        v48 = vmulq_f32(v9, v45);
        v7 = 2.0 - exp2f((float)(v29 + -1.0) * -10.0);
      }
      else
      {
        v30.n128_u64[0] = 0x3F0000003F000000LL;
        v30.n128_u64[1] = 0x3F0000003F000000LL;
        v48 = vmulq_f32(v9, v30);
        v7 = exp2f((float)(v29 + -1.0) * 10.0);
      }
      v10 = v48;
      from = v53;
      goto LABEL_33;
    case 19:
      v17 = vmulq_n_f32(v9, sqrtf(1.0 - (float)(t * t)) + -1.0);
LABEL_37:
      from = (UnityEngine_Color_o)vsubq_f32((float32x4_t)from, v17);
      goto LABEL_47;
    case 20:
      v7 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
LABEL_35:
      v27 = vmulq_n_f32(v9, v7);
      goto LABEL_46;
    case 21:
      v23 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v39.n128_u64[0] = 0x3F0000003F000000LL;
        v39.n128_u64[1] = 0x3F0000003F000000LL;
        v34 = vmulq_f32(v9, v39);
        v35 = sqrtf(1.0 - (float)((float)(v23 + -2.0) * (float)(v23 + -2.0))) + 1.0;
LABEL_45:
        v27 = vmulq_n_f32(v34, v35);
      }
      else
      {
        v24 = 1.0 - (float)(v23 * v23);
        v25.n128_u64[0] = 0xBF000000BF000000LL;
        v25.n128_u64[1] = 0xBF000000BF000000LL;
        v10 = vmulq_f32(v9, v25);
        v7 = sqrtf(v24) + -1.0;
LABEL_33:
        v27 = vmulq_n_f32(v10, v7);
      }
LABEL_46:
      from = (UnityEngine_Color_o)vaddq_f32((float32x4_t)from, v27);
LABEL_47:
      result.fields.g = from.fields.g;
      result.fields.a = from.fields.a;
      result.fields.b = from.fields.b;
      result.fields.r = from.fields.r;
      return result;
    default:
      goto LABEL_47;
  }
}


float Easing__Func_56120036(float from, float to, float t, int32_t type, const MethodInfo *method)
{
  float v5; // s8
  float v6; // s9
  float v7; // s0
  float v8; // s0
  float v9; // s0
  float v10; // s0
  float v11; // s1
  float v12; // s0
  float v13; // s0
  float v14; // s1
  float v15; // s1
  float v16; // s0
  float v17; // s0
  float v18; // s1
  float v19; // s0
  float v20; // s0
  float v21; // s0
  float v22; // s1
  float v23; // s0
  float v24; // s1
  float v26; // s0
  float v27; // s1
  float v28; // s1
  float v29; // s0
  float v30; // s0

  v5 = from;
  v6 = to - from;
  switch ( type )
  {
    case 0:
      v7 = v6 * t;
      return v7 + v5;
    case 1:
      v20 = v6 * t;
      goto LABEL_35;
    case 2:
      v16 = (float)(v6 * t) * (float)(t + -2.0);
      return v5 - v16;
    case 3:
      v13 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v18 = (float)(v6 * 0.5) * v13;
        goto LABEL_29;
      }
      v23 = (float)(v6 * -0.5) * (float)((float)((float)(v13 + -1.0) * (float)((float)(v13 + -1.0) + -2.0)) + -1.0);
      return v5 + v23;
    case 4:
      v12 = v6 * t;
      goto LABEL_34;
    case 5:
      v10 = t + -1.0;
      v11 = v10 * v10;
      goto LABEL_21;
    case 6:
      v13 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v15 = (float)(v6 * 0.5) * v13;
        goto LABEL_28;
      }
      v26 = v13 + -2.0;
      v27 = v26 * v26;
      goto LABEL_50;
    case 7:
      v19 = v6 * t;
      goto LABEL_33;
    case 8:
      v21 = (float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_37;
    case 9:
      v13 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v14 = (float)(v6 * 0.5) * v13;
        goto LABEL_11;
      }
      v28 = v6 * 0.5;
      v29 = 2.0
          - (float)((float)(v13 + -2.0)
                  * (float)((float)(v13 + -2.0) * (float)((float)(v13 + -2.0) * (float)(v13 + -2.0))));
      goto LABEL_51;
    case 10:
      v19 = (float)(v6 * t) * t;
LABEL_33:
      v12 = v19 * t;
LABEL_34:
      v20 = v12 * t;
LABEL_35:
      v7 = v20 * t;
      return v7 + v5;
    case 11:
      v10 = t + -1.0;
      v11 = v10 * (float)(v10 * (float)(v10 * v10));
LABEL_21:
      v9 = (float)(v10 * v11) + 1.0;
      goto LABEL_39;
    case 12:
      v13 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v26 = v13 + -2.0;
        v27 = v26 * (float)(v26 * (float)(v26 * v26));
LABEL_50:
        v30 = v26 * v27;
        v28 = v6 * 0.5;
        v29 = v30 + 2.0;
LABEL_51:
        v7 = v28 * v29;
      }
      else
      {
        v14 = v13 * (float)((float)(v6 * 0.5) * v13);
LABEL_11:
        v15 = v13 * v14;
LABEL_28:
        v18 = v13 * v15;
LABEL_29:
        v7 = v13 * v18;
      }
      return v7 + v5;
    case 13:
      v7 = v6 - (float)(v6 * cosf(t * 1.5708));
      return v7 + v5;
    case 14:
      v9 = sinf(t * 1.5708);
      goto LABEL_39;
    case 15:
      v17 = cosf(t * 3.1416);
      goto LABEL_24;
    case 16:
      v8 = t + -1.0;
      goto LABEL_31;
    case 17:
      v21 = exp2f(t * -10.0);
LABEL_37:
      v24 = 1.0;
      goto LABEL_38;
    case 18:
      v6 = v6 * 0.5;
      v8 = (float)(t + t) + -1.0;
      if ( (float)(t + t) >= 1.0 )
      {
        v21 = exp2f(v8 * -10.0);
        v24 = 2.0;
LABEL_38:
        v9 = v24 - v21;
      }
      else
      {
LABEL_31:
        v9 = exp2f(v8 * 10.0);
      }
      goto LABEL_39;
    case 19:
      v16 = v6 * (float)(sqrtf(1.0 - (float)(t * t)) + -1.0);
      return v5 - v16;
    case 20:
      v9 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
LABEL_39:
      v7 = v6 * v9;
      return v7 + v5;
    case 21:
      v22 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v7 = (float)(v6 * 0.5) * (float)(sqrtf(1.0 - (float)((float)(v22 + -2.0) * (float)(v22 + -2.0))) + 1.0);
        return v7 + v5;
      }
      else
      {
        v17 = sqrtf(1.0 - (float)(v22 * v22));
LABEL_24:
        v23 = (float)(v6 * -0.5) * (float)(v17 + -1.0);
        return v5 + v23;
      }
    default:
      return v5;
  }
}