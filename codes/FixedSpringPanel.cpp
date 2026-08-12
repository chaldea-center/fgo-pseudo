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
  float v11; // s13
  float32x2_t v12; // d14
  unsigned __int64 v13; // d1
  int v14; // w21
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct SpringPanel_OnFinished_o *onFinished; // x8
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  unsigned __int64 localPosition; // kr00_8
  UnityEngine_Vector3_o v31; // 0:kr20_12.12
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974F30 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SpringPanel_TypeInfo);
    byte_5974F30 = 1;
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
  v34 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v31 = NGUIMath__SpringLerp_56364876(v34, this->fields.target, this->fields.strength, v6, 0);
  x = v31.fields.x;
  y = v31.fields.y;
  z = v31.fields.z;
  if ( (float)((float)((float)((float)(x - this->fields.target.fields.x) * (float)(x - this->fields.target.fields.x))
                     + (float)((float)(y - this->fields.target.fields.y) * (float)(y - this->fields.target.fields.y)))
             + (float)((float)(z - this->fields.target.fields.z) * (float)(z - this->fields.target.fields.z))) >= 0.01 )
    goto LABEL_13;
  mDrag = this->fields.mDrag;
  if ( !mDrag )
    goto LABEL_26;
  v11 = mDrag->fields.mMomentum.fields.x;
  v12.n64_u64[0] = *(unsigned __int64 *)&mDrag->fields.mMomentum.fields.y;
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE2 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v13 = vmul_f32(v12, v12).n64_u64[0];
  if ( sqrtf((float)((float)(v11 * v11) + *(float *)&v13) + *((float *)&v13 + 1)) >= this->fields.momentumBorder )
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
    || (v33.fields.x = x,
        v33.fields.y = y,
        v33.fields.z = z,
        UnityEngine_Transform__set_localPosition(mTrans, v33, 0),
        (mTrans = (UnityEngine_Transform_o *)this->fields.mPanel) == 0) )
  {
LABEL_26:
    sub_2213CDC(mTrans, v3);
  }
  v32.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(x - *(float *)&localPosition);
  v32.fields.y = *(float *)&mTrans[14].klass - (float)(y - *((float *)&localPosition + 1));
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v32, v3);
  v16 = (UnityEngine_Object_o *)this->fields.mDrag;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)SpringPanel_TypeInfo->static_fields,
      (int32_t)this,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    onFinished = this->fields.onFinished;
    if ( onFinished )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFinished->fields.invoke_impl)(
        onFinished->fields.method_code,
        onFinished->fields.method);
      SpringPanel_TypeInfo->static_fields->current = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)SpringPanel_TypeInfo->static_fields,
        0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      return;
    }
    goto LABEL_26;
  }
}