void __fastcall UVScroll___ctor(UVScroll_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UVScroll__Start(UVScroll_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall UVScroll__Update(UVScroll_o *this, const MethodInfo *method)
{
  UVScroll__UpdateUV(this, method);
}


void __fastcall UVScroll__UpdateUV(UVScroll_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Material_o *v9; // x21
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Material_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_49FB320 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, v6);
    byte_49FB320 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Application__get_isPlaying(0LL);
    if ( !Component_object )
      goto LABEL_21;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                 (UnityEngine_Renderer_o *)Component_object,
                                                 0LL);
      v9 = (UnityEngine_Material_o *)gameObject;
      if ( gameObject )
      {
LABEL_12:
        UnityEngine_Material__SetTextureOffset(v9, (System_String_o *)StringLiteral_16193/*"_MainTex"*/, this->fields.m_Offset, 0LL);
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        if ( !UnityEngine_Application__get_isPlaying(0LL) )
          UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Component_object, v9, 0LL);
        return;
      }
LABEL_21:
      sub_1B64324(gameObject);
    }
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)Component_object,
                                               0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(sharedMaterial, 0LL, 0LL) )
    {
      v11 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)Component_object, 0LL);
      v9 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v12, v13);
      UnityEngine_Material___ctor_68991096(v9, v11, 0LL);
      if ( v9 )
        goto LABEL_12;
      goto LABEL_21;
    }
  }
}