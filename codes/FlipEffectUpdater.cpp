void __fastcall FlipEffectUpdater___ctor(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall FlipEffectUpdater__LateUpdate(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  FlipEffectUpdater__OnLateUpdate(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FlipEffectUpdater__OnLateUpdate(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *ConnectTarget; // x19
  UnityEngine_Transform_o **p_mTrans; // x19
  UnityEngine_Object_o *mTrans; // x21
  __int64 v6; // x1
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  UnityEngine_Transform_o *v24; // x20
  int v25; // s0

  if ( (byte_41869C7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41869C7 = 1;
  }
  ConnectTarget = (UnityEngine_Object_o *)this->fields.ConnectTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ConnectTarget, 0LL, 0LL) )
  {
    p_mTrans = &this->fields.mTrans;
    mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mTrans, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this->fields.mTrans = transform;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.mTrans,
        (System_Int32_array **)transform,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    parent = *p_mTrans;
    if ( !*p_mTrans )
      goto LABEL_20;
    parent = UnityEngine_Transform__get_parent(parent, 0LL);
    if ( !*p_mTrans )
      goto LABEL_20;
    v15 = parent;
    UnityEngine_Transform__set_parent(*p_mTrans, this->fields.ConnectTarget, 0LL);
    v16 = this->fields.mTrans;
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v16 )
      goto LABEL_20;
    UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
    v20 = *p_mTrans;
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v20
      || (UnityEngine_Transform__set_localEulerAngles(v20, *(UnityEngine_Vector3_o *)&v21, 0LL),
          v24 = *p_mTrans,
          *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL),
          !v24)
      || (UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL), (parent = *p_mTrans) == 0LL) )
    {
LABEL_20:
      sub_B2C434(parent, v6);
    }
    UnityEngine_Transform__set_parent(parent, v15, 0LL);
  }
}


void __fastcall FlipEffectUpdater__Start(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.mTrans = transform;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}