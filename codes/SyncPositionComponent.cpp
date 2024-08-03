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
  const MethodInfo *v5; // x1

  this->fields.targetTransform = targetTransform;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetTransform,
    (int32_t)targetTransform,
    (int32_t)method,
    v3);
  SyncPositionComponent__SyncPosition(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncPositionComponent__SyncPosition(SyncPositionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x8
  UnityEngine_Transform_o *v6; // x19
  int v7; // s0

  if ( (byte_4A002DB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A002DB = 1;
  }
  targetTransform = (UnityEngine_Object_o *)this->fields.targetTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v5 = this->fields.targetTransform;
    if ( !v5 || (v6 = transform, *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(v5, 0LL), !v6) )
      sub_1B64324(transform);
    UnityEngine_Transform__set_position(v6, *(UnityEngine_Vector3_o *)&v7, 0LL);
  }
}