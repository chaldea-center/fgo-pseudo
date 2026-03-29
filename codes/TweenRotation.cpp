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
  UnityEngine_Vector3_o v15; // 0:kr10_12.12
  UnityEngine_Vector3_o v16; // 0:kr30_12.12
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  w = rot.fields.w;
  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  if ( (byte_4D352C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UITweener_Begin_TweenRotation___);
    byte_4D352C5 = 1;
  }
  v10 = UITweener__Begin_object_(go, duration, (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenRotation___);
  if ( !v10 )
    sub_1C93D2C(0, v11);
  v12 = v10;
  value = TweenRotation__get_value((TweenRotation_o *)v10, v11);
  v15 = UnityEngine_Quaternion__Internal_ToEulerRad(value, 0);
  v17.fields.x = v15.fields.x * 57.296;
  v17.fields.y = v15.fields.y * 57.296;
  v17.fields.z = v15.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v12[8].klass = UnityEngine_Quaternion__Internal_MakePositive(v17, 0);
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  v19.fields.w = w;
  v16 = UnityEngine_Quaternion__Internal_ToEulerRad(v19, 0);
  v18.fields.x = v16.fields.x * 57.296;
  v18.fields.y = v16.fields.y * 57.296;
  v18.fields.z = v16.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)((char *)&v12[8].monitor + 4) = UnityEngine_Quaternion__Internal_MakePositive(v18, 0);
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v12, 1.0, 1, v13);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0);
  }
  return (TweenRotation_o *)v12;
}


void TweenRotation__OnUpdate(TweenRotation_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float v6; // s0
  const MethodInfo *v7; // x1
  UnityEngine_Vector3_o v8; // 0:kr40_12.12
  UnityEngine_Quaternion_o v9; // 0:kr00_16.16
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v13; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( this->fields.quaternionLerp )
  {
    v10.fields.x = this->fields.from.fields.x * 0.017453;
    v10.fields.y = this->fields.from.fields.y * 0.017453;
    v10.fields.z = this->fields.from.fields.z * 0.017453;
    v9 = UnityEngine_Quaternion__Internal_FromEulerRad(v10, 0);
    v11.fields.x = this->fields.to.fields.x * 0.017453;
    v11.fields.y = this->fields.to.fields.y * 0.017453;
    v11.fields.z = this->fields.to.fields.z * 0.017453;
    v13 = UnityEngine_Quaternion__Internal_FromEulerRad(v11, 0);
    v12 = UnityEngine_Quaternion__Slerp(v9, v13, factor, 0);
  }
  else
  {
    v6 = fminf(factor, 1.0);
    if ( factor < 0.0 )
      v6 = 0.0;
    *(float32x2_t *)&v8.fields.x = vmul_f32(
                                     vadd_f32(
                                       *(float32x2_t *)&this->fields.from.fields.x,
                                       vmul_n_f32(
                                         vsub_f32(
                                           *(float32x2_t *)&this->fields.to.fields.x,
                                           *(float32x2_t *)&this->fields.from.fields.x),
                                         v6)),
                                     vdup_n_s32(0x3C8EFA35u));
    v8.fields.z = (float)(this->fields.from.fields.z
                        + (float)(v6 * (float)(this->fields.to.fields.z - this->fields.from.fields.z)))
                * 0.017453;
    v12 = UnityEngine_Quaternion__Internal_FromEulerRad(v8, 0);
  }
  TweenRotation__set_value(this, v12, v7);
}


void TweenRotation__SetCurrentValueToEnd(TweenRotation_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4.fields.x = this->fields.to.fields.x * 0.017453;
  v4.fields.y = this->fields.to.fields.y * 0.017453;
  v4.fields.z = this->fields.to.fields.z * 0.017453;
  v5 = UnityEngine_Quaternion__Internal_FromEulerRad(v4, 0);
  TweenRotation__set_value(this, v5, v3);
}


void TweenRotation__SetCurrentValueToStart(TweenRotation_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4.fields.x = this->fields.from.fields.x * 0.017453;
  v4.fields.y = this->fields.from.fields.y * 0.017453;
  v4.fields.z = this->fields.from.fields.z * 0.017453;
  v5 = UnityEngine_Quaternion__Internal_FromEulerRad(v4, 0);
  TweenRotation__set_value(this, v5, v3);
}


void TweenRotation__SetEndToCurrentValue(TweenRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_o v3; // 0:kr10_12.12
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  value = TweenRotation__get_value(this, method);
  v3 = UnityEngine_Quaternion__Internal_ToEulerRad(value, 0);
  v4.fields.x = v3.fields.x * 57.296;
  v4.fields.y = v3.fields.y * 57.296;
  v4.fields.z = v3.fields.z * 57.296;
  this->fields.to = UnityEngine_Quaternion__Internal_MakePositive(v4, 0);
}


void TweenRotation__SetStartToCurrentValue(TweenRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_o v3; // 0:kr10_12.12
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  value = TweenRotation__get_value(this, method);
  v3 = UnityEngine_Quaternion__Internal_ToEulerRad(value, 0);
  v4.fields.x = v3.fields.x * 57.296;
  v4.fields.y = v3.fields.y * 57.296;
  v4.fields.z = v3.fields.z * 57.296;
  this->fields.from = UnityEngine_Quaternion__Internal_MakePositive(v4, 0);
}


UnityEngine_Transform_o *TweenRotation__get_cachedTransform(TweenRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D352C4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D352C4 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
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
    sub_1C93D2C(0, v3);
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
    sub_1C93D2C(0, v8);
  v9.fields.z = z;
  v9.fields.w = w;
  v9.fields.x = x;
  v9.fields.y = y;
  UnityEngine_Transform__set_localRotation(cachedTransform, v9, 0);
}