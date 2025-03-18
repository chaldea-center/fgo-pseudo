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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x21

  if ( (byte_4C213DD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C213DD = 1;
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
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mTrans, (int64_t)transform, v8, v9, v10, v11, v12, v13);
    }
    parent = *p_mTrans;
    if ( !*p_mTrans )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent(parent, 0LL);
    if ( !*p_mTrans )
      goto LABEL_24;
    v15 = parent;
    UnityEngine_Transform__set_parent(*p_mTrans, this->fields.ConnectTarget, 0LL);
    v16 = this->fields.mTrans;
    if ( !byte_4C1C511 )
    {
      parent = (UnityEngine_Transform_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4C1C511 = 1;
    }
    if ( !v16 )
      goto LABEL_24;
    UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v17 = *p_mTrans;
    if ( !byte_4C1C511 )
    {
      parent = (UnityEngine_Transform_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4C1C511 = 1;
    }
    if ( !v17 )
      goto LABEL_24;
    UnityEngine_Transform__set_localEulerAngles(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v18 = *p_mTrans;
    if ( !byte_4C1C516 )
    {
      parent = (UnityEngine_Transform_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4C1C516 = 1;
    }
    if ( !v18
      || (UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (parent = *p_mTrans) == 0LL) )
    {
LABEL_24:
      sub_1C3B9C0(parent, v6);
    }
    UnityEngine_Transform__set_parent(parent, v15, 0LL);
  }
}


void __fastcall FlipEffectUpdater__Start(FlipEffectUpdater_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.mTrans = transform;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mTrans, (int64_t)transform, v4, v5, v6, v7, v8, v9);
}