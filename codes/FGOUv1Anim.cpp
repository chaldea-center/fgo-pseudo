void __fastcall FGOUv1Anim___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4215422 & 1) == 0 )
  {
    sub_B0D8A4(&FGOUv1Anim_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16120/*"_SubTex"*/, v2);
    byte_4215422 = 1;
  }
  FGOUv1Anim_TypeInfo->static_fields->subTexID = UnityEngine_Shader__PropertyToID(
                                                   (System_String_o *)StringLiteral_16120/*"_SubTex"*/,
                                                   0LL);
}


void __fastcall FGOUv1Anim___ctor(FGOUv1Anim_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.m_Offset.fields.y = 0LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOUv1Anim__Start(FGOUv1Anim_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall FGOUv1Anim__Update(FGOUv1Anim_o *this, const MethodInfo *method)
{
  FGOUv1Anim__UpdateUV(this, method);
}


void __fastcall FGOUv1Anim__UpdateUV(FGOUv1Anim_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int klass_low; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Material_o *v11; // x20
  FGOUv1Anim_c *v12; // x0

  if ( (byte_4215421 & 1) == 0 )
  {
    sub_B0D8A4(&FGOUv1Anim_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v4);
    byte_4215421 = 1;
  }
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    klass_low = LOBYTE(this[1].klass);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    if ( klass_low )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    else
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0LL);
    v11 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    v8 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    v11 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v9, v10);
    UnityEngine_Material___ctor_40810340(v11, v8, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv1Anim_TypeInfo;
  if ( (BYTE3(FGOUv1Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
  if ( !v11 )
LABEL_26:
    sub_B0D97C(gameObject);
  if ( UnityEngine_Material__HasProperty(v11, FGOUv1Anim_TypeInfo->static_fields->subTexID, 0LL) )
  {
    v12 = FGOUv1Anim_TypeInfo;
    if ( (BYTE3(FGOUv1Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
      v12 = FGOUv1Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_40812492(
      v11,
      v12->static_fields->subTexID,
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
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v11, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
}