void __fastcall CommandCodeEffectComponent___ctor(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A4D7 & 1) == 0 )
  {
    sub_1BE4ACC(&CommonEffectComponent_TypeInfo, method);
    byte_4B6A4D7 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall CommandCodeEffectComponent__EndEffectFunc(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endEffectCallback; // x0

  endEffectCallback = this->fields.endEffectCallback;
  if ( endEffectCallback )
    ActionExtensions__Call(endEffectCallback, 0LL);
}


void __fastcall CommandCodeEffectComponent__PlayAnimation(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B6A4D6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6A4D6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0LL);
      return;
    }
LABEL_14:
    sub_1BE4D28(v7, v8);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_14;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v6, 0LL);
  }
}


void __fastcall CommandCodeEffectComponent__PlayDestroyEffectCallback(
        CommandCodeEffectComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.destroyEffectCallback, 0LL);
}


void __fastcall CommandCodeEffectComponent__PlayDetachEffect(
        CommandCodeEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *commandCodeDetachAction; // x0

  commandCodeDetachAction = this->fields.commandCodeDetachAction;
  if ( commandCodeDetachAction )
    ActionExtensions__Call(commandCodeDetachAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCodeEffectComponent__SetCommandCodeImg(
        CommandCodeEffectComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *commandCodeImg; // x21
  UISprite_o *v7; // x20

  if ( (byte_4B6A4D5 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6A4D5 = 1;
  }
  commandCodeImg = (UnityEngine_Object_o *)this->fields.commandCodeImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCodeImg, 0LL, 0LL) )
  {
    v7 = this->fields.commandCodeImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommandCodeIcon(v7, commandCodeId, 0LL);
  }
}


void __fastcall CommandCodeEffectComponent__SetDestroyEffectCallback(
        CommandCodeEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( callback )
  {
    this->fields.destroyEffectCallback = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.destroyEffectCallback,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void __fastcall CommandCodeEffectComponent__SetDetachEffect(
        CommandCodeEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( action )
  {
    this->fields.commandCodeDetachAction = action;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeDetachAction,
      (int64_t)action,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void __fastcall CommandCodeEffectComponent__SetEndEffectCallbak(
        CommandCodeEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( callback )
  {
    this->fields.endEffectCallback = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.endEffectCallback,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}