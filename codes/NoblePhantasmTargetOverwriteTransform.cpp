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
  UnityEngine_Object_o *targetNode; // x22
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x0
  System_String_o *targetNodeName; // x22
  UnityEngine_Transform_o *v10; // x23
  int32_t LimitCount; // w0
  struct UnityEngine_Transform_o *NodeFromLvName; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *v16; // x21
  struct UnityEngine_Transform_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B050A5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, targetActor);
    byte_4B050A5 = 1;
  }
  targetNode = (UnityEngine_Object_o *)this->fields.targetNode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetNode, 0LL, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(this->fields.targetNodeName, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      goto LABEL_14;
    if ( !targetActor )
      goto LABEL_15;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(IsNullOrEmpty, 0LL);
    targetNodeName = this->fields.targetNodeName;
    v10 = transform;
    LimitCount = BattleActorControl__getLimitCount(targetActor, 0LL);
    NodeFromLvName = TransformHelper__getNodeFromLvName(v10, targetNodeName, LimitCount, 1, 0LL);
    this->fields.targetNode = NodeFromLvName;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetNode, (int32_t)NodeFromLvName, v13, v14);
    v15 = (UnityEngine_Object_o *)this->fields.targetNode;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0LL);
    if ( !IsNullOrEmpty )
LABEL_15:
      sub_1BC3264(IsNullOrEmpty, v7);
    v16 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(IsNullOrEmpty, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v15, v16, 0LL) )
    {
LABEL_14:
      v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this->fields.targetNode = v17;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetNode, (int32_t)v17, v18, v19);
    }
  }
}


bool __fastcall NoblePhantasmTargetOverwriteTransform__IsSettingCheck(
        NoblePhantasmTargetOverwriteTransform_o *this,
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *overwriteTransformInfo,
        const MethodInfo *method)
{
  int32_t treasureDeviceRangeSet; // w8
  int32_t functionTargetTypeSet; // w8

  treasureDeviceRangeSet = this->fields.treasureDeviceRangeSet;
  if ( !treasureDeviceRangeSet )
    goto LABEL_4;
  if ( !overwriteTransformInfo )
    goto LABEL_9;
  if ( treasureDeviceRangeSet != overwriteTransformInfo->fields._FunctionMaxTargetType_k__BackingField )
    return 0;
LABEL_4:
  functionTargetTypeSet = this->fields.functionTargetTypeSet;
  if ( functionTargetTypeSet )
  {
    if ( overwriteTransformInfo )
      return functionTargetTypeSet == overwriteTransformInfo->fields._FunctionTargetType_k__BackingField;
LABEL_9:
    sub_1BC3264(this, overwriteTransformInfo);
  }
  return 1;
}


void __fastcall NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *overwriteTransformInfo,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *targetNode; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  targetNode = (UnityEngine_Transform_o *)NoblePhantasmTargetOverwriteTransform__IsSettingCheck(
                                            this,
                                            overwriteTransformInfo,
                                            method);
  if ( ((unsigned __int8)targetNode & 1) != 0 )
  {
    if ( !overwriteTransformInfo
      || (NoblePhantasmTargetOverwriteTransform__SaveOriginal(
            this,
            overwriteTransformInfo->fields._TargetActor_k__BackingField,
            v7),
          (targetNode = this->fields.targetNode) == 0LL)
      || (UnityEngine_Transform__set_localPosition(targetNode, this->fields.overwritePosition, 0LL),
          (targetNode = this->fields.targetNode) == 0LL) )
    {
      sub_1BC3264(targetNode, v6);
    }
    UnityEngine_Transform__set_localRotation(targetNode, this->fields.overwriteRotation, 0LL);
  }
}


void __fastcall NoblePhantasmTargetOverwriteTransform__ResetTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *overwriteTransformInfo,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *targetNode; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  targetNode = (UnityEngine_Transform_o *)NoblePhantasmTargetOverwriteTransform__IsSettingCheck(
                                            this,
                                            overwriteTransformInfo,
                                            method);
  if ( ((unsigned __int8)targetNode & 1) != 0 )
  {
    if ( !overwriteTransformInfo
      || (NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(
            this,
            overwriteTransformInfo->fields._TargetActor_k__BackingField,
            v7),
          (targetNode = this->fields.targetNode) == 0LL)
      || (UnityEngine_Transform__set_localPosition(targetNode, this->fields.originalPosition, 0LL),
          (targetNode = this->fields.targetNode) == 0LL) )
    {
      sub_1BC3264(targetNode, v6);
    }
    UnityEngine_Transform__set_localRotation(targetNode, this->fields.originalRotation, 0LL);
  }
}


void __fastcall NoblePhantasmTargetOverwriteTransform__SaveOriginal(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Transform_o *targetNode; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(this, targetActor, method);
  targetNode = this->fields.targetNode;
  if ( !targetNode
    || (localPosition = UnityEngine_Transform__get_localPosition(targetNode, 0LL),
        targetNode = this->fields.targetNode,
        this->fields.originalPosition = localPosition,
        !targetNode) )
  {
    sub_1BC3264(targetNode, v4);
  }
  this->fields.originalRotation = UnityEngine_Transform__get_localRotation(targetNode, 0LL);
}


void __fastcall NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__get_FunctionMaxTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FunctionMaxTargetType_k__BackingField;
}


int32_t __fastcall NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__get_FunctionTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FunctionTargetType_k__BackingField;
}


BattleActorControl_o *__fastcall NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__get_TargetActor(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetActor_k__BackingField;
}


void __fastcall NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__set_FunctionMaxTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FunctionMaxTargetType_k__BackingField = value;
}


void __fastcall NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__set_FunctionTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FunctionTargetType_k__BackingField = value;
}


void __fastcall NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__set_TargetActor(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        BattleActorControl_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TargetActor_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}