void __fastcall CommandCodeEffectComponent___ctor(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19A58 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B19A58 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B19A57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19A57 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v11 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v11, v12);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( v11 )
  {
    if ( !v10 )
      goto LABEL_14;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v10, 0LL);
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
  __int64 v6; // x2
  UnityEngine_Object_o *commandCodeImg; // x21
  __int64 v8; // x1
  UISprite_o *v9; // x20

  if ( (byte_4B19A56 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19A56 = 1;
  }
  commandCodeImg = (UnityEngine_Object_o *)this->fields.commandCodeImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&commandCodeId);
  if ( UnityEngine_Object__op_Inequality(commandCodeImg, 0LL, 0LL) )
  {
    v9 = this->fields.commandCodeImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
    AtlasManager__SetCommandCodeIcon(v9, commandCodeId, 0LL);
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
    sub_1BCA784(
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
    sub_1BCA784(
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
    sub_1BCA784(
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