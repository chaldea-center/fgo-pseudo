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
  const MethodInfo *v4; // x1

  this->fields.targetTransform = targetTransform;
  sub_B5D560(&this->fields.targetTransform);
  SyncPositionComponent__SyncPosition(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncPositionComponent__SyncPosition(SyncPositionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *targetTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x8
  UnityEngine_Transform_o *v9; // x19
  int v10; // s0

  if ( (byte_42E5B09 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B09 = 1;
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
    v8 = this->fields.targetTransform;
    if ( !v8 || (v9 = transform, *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position(v8, 0LL), !v9) )
      sub_B5D69C(transform, v7);
    UnityEngine_Transform__set_position(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
  }
}