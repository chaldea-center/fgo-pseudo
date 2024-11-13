void __fastcall SyncPositionComponent___ctor(SyncPositionComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall SyncPositionComponent__LateUpdate(SyncPositionComponent_o *this, const MethodInfo *method)
{
  SyncPositionComponent__SyncPosition(this, method);
}


void __fastcall SyncPositionComponent__SetTarget(
        SyncPositionComponent_o *this,
        UnityEngine_Transform_o *targetTransform,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.targetTransform = targetTransform;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetTransform,
    (int64_t)targetTransform,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SyncPositionComponent__SyncPosition(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncPositionComponent__SyncPosition(SyncPositionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x8
  UnityEngine_Transform_o *v8; // x19
  int v9; // s0

  if ( (byte_4B1A2BA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A2BA = 1;
  }
  targetTransform = (UnityEngine_Object_o *)this->fields.targetTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(targetTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v7 = this->fields.targetTransform;
    if ( !v7 || (v8 = transform, *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(v7, 0LL), !v8) )
      sub_1BCAA3C(transform, v6);
    UnityEngine_Transform__set_position(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
  }
}