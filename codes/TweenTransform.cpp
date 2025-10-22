TweenTransform_o *TweenTransform__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  return TweenTransform__Begin_49521268(go, duration, 0, to, v4);
}


TweenTransform_o *TweenTransform__Begin_49521268(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *from,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4C5B5C0 & 1) == 0 )
  {
    sub_1C3E564(&Method_UITweener_Begin_TweenTransform___);
    byte_4C5B5C0 = 1;
  }
  v9 = UITweener__Begin_object_(go, duration, (const MethodInfo_31B54C4 *)Method_UITweener_Begin_TweenTransform___);
  if ( !v9 )
    sub_1C3E7C0(0, v10);
  v13 = v9;
  v9[8].klass = (Il2CppClass *)from;
  sub_1C3E508((CGThumbnailListItem_o *)&v9[8], (int32_t)from, v11, v12);
  v13[8].monitor = to;
  sub_1C3E508((CGThumbnailListItem_o *)&v13[8].monitor, (int32_t)to, v14, v15);
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v13, 1.0, 1, v16);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0);
  }
  return (TweenTransform_o *)v13;
}


void TweenTransform__OnUpdate(TweenTransform_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  UnityEngine_Object_o *to; // x21
  struct UnityEngine_Transform_o **p_mTrans; // x21
  UnityEngine_Object_o *mTrans; // x22
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Object_o *from; // x22
  bool v16; // w0
  UnityEngine_Transform_o *v17; // x22
  float x; // s9
  float y; // s10
  float z; // s11
  float v21; // s12
  UnityEngine_Transform_o *v22; // x22
  float v23; // s9
  float v24; // s10
  float v25; // s11
  UnityEngine_Transform_o *v26; // x22
  float v27; // s9
  float v28; // s10
  float v29; // s11
  float w; // s12
  float v31; // s10
  float v32; // s11
  float v33; // s12
  float v34; // s9
  UnityEngine_Transform_o *v35; // x22
  float v36; // s11
  float v37; // s12
  float v38; // s10
  float v39; // s9
  float v40; // s10
  float v41; // s11
  float v42; // s12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v59; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Quaternion_o v60; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C5B5BF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5BF = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12);
      v14 = this->fields.mTrans;
      if ( !v14 )
        goto LABEL_36;
      position = UnityEngine_Transform__get_position(v14, 0);
      v14 = this->fields.mTrans;
      this->fields.mPos = position;
      if ( !v14 )
        goto LABEL_36;
      rotation = UnityEngine_Transform__get_rotation(v14, 0);
      v14 = this->fields.mTrans;
      this->fields.mRot = rotation;
      if ( !v14 )
        goto LABEL_36;
      this->fields.mScale = UnityEngine_Transform__get_localScale(v14, 0);
    }
    from = (UnityEngine_Object_o *)this->fields.from;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality(from, 0, 0);
    v17 = *p_mTrans;
    if ( v16 )
    {
      v14 = this->fields.from;
      if ( !v14 )
        goto LABEL_36;
      v44 = UnityEngine_Transform__get_position(v14, 0);
      v14 = this->fields.to;
      if ( !v14 )
        goto LABEL_36;
      x = v44.fields.x;
      y = v44.fields.y;
      z = v44.fields.z;
      v45 = UnityEngine_Transform__get_position(v14, 0);
      if ( !v17 )
        goto LABEL_36;
      v21 = 1.0 - factor;
      v46.fields.z = (float)((float)(1.0 - factor) * z) + (float)(v45.fields.z * factor);
      v46.fields.y = (float)((float)(1.0 - factor) * y) + (float)(v45.fields.y * factor);
      v46.fields.x = (float)((float)(1.0 - factor) * x) + (float)(v45.fields.x * factor);
      UnityEngine_Transform__set_position(v17, v46, 0);
      v14 = this->fields.from;
      if ( !v14 )
        goto LABEL_36;
      v22 = this->fields.mTrans;
      localScale = UnityEngine_Transform__get_localScale(v14, 0);
      v14 = this->fields.to;
      if ( !v14 )
        goto LABEL_36;
      v23 = localScale.fields.x;
      v24 = localScale.fields.y;
      v25 = localScale.fields.z;
      v48 = UnityEngine_Transform__get_localScale(v14, 0);
      if ( !v22 )
        goto LABEL_36;
      v49.fields.z = (float)(v21 * v25) + (float)(v48.fields.z * factor);
      v49.fields.y = (float)(v21 * v24) + (float)(v48.fields.y * factor);
      v49.fields.x = (float)(v21 * v23) + (float)(v48.fields.x * factor);
      UnityEngine_Transform__set_localScale(v22, v49, 0);
      v14 = this->fields.from;
      if ( !v14 )
        goto LABEL_36;
      v26 = this->fields.mTrans;
      v55 = UnityEngine_Transform__get_rotation(v14, 0);
      v14 = this->fields.to;
      if ( !v14 )
        goto LABEL_36;
      v27 = v55.fields.x;
      v28 = v55.fields.y;
      v29 = v55.fields.z;
      w = v55.fields.w;
      v59 = UnityEngine_Transform__get_rotation(v14, 0);
      v56.fields.x = v27;
      v56.fields.y = v28;
      v56.fields.z = v29;
      v56.fields.w = w;
      v57 = UnityEngine_Quaternion__Slerp(v56, v59, factor, 0);
    }
    else
    {
      v14 = this->fields.to;
      if ( !v14 )
        goto LABEL_36;
      v32 = this->fields.mPos.fields.y;
      v31 = this->fields.mPos.fields.z;
      v33 = this->fields.mPos.fields.x;
      v50 = UnityEngine_Transform__get_position(v14, 0);
      if ( !v17 )
        goto LABEL_36;
      v34 = 1.0 - factor;
      v51.fields.z = (float)((float)(1.0 - factor) * v31) + (float)(v50.fields.z * factor);
      v51.fields.y = (float)((float)(1.0 - factor) * v32) + (float)(v50.fields.y * factor);
      v51.fields.x = (float)((float)(1.0 - factor) * v33) + (float)(v50.fields.x * factor);
      UnityEngine_Transform__set_position(v17, v51, 0);
      v14 = this->fields.to;
      if ( !v14 )
        goto LABEL_36;
      v35 = this->fields.mTrans;
      v36 = this->fields.mScale.fields.y;
      v37 = this->fields.mScale.fields.z;
      v38 = this->fields.mScale.fields.x;
      v52 = UnityEngine_Transform__get_localScale(v14, 0);
      if ( !v35 )
        goto LABEL_36;
      v53.fields.z = (float)(v34 * v37) + (float)(v52.fields.z * factor);
      v53.fields.y = (float)(v34 * v36) + (float)(v52.fields.y * factor);
      v53.fields.x = (float)(v34 * v38) + (float)(v52.fields.x * factor);
      UnityEngine_Transform__set_localScale(v35, v53, 0);
      v14 = this->fields.to;
      if ( !v14 )
        goto LABEL_36;
      v26 = this->fields.mTrans;
      v40 = this->fields.mRot.fields.z;
      v39 = this->fields.mRot.fields.w;
      v42 = this->fields.mRot.fields.x;
      v41 = this->fields.mRot.fields.y;
      v60 = UnityEngine_Transform__get_rotation(v14, 0);
      v58.fields.x = v42;
      v58.fields.y = v41;
      v58.fields.z = v40;
      v58.fields.w = v39;
      v57 = UnityEngine_Quaternion__Slerp(v58, v60, factor, 0);
    }
    if ( !v26 )
      goto LABEL_36;
    UnityEngine_Transform__set_rotation(v26, v57, 0);
    if ( isFinished && this->fields.parentWhenFinished )
    {
      v14 = *p_mTrans;
      if ( *p_mTrans )
      {
        UnityEngine_Transform__set_parent(v14, this->fields.to, 0);
        return;
      }
LABEL_36:
      sub_1C3E7C0(v14, v13);
    }
  }
}