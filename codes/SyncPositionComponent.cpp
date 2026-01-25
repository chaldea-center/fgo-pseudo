void SyncPositionComponent___ctor(SyncPositionComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// attributes: thunk
void SyncPositionComponent__LateUpdate(SyncPositionComponent_o *this, const MethodInfo *method)
{
  SyncPositionComponent__SyncPosition(this, method);
}


void SyncPositionComponent__SetTarget(
        SyncPositionComponent_o *this,
        UnityEngine_Transform_o *targetTransform,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.targetTransform = targetTransform;
  sub_1C7BA8C(&this->fields.targetTransform, targetTransform);
  SyncPositionComponent__SyncPosition(this, v4);
}


void SyncPositionComponent__SyncPosition(SyncPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Transform_o *v6; // x8
  UnityEngine_Transform_o *v7; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE8AA6 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8AA6 = 1;
  }
  targetTransform = (UnityEngine_Object_o *)this->fields.targetTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetTransform, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v6 = this->fields.targetTransform;
    if ( !v6 || (v7 = transform, position = UnityEngine_Transform__get_position(v6, 0), !v7) )
      sub_1C7BD40(transform, v5);
    UnityEngine_Transform__set_position(v7, position, 0);
  }
}