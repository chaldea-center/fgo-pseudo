void SyncTransformComponent___ctor(SyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SyncTransformComponent__LateUpdate(SyncTransformComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.isEnable )
    SyncTransformComponent__sync(this, method);
}


void SyncTransformComponent__setChild(
        SyncTransformComponent_o *this,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.child = trans;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.child, (int32_t)trans, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.isEnable = 1;
  SyncTransformComponent__sync(this, v9);
}


void SyncTransformComponent__sync(SyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *child; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEDC58 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDC58 = 1;
  }
  child = (UnityEngine_Object_o *)this->fields.child;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(child, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.child;
    if ( !gameObject )
      goto LABEL_20;
    transform = UnityEngine_Component__get_transform(gameObject, 0);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0);
    if ( !gameObject )
      goto LABEL_20;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_position(transform, position, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.child;
    if ( !gameObject )
      goto LABEL_20;
    v7 = UnityEngine_Component__get_transform(gameObject, 0);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0);
    if ( !gameObject
      || (rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)gameObject, 0), !v7)
      || (UnityEngine_Transform__set_rotation(v7, rotation, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.child) == 0)
      || (v8 = UnityEngine_Component__get_transform(gameObject, 0),
          (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0)
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0)) == 0
      || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0), !v8) )
    {
LABEL_20:
      sub_1C7BD40(gameObject, v4);
    }
    UnityEngine_Transform__set_localScale(v8, localScale, 0);
  }
  else
  {
    this->fields.isEnable = 0;
  }
}