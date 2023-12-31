void __fastcall UVScroll___ctor(UVScroll_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.m_Offset.fields.y = 0LL;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Renderer_o *Component_srcLineSprite; // x20
  bool isPlaying; // w0
  UnityEngine_Material_o *material; // x21
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Material_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4

  if ( (byte_40FE439 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_15950, v5);
    byte_40FE439 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    isPlaying = UnityEngine_Application__get_isPlaying(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    if ( isPlaying )
    {
      material = UnityEngine_Renderer__get_material(Component_srcLineSprite, 0LL);
      if ( material )
        goto LABEL_11;
      goto LABEL_19;
    }
    sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(Component_srcLineSprite, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(sharedMaterial, 0LL, 0LL) )
    {
      v11 = UnityEngine_Renderer__get_sharedMaterial(Component_srcLineSprite, 0LL);
      material = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v12, v13, v14, v15);
      UnityEngine_Material___ctor_40718828(material, v11, 0LL);
      if ( material )
      {
LABEL_11:
        UnityEngine_Material__SetTextureOffset(
          material,
          (System_String_o *)StringLiteral_15950,
          *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
          0LL);
        if ( !UnityEngine_Application__get_isPlaying(0LL) )
          UnityEngine_Renderer__set_sharedMaterial(Component_srcLineSprite, material, 0LL);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
  }
}