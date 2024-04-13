void __fastcall FGOUv1Anim___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42E8C79 & 1) == 0 )
  {
    sub_B5D5C4(&FGOUv1Anim_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_16264/*"_SubTex"*/, v4, v5, v6);
    byte_42E8C79 = 1;
  }
  FGOUv1Anim_TypeInfo->static_fields->subTexID = UnityEngine_Shader__PropertyToID(
                                                   (System_String_o *)StringLiteral_16264/*"_SubTex"*/,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int klass_low; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v15; // x21
  UnityEngine_Material_o *v16; // x20
  FGOUv1Anim_c *v17; // x0

  if ( (byte_42E8C78 & 1) == 0 )
  {
    sub_B5D5C4(&FGOUv1Anim_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v8, v9, v10);
    byte_42E8C78 = 1;
  }
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    klass_low = LOBYTE(this[1].klass);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    if ( klass_low )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    else
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0LL);
    v16 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_26;
    v15 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    v16 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_41620632(v16, v15, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv1Anim_TypeInfo;
  if ( (BYTE3(FGOUv1Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
  if ( !v16 )
LABEL_26:
    sub_B5D69C(gameObject, v13);
  if ( UnityEngine_Material__HasProperty(v16, FGOUv1Anim_TypeInfo->static_fields->subTexID, 0LL) )
  {
    v17 = FGOUv1Anim_TypeInfo;
    if ( (BYTE3(FGOUv1Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
      v17 = FGOUv1Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_41622784(
      v16,
      v17->static_fields->subTexID,
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
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v16, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
}