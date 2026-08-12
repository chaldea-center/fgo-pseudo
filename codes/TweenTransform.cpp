TweenTransform_o *TweenTransform__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  return TweenTransform__Begin_56513732(go, duration, 0, to, v4);
}


TweenTransform_o *TweenTransform__Begin_56513732(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *from,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x2

  if ( (byte_59751FC & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenTransform___);
    byte_59751FC = 1;
  }
  v9 = UITweener__Begin_object_(go, duration, (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenTransform___);
  if ( !v9 )
    sub_2213CDC(0, v10);
  v17 = v9;
  v9[8].klass = (Il2CppClass *)from;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[8], (int32_t)from, v11, v12, v13, v14, v15, v16);
  v17[8].monitor = to;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17[8].monitor, (int32_t)to, v18, v19, v20, v21, v22, v23);
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v17, 1.0, 1, v24);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0);
  }
  return (TweenTransform_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
void TweenTransform__OnUpdate(TweenTransform_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  UnityEngine_Object_o *to; // x21
  __int64 v8; // x1
  struct UnityEngine_Transform_o **p_mTrans; // x21
  UnityEngine_Object_o *mTrans; // x22
  __int64 v11; // x1
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Object_o *from; // x22
  bool v22; // w0
  UnityEngine_Transform_o *v23; // x22
  float v24; // s12
  UnityEngine_Transform_o *v25; // x22
  UnityEngine_Transform_o *v26; // x22
  float z; // s11
  float y; // s12
  float x; // s10
  float v30; // s9
  float v31; // s11
  float v32; // s12
  UnityEngine_Transform_o *v33; // x22
  float v34; // s10
  float w; // s9
  float v36; // s10
  float v37; // s11
  float v38; // s12
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v40; // 0:kr34_12.12
  UnityEngine_Vector3_o v41; // 0:kr40_12.12
  UnityEngine_Vector3_o localScale; // 0:kr54_12.12
  UnityEngine_Vector3_o v43; // 0:kr60_12.12
  UnityEngine_Vector3_o v44; // 0:kr90_12.12
  UnityEngine_Vector3_o v45; // 0:krA4_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr10_16.16
  UnityEngine_Quaternion_o v47; // 0:kr70_16.16
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v54; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_59751FB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751FB = 1;
  }
  to = (UnityEngine_Object_o *)this->fields.to;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFinished);
  if ( UnityEngine_Object__op_Inequality(to, 0, 0) )
  {
    p_mTrans = &this->fields.mTrans;
    mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this->fields.mTrans = transform;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mTrans,
        (int32_t)transform,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v20 = this->fields.mTrans;
      if ( !v20 )
        goto LABEL_37;
      position = UnityEngine_Transform__get_position(v20, 0);
      v20 = this->fields.mTrans;
      this->fields.mPos = position;
      if ( !v20 )
        goto LABEL_37;
      rotation = UnityEngine_Transform__get_rotation(v20, 0);
      v20 = this->fields.mTrans;
      this->fields.mRot = rotation;
      if ( !v20 )
        goto LABEL_37;
      this->fields.mScale = UnityEngine_Transform__get_localScale(v20, 0);
    }
    from = (UnityEngine_Object_o *)this->fields.from;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v22 = UnityEngine_Object__op_Inequality(from, 0, 0);
    v23 = *p_mTrans;
    if ( v22 )
    {
      v20 = this->fields.from;
      if ( !v20 )
        goto LABEL_37;
      v40 = UnityEngine_Transform__get_position(v20, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v41 = UnityEngine_Transform__get_position(v20, 0);
      if ( !v23 )
        goto LABEL_37;
      v24 = 1.0 - factor;
      v48.fields.z = (float)((float)(1.0 - factor) * v40.fields.z) + (float)(v41.fields.z * factor);
      v48.fields.y = (float)((float)(1.0 - factor) * v40.fields.y) + (float)(v41.fields.y * factor);
      v48.fields.x = (float)((float)(1.0 - factor) * v40.fields.x) + (float)(v41.fields.x * factor);
      UnityEngine_Transform__set_position(v23, v48, 0);
      v20 = this->fields.from;
      if ( !v20 )
        goto LABEL_37;
      v25 = this->fields.mTrans;
      localScale = UnityEngine_Transform__get_localScale(v20, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v43 = UnityEngine_Transform__get_localScale(v20, 0);
      if ( !v25 )
        goto LABEL_37;
      v49.fields.z = (float)(v24 * localScale.fields.z) + (float)(v43.fields.z * factor);
      v49.fields.y = (float)(v24 * localScale.fields.y) + (float)(v43.fields.y * factor);
      v49.fields.x = (float)(v24 * localScale.fields.x) + (float)(v43.fields.x * factor);
      UnityEngine_Transform__set_localScale(v25, v49, 0);
      v20 = this->fields.from;
      if ( !v20 )
        goto LABEL_37;
      v26 = this->fields.mTrans;
      v47 = UnityEngine_Transform__get_rotation(v20, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v54 = UnityEngine_Transform__get_rotation(v20, 0);
      v52 = v47;
    }
    else
    {
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      y = this->fields.mPos.fields.y;
      z = this->fields.mPos.fields.z;
      x = this->fields.mPos.fields.x;
      v44 = UnityEngine_Transform__get_position(v20, 0);
      if ( !v23 )
        goto LABEL_37;
      v30 = 1.0 - factor;
      v50.fields.z = (float)((float)(1.0 - factor) * z) + (float)(v44.fields.z * factor);
      v50.fields.y = (float)((float)(1.0 - factor) * y) + (float)(v44.fields.y * factor);
      v50.fields.x = (float)((float)(1.0 - factor) * x) + (float)(v44.fields.x * factor);
      UnityEngine_Transform__set_position(v23, v50, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v31 = this->fields.mScale.fields.y;
      v32 = this->fields.mScale.fields.z;
      v33 = this->fields.mTrans;
      v34 = this->fields.mScale.fields.x;
      v45 = UnityEngine_Transform__get_localScale(v20, 0);
      if ( !v33 )
        goto LABEL_37;
      v51.fields.z = (float)(v30 * v32) + (float)(v45.fields.z * factor);
      v51.fields.y = (float)(v30 * v31) + (float)(v45.fields.y * factor);
      v51.fields.x = (float)(v30 * v34) + (float)(v45.fields.x * factor);
      UnityEngine_Transform__set_localScale(v33, v51, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v36 = this->fields.mRot.fields.z;
      w = this->fields.mRot.fields.w;
      v38 = this->fields.mRot.fields.x;
      v37 = this->fields.mRot.fields.y;
      v26 = this->fields.mTrans;
      v54 = UnityEngine_Transform__get_rotation(v20, 0);
      v52.fields.x = v38;
      v52.fields.y = v37;
      v52.fields.z = v36;
      v52.fields.w = w;
    }
    v53 = UnityEngine_Quaternion__Slerp(v52, v54, factor, 0);
    if ( !v26 )
      goto LABEL_37;
    UnityEngine_Transform__set_rotation(v26, v53, 0);
    if ( this->fields.parentWhenFinished && isFinished )
    {
      v20 = *p_mTrans;
      if ( *p_mTrans )
      {
        UnityEngine_Transform__set_parent(v20, this->fields.to, 0);
        return;
      }
LABEL_37:
      sub_2213CDC(v20, v19);
    }
  }
}