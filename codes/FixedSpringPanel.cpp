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
  float v13; // s13
  float32x2_t v14; // d14
  unsigned __int64 v15; // d1
  int v16; // w21
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct SpringPanel_OnFinished_o *onFinished; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

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
  localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_26;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  v34 = UnityEngine_Transform__get_localPosition(mTrans, 0);
  v35 = NGUIMath__SpringLerp_56364876(v34, this->fields.target, this->fields.strength, v6, 0);
  v9 = v35.fields.x;
  v10 = v35.fields.y;
  z = v35.fields.z;
  if ( (float)((float)((float)((float)(v35.fields.x - this->fields.target.fields.x)
                             * (float)(v35.fields.x - this->fields.target.fields.x))
                     + (float)((float)(v35.fields.y - this->fields.target.fields.y)
                             * (float)(v35.fields.y - this->fields.target.fields.y)))
             + (float)((float)(v35.fields.z - this->fields.target.fields.z)
                     * (float)(v35.fields.z - this->fields.target.fields.z))) >= 0.01 )
    goto LABEL_13;
  mDrag = this->fields.mDrag;
  if ( !mDrag )
    goto LABEL_26;
  v13 = mDrag->fields.mMomentum.fields.x;
  v14.n64_u64[0] = *(unsigned __int64 *)&mDrag->fields.mMomentum.fields.y;
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE2 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v15 = vmul_f32(v14, v14).n64_u64[0];
  if ( sqrtf((float)((float)(v13 * v13) + *(float *)&v15) + *((float *)&v15 + 1)) >= this->fields.momentumBorder )
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
    || (v36.fields.x = v9,
        v36.fields.y = v10,
        v36.fields.z = z,
        UnityEngine_Transform__set_localPosition(mTrans, v36, 0),
        (mTrans = (UnityEngine_Transform_o *)this->fields.mPanel) == 0) )
  {
LABEL_26:
    sub_2213CDC(mTrans, v3);
  }
  v32.fields.x = *((float *)&mTrans[13].fields.m_CachedPtr + 1) - (float)(v9 - x);
  v32.fields.y = *(float *)&mTrans[14].klass - (float)(v10 - y);
  UIPanel__set_clipOffset((UIPanel_o *)mTrans, v32, v3);
  v18 = (UnityEngine_Object_o *)this->fields.mDrag;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)SpringPanel_TypeInfo->static_fields,
      (int32_t)this,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      return;
    }
    goto LABEL_26;
  }
}