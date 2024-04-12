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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Renderer_o *Component_srcLineSprite; // x20
  UnityEngine_Material_o *v6; // x21
  UnityEngine_Object_o *sharedMaterial; // x21
  UnityEngine_Material_o *v8; // x22

  if ( (byte_42B4321 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16120/*"_MainTex"*/);
    byte_42B4321 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
      v6 = (UnityEngine_Material_o *)gameObject;
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
      v8 = UnityEngine_Renderer__get_sharedMaterial(Component_srcLineSprite, 0LL);
      v6 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_41516484(v6, v8, 0LL);
      if ( v6 )
      {
LABEL_11:
        UnityEngine_Material__SetTextureOffset(
          v6,
          (System_String_o *)StringLiteral_16120/*"_MainTex"*/,
          *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
          0LL);
        if ( !UnityEngine_Application__get_isPlaying(0LL) )
          UnityEngine_Renderer__set_sharedMaterial(Component_srcLineSprite, v6, 0LL);
        return;
      }
LABEL_19:
      sub_B52A5C(gameObject, v4);
    }
  }
}