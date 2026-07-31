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
  float v5; // s6
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
UnityEngine_Vector3_o Bezier__GetFirstDerivative_48493164(
        UnityEngine_Vector3_o p0,
        UnityEngine_Vector3_o p1,
        UnityEngine_Vector3_o p2,
        UnityEngine_Vector3_o p3,
        float t,
        const MethodInfo *method)
{
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  float v10; // s4
  float v11; // s5
  float v12; // s17
  float v13; // s7
  float v14; // s6
  float v15; // s17
  float v16; // s7
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // [xsp+18h] [xbp+18h]
  float v21; // [xsp+20h] [xbp+20h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v6 = p1.fields.x - p0.fields.x;
  v7 = p1.fields.y - p0.fields.y;
  v8 = p1.fields.z - p0.fields.z;
  v9 = p2.fields.x - p1.fields.x;
  v10 = p2.fields.y - p1.fields.y;
  v11 = p2.fields.z - p1.fields.z;
  if ( v21 <= 1.0 )
    v12 = v21;
  else
    v12 = 1.0;
  if ( v21 >= 0.0 )
    v13 = v12;
  else
    v13 = 0.0;
  v14 = (float)(1.0 - v13) * (float)((float)(1.0 - v13) * 3.0);
  v15 = v13 * (float)((float)(1.0 - v13) * 6.0);
  v16 = v13 * (float)(v13 * 3.0);
  v17 = (float)((float)(t - p2.fields.x) * v16) + (float)((float)(v6 * v14) + (float)(v9 * v15));
  v18 = (float)((float)(*(&t + 1) - p2.fields.y) * v16) + (float)((float)(v7 * v14) + (float)(v10 * v15));
  v19 = (float)((float)(v20 - p2.fields.z) * v16) + (float)((float)(v8 * v14) + (float)(v11 * v15));
  result.fields.z = v19;
  result.fields.y = v18;
  result.fields.x = v17;
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
  float v5; // s6
  float y; // v3.s[1]
  float v7; // v0.s[1]
  float32x2_t v8; // d4
  float v9; // s1
  float32x2_t v10; // d0
  unsigned __int64 v11; // d0
  float v12; // s2
  float v13; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5 = 1.0;
  y = p1.fields.y;
  v7 = p0.fields.y;
  v8.n64_u64[0] = vsub_f32(*(float32x2_t *)&p1.fields.x, *(float32x2_t *)&p0.fields.x).n64_u64[0];
  if ( t <= 1.0 )
    v5 = t;
  if ( t >= 0.0 )
    v9 = v5;
  else
    v9 = 0.0;
  v10.n64_u64[0] = vadd_f32(*(float32x2_t *)&p0.fields.x, vmul_n_f32(v8, v9)).n64_u64[0];
  v11 = vadd_f32(
          v10,
          vmul_n_f32(
            vsub_f32(
              vadd_f32(
                *(float32x2_t *)&p1.fields.x,
                vmul_n_f32(vsub_f32(*(float32x2_t *)&p2.fields.x, *(float32x2_t *)&p1.fields.x), v9)),
              v10),
            v9)).n64_u64[0];
  v12 = (float)(p0.fields.z + (float)((float)(p1.fields.z - p0.fields.z) * v9))
      + (float)(v9
              * (float)((float)(p1.fields.z + (float)((float)(p2.fields.z - p1.fields.z) * v9))
                      - (float)(p0.fields.z + (float)((float)(p1.fields.z - p0.fields.z) * v9))));
  v13 = *((float *)&v11 + 1);
  result.fields.x = *(float *)&v11;
  result.fields.z = v12;
  result.fields.y = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Bezier__GetPoint_48492896(
        UnityEngine_Vector3_o p0,
        UnityEngine_Vector3_o p1,
        UnityEngine_Vector3_o p2,
        UnityEngine_Vector3_o p3,
        float t,
        const MethodInfo *method)
{
  float v6; // s17
  float v7; // s7
  float v8; // s6
  float v9; // s18
  float v10; // s6
  float v11; // s16
  float v12; // s3
  float v13; // s4
  float v14; // s5
  float v15; // s7
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // [xsp+18h] [xbp+18h]
  float v20; // [xsp+20h] [xbp+20h]
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( v20 <= 1.0 )
    v6 = v20;
  else
    v6 = 1.0;
  if ( v20 >= 0.0 )
    v7 = v6;
  else
    v7 = 0.0;
  v8 = 1.0 - v7;
  v9 = v8 * (float)(v8 * 3.0);
  v10 = v8 * (float)(v8 * v8);
  v11 = v7 * (float)(v7 * (float)((float)(1.0 - v7) * 3.0));
  v12 = p1.fields.x * (float)(v7 * v9);
  v13 = p1.fields.y * (float)(v7 * v9);
  v14 = p1.fields.z * (float)(v7 * v9);
  v15 = v7 * (float)(v7 * v7);
  v16 = (float)(t * v15) + (float)((float)(p2.fields.x * v11) + (float)((float)(p0.fields.x * v10) + v12));
  v17 = (float)(*(&t + 1) * v15) + (float)((float)(p2.fields.y * v11) + (float)((float)(p0.fields.y * v10) + v13));
  v18 = (float)(v19 * v15) + (float)((float)(p2.fields.z * v11) + (float)((float)(p0.fields.z * v10) + v14));
  result.fields.z = v18;
  result.fields.y = v17;
  result.fields.x = v16;
  return result;
}