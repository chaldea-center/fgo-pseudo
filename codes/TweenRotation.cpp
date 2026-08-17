TweenRotation_o *TweenRotation__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Quaternion_o rot,
        const MethodInfo *method)
{
  float w; // s9
  float z; // s10
  float y; // s11
  float x; // s12
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x19
  const MethodInfo *v13; // x2
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  w = rot.fields.w;
  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  if ( (byte_59751F7 & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenRotation___);
    byte_59751F7 = 1;
  }
  v10 = UITweener__Begin_object_(go, duration, (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenRotation___);
  if ( !v10 )
    sub_2213CDC(0, v11);
  v12 = v10;
  value = TweenRotation__get_value((TweenRotation_o *)v10, v11);
  v15 = UnityEngine_Quaternion__Internal_ToEulerRad(value, 0);
  v15.fields.x = v15.fields.x * 57.296;
  v15.fields.y = v15.fields.y * 57.296;
  v15.fields.z = v15.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v18.fields.x = UnityEngine_Quaternion__Internal_MakePositive(v15, 0);
  *(float *)&v12[8].klass = v18.fields.x;
  HIDWORD(v12[8].klass) = LODWORD(v18.fields.y);
  v18.fields.x = x;
  v18.fields.y = y;
  *(float *)&v12[8].monitor = v18.fields.z;
  v18.fields.z = z;
  v18.fields.w = w;
  v16 = UnityEngine_Quaternion__Internal_ToEulerRad(v18, 0);
  v16.fields.x = v16.fields.x * 57.296;
  v16.fields.y = v16.fields.y * 57.296;
  v16.fields.z = v16.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)((char *)&v12[8].monitor + 4) = UnityEngine_Quaternion__Internal_MakePositive(v16, 0);
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v12, 1.0, 1, v13);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0);
  }
  return (TweenRotation_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
void TweenRotation__OnUpdate(TweenRotation_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float32x2_t v6; // d12
  float v7; // s2 OVERLAPPED
  unsigned __int64 v8; // d0 OVERLAPPED
  int v9; // s1
  float x; // s9
  float y; // s10
  float z; // s11
  float v13; // v0.s[1]
  const MethodInfo *v14; // x1
  float v15; // s0
  float v16; // s3
  unsigned __int64 v17; // d0 OVERLAPPED
  float v18; // s2
  int v19; // s1
  UnityEngine_Quaternion_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( this->fields.quaternionLerp )
  {
    v6.n64_u64[0] = vdup_n_s32(0x3C8EFA35u).n64_u64[0];
    v7 = this->fields.from.fields.z * 0.017453;
    v8 = vmul_f32(*(float32x2_t *)&this->fields.from.fields.x, v6).n64_u64[0];
    v9 = HIDWORD(v8);
    v20 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)(&v7 - 2), 0);
    x = v20.fields.x;
    y = v20.fields.y;
    z = v20.fields.z;
    *(float32x2_t *)&v20.fields.x = vmul_f32(*(float32x2_t *)&this->fields.to.fields.x, v6);
    v6.n64_u32[0] = LODWORD(v20.fields.w);
    v20.fields.z = this->fields.to.fields.z * 0.017453;
    v20.fields.y = v13;
    v23 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v20.fields.x, 0);
    v21.fields.x = x;
    v21.fields.y = y;
    v21.fields.z = z;
    LODWORD(v21.fields.w) = v6.n64_u32[0];
    v22 = UnityEngine_Quaternion__Slerp(v21, v23, factor, 0);
  }
  else
  {
    v15 = 1.0;
    if ( factor <= 1.0 )
      v15 = factor;
    if ( factor < 0.0 )
      v15 = 0.0;
    v16 = this->fields.from.fields.z + (float)(v15 * (float)(this->fields.to.fields.z - this->fields.from.fields.z));
    v17 = vmul_f32(
            vadd_f32(
              *(float32x2_t *)&this->fields.from.fields.x,
              vmul_n_f32(
                vsub_f32(*(float32x2_t *)&this->fields.to.fields.x, *(float32x2_t *)&this->fields.from.fields.x),
                v15)),
            vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
    v18 = v16 * 0.017453;
    v19 = HIDWORD(v17);
    v22 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v17, 0);
  }
  TweenRotation__set_value(this, v22, v14);
}


// local variable allocation has failed, the output may be wrong!
void TweenRotation__SetCurrentValueToEnd(TweenRotation_o *this, const MethodInfo *method)
{
  unsigned __int64 v3; // d0 OVERLAPPED
  float v4; // s2
  int v5; // s1
  const MethodInfo *v6; // x1
  UnityEngine_Quaternion_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = vmul_f32(*(float32x2_t *)&this->fields.to.fields.x, vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
  v4 = this->fields.to.fields.z * 0.017453;
  v5 = HIDWORD(v3);
  v7 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v3, 0);
  TweenRotation__set_value(this, v7, v6);
}


// local variable allocation has failed, the output may be wrong!
void TweenRotation__SetCurrentValueToStart(TweenRotation_o *this, const MethodInfo *method)
{
  unsigned __int64 v3; // d0 OVERLAPPED
  float v4; // s2
  int v5; // s1
  const MethodInfo *v6; // x1
  UnityEngine_Quaternion_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = vmul_f32(*(float32x2_t *)&this->fields.from.fields.x, vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
  v4 = this->fields.from.fields.z * 0.017453;
  v5 = HIDWORD(v3);
  v7 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v3, 0);
  TweenRotation__set_value(this, v7, v6);
}


void TweenRotation__SetEndToCurrentValue(TweenRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_o v3; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  value = TweenRotation__get_value(this, method);
  v3 = UnityEngine_Quaternion__Internal_ToEulerRad(value, 0);
  v3.fields.x = v3.fields.x * 57.296;
  v3.fields.y = v3.fields.y * 57.296;
  v3.fields.z = v3.fields.z * 57.296;
  this->fields.to = UnityEngine_Quaternion__Internal_MakePositive(v3, 0);
}


void TweenRotation__SetStartToCurrentValue(TweenRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_o v3; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  value = TweenRotation__get_value(this, method);
  v3 = UnityEngine_Quaternion__Internal_ToEulerRad(value, 0);
  v3.fields.x = v3.fields.x * 57.296;
  v3.fields.y = v3.fields.y * 57.296;
  v3.fields.z = v3.fields.z * 57.296;
  this->fields.from = UnityEngine_Quaternion__Internal_MakePositive(v3, 0);
}


UnityEngine_Transform_o *TweenRotation__get_cachedTransform(TweenRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59751F6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751F6 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mTrans;
}


// attributes: thunk
UnityEngine_Quaternion_o TweenRotation__get_rotation(TweenRotation_o *this, const MethodInfo *method)
{
  return TweenRotation__get_value(this, method);
}


UnityEngine_Quaternion_o TweenRotation__get_value(TweenRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v3; // x1

  cachedTransform = TweenRotation__get_cachedTransform(this, method);
  if ( !cachedTransform )
    sub_2213CDC(0, v3);
  return UnityEngine_Transform__get_localRotation(cachedTransform, 0);
}


// attributes: thunk
void TweenRotation__set_rotation(TweenRotation_o *this, UnityEngine_Quaternion_o value, const MethodInfo *method)
{
  TweenRotation__set_value(this, value, method);
}


void TweenRotation__set_value(TweenRotation_o *this, UnityEngine_Quaternion_o value, const MethodInfo *method)
{
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v8; // x1
  UnityEngine_Quaternion_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  w = value.fields.w;
  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  cachedTransform = TweenRotation__get_cachedTransform(this, method);
  if ( !cachedTransform )
    sub_2213CDC(0, v8);
  v9.fields.z = z;
  v9.fields.w = w;
  v9.fields.x = x;
  v9.fields.y = y;
  UnityEngine_Transform__set_localRotation(cachedTransform, v9, 0);
}