TweenTransform_o *TweenTransform__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  return TweenTransform__Begin_49404916(go, duration, 0, to, v4);
}


TweenTransform_o *TweenTransform__Begin_49404916(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *from,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4C3C24E & 1) == 0 )
  {
    sub_1C32C20(&Method_UITweener_Begin_TweenTransform___);
    byte_4C3C24E = 1;
  }
  v9 = UITweener__Begin_object_(go, duration, (const MethodInfo_3198D08 *)Method_UITweener_Begin_TweenTransform___);
  if ( !v9 )
    sub_1C32E7C(0);
  v12 = v9;
  v9[8].klass = (Il2CppClass *)from;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9[8], (int32_t)from, v10, v11);
  v12[8].monitor = to;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12[8].monitor, (int32_t)to, v13, v14);
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v12, 1.0, 1, v15);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0);
  }
  return (TweenTransform_o *)v12;
}


void TweenTransform__OnUpdate(TweenTransform_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  UnityEngine_Object_o *to; // x21
  struct UnityEngine_Transform_o **p_mTrans; // x21
  UnityEngine_Object_o *mTrans; // x22
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Object_o *from; // x22
  bool v15; // w0
  UnityEngine_Transform_o *v16; // x22
  float x; // s9
  float y; // s10
  float z; // s11
  float v20; // s12
  UnityEngine_Transform_o *v21; // x22
  float v22; // s9
  float v23; // s10
  float v24; // s11
  UnityEngine_Transform_o *v25; // x22
  float v26; // s9
  float v27; // s10
  float v28; // s11
  float w; // s12
  float v30; // s10
  float v31; // s11
  float v32; // s12
  float v33; // s9
  UnityEngine_Transform_o *v34; // x22
  float v35; // s11
  float v36; // s12
  float v37; // s10
  float v38; // s9
  float v39; // s10
  float v40; // s11
  float v41; // s12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v58; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Quaternion_o v59; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C3C24D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C24D = 1;
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12);
      v13 = this->fields.mTrans;
      if ( !v13 )
        goto LABEL_36;
      position = UnityEngine_Transform__get_position(v13, 0);
      v13 = this->fields.mTrans;
      this->fields.mPos = position;
      if ( !v13 )
        goto LABEL_36;
      rotation = UnityEngine_Transform__get_rotation(v13, 0);
      v13 = this->fields.mTrans;
      this->fields.mRot = rotation;
      if ( !v13 )
        goto LABEL_36;
      this->fields.mScale = UnityEngine_Transform__get_localScale(v13, 0);
    }
    from = (UnityEngine_Object_o *)this->fields.from;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(from, 0, 0);
    v16 = *p_mTrans;
    if ( v15 )
    {
      v13 = this->fields.from;
      if ( !v13 )
        goto LABEL_36;
      v43 = UnityEngine_Transform__get_position(v13, 0);
      v13 = this->fields.to;
      if ( !v13 )
        goto LABEL_36;
      x = v43.fields.x;
      y = v43.fields.y;
      z = v43.fields.z;
      v44 = UnityEngine_Transform__get_position(v13, 0);
      if ( !v16 )
        goto LABEL_36;
      v20 = 1.0 - factor;
      v45.fields.z = (float)((float)(1.0 - factor) * z) + (float)(v44.fields.z * factor);
      v45.fields.y = (float)((float)(1.0 - factor) * y) + (float)(v44.fields.y * factor);
      v45.fields.x = (float)((float)(1.0 - factor) * x) + (float)(v44.fields.x * factor);
      UnityEngine_Transform__set_position(v16, v45, 0);
      v13 = this->fields.from;
      if ( !v13 )
        goto LABEL_36;
      v21 = this->fields.mTrans;
      localScale = UnityEngine_Transform__get_localScale(v13, 0);
      v13 = this->fields.to;
      if ( !v13 )
        goto LABEL_36;
      v22 = localScale.fields.x;
      v23 = localScale.fields.y;
      v24 = localScale.fields.z;
      v47 = UnityEngine_Transform__get_localScale(v13, 0);
      if ( !v21 )
        goto LABEL_36;
      v48.fields.z = (float)(v20 * v24) + (float)(v47.fields.z * factor);
      v48.fields.y = (float)(v20 * v23) + (float)(v47.fields.y * factor);
      v48.fields.x = (float)(v20 * v22) + (float)(v47.fields.x * factor);
      UnityEngine_Transform__set_localScale(v21, v48, 0);
      v13 = this->fields.from;
      if ( !v13 )
        goto LABEL_36;
      v25 = this->fields.mTrans;
      v54 = UnityEngine_Transform__get_rotation(v13, 0);
      v13 = this->fields.to;
      if ( !v13 )
        goto LABEL_36;
      v26 = v54.fields.x;
      v27 = v54.fields.y;
      v28 = v54.fields.z;
      w = v54.fields.w;
      v58 = UnityEngine_Transform__get_rotation(v13, 0);
      v55.fields.x = v26;
      v55.fields.y = v27;
      v55.fields.z = v28;
      v55.fields.w = w;
      v56 = UnityEngine_Quaternion__Slerp(v55, v58, factor, 0);
    }
    else
    {
      v13 = this->fields.to;
      if ( !v13 )
        goto LABEL_36;
      v31 = this->fields.mPos.fields.y;
      v30 = this->fields.mPos.fields.z;
      v32 = this->fields.mPos.fields.x;
      v49 = UnityEngine_Transform__get_position(v13, 0);
      if ( !v16 )
        goto LABEL_36;
      v33 = 1.0 - factor;
      v50.fields.z = (float)((float)(1.0 - factor) * v30) + (float)(v49.fields.z * factor);
      v50.fields.y = (float)((float)(1.0 - factor) * v31) + (float)(v49.fields.y * factor);
      v50.fields.x = (float)((float)(1.0 - factor) * v32) + (float)(v49.fields.x * factor);
      UnityEngine_Transform__set_position(v16, v50, 0);
      v13 = this->fields.to;
      if ( !v13 )
        goto LABEL_36;
      v34 = this->fields.mTrans;
      v35 = this->fields.mScale.fields.y;
      v36 = this->fields.mScale.fields.z;
      v37 = this->fields.mScale.fields.x;
      v51 = UnityEngine_Transform__get_localScale(v13, 0);
      if ( !v34 )
        goto LABEL_36;
      v52.fields.z = (float)(v33 * v36) + (float)(v51.fields.z * factor);
      v52.fields.y = (float)(v33 * v35) + (float)(v51.fields.y * factor);
      v52.fields.x = (float)(v33 * v37) + (float)(v51.fields.x * factor);
      UnityEngine_Transform__set_localScale(v34, v52, 0);
      v13 = this->fields.to;
      if ( !v13 )
        goto LABEL_36;
      v25 = this->fields.mTrans;
      v39 = this->fields.mRot.fields.z;
      v38 = this->fields.mRot.fields.w;
      v41 = this->fields.mRot.fields.x;
      v40 = this->fields.mRot.fields.y;
      v59 = UnityEngine_Transform__get_rotation(v13, 0);
      v57.fields.x = v41;
      v57.fields.y = v40;
      v57.fields.z = v39;
      v57.fields.w = v38;
      v56 = UnityEngine_Quaternion__Slerp(v57, v59, factor, 0);
    }
    if ( !v25 )
      goto LABEL_36;
    UnityEngine_Transform__set_rotation(v25, v56, 0);
    if ( isFinished && this->fields.parentWhenFinished )
    {
      v13 = *p_mTrans;
      if ( *p_mTrans )
      {
        UnityEngine_Transform__set_parent(v13, this->fields.to, 0);
        return;
      }
LABEL_36:
      sub_1C32E7C(v13);
    }
  }
}