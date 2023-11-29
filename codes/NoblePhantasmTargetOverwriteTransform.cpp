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
  UnityEngine_Object_o *klass; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v8; // x22
  UnityEngine_Transform_o *v9; // x23
  int32_t LimitCount; // w0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *v18; // x22
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Transform_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F9341 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, targetActor);
    byte_40F9341 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.originalPosition.fields.x, 0LL) )
      goto LABEL_16;
    if ( !targetActor )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    v8 = *(System_String_o **)&this->fields.originalPosition.fields.x;
    v9 = transform;
    LimitCount = BattleActorControl__getLimitCount(targetActor, 0LL);
    NodeFromLvName = TransformHelper__getNodeFromLvName(v9, v8, LimitCount, 1, 0LL);
    this[1].klass = (NoblePhantasmTargetOverwriteTransform_c *)NodeFromLvName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this[1],
      (System_Int32_array **)NodeFromLvName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v18 = (UnityEngine_Object_o *)this[1].klass;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0LL);
    if ( !v19 )
LABEL_17:
      sub_B170D4();
    v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v18, v20, 0LL) )
    {
LABEL_16:
      v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this[1].klass = (NoblePhantasmTargetOverwriteTransform_c *)v21;
      sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
    }
  }
}


void __fastcall NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *klass; // x0
  UnityEngine_Transform_o *v5; // x0

  NoblePhantasmTargetOverwriteTransform__SaveOriginal(this, targetActor, method);
  klass = (UnityEngine_Transform_o *)this[1].klass;
  if ( !klass
    || (UnityEngine_Transform__set_localPosition(
          klass,
          *(UnityEngine_Vector3_o *)&this->fields.overwritePosition.fields.y,
          0LL),
        (v5 = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localRotation(
    v5,
    *(UnityEngine_Quaternion_o *)&this->fields.overwriteRotation.fields.y,
    0LL);
}


void __fastcall NoblePhantasmTargetOverwriteTransform__ResetTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *klass; // x0
  UnityEngine_Transform_o *v5; // x0

  NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(this, targetActor, method);
  klass = (UnityEngine_Transform_o *)this[1].klass;
  if ( !klass
    || (UnityEngine_Transform__set_localPosition(
          klass,
          *(UnityEngine_Vector3_o *)&this->fields.originalPosition.fields.z,
          0LL),
        (v5 = (UnityEngine_Transform_o *)this[1].klass) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localRotation(
    v5,
    *(UnityEngine_Quaternion_o *)&this->fields.originalRotation.fields.z,
    0LL);
}


void __fastcall NoblePhantasmTargetOverwriteTransform__SaveOriginal(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *klass; // x0
  UnityEngine_Transform_o *v5; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(this, targetActor, method);
  klass = (UnityEngine_Transform_o *)this[1].klass;
  if ( !klass
    || (localPosition = UnityEngine_Transform__get_localPosition(klass, 0LL),
        v5 = (UnityEngine_Transform_o *)this[1].klass,
        *(UnityEngine_Vector3_o *)&this->fields.originalPosition.fields.z = localPosition,
        !v5) )
  {
    sub_B170D4();
  }
  *(UnityEngine_Quaternion_o *)&this->fields.originalRotation.fields.z = UnityEngine_Transform__get_localRotation(
                                                                           v5,
                                                                           0LL);
}