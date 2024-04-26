void __fastcall CachableMonoBehaviour___ctor(CachableMonoBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall CachableMonoBehaviour__get_renderer(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x21
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4354AEA & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354AEA = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mRenderer, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    this->fields.mRenderer = Component_WebViewObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mRenderer,
      (System_Int32_array **)Component_WebViewObject,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mRenderer;
}


UnityEngine_Rigidbody_o *__fastcall CachableMonoBehaviour__get_rigidbody(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mRigidbody; // x21
  struct UnityEngine_Rigidbody_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4354AEB & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354AEB = 1;
  }
  mRigidbody = (UnityEngine_Object_o *)this->fields.mRigidbody;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mRigidbody, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct UnityEngine_Rigidbody_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.mRigidbody = Component_WebViewObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mRigidbody,
      (System_Int32_array **)Component_WebViewObject,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mRigidbody;
}


UnityEngine_Transform_o *__fastcall CachableMonoBehaviour__get_transform(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mTransform; // x21
  struct UnityEngine_Transform_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4354AEC & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354AEC = 1;
  }
  mTransform = (UnityEngine_Object_o *)this->fields.mTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mTransform, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Transform___);
    this->fields.mTransform = Component_WebViewObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mTransform,
      (System_Int32_array **)Component_WebViewObject,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mTransform;
}