void CommandCodeEffectComponent___ctor(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CBA278 & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectComponent_TypeInfo);
    byte_4CBA278 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
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
  Il2CppObject *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CBA277 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA277 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
      return;
    }
LABEL_14:
    sub_1C6BC60(v5, v6);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( v5 )
  {
    if ( !v4 )
      goto LABEL_14;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v4, 0);
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


void CommandCodeEffectComponent__SetCommandCodeImg(
        CommandCodeEffectComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commandCodeImg; // x21
  UISprite_o *v6; // x20

  if ( (byte_4CBA276 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA276 = 1;
  }
  commandCodeImg = (UnityEngine_Object_o *)this->fields.commandCodeImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCodeImg, 0, 0) )
  {
    v6 = this->fields.commandCodeImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommandCodeIcon(v6, commandCodeId, 0);
  }
}


void CommandCodeEffectComponent__SetDestroyEffectCallback(
        CommandCodeEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( callback )
  {
    this->fields.destroyEffectCallback = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.destroyEffectCallback, (int32_t)callback, (int32_t)method, v3);
  }
}


void CommandCodeEffectComponent__SetDetachEffect(
        CommandCodeEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( action )
  {
    this->fields.commandCodeDetachAction = action;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeDetachAction, (int32_t)action, (int32_t)method, v3);
  }
}


void CommandCodeEffectComponent__SetEndEffectCallbak(
        CommandCodeEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( callback )
  {
    this->fields.endEffectCallback = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endEffectCallback, (int32_t)callback, (int32_t)method, v3);
  }
}