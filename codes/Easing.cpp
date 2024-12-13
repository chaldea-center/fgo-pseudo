// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall Easing__Func(
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float t,
        int32_t type,
        const MethodInfo *method)
{
  float32x2_t v5; // d7
  float z; // s8
  float y; // v3.s[1]
  float32x2_t v8; // d10
  float v9; // s9
  float32x2_t v10; // d0
  float v11; // s1
  float32x2_t v12; // d0
  float v13; // s1
  float v14; // s0
  float32x2_t v15; // d1
  float v16; // s2
  float32x2_t v17; // d0
  float v18; // s1
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float32x2_t v22; // d1
  float v23; // s2
  float32x2_t v24; // d0
  float v25; // s1
  float32x2_t v26; // d1
  float v27; // s2
  float v28; // s0
  float32x2_t v29; // d1
  float v30; // s0
  float v31; // s0
  float v32; // s0
  float v33; // s0
  float v34; // s0
  float v35; // s1
  float v36; // s1
  float32x2_t v37; // d2
  float v38; // s3
  float v39; // s0
  float v40; // s2
  float v41; // s0
  float v42; // s0
  float v43; // s2
  float32x2_t v44; // d1
  float v45; // s2
  float v46; // s0
  float v47; // s2
  float v48; // s1
  float v49; // s0
  unsigned __int64 v50; // [xsp+0h] [xbp-30h]
  unsigned __int64 v51; // [xsp+0h] [xbp-30h]
  unsigned __int64 v52; // [xsp+0h] [xbp-30h]
  unsigned __int64 v53; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5.n64_u64[0] = *(unsigned __int64 *)&from.fields.x;
  z = from.fields.z;
  y = to.fields.y;
  v8.n64_u64[0] = vsub_f32(*(float32x2_t *)&to.fields.x, *(float32x2_t *)&from.fields.x).n64_u64[0];
  v9 = to.fields.z - from.fields.z;
  switch ( type )
  {
    case 0:
      v10.n64_u64[0] = vmul_n_f32(v8, t).n64_u64[0];
      v11 = v9 * t;
      goto LABEL_35;
    case 1:
      v12.n64_u64[0] = vmul_n_f32(v8, t).n64_u64[0];
      v13 = v9 * t;
      goto LABEL_34;
    case 2:
      v5.n64_u64[0] = vsub_f32(*(float32x2_t *)&from.fields.x, vmul_n_f32(vmul_n_f32(v8, t), t + -2.0)).n64_u64[0];
      z = from.fields.z - (float)((float)(t + -2.0) * (float)(v9 * t));
      goto LABEL_52;
    case 3:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v15.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v16 = v9 * 0.5;
        goto LABEL_20;
      }
      v37.n64_u64[0] = vmul_f32(v8, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
      v38 = v9 * -0.5;
      v39 = (float)((float)(v14 + -1.0) * (float)((float)(v14 + -1.0) + -2.0)) + -1.0;
LABEL_47:
      v29.n64_u64[0] = vmul_n_f32(v37, v39).n64_u64[0];
      v30 = v38 * v39;
      goto LABEL_51;
    case 4:
      v17.n64_u64[0] = vmul_n_f32(v8, t).n64_u64[0];
      v18 = v9 * t;
      goto LABEL_33;
    case 5:
      v19 = t + -1.0;
      v20 = 1.0;
      v21 = v19 * v19;
      goto LABEL_15;
    case 6:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v22.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v23 = v9 * 0.5;
        goto LABEL_19;
      }
      v44.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v45 = v9 * 0.5;
      v46 = (float)((float)(v14 + -2.0) * (float)((float)(v14 + -2.0) * (float)(v14 + -2.0))) + 2.0;
      goto LABEL_45;
    case 7:
      v24.n64_u64[0] = vmul_n_f32(v8, t).n64_u64[0];
      v25 = v9 * t;
      goto LABEL_32;
    case 8:
      v35 = 1.0;
      v34 = (float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_49;
    case 9:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v26.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v27 = v9 * 0.5;
        goto LABEL_18;
      }
      v44.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v45 = v9 * 0.5;
      v46 = 2.0
          - (float)((float)(v14 + -2.0)
                  * (float)((float)(v14 + -2.0) * (float)((float)(v14 + -2.0) * (float)(v14 + -2.0))));
      goto LABEL_45;
    case 10:
      v24.n64_u64[0] = vmul_n_f32(vmul_n_f32(v8, t), t).n64_u64[0];
      v25 = (float)(v9 * t) * t;
LABEL_32:
      v17.n64_u64[0] = vmul_n_f32(v24, t).n64_u64[0];
      v18 = v25 * t;
LABEL_33:
      v12.n64_u64[0] = vmul_n_f32(v17, t).n64_u64[0];
      v13 = v18 * t;
LABEL_34:
      v10.n64_u64[0] = vmul_n_f32(v12, t).n64_u64[0];
      v11 = v13 * t;
LABEL_35:
      v5.n64_u64[0] = vadd_f32(v5, v10).n64_u64[0];
      z = v40 + v11;
      goto LABEL_52;
    case 11:
      v19 = t + -1.0;
      v20 = 1.0;
      v21 = v19 * (float)(v19 * (float)(v19 * v19));
LABEL_15:
      v28 = v19 * v21;
      goto LABEL_24;
    case 12:
      v14 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v44.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v45 = v9 * 0.5;
        v46 = (float)((float)(v14 + -2.0)
                    * (float)((float)(v14 + -2.0)
                            * (float)((float)(v14 + -2.0) * (float)((float)(v14 + -2.0) * (float)(v14 + -2.0)))))
            + 2.0;
LABEL_45:
        v29.n64_u64[0] = vmul_n_f32(v44, v46).n64_u64[0];
        v30 = v45 * v46;
      }
      else
      {
        v26.n64_u64[0] = vmul_n_f32(vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL), v14).n64_u64[0];
        v27 = v14 * (float)(v9 * 0.5);
LABEL_18:
        v22.n64_u64[0] = vmul_n_f32(v26, v14).n64_u64[0];
        v23 = v14 * v27;
LABEL_19:
        v15.n64_u64[0] = vmul_n_f32(v22, v14).n64_u64[0];
        v16 = v14 * v23;
LABEL_20:
        v29.n64_u64[0] = vmul_n_f32(vmul_n_f32(v15, v14), v14).n64_u64[0];
        v30 = v14 * (float)(v14 * v16);
      }
LABEL_51:
      v5.n64_u64[0] = vadd_f32(v5, v29).n64_u64[0];
      z = z + v30;
LABEL_52:
      v47 = z;
      v48 = v5.n64_f32[1];
      v49 = v5.n64_f32[0];
      result.fields.z = v47;
      result.fields.y = v48;
      result.fields.x = v49;
      return result;
    case 13:
      v50 = *(_QWORD *)&from.fields.x;
      v31 = cosf(t * 1.5708);
      v5.n64_u64[0] = v50;
      v29.n64_u64[0] = vsub_f32(v8, vmul_n_f32(v8, v31)).n64_u64[0];
      v30 = v9 - (float)(v9 * v31);
      goto LABEL_51;
    case 14:
      v51 = *(_QWORD *)&from.fields.x;
      v32 = sinf(t * 1.5708);
      goto LABEL_39;
    case 15:
      v8.n64_u64[0] = vmul_f32(v8, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
      v9 = v9 * -0.5;
      v52 = *(_QWORD *)&from.fields.x;
      v28 = cosf(t * 3.1416);
      v5.n64_u64[0] = v52;
      v20 = -1.0;
LABEL_24:
      v32 = v28 + v20;
      goto LABEL_50;
    case 16:
      v33 = (float)(t + -1.0) * 10.0;
      v51 = v5.n64_u64[0];
      goto LABEL_38;
    case 17:
      v53 = *(_QWORD *)&from.fields.x;
      v34 = exp2f(t * -10.0);
      v5.n64_u64[0] = v53;
      v35 = 1.0;
      goto LABEL_49;
    case 18:
      v41 = t + t;
      v51 = v5.n64_u64[0];
      if ( (float)(t + t) >= 1.0 )
      {
        v8.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v9 = v9 * 0.5;
        v34 = exp2f((float)(v41 + -1.0) * -10.0);
        v5.n64_u64[0] = v51;
        v35 = 2.0;
LABEL_49:
        v32 = v35 - v34;
      }
      else
      {
        v8.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v9 = v9 * 0.5;
        v33 = (float)(v41 + -1.0) * 10.0;
LABEL_38:
        v32 = exp2f(v33);
LABEL_39:
        v5.n64_u64[0] = v51;
      }
LABEL_50:
      v29.n64_u64[0] = vmul_n_f32(v8, v32).n64_u64[0];
      v30 = v9 * v32;
      goto LABEL_51;
    case 19:
      v42 = sqrtf(1.0 - (float)(t * t)) + -1.0;
      v5.n64_u64[0] = vsub_f32(v5, vmul_n_f32(v8, v42)).n64_u64[0];
      z = v43 - (float)(v9 * v42);
      goto LABEL_52;
    case 20:
      v32 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_50;
    case 21:
      v36 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v37.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v38 = v9 * 0.5;
        v39 = sqrtf(1.0 - (float)((float)(v36 + -2.0) * (float)(v36 + -2.0))) + 1.0;
      }
      else
      {
        v37.n64_u64[0] = vmul_f32(v8, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
        v38 = v9 * -0.5;
        v39 = sqrtf(1.0 - (float)(v36 * v36)) + -1.0;
      }
      goto LABEL_47;
    default:
      goto LABEL_52;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall Easing__Func_47255400(
        UnityEngine_Color_o from,
        UnityEngine_Color_o to,
        float t,
        int32_t type,
        const MethodInfo *method)
{
  float32x2_t v5; // d16
  float32x2_t v6; // d17
  float v7; // s0
  float g; // v4.s[1]
  float a; // v6.s[1]
  float32x2_t v10; // d9
  float32x2_t v11; // d8
  float32x2_t v12; // d1
  float32x2_t v13; // d2
  float32x2_t v14; // d2
  float v15; // s0
  float32x2_t v16; // d1
  float v17; // s0
  float32x2_t v18; // d2
  float32x2_t v19; // d1
  float32x2_t v20; // d1
  float32x2_t v21; // d2
  float v22; // s0
  float v23; // s2
  float v24; // s1
  float32x2_t v25; // d2
  float32x2_t v26; // d1
  float32x2_t v27; // d1
  float32x2_t v28; // d2
  float32x2_t v29; // d2
  float32x2_t v30; // d1
  float32x2_t v31; // d2
  float32x2_t v32; // d0
  unsigned int v33; // s2
  unsigned int v34; // s3
  float v35; // s0
  float32x2_t v36; // d1
  unsigned int v37; // s2
  unsigned int v38; // s3
  unsigned int v39; // s2
  unsigned int v40; // s3
  float v41; // s0
  float v42; // s0
  float v43; // s0
  unsigned int v44; // s2
  unsigned int v45; // s3
  unsigned int v46; // s2
  unsigned int v47; // s3
  float v48; // s0
  float v49; // s1
  float v50; // s1
  float32x2_t v51; // d4
  float v52; // s0
  unsigned int v53; // s2
  unsigned int v54; // s3
  float32x2_t v55; // d0
  float v56; // s0
  float v57; // s3
  float v58; // s4
  float v59; // s0
  float v60; // s1
  float v61; // s3
  float v62; // s0
  float v63; // s2
  unsigned __int64 v64; // [xsp+0h] [xbp-40h]
  unsigned __int64 v65; // [xsp+0h] [xbp-40h]
  unsigned __int64 v66; // [xsp+0h] [xbp-40h]
  unsigned __int64 v67; // [xsp+0h] [xbp-40h]
  unsigned __int64 v68; // [xsp+10h] [xbp-30h]
  unsigned __int64 v69; // [xsp+10h] [xbp-30h]
  unsigned __int64 v70; // [xsp+10h] [xbp-30h]
  unsigned __int64 v71; // [xsp+10h] [xbp-30h]
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5.n64_u64[0] = *(unsigned __int64 *)&from.fields.b;
  v6.n64_u64[0] = *(unsigned __int64 *)&from.fields.r;
  from.fields.r = t;
  g = to.fields.g;
  a = to.fields.a;
  v10.n64_u64[0] = vsub_f32(*(float32x2_t *)&to.fields.r, v6).n64_u64[0];
  v11.n64_u64[0] = vsub_f32(*(float32x2_t *)&to.fields.b, *(float32x2_t *)&from.fields.b).n64_u64[0];
  switch ( type )
  {
    case 0:
      goto LABEL_50;
    case 1:
      v12.n64_u64[0] = vmul_n_f32(v10, t).n64_u64[0];
      v13.n64_u64[0] = vmul_n_f32(v11, t).n64_u64[0];
      goto LABEL_46;
    case 2:
      v14.n64_u64[0] = vmul_n_f32(v11, t).n64_u64[0];
      v15 = t + -2.0;
      v16.n64_u64[0] = vmul_n_f32(vmul_n_f32(v10, t), t + -2.0).n64_u64[0];
      goto LABEL_40;
    case 3:
      v17 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v18.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v19.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        goto LABEL_19;
      }
      v51.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v14.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v15 = (float)((float)(v17 + -1.0) * (float)((float)(v17 + -1.0) + -2.0)) + -1.0;
      goto LABEL_39;
    case 4:
      v20.n64_u64[0] = vmul_n_f32(v10, t).n64_u64[0];
      v21.n64_u64[0] = vmul_n_f32(v11, t).n64_u64[0];
      goto LABEL_31;
    case 5:
      v22 = t + -1.0;
      v23 = 1.0;
      v24 = v22 * v22;
      goto LABEL_14;
    case 6:
      v17 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v25.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v26.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        goto LABEL_18;
      }
      v56 = v17 + -2.0;
      v57 = 2.0;
      v12.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v13.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v58 = v56 * v56;
      goto LABEL_45;
    case 7:
      v27.n64_u64[0] = vmul_n_f32(v10, t).n64_u64[0];
      v28.n64_u64[0] = vmul_n_f32(v11, t).n64_u64[0];
      goto LABEL_30;
    case 8:
      v7 = 1.0
         - (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0))));
      goto LABEL_50;
    case 9:
      v17 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v29.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v30.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        goto LABEL_17;
      }
      v12.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v13.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v7 = 2.0
         - (float)((float)(v17 + -2.0)
                 * (float)((float)(v17 + -2.0) * (float)((float)(v17 + -2.0) * (float)(v17 + -2.0))));
      goto LABEL_46;
    case 10:
      v27.n64_u64[0] = vmul_n_f32(vmul_n_f32(v10, t), t).n64_u64[0];
      v28.n64_u64[0] = vmul_n_f32(vmul_n_f32(v11, t), t).n64_u64[0];
LABEL_30:
      v20.n64_u64[0] = vmul_n_f32(v27, t).n64_u64[0];
      v21.n64_u64[0] = vmul_n_f32(v28, t).n64_u64[0];
LABEL_31:
      v12.n64_u64[0] = vmul_n_f32(v20, t).n64_u64[0];
      v13.n64_u64[0] = vmul_n_f32(v21, t).n64_u64[0];
      goto LABEL_46;
    case 11:
      v22 = t + -1.0;
      v23 = 1.0;
      v24 = v22 * (float)(v22 * (float)(v22 * v22));
LABEL_14:
      v7 = (float)(v22 * v24) + v23;
      goto LABEL_50;
    case 12:
      v17 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v29.n64_u64[0] = vmul_n_f32(vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL), v17).n64_u64[0];
        v30.n64_u64[0] = vmul_n_f32(vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL), v17).n64_u64[0];
LABEL_17:
        v25.n64_u64[0] = vmul_n_f32(v29, v17).n64_u64[0];
        v26.n64_u64[0] = vmul_n_f32(v30, v17).n64_u64[0];
LABEL_18:
        v18.n64_u64[0] = vmul_n_f32(v25, v17).n64_u64[0];
        v19.n64_u64[0] = vmul_n_f32(v26, v17).n64_u64[0];
LABEL_19:
        v31.n64_u64[0] = vmul_n_f32(vmul_n_f32(v18, v17), v17).n64_u64[0];
        v32.n64_u64[0] = vmul_n_f32(vmul_n_f32(v19, v17), v17).n64_u64[0];
        v6.n64_u64[0] = vadd_f32(v6, v31).n64_u64[0];
        goto LABEL_52;
      }
      v56 = v17 + -2.0;
      v57 = 2.0;
      v12.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v13.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v58 = v56 * (float)(v56 * (float)(v56 * v56));
LABEL_45:
      v7 = (float)(v56 * v58) + v57;
LABEL_46:
      v36.n64_u64[0] = vmul_n_f32(v12, v7).n64_u64[0];
      v32.n64_u64[0] = vmul_n_f32(v13, v7).n64_u64[0];
      goto LABEL_51;
    case 13:
      v64 = v6.n64_u64[0];
      v68 = __PAIR64__(v34, v33);
      v35 = cosf(t * 1.5708);
      v6.n64_u64[0] = v64;
      v5.n64_u64[0] = v68;
      v36.n64_u64[0] = vsub_f32(v10, vmul_n_f32(v10, v35)).n64_u64[0];
      v32.n64_u64[0] = vsub_f32(v11, vmul_n_f32(v11, v35)).n64_u64[0];
      goto LABEL_51;
    case 14:
      v65 = v6.n64_u64[0];
      v69 = __PAIR64__(v38, v37);
      v7 = sinf(t * 1.5708);
      goto LABEL_35;
    case 15:
      v10.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v11.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v66 = v6.n64_u64[0];
      v70 = __PAIR64__(v40, v39);
      v41 = cosf(t * 3.1416);
      v6.n64_u64[0] = v66;
      v5.n64_u64[0] = v70;
      v42 = v41 + -1.0;
      goto LABEL_37;
    case 16:
      v43 = (float)(t + -1.0) * 10.0;
      v65 = v6.n64_u64[0];
      v69 = __PAIR64__(v45, v44);
      goto LABEL_34;
    case 17:
      v67 = v6.n64_u64[0];
      v71 = __PAIR64__(v47, v46);
      v48 = exp2f(t * -10.0);
      v6.n64_u64[0] = v67;
      v5.n64_u64[0] = v71;
      v49 = 1.0;
      goto LABEL_49;
    case 18:
      v52 = t + t;
      v65 = v6.n64_u64[0];
      v69 = __PAIR64__(v54, v53);
      if ( (float)(t + t) >= 1.0 )
      {
        v10.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v11.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v48 = exp2f((float)(v52 + -1.0) * -10.0);
        v6.n64_u64[0] = v65;
        v5.n64_u64[0] = v69;
        v49 = 2.0;
LABEL_49:
        v7 = v49 - v48;
      }
      else
      {
        v10.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v11.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v43 = (float)(v52 + -1.0) * 10.0;
LABEL_34:
        v7 = exp2f(v43);
LABEL_35:
        v6.n64_u64[0] = v65;
        v5.n64_u64[0] = v69;
      }
      goto LABEL_50;
    case 19:
      v42 = sqrtf(1.0 - (float)(t * t)) + -1.0;
LABEL_37:
      v16.n64_u64[0] = vmul_n_f32(v10, v42).n64_u64[0];
      v55.n64_u64[0] = vmul_n_f32(v11, v42).n64_u64[0];
      goto LABEL_41;
    case 20:
      v7 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
LABEL_50:
      v36.n64_u64[0] = vmul_n_f32(v10, v7).n64_u64[0];
      v32.n64_u64[0] = vmul_n_f32(v11, v7).n64_u64[0];
      goto LABEL_51;
    case 21:
      v50 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v59 = sqrtf(1.0 - (float)((float)(v50 + -2.0) * (float)(v50 + -2.0))) + 1.0;
        v36.n64_u64[0] = vmul_n_f32(vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL), v59).n64_u64[0];
        v32.n64_u64[0] = vmul_n_f32(vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL), v59).n64_u64[0];
LABEL_51:
        v6.n64_u64[0] = vadd_f32(v6, v36).n64_u64[0];
LABEL_52:
        v5.n64_u64[0] = vadd_f32(v5, v32).n64_u64[0];
      }
      else
      {
        v51.n64_u64[0] = vmul_f32(v10, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v14.n64_u64[0] = vmul_f32(v11, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v15 = sqrtf(1.0 - (float)(v50 * v50)) + -1.0;
LABEL_39:
        v16.n64_u64[0] = vmul_n_f32(v51, v15).n64_u64[0];
LABEL_40:
        v55.n64_u64[0] = vmul_n_f32(v14, v15).n64_u64[0];
LABEL_41:
        v6.n64_u64[0] = vsub_f32(v6, v16).n64_u64[0];
        v5.n64_u64[0] = vsub_f32(v5, v55).n64_u64[0];
      }
LABEL_53:
      v60 = v6.n64_f32[1];
      v61 = v5.n64_f32[1];
      v62 = v6.n64_f32[0];
      v63 = v5.n64_f32[0];
      result.fields.a = v61;
      result.fields.b = v63;
      result.fields.g = v60;
      result.fields.r = v62;
      return result;
    default:
      goto LABEL_53;
  }
}


float __fastcall Easing__Func_47256512(float from, float to, float t, int32_t type, const MethodInfo *method)
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
  float v17; // s1
  float v18; // s0
  float v19; // s0
  float v20; // s2
  float v21; // s1
  float v22; // s0
  float v23; // s1
  float v24; // s0
  float v25; // s0
  float v26; // s0
  float v27; // s0
  float v28; // s0
  float v29; // s2
  float v30; // s0
  float v31; // s2
  float v32; // s1

  v5 = from;
  v6 = to - from;
  switch ( type )
  {
    case 0:
      v7 = v6 * t;
      return v7 + v5;
    case 1:
      v8 = v6 * t;
      goto LABEL_36;
    case 2:
      v9 = (float)(v6 * t) * (float)(t + -2.0);
      return v5 - v9;
    case 3:
      v10 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v11 = (float)(v6 * 0.5) * v10;
        goto LABEL_20;
      }
      v25 = (float)(v6 * -0.5) * (float)((float)((float)(v10 + -1.0) * (float)((float)(v10 + -1.0) + -2.0)) + -1.0);
      return v5 + v25;
    case 4:
      v12 = v6 * t;
      goto LABEL_35;
    case 5:
      v13 = t + -1.0;
      v14 = v13 * v13;
      goto LABEL_15;
    case 6:
      v10 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v15 = (float)(v6 * 0.5) * v10;
        goto LABEL_19;
      }
      v28 = v10 + -2.0;
      v32 = v6 * 0.5;
      v29 = v28 * v28;
      goto LABEL_47;
    case 7:
      v16 = v6 * t;
      goto LABEL_34;
    case 8:
      v22 = (float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_31;
    case 9:
      v10 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v17 = (float)(v6 * 0.5) * v10;
        goto LABEL_18;
      }
      v32 = v6 * 0.5;
      v30 = (float)(v10 + -2.0) * (float)((float)(v10 + -2.0) * (float)((float)(v10 + -2.0) * (float)(v10 + -2.0)));
      v31 = 2.0;
      goto LABEL_49;
    case 10:
      v16 = (float)(v6 * t) * t;
LABEL_34:
      v12 = v16 * t;
LABEL_35:
      v8 = v12 * t;
LABEL_36:
      v7 = v8 * t;
      return v7 + v5;
    case 11:
      v13 = t + -1.0;
      v14 = v13 * (float)(v13 * (float)(v13 * v13));
LABEL_15:
      v18 = (float)(v13 * v14) + 1.0;
      goto LABEL_32;
    case 12:
      v10 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v28 = v10 + -2.0;
        v32 = v6 * 0.5;
        v29 = v28 * (float)(v28 * (float)(v28 * v28));
LABEL_47:
        v27 = (float)(v28 * v29) + 2.0;
LABEL_50:
        v7 = v32 * v27;
      }
      else
      {
        v17 = v10 * (float)((float)(v6 * 0.5) * v10);
LABEL_18:
        v15 = v10 * v17;
LABEL_19:
        v11 = v10 * v15;
LABEL_20:
        v7 = v10 * v11;
      }
      return v7 + v5;
    case 13:
      v7 = v6 - (float)(v6 * cosf(t * 1.5708));
      return v7 + v5;
    case 14:
      v18 = sinf(t * 1.5708);
      goto LABEL_32;
    case 15:
      v19 = cosf(t * 3.1416);
      v20 = -1.0;
      v21 = v6 * -0.5;
      goto LABEL_29;
    case 16:
      v18 = exp2f((float)(t + -1.0) * 10.0);
      goto LABEL_32;
    case 17:
      v22 = exp2f(t * -10.0);
LABEL_31:
      v18 = 1.0 - v22;
      goto LABEL_32;
    case 18:
      v26 = (float)(t + t) + -1.0;
      if ( (float)(t + t) < 1.0 )
      {
        v27 = exp2f(v26 * 10.0);
        v32 = v6 * 0.5;
      }
      else
      {
        v30 = exp2f(v26 * -10.0);
        v31 = 2.0;
        v32 = v6 * 0.5;
LABEL_49:
        v27 = v31 - v30;
      }
      goto LABEL_50;
    case 19:
      v9 = v6 * (float)(sqrtf(1.0 - (float)(t * t)) + -1.0);
      return v5 - v9;
    case 20:
      v18 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
LABEL_32:
      v7 = v6 * v18;
      return v7 + v5;
    case 21:
      v23 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v7 = (float)(v6 * 0.5) * (float)(sqrtf(1.0 - (float)((float)(v23 + -2.0) * (float)(v23 + -2.0))) + 1.0);
        return v7 + v5;
      }
      else
      {
        v24 = 1.0 - (float)(v23 * v23);
        v21 = v6 * -0.5;
        v19 = sqrtf(v24);
        v20 = -1.0;
LABEL_29:
        v25 = v21 * (float)(v19 + v20);
        return v5 + v25;
      }
    default:
      return v5;
  }
}