void UVScroll___ctor(UVScroll_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UVScroll__Start(UVScroll_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void UVScroll__Update(UVScroll_o *this, const MethodInfo *method)
{
  UVScroll__UpdateUV(this, method);
}


void UVScroll__UpdateUV(UVScroll_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Component_object; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Material_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Material_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2

  if ( (byte_5937404 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    byte_5937404 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_23:
    sub_21FFECC(gameObject, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v8, v9);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Application__get_isPlaying(0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_23;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                 (UnityEngine_Renderer_o *)Component_object,
                                                 0);
      v10 = (UnityEngine_Material_o *)gameObject;
      if ( !gameObject )
        goto LABEL_23;
      goto LABEL_18;
    }
    if ( !Component_object )
      goto LABEL_23;
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)Component_object,
                                               0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( !UnityEngine_Object__op_Equality(sharedMaterial, 0, 0) )
    {
      v14 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)Component_object, 0);
      v10 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83061620(v10, v14, 0);
      if ( !v10 )
        goto LABEL_23;
LABEL_18:
      UnityEngine_Material__SetTextureOffset(v10, (System_String_o *)StringLiteral_16879/*"_MainTex"*/, this->fields.m_Offset, 0);
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v15, v16);
      if ( !UnityEngine_Application__get_isPlaying(0) )
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Component_object, v10, 0);
    }
  }
}