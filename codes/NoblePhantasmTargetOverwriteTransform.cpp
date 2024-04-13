void __fastcall NoblePhantasmTargetOverwriteTransform___ctor(
        NoblePhantasmTargetOverwriteTransform_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *klass; // x22
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v10; // x22
  UnityEngine_Transform_o *v11; // x23
  int32_t LimitCount; // w0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *v20; // x22
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Transform_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E919B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)targetActor, (_DWORD)method, v3);
    byte_42E919B = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                  *(System_String_o **)&this->fields.originalPosition.fields.x,
                                                  0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      goto LABEL_16;
    if ( !targetActor )
      goto LABEL_17;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(IsNullOrEmpty, 0LL);
    v10 = *(System_String_o **)&this->fields.originalPosition.fields.x;
    v11 = transform;
    LimitCount = BattleActorControl__getLimitCount(targetActor, 0LL);
    NodeFromLvName = TransformHelper__getNodeFromLvName(v11, v10, LimitCount, 1, 0LL);
    this[1].klass = (NoblePhantasmTargetOverwriteTransform_c *)NodeFromLvName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this[1],
      (System_Int32_array **)NodeFromLvName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (UnityEngine_Object_o *)this[1].klass;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0LL);
    if ( !IsNullOrEmpty )
LABEL_17:
      sub_B5D69C(IsNullOrEmpty, v8);
    v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(IsNullOrEmpty, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v20, v21, 0LL) )
    {
LABEL_16:
      v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this[1].klass = (NoblePhantasmTargetOverwriteTransform_c *)v22;
      sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    }
  }
}


void __fastcall NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Transform_o *klass; // x0

  NoblePhantasmTargetOverwriteTransform__SaveOriginal(this, targetActor, method);
  klass = (UnityEngine_Transform_o *)this[1].klass;
  if ( !klass
    || (UnityEngine_Transform__set_localPosition(
          klass,
          *(UnityEngine_Vector3_o *)&this->fields.overwritePosition.fields.y,
          0LL),
        (klass = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
    sub_B5D69C(klass, v4);
  }
  UnityEngine_Transform__set_localRotation(
    klass,
    *(UnityEngine_Quaternion_o *)&this->fields.overwriteRotation.fields.y,
    0LL);
}


void __fastcall NoblePhantasmTargetOverwriteTransform__ResetTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Transform_o *klass; // x0

  NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(this, targetActor, method);
  klass = (UnityEngine_Transform_o *)this[1].klass;
  if ( !klass
    || (UnityEngine_Transform__set_localPosition(
          klass,
          *(UnityEngine_Vector3_o *)&this->fields.originalPosition.fields.z,
          0LL),
        (klass = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
    sub_B5D69C(klass, v4);
  }
  UnityEngine_Transform__set_localRotation(
    klass,
    *(UnityEngine_Quaternion_o *)&this->fields.originalRotation.fields.z,
    0LL);
}


void __fastcall NoblePhantasmTargetOverwriteTransform__SaveOriginal(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Transform_o *klass; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(this, targetActor, method);
  klass = (UnityEngine_Transform_o *)this[1].klass;
  if ( !klass
    || (localPosition = UnityEngine_Transform__get_localPosition(klass, 0LL),
        klass = (UnityEngine_Transform_o *)this[1].klass,
        *(UnityEngine_Vector3_o *)&this->fields.originalPosition.fields.z = localPosition,
        !klass) )
  {
    sub_B5D69C(klass, v4);
  }
  *(UnityEngine_Quaternion_o *)&this->fields.originalRotation.fields.z = UnityEngine_Transform__get_localRotation(
                                                                           klass,
                                                                           0LL);
}