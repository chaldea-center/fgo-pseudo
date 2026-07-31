void TweenScale___ctor(TweenScale_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  float v7; // s1

  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.from.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.from.fields.z = z;
  v6 = v3->static_fields;
  v7 = v6->oneVector.fields.z;
  *(_QWORD *)&this->fields.to.fields.x = *(_QWORD *)&v6->oneVector.fields.x;
  this->fields.to.fields.z = v7;
  UITweener___ctor((UITweener_o *)this, method);
}


TweenScale_o *TweenScale__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  TweenScale_o *v9; // x0
  const MethodInfo *v10; // x1
  TweenScale_o *v11; // x19
  const MethodInfo *v12; // x2

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( (byte_593CF23 & 1) == 0 )
  {
    sub_21FFC50(&Method_UITweener_Begin_TweenScale___);
    byte_593CF23 = 1;
  }
  v9 = (TweenScale_o *)UITweener__Begin_object_(
                         go,
                         duration,
                         (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenScale___);
  if ( !v9 )
    sub_21FFECC(0, v10);
  v11 = v9;
  v9->fields.from = TweenScale__get_value(v9, v10);
  v11->fields.to.fields.x = x;
  v11->fields.to.fields.y = y;
  v11->fields.to.fields.z = z;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v11, 1.0, 1, v12);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
void TweenScale__OnUpdate(TweenScale_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float v5; // s4
  float v6; // s3
  unsigned __int64 v7; // d0 OVERLAPPED
  float v8; // s2
  int v9; // s1
  __int64 v10; // x1
  UITable_o **p_mTable; // x20
  UnityEngine_Object_o *mTable; // x21
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x21
  float v25; // [xsp+0h] [xbp-40h]

  if ( (byte_593CF22 & 1) == 0 )
  {
    v25 = factor;
    sub_21FFC50(&Method_NGUITools_FindInParents_UITable___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    factor = v25;
    byte_593CF22 = 1;
  }
  v5 = this->fields.to.fields.z * factor;
  v6 = (float)(1.0 - factor) * this->fields.from.fields.z;
  v7 = vadd_f32(
         vmul_n_f32(*(float32x2_t *)&this->fields.from.fields.x, 1.0 - factor),
         vmul_n_f32(*(float32x2_t *)&this->fields.to.fields.x, factor)).n64_u64[0];
  v8 = v6 + v5;
  v9 = HIDWORD(v7);
  TweenScale__set_value(this, *(UnityEngine_Vector3_o *)&v7, (const MethodInfo *)isFinished);
  if ( this->fields.updateTable )
  {
    p_mTable = &this->fields.mTable;
    mTable = (UnityEngine_Object_o *)this->fields.mTable;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Equality(mTable, 0, 0) )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v14);
    v16 = NGUITools__FindInParents_object_(
            gameObject,
            (const MethodInfo_38BD680 *)Method_NGUITools_FindInParents_UITable___);
    *p_mTable = (UITable_o *)v16;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mTable, (int32_t)v16, v17, v18, v19, v20, v21, v22);
    v24 = (UnityEngine_Object_o *)*p_mTable;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
    {
      this->fields.updateTable = 0;
    }
    else
    {
LABEL_14:
      if ( !*p_mTable )
        sub_21FFECC(0, v13);
      UITable__set_repositionNow(*p_mTable, 1, 0);
    }
  }
}


void TweenScale__SetCurrentValueToEnd(TweenScale_o *this, const MethodInfo *method)
{
  TweenScale__set_value(this, this->fields.to, method);
}


void TweenScale__SetCurrentValueToStart(TweenScale_o *this, const MethodInfo *method)
{
  TweenScale__set_value(this, this->fields.from, method);
}


void TweenScale__SetEndToCurrentValue(TweenScale_o *this, const MethodInfo *method)
{
  this->fields.to = TweenScale__get_value(this, method);
}


void TweenScale__SetStartToCurrentValue(TweenScale_o *this, const MethodInfo *method)
{
  this->fields.from = TweenScale__get_value(this, method);
}


UnityEngine_Transform_o *TweenScale__get_cachedTransform(TweenScale_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593CF21 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF21 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mTrans;
}


UnityEngine_Vector3_o TweenScale__get_value(TweenScale_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v3; // x1

  cachedTransform = TweenScale__get_cachedTransform(this, method);
  if ( !cachedTransform )
    sub_21FFECC(0, v3);
  return UnityEngine_Transform__get_localScale(cachedTransform, 0);
}


void TweenScale__set_value(TweenScale_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  cachedTransform = TweenScale__get_cachedTransform(this, method);
  if ( !cachedTransform )
    sub_21FFECC(0, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localScale(cachedTransform, v8, 0);
}