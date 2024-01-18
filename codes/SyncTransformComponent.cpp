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
  sub_B2C2F8(
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
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0

  if ( (byte_418B20C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B20C = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(klass, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this[1].klass;
    if ( !gameObject )
      goto LABEL_21;
    transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
    gameObject = (UnityEngine_Component_o *)this[1].klass;
    if ( !gameObject )
      goto LABEL_21;
    v10 = UnityEngine_Component__get_transform(gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject
      || (*(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Transform__get_rotation(
                                                (UnityEngine_Transform_o *)gameObject,
                                                0LL),
          !v10)
      || (UnityEngine_Transform__set_rotation(v10, *(UnityEngine_Quaternion_o *)&v11, 0LL),
          (gameObject = (UnityEngine_Component_o *)this[1].klass) == 0LL)
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
LABEL_21:
      sub_B2C434(gameObject, v4);
    }
    UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  }
  else
  {
    LOBYTE(this->fields.child) = 0;
  }
}