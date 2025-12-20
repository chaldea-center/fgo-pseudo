TweenTransform_o *TweenTransform__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  return TweenTransform__Begin_50141764(go, duration, 0, to, v4);
}


TweenTransform_o *TweenTransform__Begin_50141764(
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

  if ( (byte_4D310A8 & 1) == 0 )
  {
    sub_1C94098(&Method_UITweener_Begin_TweenTransform___);
    byte_4D310A8 = 1;
  }
  v9 = UITweener__Begin_object_(go, duration, (const MethodInfo_3272360 *)Method_UITweener_Begin_TweenTransform___);
  if ( !v9 )
    sub_1C942F0(0, v10);
  v17 = v9;
  v9[8].klass = (Il2CppClass *)from;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9[8], (int32_t)from, v11, v12, v13, v14, v15, v16);
  v17[8].monitor = to;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v17[8].monitor, (int32_t)to, v18, v19, v20, v21, v22, v23);
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
  float x; // s9
  float y; // s10
  float z; // s11
  float v25; // s12
  UnityEngine_Transform_o *v26; // x22
  float v27; // s9
  float v28; // s10
  float v29; // s11
  UnityEngine_Transform_o *v30; // x22
  float v31; // s9
  float v32; // s10
  float v33; // s11
  float w; // s12
  float v35; // s10
  float v36; // s11
  float v37; // s12
  float v38; // s9
  UnityEngine_Transform_o *v39; // x22
  float v40; // s11
  float v41; // s12
  float v42; // s10
  float v43; // s9
  float v44; // s10
  float v45; // s11
  float v46; // s12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v63; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4
  UnityEngine_Quaternion_o v64; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4D310A7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D310A7 = 1;
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
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12, v13, v14, v15, v16);
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
      v48 = UnityEngine_Transform__get_position(v18, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      x = v48.fields.x;
      y = v48.fields.y;
      z = v48.fields.z;
      v49 = UnityEngine_Transform__get_position(v18, 0);
      if ( !v21 )
        goto LABEL_36;
      v25 = 1.0 - factor;
      v50.fields.z = (float)((float)(1.0 - factor) * z) + (float)(v49.fields.z * factor);
      v50.fields.y = (float)((float)(1.0 - factor) * y) + (float)(v49.fields.y * factor);
      v50.fields.x = (float)((float)(1.0 - factor) * x) + (float)(v49.fields.x * factor);
      UnityEngine_Transform__set_position(v21, v50, 0);
      v18 = this->fields.from;
      if ( !v18 )
        goto LABEL_36;
      v26 = this->fields.mTrans;
      localScale = UnityEngine_Transform__get_localScale(v18, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v27 = localScale.fields.x;
      v28 = localScale.fields.y;
      v29 = localScale.fields.z;
      v52 = UnityEngine_Transform__get_localScale(v18, 0);
      if ( !v26 )
        goto LABEL_36;
      v53.fields.z = (float)(v25 * v29) + (float)(v52.fields.z * factor);
      v53.fields.y = (float)(v25 * v28) + (float)(v52.fields.y * factor);
      v53.fields.x = (float)(v25 * v27) + (float)(v52.fields.x * factor);
      UnityEngine_Transform__set_localScale(v26, v53, 0);
      v18 = this->fields.from;
      if ( !v18 )
        goto LABEL_36;
      v30 = this->fields.mTrans;
      v59 = UnityEngine_Transform__get_rotation(v18, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v31 = v59.fields.x;
      v32 = v59.fields.y;
      v33 = v59.fields.z;
      w = v59.fields.w;
      v63 = UnityEngine_Transform__get_rotation(v18, 0);
      v60.fields.x = v31;
      v60.fields.y = v32;
      v60.fields.z = v33;
      v60.fields.w = w;
      v61 = UnityEngine_Quaternion__Slerp(v60, v63, factor, 0);
    }
    else
    {
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v36 = this->fields.mPos.fields.y;
      v35 = this->fields.mPos.fields.z;
      v37 = this->fields.mPos.fields.x;
      v54 = UnityEngine_Transform__get_position(v18, 0);
      if ( !v21 )
        goto LABEL_36;
      v38 = 1.0 - factor;
      v55.fields.z = (float)((float)(1.0 - factor) * v35) + (float)(v54.fields.z * factor);
      v55.fields.y = (float)((float)(1.0 - factor) * v36) + (float)(v54.fields.y * factor);
      v55.fields.x = (float)((float)(1.0 - factor) * v37) + (float)(v54.fields.x * factor);
      UnityEngine_Transform__set_position(v21, v55, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v39 = this->fields.mTrans;
      v40 = this->fields.mScale.fields.y;
      v41 = this->fields.mScale.fields.z;
      v42 = this->fields.mScale.fields.x;
      v56 = UnityEngine_Transform__get_localScale(v18, 0);
      if ( !v39 )
        goto LABEL_36;
      v57.fields.z = (float)(v38 * v41) + (float)(v56.fields.z * factor);
      v57.fields.y = (float)(v38 * v40) + (float)(v56.fields.y * factor);
      v57.fields.x = (float)(v38 * v42) + (float)(v56.fields.x * factor);
      UnityEngine_Transform__set_localScale(v39, v57, 0);
      v18 = this->fields.to;
      if ( !v18 )
        goto LABEL_36;
      v30 = this->fields.mTrans;
      v44 = this->fields.mRot.fields.z;
      v43 = this->fields.mRot.fields.w;
      v46 = this->fields.mRot.fields.x;
      v45 = this->fields.mRot.fields.y;
      v64 = UnityEngine_Transform__get_rotation(v18, 0);
      v62.fields.x = v46;
      v62.fields.y = v45;
      v62.fields.z = v44;
      v62.fields.w = v43;
      v61 = UnityEngine_Quaternion__Slerp(v62, v64, factor, 0);
    }
    if ( !v30 )
      goto LABEL_36;
    UnityEngine_Transform__set_rotation(v30, v61, 0);
    if ( isFinished && this->fields.parentWhenFinished )
    {
      v18 = *p_mTrans;
      if ( *p_mTrans )
      {
        UnityEngine_Transform__set_parent(v18, this->fields.to, 0);
        return;
      }
LABEL_36:
      sub_1C942F0(v18, v17);
    }
  }
}