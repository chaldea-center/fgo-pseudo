void __fastcall SyncTransformComponent___ctor(SyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SyncTransformComponent__LateUpdate(SyncTransformComponent_o *this, const MethodInfo *method)
{
  if ( LOBYTE(this->fields.child) )
    SyncTransformComponent__sync(this, method);
}


void __fastcall SyncTransformComponent__setChild(
        SyncTransformComponent_o *this,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this[1].klass = (SyncTransformComponent_c *)trans;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)trans,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  LOBYTE(this->fields.child) = 1;
  SyncTransformComponent__sync(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncTransformComponent__sync(SyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v7; // x0
  int v8; // s0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  int v15; // s0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  int v23; // s0

  if ( (byte_40FD696 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD696 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(klass, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this[1].klass;
    if ( !v4 )
      goto LABEL_21;
    transform = UnityEngine_Component__get_transform(v4, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    v7 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !v7 )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(v7, 0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v8, 0LL);
    v11 = (UnityEngine_Component_o *)this[1].klass;
    if ( !v11 )
      goto LABEL_21;
    v12 = UnityEngine_Component__get_transform(v11, 0LL);
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v13 )
      goto LABEL_21;
    v14 = UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( !v14
      || (*(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Transform__get_rotation(v14, 0LL), !v12)
      || (UnityEngine_Transform__set_rotation(v12, *(UnityEngine_Quaternion_o *)&v15, 0LL),
          (v19 = (UnityEngine_Component_o *)this[1].klass) == 0LL)
      || (v20 = UnityEngine_Component__get_transform(v19, 0LL),
          (v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (v22 = UnityEngine_GameObject__get_transform(v21, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localScale(v22, 0LL), !v20) )
    {
LABEL_21:
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v23, 0LL);
  }
  else
  {
    LOBYTE(this->fields.child) = 0;
  }
}