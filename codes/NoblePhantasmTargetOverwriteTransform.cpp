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
  const MethodInfo *v11; // x1
  int32_t LimitCount; // w0
  struct UnityEngine_Transform_o *NodeFromLvName; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Object_o *v20; // x22
  UnityEngine_Object_o *v21; // x21
  struct UnityEngine_Transform_o *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BDF38C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF38C = 1;
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
    LimitCount = BattleActorControl__getLimitCount(targetActor, v11);
    NodeFromLvName = TransformHelper__getNodeFromLvName(v10, targetNodeName, LimitCount, 1, 0LL);
    this->fields.targetNode = NodeFromLvName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.targetNode,
      (int64_t)NodeFromLvName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (UnityEngine_Object_o *)this->fields.targetNode;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetActor, 0LL);
    if ( !IsNullOrEmpty )
LABEL_15:
      sub_1C22094(IsNullOrEmpty, v7);
    v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(IsNullOrEmpty, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v20, v21, 0LL) )
    {
LABEL_14:
      v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this->fields.targetNode = v22;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetNode, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    }
  }
}


void __fastcall NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Transform_o *targetNode; // x0

  NoblePhantasmTargetOverwriteTransform__SaveOriginal(this, targetActor, method);
  targetNode = this->fields.targetNode;
  if ( !targetNode
    || (UnityEngine_Transform__set_localPosition(targetNode, this->fields.overwritePosition, 0LL),
        (targetNode = this->fields.targetNode) == 0LL) )
  {
    sub_1C22094(targetNode, v4);
  }
  UnityEngine_Transform__set_localRotation(targetNode, this->fields.overwriteRotation, 0LL);
}


void __fastcall NoblePhantasmTargetOverwriteTransform__ResetTarget(
        NoblePhantasmTargetOverwriteTransform_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Transform_o *targetNode; // x0

  NoblePhantasmTargetOverwriteTransform__CheckAndSetTargetNode(this, targetActor, method);
  targetNode = this->fields.targetNode;
  if ( !targetNode
    || (UnityEngine_Transform__set_localPosition(targetNode, this->fields.originalPosition, 0LL),
        (targetNode = this->fields.targetNode) == 0LL) )
  {
    sub_1C22094(targetNode, v4);
  }
  UnityEngine_Transform__set_localRotation(targetNode, this->fields.originalRotation, 0LL);
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
    sub_1C22094(targetNode, v4);
  }
  this->fields.originalRotation = UnityEngine_Transform__get_localRotation(targetNode, 0LL);
}