void FixedSpringPanel___ctor(FixedSpringPanel_o *this, const MethodInfo *method)
{
  this->fields.momentumBorder = 0.0001;
  SpringPanel___ctor((SpringPanel_o *)this, 0);
}


void FixedSpringPanel__AdvanceTowardsPosition(FixedSpringPanel_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  UnityEngine_Transform_o *mTrans; // x0
  float v5; // s10
  float x; // s8
  float y; // s9
  float v8; // s10
  float v9; // s11
  float z; // s12
  struct UIScrollView_o *mDrag; // x8
  float v12; // s14
  float v13; // s15
  float v14; // s13
  int v15; // w21
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct SpringPanel_OnFinished_o *onFinished; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BF79 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SpringPanel_TypeInfo);
    byte_4C3BF79 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  v5 = deltaTime;
  localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  v25 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v26 = NGUIMath__SpringLerp_49258892(v25, this->fields.target, this->fields.strength, v5, 0);
  v8 = v26.fields.x;
  v9 = v26.fields.y;
  z = v26.fields.z;
  if ( (float)((float)((float)((float)(v26.fields.x - this->fields.target.fields.x)
                             * (float)(v26.fields.x - this->fields.target.fields.x))
                     + (float)((float)(v26.fields.y - this->fields.target.fields.y)
                             * (float)(v26.fields.y - this->fields.target.fields.y)))
             + (float)((float)(v26.fields.z - this->fields.target.fields.z)
                     * (float)(v26.fields.z - this->fields.target.fields.z))) >= 0.01 )
    goto LABEL_13;
  mDrag = this->fields.mDrag;
  if ( !mDrag )
    goto LABEL_26;
  v12 = mDrag->fields.mMomentum.fields.x;
  v13 = mDrag->fields.mMomentum.fields.y;
  v14 = mDrag->fields.mMomentum.fields.z;
  if ( !byte_4C313D3 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D3 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14)) >= this->fields.momentumBorder )
  {
LABEL_13:
    v15 = 0;
  }
  else
  {
    v8 = this->fields.target.fields.x;
    v9 = this->fields.target.fields.y;
    z = this->fields.target.fields.z;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    v15 = 1;
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans
    || (v27.fields.x = v8,
        v27.fields.y = v9,
        v27.fields.z = z,
        UnityEngine_Transform__set_localPosition(mTrans, v27, 0),
        (mTrans = (UnityEngine_Transform_o *)this->fields.mPanel) == 0) )
  {
LABEL_26:
    sub_1C32E7C(mTrans);
  }
  v23.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(v8 - x);
  v23.fields.y = *(float *)&mTrans[14].klass - (float)(v9 - y);
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v23, v16);
  v17 = (UnityEngine_Object_o *)this->fields.mDrag;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
  {
    mTrans = (UnityEngine_Transform_o *)this->fields.mDrag;
    if ( !mTrans )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_Transform_o *, _QWORD, _QWORD))mTrans->klass[1]._1.this_arg.data)(
      mTrans,
      0,
      *(_QWORD *)&mTrans->klass[1]._1.this_arg.bits);
  }
  if ( v15 && this->fields.onFinished )
  {
    SpringPanel_TypeInfo->static_fields->current = (struct SpringPanel_o *)this;
    sub_1C32BC4((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, (int32_t)this, v18, v19);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
        onFinished->fields.method_code,
        onFinished->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, 0, v21, v22);
      return;
    }
    goto LABEL_26;
  }
}