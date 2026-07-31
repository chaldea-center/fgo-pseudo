void SubmarineSilhouetteComponent___ctor(SubmarineSilhouetteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


SimpleAnimation_o *SubmarineSilhouetteComponent__get_AnimationComponent(
        SubmarineSilhouetteComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mAnimation; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5934DE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934DE9 = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
      (int32_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return this->fields.mAnimation;
}