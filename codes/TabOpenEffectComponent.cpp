void __fastcall TabOpenEffectComponent___ctor(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_434EDF7 & 1) == 0 )
  {
    sub_B70694(&CommonEffectComponent_TypeInfo);
    byte_434EDF7 = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall TabOpenEffectComponent__AnimEndFunc(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *animEndCallback; // x0

  animEndCallback = this->fields.animEndCallback;
  if ( animEndCallback )
    ActionExtensions__Call(animEndCallback, 0LL);
}


void __fastcall TabOpenEffectComponent__ChangeUIFunc(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *changeUICallback; // x0

  changeUICallback = this->fields.changeUICallback;
  if ( changeUICallback )
    ActionExtensions__Call(changeUICallback, 0LL);
}


void __fastcall TabOpenEffectComponent__PlayAnimation(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_434EDF6 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EDF6 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v4 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v5 )
  {
    if ( Component_WebViewObject )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_WebViewObject, 0LL);
      return;
    }
LABEL_16:
    sub_B7076C(v5, v6);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( v5 )
  {
    if ( !v4 )
      goto LABEL_16;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v4, 0LL);
  }
}


void __fastcall TabOpenEffectComponent__SetAnimationEndCallback(
        TabOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( callback )
  {
    this->fields.animEndCallback = callback;
    sub_B70630(&this->fields.animEndCallback);
  }
}


void __fastcall TabOpenEffectComponent__SetChangeUICallback(
        TabOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( callback )
  {
    this->fields.changeUICallback = callback;
    sub_B70630(&this->fields.changeUICallback);
  }
}