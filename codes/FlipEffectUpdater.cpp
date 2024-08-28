void __fastcall FlipEffectUpdater___ctor(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall FlipEffectUpdater__LateUpdate(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  FlipEffectUpdater__OnLateUpdate(this, method);
}


void __fastcall FlipEffectUpdater__OnLateUpdate(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *ConnectTarget; // x19
  UnityEngine_Transform_o **p_mTrans; // x19
  UnityEngine_Object_o *mTrans; // x20
  __int64 v6; // x1
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x21

  if ( (byte_4A08135 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A08135 = 1;
  }
  ConnectTarget = (UnityEngine_Object_o *)this->fields.ConnectTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ConnectTarget, 0LL, 0LL) )
  {
    p_mTrans = &this->fields.mTrans;
    mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mTrans, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this->fields.mTrans = transform;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.mTrans, (int32_t)transform, v8, v9);
    }
    parent = *p_mTrans;
    if ( !*p_mTrans )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent(parent, 0LL);
    if ( !*p_mTrans )
      goto LABEL_24;
    v11 = parent;
    UnityEngine_Transform__set_parent(*p_mTrans, this->fields.ConnectTarget, 0LL);
    v12 = this->fields.mTrans;
    if ( !byte_4A03901 )
    {
      parent = (UnityEngine_Transform_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4A03901 = 1;
    }
    if ( !v12 )
      goto LABEL_24;
    UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v13 = *p_mTrans;
    if ( !byte_4A03901 )
    {
      parent = (UnityEngine_Transform_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4A03901 = 1;
    }
    if ( !v13 )
      goto LABEL_24;
    UnityEngine_Transform__set_localEulerAngles(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v14 = *p_mTrans;
    if ( !byte_4A03906 )
    {
      parent = (UnityEngine_Transform_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4A03906 = 1;
    }
    if ( !v14
      || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (parent = *p_mTrans) == 0LL) )
    {
LABEL_24:
      sub_1B68930(parent, v6);
    }
    UnityEngine_Transform__set_parent(parent, v11, 0LL);
  }
}


void __fastcall FlipEffectUpdater__Start(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.mTrans = transform;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
}