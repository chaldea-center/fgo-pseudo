void __fastcall FixedSpringPanel___ctor(FixedSpringPanel_o *this, const MethodInfo *method)
{
  this->fields.momentumBorder = 0.0001;
  SpringPanel___ctor((SpringPanel_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FixedSpringPanel__AdvanceTowardsPosition(FixedSpringPanel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  float deltaTime; // s0
  UnityEngine_Transform_o *mTrans; // x0
  float v7; // s10
  float v8; // s0
  float v9; // s1
  float v10; // s8
  float v11; // s9
  float x; // s10
  float y; // s11
  float z; // s12
  struct UIScrollView_o *mDrag; // x8
  float v16; // s14
  float v17; // s15
  float v18; // s13
  int v19; // w21
  UnityEngine_Object_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct SpringPanel_OnFinished_o *onFinished; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B20A8B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&SpringPanel_TypeInfo, v3);
    byte_4B20A8B = 1;
  }
  deltaTime = RealTime__get_deltaTime(0LL);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  v7 = deltaTime;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition(mTrans, 0LL);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  v10 = v8;
  v11 = v9;
  localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0LL);
  v28 = NGUIMath__SpringLerp_48494800(localPosition, this->fields.target, this->fields.strength, v7, 0LL);
  x = v28.fields.x;
  y = v28.fields.y;
  z = v28.fields.z;
  if ( (float)((float)((float)((float)(v28.fields.x - this->fields.target.fields.x)
                             * (float)(v28.fields.x - this->fields.target.fields.x))
                     + (float)((float)(v28.fields.y - this->fields.target.fields.y)
                             * (float)(v28.fields.y - this->fields.target.fields.y)))
             + (float)((float)(v28.fields.z - this->fields.target.fields.z)
                     * (float)(v28.fields.z - this->fields.target.fields.z))) >= 0.01 )
    goto LABEL_13;
  mDrag = this->fields.mDrag;
  if ( !mDrag )
    goto LABEL_26;
  v16 = mDrag->fields.mMomentum.fields.x;
  v17 = mDrag->fields.mMomentum.fields.y;
  v18 = mDrag->fields.mMomentum.fields.z;
  if ( !byte_4B16193 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v4);
    byte_4B16193 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v18 * v18)) >= this->fields.momentumBorder )
  {
LABEL_13:
    v19 = 0;
  }
  else
  {
    x = this->fields.target.fields.x;
    y = this->fields.target.fields.y;
    z = this->fields.target.fields.z;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
    v19 = 1;
  }
  mTrans = this->fields.mTrans;
  if ( !mTrans
    || (v29.fields.x = x,
        v29.fields.y = y,
        v29.fields.z = z,
        UnityEngine_Transform__set_localPosition(mTrans, v29, 0LL),
        (mTrans = (UnityEngine_Transform_o *)this->fields.mPanel) == 0LL) )
  {
LABEL_26:
    sub_1BCB254(mTrans, v4);
  }
  v26.fields.x = *((float *)&mTrans[13].fields + 1) - (float)(x - v10);
  v26.fields.y = *(float *)&mTrans[14].klass - (float)(y - v11);
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v26, v4);
  v20 = (UnityEngine_Object_o *)this->fields.mDrag;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    mTrans = (UnityEngine_Transform_o *)this->fields.mDrag;
    if ( !mTrans )
      goto LABEL_26;
    (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, Il2CppClass *))&mTrans->klass[1]._1.this_arg.bits)(
      mTrans,
      0LL,
      mTrans->klass[1]._1.element_class);
  }
  if ( v19 && this->fields.onFinished )
  {
    SpringPanel_TypeInfo->static_fields->current = (struct SpringPanel_o *)this;
    sub_1BCAF9C((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, (int32_t)this, v21, v22);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onFinished->fields.m_target)(
        onFinished->fields.original_method_info,
        *(_QWORD *)&onFinished->fields.extra_arg);
      SpringPanel_TypeInfo->static_fields->current = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)SpringPanel_TypeInfo->static_fields, 0, v24, v25);
      return;
    }
    goto LABEL_26;
  }
}