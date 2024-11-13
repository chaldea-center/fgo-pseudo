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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  __int64 v16; // x1
  UnityEngine_Material_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Material_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3

  if ( (byte_4B150AE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v10, v11);
    byte_4B150AE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v16);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Application__get_isPlaying(0LL);
    if ( !Component_object )
      goto LABEL_21;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                 (UnityEngine_Renderer_o *)Component_object,
                                                 0LL);
      v17 = (UnityEngine_Material_o *)gameObject;
      if ( gameObject )
      {
LABEL_12:
        UnityEngine_Material__SetTextureOffset(v17, (System_String_o *)StringLiteral_16431/*"_MainTex"*/, this->fields.m_Offset, 0LL);
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v18);
        if ( !UnityEngine_Application__get_isPlaying(0LL) )
          UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)Component_object, v17, 0LL);
        return;
      }
LABEL_21:
      sub_1BCAA3C(gameObject, v13);
    }
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                               (UnityEngine_Renderer_o *)Component_object,
                                               0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( !UnityEngine_Object__op_Equality(sharedMaterial, 0LL, 0LL) )
    {
      v21 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)Component_object, 0LL);
      v17 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v22, v23, v24);
      UnityEngine_Material___ctor_70017516(v17, v21, 0LL);
      if ( v17 )
        goto LABEL_12;
      goto LABEL_21;
    }
  }
}