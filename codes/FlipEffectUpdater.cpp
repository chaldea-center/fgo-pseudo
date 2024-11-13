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
  __int64 v2; // x2
  UnityEngine_Object_o *ConnectTarget; // x19
  __int64 v5; // x1
  UnityEngine_Transform_o **p_mTrans; // x19
  UnityEngine_Object_o *mTrans; // x20
  __int64 v8; // x1
  struct UnityEngine_Transform_o *transform; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v17; // x20
  __int64 v18; // x2
  UnityEngine_Transform_o *v19; // x21
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x21
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x21

  if ( (byte_4B15690 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15690 = 1;
  }
  ConnectTarget = (UnityEngine_Object_o *)this->fields.ConnectTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ConnectTarget, 0LL, 0LL) )
  {
    p_mTrans = &this->fields.mTrans;
    mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality(mTrans, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this->fields.mTrans = transform;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mTrans, (int64_t)transform, v10, v11, v12, v13, v14, v15);
    }
    parent = *p_mTrans;
    if ( !*p_mTrans )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent(parent, 0LL);
    if ( !*p_mTrans )
      goto LABEL_24;
    v17 = parent;
    UnityEngine_Transform__set_parent(*p_mTrans, this->fields.ConnectTarget, 0LL);
    v19 = this->fields.mTrans;
    if ( !byte_4B109C1 )
    {
      parent = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v18);
      byte_4B109C1 = 1;
    }
    if ( !v19 )
      goto LABEL_24;
    UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v21 = *p_mTrans;
    if ( !byte_4B109C1 )
    {
      parent = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v20);
      byte_4B109C1 = 1;
    }
    if ( !v21 )
      goto LABEL_24;
    UnityEngine_Transform__set_localEulerAngles(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v23 = *p_mTrans;
    if ( !byte_4B109C6 )
    {
      parent = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v22);
      byte_4B109C6 = 1;
    }
    if ( !v23
      || (UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (parent = *p_mTrans) == 0LL) )
    {
LABEL_24:
      sub_1BCAA3C(parent, v8);
    }
    UnityEngine_Transform__set_parent(parent, v17, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mTrans, (int64_t)transform, v4, v5, v6, v7, v8, v9);
}