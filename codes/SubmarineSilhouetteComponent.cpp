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
  struct SimpleAnimation_o *Component_WebViewObject; // x0

  if ( (byte_418584D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418584D = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mAnimation, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = Component_WebViewObject;
    sub_B2C2F8(&this->fields.mAnimation, Component_WebViewObject);
  }
  return this->fields.mAnimation;
}