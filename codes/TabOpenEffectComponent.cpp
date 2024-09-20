void __fastcall TabOpenEffectComponent___ctor(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F3CC & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectComponent_TypeInfo);
    byte_4A5F3CC = 1;
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
  Il2CppObject *Component_object; // x20
  Il2CppObject *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5F3CB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F3CB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v5 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(v5, v6);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0LL, 0LL);
  if ( v5 )
  {
    if ( !v4 )
      goto LABEL_14;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v4, 0LL);
  }
}


void __fastcall TabOpenEffectComponent__SetAnimationEndCallback(
        TabOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( callback )
  {
    this->fields.animEndCallback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.animEndCallback,
      (int32_t)callback,
      (int32_t)method,
      v3);
  }
}


void __fastcall TabOpenEffectComponent__SetChangeUICallback(
        TabOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( callback )
  {
    this->fields.changeUICallback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.changeUICallback,
      (int32_t)callback,
      (int32_t)method,
      v3);
  }
}