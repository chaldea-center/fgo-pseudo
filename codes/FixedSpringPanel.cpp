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
  float x; // s8
  float y; // s9
  float v9; // s10
  float v10; // s11
  float z; // s12
  struct UIScrollView_o *mDrag; // x8
  float v13; // s14
  float v14; // s15
  float v15; // s13
  int v16; // w21
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

  if ( (byte_4C2B8F6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SpringPanel_TypeInfo);
    byte_4C2B8F6 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  v6 = deltaTime;
  localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  v25 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v26 = NGUIMath__SpringLerp_49198828(v25, this->fields.target, this->fields.strength, v6, 0);
  v9 = v26.fields.x;
  v10 = v26.fields.y;
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
  v13 = mDrag->fields.mMomentum.fields.x;
  v14 = mDrag->fields.mMomentum.fields.y;
  v15 = mDrag->fields.mMomentum.fields.z;
  if ( !byte_4C20DA3 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA3 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf((float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v15 * v15)) >= this->fields.momentumBorder )
  {
LABEL_13:
    v16 = 0;
  }
  else
  {
    v9 = this->fields.target.fields.x;
    v10 = this->fields.target.fields.y;
    z = this->fields.target.fields.z;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    v16 = 1;
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans
    || (v27.fields.x = v9,
        v27.fields.y = v10,
        v27.fields.z = z,
        UnityEngine_Transform__set_localPosition(mTrans, v27, 0),
        (mTrans = (UnityEngine_Transform_o *)this->fields.mPanel) == 0) )
  {
LABEL_26:
    sub_1C2D6EC(mTrans, v3);
  }
  v23.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(v9 - x);
  v23.fields.y = *(float *)&mTrans[14].klass - (float)(v10 - y);
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v23, v3);
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
  if ( v16 && this->fields.onFinished )
  {
    SpringPanel_TypeInfo->static_fields->current = (struct SpringPanel_o *)this;
    sub_1C2D434((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, (int32_t)this, v18, v19);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
        onFinished->fields.method_code,
        onFinished->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_1C2D434((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, 0, v21, v22);
      return;
    }
    goto LABEL_26;
  }
}