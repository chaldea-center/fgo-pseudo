void __fastcall TabOpenEffectComponent___ctor(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5B0E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B0E = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E5B0D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E5B0D = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v12 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v13 )
  {
    if ( Component_WebViewObject )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_WebViewObject, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v13, v14);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( v13 )
  {
    if ( !v12 )
      goto LABEL_16;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v12, 0LL);
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
    sub_B5D560(&this->fields.animEndCallback);
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
    sub_B5D560(&this->fields.changeUICallback);
  }
}