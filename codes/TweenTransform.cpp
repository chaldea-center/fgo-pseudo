TweenTransform_o *TweenTransform__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Transform_o *to,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  return TweenTransform__Begin_56309076(go, duration, 0, to, v4);
}


TweenTransform_o *TweenTransform__Begin_56309076(
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

  if ( (byte_593CF25 & 1) == 0 )
  {
    sub_21FFC50(&Method_UITweener_Begin_TweenTransform___);
    byte_593CF25 = 1;
  }
  v9 = UITweener__Begin_object_(go, duration, (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenTransform___);
  if ( !v9 )
    sub_21FFECC(0, v10);
  v17 = v9;
  v9[8].klass = (Il2CppClass *)from;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9[8], (int32_t)from, v11, v12, v13, v14, v15, v16);
  v17[8].monitor = to;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17[8].monitor, (int32_t)to, v18, v19, v20, v21, v22, v23);
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
  float x; // s9
  float y; // s10
  float z; // s11
  float v27; // s12
  UnityEngine_Transform_o *v28; // x22
  float v29; // s9
  float v30; // s10
  float v31; // s11
  UnityEngine_Transform_o *v32; // x22
  float v33; // s9
  float v34; // s10
  float v35; // s11
  float w; // s12
  float v37; // s4 OVERLAPPED
  float v38; // s5
  float v39; // s6
  float v40; // s7
  float v41; // s0 OVERLAPPED
  float v42; // s1
  float v43; // s2
  float v44; // s3
  float v45; // s11
  float v46; // s12
  float v47; // s10
  float v48; // s9
  float v49; // s11
  float v50; // s12
  UnityEngine_Transform_o *v51; // x22
  float v52; // s10
  float v53; // s9
  float v54; // s10
  float v55; // s11
  float v56; // s12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CF24 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF24 = 1;
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
      sub_21FFBF4(
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
      v58 = UnityEngine_Transform__get_position(v20, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      x = v58.fields.x;
      y = v58.fields.y;
      z = v58.fields.z;
      v59 = UnityEngine_Transform__get_position(v20, 0);
      if ( !v23 )
        goto LABEL_37;
      v27 = 1.0 - factor;
      v60.fields.z = (float)((float)(1.0 - factor) * z) + (float)(v59.fields.z * factor);
      v60.fields.y = (float)((float)(1.0 - factor) * y) + (float)(v59.fields.y * factor);
      v60.fields.x = (float)((float)(1.0 - factor) * x) + (float)(v59.fields.x * factor);
      UnityEngine_Transform__set_position(v23, v60, 0);
      v20 = this->fields.from;
      if ( !v20 )
        goto LABEL_37;
      v28 = this->fields.mTrans;
      localScale = UnityEngine_Transform__get_localScale(v20, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v29 = localScale.fields.x;
      v30 = localScale.fields.y;
      v31 = localScale.fields.z;
      v62 = UnityEngine_Transform__get_localScale(v20, 0);
      if ( !v28 )
        goto LABEL_37;
      v63.fields.z = (float)(v27 * v31) + (float)(v62.fields.z * factor);
      v63.fields.y = (float)(v27 * v30) + (float)(v62.fields.y * factor);
      v63.fields.x = (float)(v27 * v29) + (float)(v62.fields.x * factor);
      UnityEngine_Transform__set_localScale(v28, v63, 0);
      v20 = this->fields.from;
      if ( !v20 )
        goto LABEL_37;
      v32 = this->fields.mTrans;
      v69 = UnityEngine_Transform__get_rotation(v20, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v33 = v69.fields.x;
      v34 = v69.fields.y;
      v35 = v69.fields.z;
      w = v69.fields.w;
      v70 = UnityEngine_Transform__get_rotation(v20, 0);
      v37 = v70.fields.x;
      v38 = v70.fields.y;
      v39 = v70.fields.z;
      v40 = v70.fields.w;
      v41 = v33;
      v42 = v34;
      v43 = v35;
      v44 = w;
    }
    else
    {
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v46 = this->fields.mPos.fields.y;
      v45 = this->fields.mPos.fields.z;
      v47 = this->fields.mPos.fields.x;
      v64 = UnityEngine_Transform__get_position(v20, 0);
      if ( !v23 )
        goto LABEL_37;
      v48 = 1.0 - factor;
      v65.fields.z = (float)((float)(1.0 - factor) * v45) + (float)(v64.fields.z * factor);
      v65.fields.y = (float)((float)(1.0 - factor) * v46) + (float)(v64.fields.y * factor);
      v65.fields.x = (float)((float)(1.0 - factor) * v47) + (float)(v64.fields.x * factor);
      UnityEngine_Transform__set_position(v23, v65, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v49 = this->fields.mScale.fields.y;
      v50 = this->fields.mScale.fields.z;
      v51 = this->fields.mTrans;
      v52 = this->fields.mScale.fields.x;
      v66 = UnityEngine_Transform__get_localScale(v20, 0);
      if ( !v51 )
        goto LABEL_37;
      v67.fields.z = (float)(v48 * v50) + (float)(v66.fields.z * factor);
      v67.fields.y = (float)(v48 * v49) + (float)(v66.fields.y * factor);
      v67.fields.x = (float)(v48 * v52) + (float)(v66.fields.x * factor);
      UnityEngine_Transform__set_localScale(v51, v67, 0);
      v20 = this->fields.to;
      if ( !v20 )
        goto LABEL_37;
      v54 = this->fields.mRot.fields.z;
      v53 = this->fields.mRot.fields.w;
      v56 = this->fields.mRot.fields.x;
      v55 = this->fields.mRot.fields.y;
      v32 = this->fields.mTrans;
      v71 = UnityEngine_Transform__get_rotation(v20, 0);
      v37 = v71.fields.x;
      v38 = v71.fields.y;
      v39 = v71.fields.z;
      v40 = v71.fields.w;
      v41 = v56;
      v42 = v55;
      v43 = v54;
      v44 = v53;
    }
    v72 = UnityEngine_Quaternion__Slerp(*(UnityEngine_Quaternion_o *)&v41, *(UnityEngine_Quaternion_o *)&v37, factor, 0);
    if ( !v32 )
      goto LABEL_37;
    UnityEngine_Transform__set_rotation(v32, v72, 0);
    if ( this->fields.parentWhenFinished && isFinished )
    {
      v20 = *p_mTrans;
      if ( *p_mTrans )
      {
        UnityEngine_Transform__set_parent(v20, this->fields.to, 0);
        return;
      }
LABEL_37:
      sub_21FFECC(v20, v19);
    }
  }
}