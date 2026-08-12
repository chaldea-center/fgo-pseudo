void CommandCodeEffectComponent___ctor(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5974A90 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_5974A90 = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void CommandCodeEffectComponent__EndEffectFunc(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endEffectCallback; // x0

  endEffectCallback = this->fields.endEffectCallback;
  if ( endEffectCallback )
    ActionExtensions__Call(endEffectCallback, 0);
}


void CommandCodeEffectComponent__PlayAnimation(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_5974A8F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A8F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v5 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v6, v7);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( v6 )
  {
    if ( !v5 )
      goto LABEL_14;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v5, 0);
  }
}


void CommandCodeEffectComponent__PlayDestroyEffectCallback(
        CommandCodeEffectComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.destroyEffectCallback, 0);
}


void CommandCodeEffectComponent__PlayDetachEffect(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *commandCodeDetachAction; // x0

  commandCodeDetachAction = this->fields.commandCodeDetachAction;
  if ( commandCodeDetachAction )
    ActionExtensions__Call(commandCodeDetachAction, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCodeEffectComponent__SetCommandCodeImg(
        CommandCodeEffectComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commandCodeImg; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x20

  if ( (byte_5974A8E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A8E = 1;
  }
  commandCodeImg = (UnityEngine_Object_o *)this->fields.commandCodeImg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&commandCodeId);
  if ( UnityEngine_Object__op_Inequality(commandCodeImg, 0, 0) )
  {
    v7 = this->fields.commandCodeImg;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetCommandCodeIcon(v7, commandCodeId, 0);
  }
}


void CommandCodeEffectComponent__SetDestroyEffectCallback(
        CommandCodeEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( callback )
  {
    this->fields.destroyEffectCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.destroyEffectCallback,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void CommandCodeEffectComponent__SetDetachEffect(
        CommandCodeEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( action )
  {
    this->fields.commandCodeDetachAction = action;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeDetachAction,
      (int32_t)action,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void CommandCodeEffectComponent__SetEndEffectCallbak(
        CommandCodeEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( callback )
  {
    this->fields.endEffectCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.endEffectCallback,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}