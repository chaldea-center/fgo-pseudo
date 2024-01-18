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
  sub_B2C2F8(
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
  __int64 v5; // x1
  UnityEngine_Transform_o *v6; // x8
  UnityEngine_Transform_o *v7; // x19
  int v8; // s0

  if ( (byte_418B20B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B20B = 1;
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
    v6 = this->fields.targetTransform;
    if ( !v6 || (v7 = transform, *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(v6, 0LL), !v7) )
      sub_B2C434(transform, v5);
    UnityEngine_Transform__set_position(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  }
}