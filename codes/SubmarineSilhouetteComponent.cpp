void __fastcall SubmarineSilhouetteComponent___ctor(SubmarineSilhouetteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SimpleAnimation_o *__fastcall SubmarineSilhouetteComponent__get_AnimationComponent(
        SubmarineSilhouetteComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mAnimation; // x21
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49B7955 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B7955 = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v6, v7);
  }
  return this->fields.mAnimation;
}