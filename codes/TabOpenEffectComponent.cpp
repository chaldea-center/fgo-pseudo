void __fastcall TabOpenEffectComponent___ctor(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall TabOpenEffectComponent__AnimEndFunc(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *klass; // x0

  klass = (System_Action_o *)this[1].klass;
  if ( klass )
    ActionExtensions__Call(klass, 0LL);
}


void __fastcall TabOpenEffectComponent__ChangeUIFunc(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *animEndCallback; // x0

  animEndCallback = this->fields.animEndCallback;
  if ( animEndCallback )
    ActionExtensions__Call(animEndCallback, 0LL);
}


void __fastcall TabOpenEffectComponent__PlayAnimation(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SimpleAnimation_o *Component_WebViewObject; // x20
  UnityEngine_Animation_o *v6; // x19

  if ( (byte_40FD699 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FD699 = 1;
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
    {
      SimpleAnimation__Play(Component_WebViewObject, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
  {
    if ( !v6 )
      goto LABEL_16;
    UnityEngine_Animation__Play(v6, 0LL);
  }
}


void __fastcall TabOpenEffectComponent__SetAnimationEndCallback(
        TabOpenEffectComponent_o *this,
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
    this[1].klass = (TabOpenEffectComponent_c *)callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this[1],
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void __fastcall TabOpenEffectComponent__SetChangeUICallback(
        TabOpenEffectComponent_o *this,
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
    this->fields.animEndCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.animEndCallback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}