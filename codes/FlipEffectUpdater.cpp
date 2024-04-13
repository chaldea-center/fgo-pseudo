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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *ConnectTarget; // x19
  UnityEngine_Transform_o **p_mTrans; // x19
  UnityEngine_Object_o *mTrans; // x21
  __int64 v8; // x1
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0

  if ( (byte_42E69FA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E69FA = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.mTrans,
        (System_Int32_array **)transform,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    parent = *p_mTrans;
    if ( !*p_mTrans )
      goto LABEL_20;
    parent = UnityEngine_Transform__get_parent(parent, 0LL);
    if ( !*p_mTrans )
      goto LABEL_20;
    v17 = parent;
    UnityEngine_Transform__set_parent(*p_mTrans, this->fields.ConnectTarget, 0LL);
    v18 = this->fields.mTrans;
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v18 )
      goto LABEL_20;
    UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
    v22 = *p_mTrans;
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v22
      || (UnityEngine_Transform__set_localEulerAngles(v22, *(UnityEngine_Vector3_o *)&v23, 0LL),
          v26 = *p_mTrans,
          *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL),
          !v26)
      || (UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL), (parent = *p_mTrans) == 0LL) )
    {
LABEL_20:
      sub_B5D69C(parent, v8);
    }
    UnityEngine_Transform__set_parent(parent, v17, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}