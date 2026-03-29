void FixedSpringPanel___ctor(FixedSpringPanel_o *this, const MethodInfo *method)
{
  this->fields.momentumBorder = 0.0001;
  SpringPanel___ctor((SpringPanel_o *)this, 0);
}


void FixedSpringPanel__AdvanceTowardsPosition(FixedSpringPanel_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float deltaTime; // s0
  UnityEngine_Transform_o *mTrans; // x0
  float v6; // s10
  float x; // s10
  float y; // s11
  float z; // s12
  struct UIScrollView_o *mDrag; // x8
  float v11; // s14
  float v12; // s15
  float v13; // s13
  int v14; // w21
  UnityEngine_Object_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct SpringPanel_OnFinished_o *onFinished; // x8
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  unsigned __int64 localPosition; // kr00_8
  UnityEngine_Vector3_o v30; // 0:kr20_12.12
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34FF5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SpringPanel_TypeInfo);
    byte_4D34FF5 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  v6 = deltaTime;
  localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(mTrans, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  v33 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v30 = NGUIMath__SpringLerp_50025236(v33, this->fields.target, this->fields.strength, v6, 0);
  x = v30.fields.x;
  y = v30.fields.y;
  z = v30.fields.z;
  if ( (float)((float)((float)((float)(x - this->fields.target.fields.x) * (float)(x - this->fields.target.fields.x))
                     + (float)((float)(y - this->fields.target.fields.y) * (float)(y - this->fields.target.fields.y)))
             + (float)((float)(z - this->fields.target.fields.z) * (float)(z - this->fields.target.fields.z))) >= 0.01 )
    goto LABEL_13;
  mDrag = this->fields.mDrag;
  if ( !mDrag )
    goto LABEL_26;
  v11 = mDrag->fields.mMomentum.fields.x;
  v12 = mDrag->fields.mMomentum.fields.y;
  v13 = mDrag->fields.mMomentum.fields.z;
  if ( !byte_4D2A13B )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13B = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13)) >= this->fields.momentumBorder )
  {
LABEL_13:
    v14 = 0;
  }
  else
  {
    x = this->fields.target.fields.x;
    y = this->fields.target.fields.y;
    z = this->fields.target.fields.z;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    v14 = 1;
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans
    || (v32.fields.x = x,
        v32.fields.y = y,
        v32.fields.z = z,
        UnityEngine_Transform__set_localPosition(mTrans, v32, 0),
        (mTrans = (UnityEngine_Transform_o *)this->fields.mPanel) == 0) )
  {
LABEL_26:
    sub_1C93D2C(mTrans, v3);
  }
  v31.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(x - *(float *)&localPosition);
  v31.fields.y = *(float *)&mTrans[14].klass - (float)(y - *((float *)&localPosition + 1));
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v31, v3);
  v15 = (UnityEngine_Object_o *)this->fields.mDrag;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    mTrans = (UnityEngine_Transform_o *)this->fields.mDrag;
    if ( !mTrans )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD))mTrans->klass[1]._1.this_arg.data)(
      mTrans,
      0,
      *(_QWORD *)&mTrans->klass[1]._1.this_arg.bits);
  }
  if ( v14 && this->fields.onFinished )
  {
    SpringPanel_TypeInfo->static_fields->current = (struct SpringPanel_o *)this;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields,
      (int32_t)this,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
        onFinished->fields.method_code,
        onFinished->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)SpringPanel_TypeInfo->static_fields, 0, v23, v24, v25, v26, v27, v28);
      return;
    }
    goto LABEL_26;
  }
}