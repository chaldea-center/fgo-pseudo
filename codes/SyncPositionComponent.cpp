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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.targetTransform = targetTransform;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetTransform,
    (System_Int32_array **)targetTransform,
    (System_String_array **)method,
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
  UnityEngine_Object_o *targetTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x8
  UnityEngine_Transform_o *v6; // x19
  int v7; // s0

  if ( (byte_40FD695 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD695 = 1;
  }
  targetTransform = (UnityEngine_Object_o *)this->fields.targetTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(targetTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v5 = this->fields.targetTransform;
    if ( !v5 || (v6 = transform, *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(v5, 0LL), !v6) )
      sub_B170D4();
    UnityEngine_Transform__set_position(v6, *(UnityEngine_Vector3_o *)&v7, 0LL);
  }
}