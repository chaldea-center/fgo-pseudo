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
  UnityEngine_Material_o *v8; // x21
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Material_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_42188D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_16061/*"_MainTex"*/, v5);
    byte_42188D7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Application__get_isPlaying(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(Component_srcLineSprite, 0LL);
      v8 = (UnityEngine_Material_o *)gameObject;
      if ( gameObject )
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
      v10 = UnityEngine_Renderer__get_sharedMaterial(Component_srcLineSprite, 0LL);
      v8 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v11, v12);
      UnityEngine_Material___ctor_40810340(v8, v10, 0LL);
      if ( v8 )
      {
LABEL_11:
        UnityEngine_Material__SetTextureOffset(
          v8,
          (System_String_o *)StringLiteral_16061/*"_MainTex"*/,
          *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
          0LL);
        if ( !UnityEngine_Application__get_isPlaying(0LL) )
          UnityEngine_Renderer__set_sharedMaterial(Component_srcLineSprite, v8, 0LL);
        return;
      }
LABEL_19:
      sub_B0D97C(gameObject);
    }
  }
}