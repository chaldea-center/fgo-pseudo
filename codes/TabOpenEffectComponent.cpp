void __fastcall TabOpenEffectComponent___ctor(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BC2986 & 1) == 0 )
  {
    sub_1C1ABD4(&CommonEffectComponent_TypeInfo, method);
    byte_4BC2986 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BC2985 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BC2985 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
    sub_1C1AE30(v7, v8);
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


void __fastcall TabOpenEffectComponent__SetAnimationEndCallback(
        TabOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( callback )
  {
    this->fields.animEndCallback = callback;
    sub_1C1AB78(&this->fields.animEndCallback);
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
    sub_1C1AB78(&this->fields.changeUICallback);
  }
}