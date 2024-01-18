void __fastcall FGOUv0Anim___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_41885A7 & 1) == 0 )
  {
    sub_B2C35C(&FGOUv0Anim_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v2);
    byte_41885A7 = 1;
  }
  FGOUv0Anim_TypeInfo->static_fields->mainTexID = UnityEngine_Shader__PropertyToID(
                                                    (System_String_o *)StringLiteral_16013/*"_MainTex"*/,
                                                    0LL);
}


void __fastcall FGOUv0Anim___ctor(FGOUv0Anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.m_Offset.fields.y = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOUv0Anim__Start(FGOUv0Anim_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall FGOUv0Anim__Update(FGOUv0Anim_o *this, const MethodInfo *method)
{
  FGOUv0Anim__UpdateUV(this, method);
}


void __fastcall FGOUv0Anim__UpdateUV(FGOUv0Anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int klass_low; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v9; // x21
  UnityEngine_Material_o *v10; // x20
  FGOUv0Anim_c *v11; // x0

  if ( (byte_41885A6 & 1) == 0 )
  {
    sub_B2C35C(&FGOUv0Anim_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v4);
    byte_41885A6 = 1;
  }
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    klass_low = LOBYTE(this[1].klass);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    if ( klass_low )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    else
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0LL);
    v10 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    v9 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    v10 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_40686000(v10, v9, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv0Anim_TypeInfo;
  if ( (BYTE3(FGOUv0Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv0Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv0Anim_TypeInfo);
  if ( !v10 )
LABEL_26:
    sub_B2C434(gameObject, v7);
  if ( UnityEngine_Material__HasProperty(v10, FGOUv0Anim_TypeInfo->static_fields->mainTexID, 0LL) )
  {
    v11 = FGOUv0Anim_TypeInfo;
    if ( (BYTE3(FGOUv0Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv0Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv0Anim_TypeInfo);
      v11 = FGOUv0Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_40688152(
      v10,
      v11->static_fields->mainTexID,
      *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
      0LL);
  }
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 gameObject,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v10, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
}