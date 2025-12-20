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
  Il2CppObject *Component_object; // x20
  UnityEngine_Material_o *v6; // x21
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Material_o *v8; // x22

  if ( (byte_4D2B5EC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_16321/*"_MainTex"*/);
    byte_4D2B5EC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Application__get_isPlaying(0);
    if ( !Component_object )
      goto LABEL_21;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                 (UnityEngine_Renderer_o *)Component_object,
                                                 0);
      v6 = (UnityEngine_Material_o *)gameObject;
      if ( gameObject )
      {
LABEL_12:
        UnityEngine_Material__SetTextureOffset(v6, (System_String_o *)StringLiteral_16321/*"_MainTex"*/, this->fields.m_Offset, 0);
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        if ( !UnityEngine_Application__get_isPlaying(0) )
          UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Component_object, v6, 0);
        return;
      }
LABEL_21:
      sub_1C942F0(gameObject, v4);
    }
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)Component_object,
                                               0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(sharedMaterial, 0, 0) )
    {
      v8 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)Component_object, 0);
      v6 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71973536(v6, v8, 0);
      if ( v6 )
        goto LABEL_12;
      goto LABEL_21;
    }
  }
}