void __fastcall SyncTransformComponent___ctor(SyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SyncTransformComponent__LateUpdate(SyncTransformComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.isEnable )
    SyncTransformComponent__sync(this, method);
}


void __fastcall SyncTransformComponent__setChild(
        SyncTransformComponent_o *this,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.child = trans;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.child, (int64_t)trans, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.isEnable = 1;
  SyncTransformComponent__sync(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncTransformComponent__sync(SyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *child; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0

  if ( (byte_4BB3C6C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB3C6C = 1;
  }
  child = (UnityEngine_Object_o *)this->fields.child;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(child, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.child;
    if ( !gameObject )
      goto LABEL_20;
    transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_20;
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.child;
    if ( !gameObject )
      goto LABEL_20;
    v10 = UnityEngine_Component__get_transform(gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject
      || (*(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Transform__get_rotation(
                                                (UnityEngine_Transform_o *)gameObject,
                                                0LL),
          !v10)
      || (UnityEngine_Transform__set_rotation(v10, *(UnityEngine_Quaternion_o *)&v11, 0LL),
          (gameObject = (UnityEngine_Component_o *)this->fields.child) == 0LL)
      || (v15 = UnityEngine_Component__get_transform(gameObject, 0LL),
          (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL),
          !v15) )
    {
LABEL_20:
      sub_1C13F80(gameObject, v4);
    }
    UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  }
  else
  {
    this->fields.isEnable = 0;
  }
}