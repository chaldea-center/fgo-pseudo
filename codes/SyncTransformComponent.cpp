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
  const MethodInfo *v4; // x1

  this[1].klass = (SyncTransformComponent_c *)trans;
  sub_B0D840(&this[1], trans);
  LOBYTE(this->fields.child) = 1;
  SyncTransformComponent__sync(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncTransformComponent__sync(SyncTransformComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0
  UnityEngine_Transform_o *v9; // x20
  int v10; // s0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0

  if ( (byte_4211914 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211914 = 1;
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
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
    gameObject = (UnityEngine_Component_o *)this[1].klass;
    if ( !gameObject )
      goto LABEL_21;
    v9 = UnityEngine_Component__get_transform(gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject
      || (*(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Transform__get_rotation(
                                                (UnityEngine_Transform_o *)gameObject,
                                                0LL),
          !v9)
      || (UnityEngine_Transform__set_rotation(v9, *(UnityEngine_Quaternion_o *)&v10, 0LL),
          (gameObject = (UnityEngine_Component_o *)this[1].klass) == 0LL)
      || (v14 = UnityEngine_Component__get_transform(gameObject, 0LL),
          (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL)
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)gameObject,
                                             0LL),
          !v14) )
    {
LABEL_21:
      sub_B0D97C(gameObject);
    }
    UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  }
  else
  {
    LOBYTE(this->fields.child) = 0;
  }
}