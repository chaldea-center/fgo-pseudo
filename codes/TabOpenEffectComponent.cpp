void TabOpenEffectComponent___ctor(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AC6F & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_596AC6F = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method, v2);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void TabOpenEffectComponent__AnimEndFunc(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *animEndCallback; // x0

  animEndCallback = this->fields.animEndCallback;
  if ( animEndCallback )
    ActionExtensions__Call(animEndCallback, 0);
}


void TabOpenEffectComponent__ChangeUIFunc(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *changeUICallback; // x0

  changeUICallback = this->fields.changeUICallback;
  if ( changeUICallback )
    ActionExtensions__Call(changeUICallback, 0);
}


void TabOpenEffectComponent__PlayAnimation(TabOpenEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596AC6E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AC6E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v7, v8);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_14;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)v6, 0);
  }
}


void TabOpenEffectComponent__SetAnimationEndCallback(
        TabOpenEffectComponent_o *this,
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
    this->fields.animEndCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.animEndCallback,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void TabOpenEffectComponent__SetChangeUICallback(
        TabOpenEffectComponent_o *this,
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
    this->fields.changeUICallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.changeUICallback,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}