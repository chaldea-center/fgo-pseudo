void __fastcall CommandCodeEffectComponent___ctor(CommandCodeEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_41880FA & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectComponent_TypeInfo, method);
    byte_41880FA = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
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
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_41880F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41880F9 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v7 )
  {
    if ( Component_WebViewObject )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_WebViewObject, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(v7, v8);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v6, 0LL);
  }
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

  if ( (byte_41880F8 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41880F8 = 1;
  }
  commandCodeImg = (UnityEngine_Object_o *)this->fields.commandCodeImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commandCodeImg, 0LL, 0LL) )
  {
    v7 = this->fields.commandCodeImg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeIcon(v7, commandCodeId, 0LL);
  }
}


void __fastcall CommandCodeEffectComponent__SetDetachEffect(
        CommandCodeEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( action )
  {
    this->fields.commandCodeDetachAction = action;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandCodeDetachAction,
      (System_Int32_array **)action,
      (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( callback )
  {
    this->fields.endEffectCallback = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.endEffectCallback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}