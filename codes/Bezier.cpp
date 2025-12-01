void Bezier___ctor(Bezier_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o Bezier__GetFirstDerivative(
        UnityEngine_Vector3_o p0,
        UnityEngine_Vector3_o p1,
        UnityEngine_Vector3_o p2,
        float t,
        const MethodInfo *method)
{
  float v5; // s7
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5 = (float)(1.0 - t) + (float)(1.0 - t);
  v6 = (float)((float)(p2.fields.x - p1.fields.x) * (float)(t + t)) + (float)((float)(p1.fields.x - p0.fields.x) * v5);
  v7 = (float)((float)(p2.fields.y - p1.fields.y) * (float)(t + t)) + (float)((float)(p1.fields.y - p0.fields.y) * v5);
  v8 = (float)((float)(p2.fields.z - p1.fields.z) * (float)(t + t)) + (float)((float)(p1.fields.z - p0.fields.z) * v5);
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Bezier__GetFirstDerivative_41816816(
        UnityEngine_Vector3_o p0,
        UnityEngine_Vector3_o p1,
        UnityEngine_Vector3_o p2,
        UnityEngine_Vector3_o p3,
        float t,
        const MethodInfo *method)
{
  float v6; // s20
  float v7; // s2
  float v8; // s5
  float v9; // s17
  float v10; // s20
  float v11; // s18
  float v12; // s17
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // [xsp+18h] [xbp+18h]
  float v17; // [xsp+20h] [xbp+20h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v6 = fminf(v17, 1.0);
  v7 = p1.fields.z - p0.fields.z;
  v8 = p2.fields.z - p1.fields.z;
  if ( v17 < 0.0 )
    v9 = 0.0;
  else
    v9 = v6;
  v10 = v9 * (float)(v9 * 3.0);
  v11 = (float)(1.0 - v9) * (float)((float)(1.0 - v9) * 3.0);
  v12 = v9 * (float)((float)(1.0 - v9) * 6.0);
  v13 = (float)((float)(t - p2.fields.x) * v10)
      + (float)((float)((float)(p1.fields.x - p0.fields.x) * v11) + (float)((float)(p2.fields.x - p1.fields.x) * v12));
  v14 = (float)((float)(*(&t + 1) - p2.fields.y) * v10)
      + (float)((float)((float)(p1.fields.y - p0.fields.y) * v11) + (float)((float)(p2.fields.y - p1.fields.y) * v12));
  v15 = (float)((float)(v16 - p2.fields.z) * v10) + (float)((float)(v7 * v11) + (float)(v8 * v12));
  result.fields.z = v15;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Bezier__GetPoint(
        UnityEngine_Vector3_o p0,
        UnityEngine_Vector3_o p1,
        UnityEngine_Vector3_o p2,
        float t,
        const MethodInfo *method)
{
  float y; // v3.s[1]
  float v6; // s4
  float v7; // s17
  float v8; // v0.s[1]
  float32x2_t v9; // d0
  unsigned __int64 v10; // d0
  float v11; // s2
  float v12; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = p1.fields.y;
  v6 = 0.0;
  v7 = fminf(t, 1.0);
  v8 = p0.fields.y;
  if ( t >= 0.0 )
    v6 = v7;
  v9.n64_u64[0] = vadd_f32(
                    *(float32x2_t *)&p0.fields.x,
                    vmul_n_f32(vsub_f32(*(float32x2_t *)&p1.fields.x, *(float32x2_t *)&p0.fields.x), v6)).n64_u64[0];
  v10 = vadd_f32(
          v9,
          vmul_n_f32(
            vsub_f32(
              vadd_f32(
                *(float32x2_t *)&p1.fields.x,
                vmul_n_f32(vsub_f32(*(float32x2_t *)&p2.fields.x, *(float32x2_t *)&p1.fields.x), v6)),
              v9),
            v6)).n64_u64[0];
  v11 = (float)(p0.fields.z + (float)((float)(p1.fields.z - p0.fields.z) * v6))
      + (float)(v6
              * (float)((float)(p1.fields.z + (float)((float)(p2.fields.z - p1.fields.z) * v6))
                      - (float)(p0.fields.z + (float)((float)(p1.fields.z - p0.fields.z) * v6))));
  v12 = *((float *)&v10 + 1);
  result.fields.x = *(float *)&v10;
  result.fields.z = v11;
  result.fields.y = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Bezier__GetPoint_41816552(
        UnityEngine_Vector3_o p0,
        UnityEngine_Vector3_o p1,
        UnityEngine_Vector3_o p2,
        UnityEngine_Vector3_o p3,
        float t,
        const MethodInfo *method)
{
  float v6; // s18
  float v7; // s21
  float v8; // s22
  float v9; // s16
  float v10; // s7
  float v11; // s6
  float v12; // s22
  float v13; // s21
  float v14; // s18
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // [xsp+18h] [xbp+18h]
  float v19; // [xsp+20h] [xbp+20h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v6 = fminf(v19, 1.0);
  if ( v19 < 0.0 )
    v6 = 0.0;
  v7 = 1.0 - v6;
  v8 = v6 * (float)(v6 * v6);
  v9 = t * v8;
  v10 = *(&t + 1) * v8;
  v11 = v18 * v8;
  v12 = v7 * (float)(v7 * v7);
  v13 = v6 * (float)(v7 * (float)(v7 * 3.0));
  v14 = v6 * (float)(v6 * (float)((float)(1.0 - v6) * 3.0));
  v15 = v9 + (float)((float)(p2.fields.x * v14) + (float)((float)(p0.fields.x * v12) + (float)(p1.fields.x * v13)));
  v16 = v10 + (float)((float)(p2.fields.y * v14) + (float)((float)(p0.fields.y * v12) + (float)(p1.fields.y * v13)));
  v17 = v11 + (float)((float)(p2.fields.z * v14) + (float)((float)(p0.fields.z * v12) + (float)(p1.fields.z * v13)));
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}