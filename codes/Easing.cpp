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
  float v26; // s1
  float v27; // s0
  float32x2_t v28; // d1
  float v29; // s2
  float v30; // s2
  float v31; // s0
  float32x2_t v32; // d1
  float v33; // s0
  float v34; // s0
  float v35; // s0
  float v36; // s0
  float v37; // s0
  float v38; // s2
  float v39; // s0
  float v40; // s0
  float32x2_t v41; // d1
  float v42; // s2
  float v43; // s0
  float v44; // s2
  float v45; // s1
  float v46; // s0
  unsigned __int64 v47; // [xsp+0h] [xbp-30h]
  unsigned __int64 v48; // [xsp+0h] [xbp-30h]
  unsigned __int64 v49; // [xsp+0h] [xbp-30h]
  unsigned __int64 v50; // [xsp+0h] [xbp-30h]
  unsigned __int64 v51; // [xsp+0h] [xbp-30h]
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
      goto LABEL_19;
    case 1:
      v12.n64_u64[0] = vmul_n_f32(v8, t).n64_u64[0];
      v13 = v9 * t;
      goto LABEL_18;
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
        goto LABEL_26;
      }
      v40 = (float)((float)(v14 + -1.0) * (float)((float)(v14 + -1.0) + -2.0)) + -1.0;
      v32.n64_u64[0] = vmul_n_f32(vmul_f32(v8, (float32x2_t)0xBF000000BF000000LL), v40).n64_u64[0];
      v33 = (float)(v9 * -0.5) * v40;
      goto LABEL_51;
    case 4:
      v17.n64_u64[0] = vmul_n_f32(v8, t).n64_u64[0];
      v18 = v9 * t;
      goto LABEL_17;
    case 5:
      v19 = t + -1.0;
      v20 = 1.0;
      v21 = v19 * v19;
      goto LABEL_21;
    case 6:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v22.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v23 = v9 * 0.5;
        goto LABEL_25;
      }
      v41.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v42 = v9 * 0.5;
      v43 = (float)((float)(v14 + -2.0) * (float)((float)(v14 + -2.0) * (float)(v14 + -2.0))) + 2.0;
      goto LABEL_46;
    case 7:
      v24.n64_u64[0] = vmul_n_f32(v8, t).n64_u64[0];
      v25 = v9 * t;
      goto LABEL_16;
    case 8:
      v26 = 1.0;
      v27 = (float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_32;
    case 9:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v28.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v29 = v9 * 0.5;
        goto LABEL_24;
      }
      v41.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v42 = v9 * 0.5;
      v43 = 2.0
          - (float)((float)(v14 + -2.0)
                  * (float)((float)(v14 + -2.0) * (float)((float)(v14 + -2.0) * (float)(v14 + -2.0))));
      goto LABEL_46;
    case 10:
      v24.n64_u64[0] = vmul_n_f32(vmul_n_f32(v8, t), t).n64_u64[0];
      v25 = (float)(v9 * t) * t;
LABEL_16:
      v17.n64_u64[0] = vmul_n_f32(v24, t).n64_u64[0];
      v18 = v25 * t;
LABEL_17:
      v12.n64_u64[0] = vmul_n_f32(v17, t).n64_u64[0];
      v13 = v18 * t;
LABEL_18:
      v10.n64_u64[0] = vmul_n_f32(v12, t).n64_u64[0];
      v11 = v13 * t;
LABEL_19:
      v5.n64_u64[0] = vadd_f32(v5, v10).n64_u64[0];
      z = v30 + v11;
      goto LABEL_52;
    case 11:
      v19 = t + -1.0;
      v20 = 1.0;
      v21 = v19 * (float)(v19 * (float)(v19 * v19));
LABEL_21:
      v31 = v19 * v21;
      goto LABEL_41;
    case 12:
      v14 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v41.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v42 = v9 * 0.5;
        v43 = (float)((float)(v14 + -2.0)
                    * (float)((float)(v14 + -2.0)
                            * (float)((float)(v14 + -2.0) * (float)((float)(v14 + -2.0) * (float)(v14 + -2.0)))))
            + 2.0;
LABEL_46:
        v32.n64_u64[0] = vmul_n_f32(v41, v43).n64_u64[0];
        v33 = v42 * v43;
      }
      else
      {
        v28.n64_u64[0] = vmul_n_f32(vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL), v14).n64_u64[0];
        v29 = v14 * (float)(v9 * 0.5);
LABEL_24:
        v22.n64_u64[0] = vmul_n_f32(v28, v14).n64_u64[0];
        v23 = v14 * v29;
LABEL_25:
        v15.n64_u64[0] = vmul_n_f32(v22, v14).n64_u64[0];
        v16 = v14 * v23;
LABEL_26:
        v32.n64_u64[0] = vmul_n_f32(vmul_n_f32(v15, v14), v14).n64_u64[0];
        v33 = v14 * (float)(v14 * v16);
      }
LABEL_51:
      v5.n64_u64[0] = vadd_f32(v5, v32).n64_u64[0];
      z = z + v33;
LABEL_52:
      v44 = z;
      v45 = v5.n64_f32[1];
      v46 = v5.n64_f32[0];
      result.fields.z = v44;
      result.fields.y = v45;
      result.fields.x = v46;
      return result;
    case 13:
      v47 = *(_QWORD *)&from.fields.x;
      v34 = cosf(t * 1.5708);
      v5.n64_u64[0] = v47;
      v32.n64_u64[0] = vsub_f32(v8, vmul_n_f32(v8, v34)).n64_u64[0];
      v33 = v9 - (float)(v9 * v34);
      goto LABEL_51;
    case 14:
      v48 = *(_QWORD *)&from.fields.x;
      v35 = sinf(t * 1.5708);
      goto LABEL_37;
    case 15:
      v8.n64_u64[0] = vmul_f32(v8, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
      v9 = v9 * -0.5;
      v49 = *(_QWORD *)&from.fields.x;
      v31 = cosf(t * 3.1416);
      v5.n64_u64[0] = v49;
      goto LABEL_40;
    case 16:
      v48 = *(_QWORD *)&from.fields.x;
      v35 = exp2f((float)(t + -1.0) * 10.0);
LABEL_37:
      v5.n64_u64[0] = v48;
      goto LABEL_50;
    case 17:
      v50 = *(_QWORD *)&from.fields.x;
      v27 = exp2f(t * -10.0);
      v5.n64_u64[0] = v50;
      v26 = 1.0;
LABEL_32:
      v35 = v26 - v27;
      goto LABEL_50;
    case 18:
      v36 = t + t;
      v51 = v5.n64_u64[0];
      v8.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v9 = v9 * 0.5;
      if ( (float)(t + t) >= 1.0 )
        v35 = 2.0 - exp2f((float)(v36 + -1.0) * -10.0);
      else
        v35 = exp2f((float)(v36 + -1.0) * 10.0);
      v5.n64_u64[0] = v51;
      goto LABEL_50;
    case 19:
      v37 = sqrtf(1.0 - (float)(t * t)) + -1.0;
      v5.n64_u64[0] = vsub_f32(v5, vmul_n_f32(v8, v37)).n64_u64[0];
      z = v38 - (float)(v9 * v37);
      goto LABEL_52;
    case 20:
      v35 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_50;
    case 21:
      v39 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v8.n64_u64[0] = vmul_f32(v8, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v9 = v9 * 0.5;
        v35 = sqrtf(1.0 - (float)((float)(v39 + -2.0) * (float)(v39 + -2.0))) + 1.0;
      }
      else
      {
        v8.n64_u64[0] = vmul_f32(v8, (float32x2_t)0xBF000000BF000000LL).n64_u64[0];
        v31 = sqrtf(1.0 - (float)(v39 * v39));
        v9 = v9 * -0.5;
LABEL_40:
        v20 = -1.0;
LABEL_41:
        v35 = v31 + v20;
      }
LABEL_50:
      v32.n64_u64[0] = vmul_n_f32(v8, v35).n64_u64[0];
      v33 = v9 * v35;
      goto LABEL_51;
    default:
      goto LABEL_52;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall Easing__Func_32658764(
        UnityEngine_Color_o from,
        UnityEngine_Color_o to,
        float t,
        int32_t type,
        const MethodInfo *method)
{
  float v5; // s15
  float b; // s9
  float g; // s10
  float r; // s11
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // s15
  float v15; // s8
  float v16; // s14
  float v17; // s13
  float v18; // s12
  float v19; // s4
  float v20; // s4
  float v21; // s0
  float v22; // s1
  float v23; // s4
  float v24; // s0
  float v25; // s4
  float v26; // s4
  int v27; // s0
  float v31; // s0
  float v32; // s8
  float v33; // s12
  float v34; // s13
  float v35; // s14
  float v36; // s0
  float v37; // s15
  float v38; // s4
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s3
  float v43; // s15
  float v44; // s4
  float a; // [xsp+4h] [xbp-5Ch]
  float v46; // [xsp+8h] [xbp-58h]
  float v47; // [xsp+Ch] [xbp-54h]
  float v48; // [xsp+58h] [xbp-8h]
  float v49; // [xsp+5Ch] [xbp-4h]
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v64; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Color_o v65; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v5 = from.fields.a;
  b = from.fields.b;
  g = from.fields.g;
  r = from.fields.r;
  v63.fields.r = r;
  v63.fields.g = g;
  v63.fields.b = b;
  v63.fields.a = v5;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Subtraction(to, v63, 0LL);
  v49 = v5;
  v14 = t;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  switch ( type )
  {
    case 0:
      goto LABEL_22;
    case 1:
      goto LABEL_21;
    case 2:
      v51 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, -1.0, 0LL);
      *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(v51, t, 0LL);
      v19 = t + -2.0;
      break;
    case 3:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v20 = 0.5;
        goto LABEL_20;
      }
      v60 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, -1.0, 0LL);
      *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(v60, 0.5, 0LL);
      v19 = (float)((float)(v14 + -1.0) * (float)((float)(v14 + -1.0) + -2.0)) + -1.0;
      break;
    case 4:
      goto LABEL_19;
    case 5:
      v21 = t + -1.0;
      v22 = v21 * v21;
      goto LABEL_12;
    case 6:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v23 = 0.5;
        goto LABEL_18;
      }
      v43 = v14 + -2.0;
      *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, 0.5, 0LL);
      v44 = v43 * v43;
      goto LABEL_47;
    case 7:
      goto LABEL_17;
    case 8:
      v24 = (float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_28;
    case 9:
      v14 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v25 = 0.5;
        goto LABEL_16;
      }
      *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, 0.5, 0LL);
      v19 = 2.0
          - (float)((float)(v14 + -2.0)
                  * (float)((float)(v14 + -2.0) * (float)((float)(v14 + -2.0) * (float)(v14 + -2.0))));
      break;
    case 10:
      goto LABEL_15;
    case 11:
      v21 = t + -1.0;
      v22 = v21 * (float)(v21 * (float)(v21 * v21));
LABEL_12:
      v19 = (float)(v21 * v22) + 1.0;
      goto LABEL_34;
    case 12:
      v14 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v43 = v14 + -2.0;
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, 0.5, 0LL);
        v44 = v43 * (float)(v43 * (float)(v43 * v43));
LABEL_47:
        v19 = (float)(v43 * v44) + 2.0;
      }
      else
      {
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, 0.5, 0LL);
LABEL_15:
        v25 = v14;
LABEL_16:
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, v25, 0LL);
LABEL_17:
        v23 = v14;
LABEL_18:
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, v23, 0LL);
LABEL_19:
        v20 = v14;
LABEL_20:
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, v20, 0LL);
LABEL_21:
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, v14, 0LL);
LABEL_22:
        v19 = v14;
      }
      break;
    case 13:
      v52 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, -1.0, 0LL);
      v48 = v52.fields.r;
      v46 = v52.fields.b;
      v47 = v52.fields.g;
      a = v52.fields.a;
      v26 = cosf(t * 1.5708);
      v53.fields.r = v48;
      v53.fields.b = v46;
      v53.fields.g = v47;
      v53.fields.a = a;
      v54 = UnityEngine_Color__op_Multiply_40758648(v53, v26, 0LL);
      v64.fields.r = v15;
      v64.fields.g = v16;
      v64.fields.b = v17;
      v64.fields.a = v18;
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__op_Addition(v54, v64, 0LL);
      goto LABEL_41;
    case 14:
      v31 = sinf(t * 1.5708);
      goto LABEL_33;
    case 15:
      v55 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, -1.0, 0LL);
      v56 = UnityEngine_Color__op_Division(v55, 2.0, 0LL);
      v32 = v56.fields.r;
      v33 = v56.fields.g;
      v34 = v56.fields.b;
      v35 = v56.fields.a;
      v36 = cosf(t * 3.1416);
      goto LABEL_38;
    case 16:
      v31 = exp2f((float)(t + -1.0) * 10.0);
LABEL_33:
      v19 = v31;
      goto LABEL_34;
    case 17:
      v24 = exp2f(t * -10.0);
LABEL_28:
      v19 = 1.0 - v24;
      goto LABEL_34;
    case 18:
      v37 = t + t;
      v57 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, 0.5, 0LL);
      v32 = v57.fields.r;
      v33 = v57.fields.g;
      v34 = v57.fields.b;
      v35 = v57.fields.a;
      if ( (float)(t + t) >= 1.0 )
        v19 = 2.0 - exp2f((float)(v37 + -1.0) * -10.0);
      else
        v19 = exp2f((float)(v37 + -1.0) * 10.0);
      goto LABEL_39;
    case 19:
      v38 = -1.0;
      goto LABEL_37;
    case 20:
      v19 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
LABEL_34:
      v10 = v15;
      v11 = v16;
      v12 = v17;
      v13 = v18;
      break;
    case 21:
      v14 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v61 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, 0.5, 0LL);
        v32 = v61.fields.r;
        v33 = v61.fields.g;
        v34 = v61.fields.b;
        v35 = v61.fields.a;
        v19 = sqrtf(1.0 - (float)((float)(v14 + -2.0) * (float)(v14 + -2.0))) + 1.0;
      }
      else
      {
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, -1.0, 0LL);
        v38 = 0.5;
LABEL_37:
        v58 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, v38, 0LL);
        v32 = v58.fields.r;
        v33 = v58.fields.g;
        v36 = sqrtf(1.0 - (float)(v14 * v14));
        v34 = v58.fields.b;
        v35 = v58.fields.a;
LABEL_38:
        v19 = v36 + -1.0;
      }
LABEL_39:
      v10 = v32;
      v11 = v33;
      v12 = v34;
      v13 = v35;
      break;
    default:
      goto LABEL_42;
  }
  *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__op_Multiply_40758648(*(UnityEngine_Color_o *)&v10, v19, 0LL);
LABEL_41:
  v65.fields.a = v49;
  v65.fields.r = r;
  v65.fields.g = g;
  v65.fields.b = b;
  v59 = UnityEngine_Color__op_Addition(*(UnityEngine_Color_o *)&v27, v65, 0LL);
  r = v59.fields.r;
  g = v59.fields.g;
  b = v59.fields.b;
  v14 = v59.fields.a;
LABEL_42:
  v39 = r;
  v40 = g;
  v41 = b;
  v42 = v14;
  result.fields.a = v42;
  result.fields.b = v41;
  result.fields.g = v40;
  result.fields.r = v39;
  return result;
}


float __fastcall Easing__Func_32660412(float from, float to, float t, int32_t type, const MethodInfo *method)
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
  float v22; // s0
  float v23; // s0
  float v24; // s2
  float v25; // s0
  float v26; // s2
  float v27; // s0
  float v28; // s2
  float v29; // s1

  v5 = from;
  v6 = to - from;
  switch ( type )
  {
    case 0:
      v7 = v6 * t;
      return v7 + v5;
    case 1:
      v8 = v6 * t;
      goto LABEL_18;
    case 2:
      v9 = (float)(v6 * t) * (float)(t + -2.0);
      return v5 - v9;
    case 3:
      v10 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v11 = (float)(v6 * 0.5) * v10;
        goto LABEL_25;
      }
      v7 = (float)(v6 * -0.5) * (float)((float)((float)(v10 + -1.0) * (float)((float)(v10 + -1.0) + -2.0)) + -1.0);
      return v7 + v5;
    case 4:
      v12 = v6 * t;
      goto LABEL_17;
    case 5:
      v13 = t + -1.0;
      v14 = v13 * v13;
      goto LABEL_20;
    case 6:
      v10 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v15 = (float)(v6 * 0.5) * v10;
        goto LABEL_24;
      }
      v25 = v10 + -2.0;
      v29 = v6 * 0.5;
      v26 = v25 * v25;
      goto LABEL_46;
    case 7:
      v16 = v6 * t;
      goto LABEL_16;
    case 8:
      v17 = (float)(t + -1.0) * (float)((float)(t + -1.0) * (float)((float)(t + -1.0) * (float)(t + -1.0)));
      goto LABEL_31;
    case 9:
      v10 = t + t;
      if ( (float)(t + t) < 1.0 )
      {
        v18 = (float)(v6 * 0.5) * v10;
        goto LABEL_23;
      }
      v29 = v6 * 0.5;
      v27 = (float)(v10 + -2.0) * (float)((float)(v10 + -2.0) * (float)((float)(v10 + -2.0) * (float)(v10 + -2.0)));
      v28 = 2.0;
      goto LABEL_48;
    case 10:
      v16 = (float)(v6 * t) * t;
LABEL_16:
      v12 = v16 * t;
LABEL_17:
      v8 = v12 * t;
LABEL_18:
      v7 = v8 * t;
      return v7 + v5;
    case 11:
      v13 = t + -1.0;
      v14 = v13 * (float)(v13 * (float)(v13 * v13));
LABEL_20:
      v19 = (float)(v13 * v14) + 1.0;
      goto LABEL_38;
    case 12:
      v10 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v25 = v10 + -2.0;
        v29 = v6 * 0.5;
        v26 = v25 * (float)(v25 * (float)(v25 * v25));
LABEL_46:
        v20 = v25 * v26;
        v24 = 2.0;
        goto LABEL_47;
      }
      v18 = v10 * (float)((float)(v6 * 0.5) * v10);
LABEL_23:
      v15 = v10 * v18;
LABEL_24:
      v11 = v10 * v15;
LABEL_25:
      v7 = v10 * v11;
      break;
    case 13:
      v7 = v6 - (float)(v6 * cosf(t * 1.5708));
      return v7 + v5;
    case 14:
      v19 = sinf(t * 1.5708);
      goto LABEL_38;
    case 15:
      v20 = cosf(t * 3.1416);
      goto LABEL_41;
    case 16:
      v19 = exp2f((float)(t + -1.0) * 10.0);
      goto LABEL_38;
    case 17:
      v17 = exp2f(t * -10.0);
LABEL_31:
      v19 = 1.0 - v17;
      goto LABEL_38;
    case 18:
      v21 = (float)(t + t) + -1.0;
      if ( (float)(t + t) < 1.0 )
      {
        v22 = exp2f(v21 * 10.0);
        v29 = v6 * 0.5;
      }
      else
      {
        v27 = exp2f(v21 * -10.0);
        v28 = 2.0;
        v29 = v6 * 0.5;
LABEL_48:
        v22 = v28 - v27;
      }
      goto LABEL_50;
    case 19:
      v9 = v6 * (float)(sqrtf(1.0 - (float)(t * t)) + -1.0);
      return v5 - v9;
    case 20:
      v19 = sqrtf(1.0 - (float)((float)(t + -1.0) * (float)(t + -1.0)));
LABEL_38:
      v7 = v6 * v19;
      return v7 + v5;
    case 21:
      v23 = t + t;
      if ( (float)(t + t) >= 1.0 )
      {
        v29 = v6 * 0.5;
        v22 = sqrtf(1.0 - (float)((float)(v23 + -2.0) * (float)(v23 + -2.0))) + 1.0;
      }
      else
      {
        v20 = sqrtf(1.0 - (float)(v23 * v23));
LABEL_41:
        v24 = -1.0;
        v29 = v6 * -0.5;
LABEL_47:
        v22 = v20 + v24;
      }
LABEL_50:
      v7 = v29 * v22;
      break;
    default:
      return v5;
  }
  return v7 + v5;
}