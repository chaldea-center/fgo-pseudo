void __fastcall FGOUv1Anim___cctor(const MethodInfo *method)
{
  if ( (byte_438B8B3 & 1) == 0 )
  {
    sub_B775C4(&FGOUv1Anim_TypeInfo);
    sub_B775C4(&StringLiteral_16375/*"_SubTex"*/);
    byte_438B8B3 = 1;
  }
  FGOUv1Anim_TypeInfo->static_fields->subTexID = UnityEngine_Shader__PropertyToID(
                                                   (System_String_o *)StringLiteral_16375/*"_SubTex"*/,
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
  int klass_low; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v7; // x21
  UnityEngine_Material_o *v8; // x20
  FGOUv1Anim_c *v9; // x0

  if ( (byte_438B8B2 & 1) == 0 )
  {
    sub_B775C4(&FGOUv1Anim_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_B775C4(&UnityEngine_Material_TypeInfo);
    byte_438B8B2 = 1;
  }
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    klass_low = LOBYTE(this[1].klass);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    if ( klass_low )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    else
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0LL);
    v8 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    v7 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    v8 = (UnityEngine_Material_o *)sub_B77694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_41464292(v8, v7, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv1Anim_TypeInfo;
  if ( (BYTE3(FGOUv1Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
  if ( !v8 )
LABEL_26:
    sub_B7769C(gameObject, v5);
  if ( UnityEngine_Material__HasProperty(v8, FGOUv1Anim_TypeInfo->static_fields->subTexID, 0LL) )
  {
    v9 = FGOUv1Anim_TypeInfo;
    if ( (BYTE3(FGOUv1Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
      v9 = FGOUv1Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_41466444(
      v8,
      v9->static_fields->subTexID,
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
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v8, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
}