void __fastcall CachableMonoBehaviour___ctor(CachableMonoBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall CachableMonoBehaviour__get_renderer(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mRenderer; // x21
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EB60C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB60C = 1;
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
                                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    this->fields.mRenderer = Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mRenderer,
      (System_Int32_array **)Component_WebViewObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.mRenderer;
}


UnityEngine_Rigidbody_o *__fastcall CachableMonoBehaviour__get_rigidbody(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mRigidbody; // x21
  struct UnityEngine_Rigidbody_o *Component_WebViewObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EB60D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Rigidbody___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB60D = 1;
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
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.mRigidbody = Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mRigidbody,
      (System_Int32_array **)Component_WebViewObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.mRigidbody;
}


UnityEngine_Transform_o *__fastcall CachableMonoBehaviour__get_transform(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mTransform; // x21
  struct UnityEngine_Transform_o *Component_WebViewObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EB60E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Transform___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB60E = 1;
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
                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Transform___);
    this->fields.mTransform = Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mTransform,
      (System_Int32_array **)Component_WebViewObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.mTransform;
}