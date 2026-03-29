TweenTransform_o *TweenTransform__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  return TweenTransform__Begin_50174348(go, duration, 0, to, v4);
}


TweenTransform_o *TweenTransform__Begin_50174348(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *from,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_4D352CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UITweener_Begin_TweenTransform___);
    byte_4D352CA = 1;
  }
  v9 = UITweener__Begin_object_(go, duration, (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenTransform___);
  if ( !v9 )
    sub_1C93D2C(0, v10);
  v17 = v9;
  v9[8].klass = (Il2CppClass *)from;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9[8], (int32_t)from, v11, v12, v13, v14, v15, v16);
  v17[8].monitor = to;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17[8].monitor, (int32_t)to, v18, v19, v20, v21, v22, v23);
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v17, 1.0, 1, v24);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0);
  }
  return (TweenTransform_o *)v17;
}


void TweenTransform__OnUpdate(TweenTransform_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  UnityEngine_Object_o *to; // x21
  struct UnityEngine_Transform_o **p_mTrans; // x21
  UnityEngine_Object_o *mTrans; // x22
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Object_o *from; // x22
  bool v20; // w0
  UnityEngine_Transform_o *v21; // x22
  float v22; // s12
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Transform_o *v24; // x22
  float z; // s10
  float y; // s11
  float x; // s12
  float v28; // s9
  UnityEngine_Transform_o *v29; // x22
  float v30; // s11
  float v31; // s12
  float v32; // s10
  float w; // s9
  float v34; // s10
  float v35; // s11
  float v36; // s12
  float v37; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v39; // 0:kr34_12.12
  UnityEngine_Vector3_o v40; // 0:kr40_12.12
  UnityEngine_Vector3_o localScale; // 0:kr54_12.12
  UnityEngine_Vector3_o v42; // 0:kr60_12.12
  UnityEngine_Vector3_o v43; // 0:kr90_12.12
  UnityEngine_Vector3_o v44; // 0:krA4_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr10_16.16
  UnityEngine_Quaternion_o v46; // 0:kr70_16.16
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v53; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4D352C9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D352C9 = 1;
  }
  to = (UnityEngine_Object_o *)this->fields.to;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(to, 0, 0) )
  {
    p_mTrans = &this->fields.mTrans;
    mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this->fields.mTrans = transform;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12, v13, v14, v15, v16);
      v18 = this->fields.mTrans;
      if ( !v18 )
        goto LABEL_36;
      position = UnityEngine_Transform__get_position(v18, 0);
      v18 = this->fields.mTrans;
      this->fields.mPos = position;
      if ( !v18 )
        goto LABEL_36;
      rotation = UnityEngine_Transform__get_rotation(v18, 0);
      v18 = this->fields.mTrans;
      this->fields.mRot = rotation;
      if ( !v18 )
        goto LABEL_36;
      this->fields.mScale = UnityEngine_Transform__get_localScale(v18, 0);
    }
    from = (UnityEngine_Object_o *)this->fields.from;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__op_Inequality(from, 0, 0);
    v21 = *p_mTrans;
    if ( v20 )
    {
      v18 = this->fields.from;
      if ( !v18 )
        goto LABEL_36;
      v39 = UnityEngine_Transform__get_position(v18, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v40 = UnityEngine_Transform__get_position(v18, 0);
      if ( !v21 )
        goto LABEL_36;
      v22 = 1.0 - factor;
      v47.fields.z = (float)((float)(1.0 - factor) * v39.fields.z) + (float)(v40.fields.z * factor);
      v47.fields.y = (float)((float)(1.0 - factor) * v39.fields.y) + (float)(v40.fields.y * factor);
      v47.fields.x = (float)((float)(1.0 - factor) * v39.fields.x) + (float)(v40.fields.x * factor);
      UnityEngine_Transform__set_position(v21, v47, 0);
      v18 = this->fields.from;
      if ( !v18 )
        goto LABEL_36;
      v23 = this->fields.mTrans;
      localScale = UnityEngine_Transform__get_localScale(v18, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v42 = UnityEngine_Transform__get_localScale(v18, 0);
      if ( !v23 )
        goto LABEL_36;
      v48.fields.z = (float)(v22 * localScale.fields.z) + (float)(v42.fields.z * factor);
      v48.fields.y = (float)(v22 * localScale.fields.y) + (float)(v42.fields.y * factor);
      v48.fields.x = (float)(v22 * localScale.fields.x) + (float)(v42.fields.x * factor);
      UnityEngine_Transform__set_localScale(v23, v48, 0);
      v18 = this->fields.from;
      if ( !v18 )
        goto LABEL_36;
      v24 = this->fields.mTrans;
      v46 = UnityEngine_Transform__get_rotation(v18, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v53 = UnityEngine_Transform__get_rotation(v18, 0);
      v51 = v46;
      v37 = factor;
    }
    else
    {
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      y = this->fields.mPos.fields.y;
      z = this->fields.mPos.fields.z;
      x = this->fields.mPos.fields.x;
      v43 = UnityEngine_Transform__get_position(v18, 0);
      if ( !v21 )
        goto LABEL_36;
      v28 = 1.0 - factor;
      v49.fields.z = (float)((float)(1.0 - factor) * z) + (float)(v43.fields.z * factor);
      v49.fields.y = (float)((float)(1.0 - factor) * y) + (float)(v43.fields.y * factor);
      v49.fields.x = (float)((float)(1.0 - factor) * x) + (float)(v43.fields.x * factor);
      UnityEngine_Transform__set_position(v21, v49, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v29 = this->fields.mTrans;
      v30 = this->fields.mScale.fields.y;
      v31 = this->fields.mScale.fields.z;
      v32 = this->fields.mScale.fields.x;
      v44 = UnityEngine_Transform__get_localScale(v18, 0);
      if ( !v29 )
        goto LABEL_36;
      v50.fields.z = (float)(v28 * v31) + (float)(v44.fields.z * factor);
      v50.fields.y = (float)(v28 * v30) + (float)(v44.fields.y * factor);
      v50.fields.x = (float)(v28 * v32) + (float)(v44.fields.x * factor);
      UnityEngine_Transform__set_localScale(v29, v50, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v24 = this->fields.mTrans;
      v34 = this->fields.mRot.fields.z;
      w = this->fields.mRot.fields.w;
      v36 = this->fields.mRot.fields.x;
      v35 = this->fields.mRot.fields.y;
      v53 = UnityEngine_Transform__get_rotation(v18, 0);
      v37 = factor;
      v51.fields.x = v36;
      v51.fields.y = v35;
      v51.fields.z = v34;
      v51.fields.w = w;
    }
    v52 = UnityEngine_Quaternion__Slerp(v51, v53, v37, 0);
    if ( !v24 )
      goto LABEL_36;
    UnityEngine_Transform__set_rotation(v24, v52, 0);
    if ( isFinished && this->fields.parentWhenFinished )
    {
      v18 = *p_mTrans;
      if ( *p_mTrans )
      {
        UnityEngine_Transform__set_parent(v18, this->fields.to, 0);
        return;
      }
LABEL_36:
      sub_1C93D2C(v18, v17);
    }
  }
}