void NoblePhantasmTargetOverwriteTransform___ctor(
        NoblePhantasmTargetOverwriteTransform_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetNode; // x22
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *targetNodeName; // x22
  UnityEngine_Transform_o *v9; // x23
  int32_t LimitCount; // w0
  struct UnityEngine_Transform_o *NodeFromLvName; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_Transform_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C3AD55 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD55 = 1;
  }
  targetNode = (UnityEngine_Object_o *)this->fields.targetNode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetNode, 0, 0) )
  {
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(this->fields.targetNodeName, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      goto LABEL_14;
    if ( !targetActor )
      goto LABEL_15;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(IsNullOrEmpty, 0);
    targetNodeName = this->fields.targetNodeName;
    v9 = transform;
    LimitCount = BattleActorControl__getLimitCount(targetActor, 0);
    NodeFromLvName = TransformHelper__getNodeFromLvName(v9, targetNodeName, LimitCount, 1, 0);
    this->fields.targetNode = NodeFromLvName;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetNode, (int32_t)NodeFromLvName, v12, v13);
    v14 = (UnityEngine_Object_o *)this->fields.targetNode;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0);
    if ( !IsNullOrEmpty )
LABEL_15:
      sub_1C32E7C(IsNullOrEmpty);
    v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(IsNullOrEmpty, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v14, v15, 0) )
    {
LABEL_14:
      v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this->fields.targetNode = v16;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetNode, (int32_t)v16, v17, v18);
    }
  }
}


bool NoblePhantasmTargetOverwriteTransform__IsSettingCheck(
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
    sub_1C32E7C(this);
  }
  return 1;
}


void NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *overwriteTransformInfo,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *targetNode; // x0
  const MethodInfo *v6; // x2

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
            v6),
          (targetNode = this->fields.targetNode) == 0)
      || (UnityEngine_Transform__set_localPosition(targetNode, this->fields.overwritePosition, 0),
          (targetNode = this->fields.targetNode) == 0) )
    {
      sub_1C32E7C(targetNode);
    }
    UnityEngine_Transform__set_localRotation(targetNode, this->fields.overwriteRotation, 0);
  }
}


void NoblePhantasmTargetOverwriteTransform__ResetTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *overwriteTransformInfo,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *targetNode; // x0
  const MethodInfo *v6; // x2

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
            v6),
          (targetNode = this->fields.targetNode) == 0)
      || (UnityEngine_Transform__set_localPosition(targetNode, this->fields.originalPosition, 0),
          (targetNode = this->fields.targetNode) == 0) )
    {
      sub_1C32E7C(targetNode);
    }
    UnityEngine_Transform__set_localRotation(targetNode, this->fields.originalRotation, 0);
  }
}


void NoblePhantasmTargetOverwriteTransform__SaveOriginal(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *targetNode; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(this, targetActor, method);
  targetNode = this->fields.targetNode;
  if ( !targetNode
    || (localPosition = UnityEngine_Transform__get_localPosition(targetNode, 0),
        targetNode = this->fields.targetNode,
        this->fields.originalPosition = localPosition,
        !targetNode) )
  {
    sub_1C32E7C(targetNode);
  }
  this->fields.originalRotation = UnityEngine_Transform__get_localRotation(targetNode, 0);
}


void NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__get_FunctionMaxTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FunctionMaxTargetType_k__BackingField;
}


int32_t NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__get_FunctionTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FunctionTargetType_k__BackingField;
}


BattleActorControl_o *NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__get_TargetActor(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetActor_k__BackingField;
}


void NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__set_FunctionMaxTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FunctionMaxTargetType_k__BackingField = value;
}


void NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__set_FunctionTargetType(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FunctionTargetType_k__BackingField = value;
}


void NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo__set_TargetActor(
        NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *this,
        BattleActorControl_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TargetActor_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}