void __fastcall FGOUv1Anim___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49FD3FC & 1) == 0 )
  {
    sub_1B64870(&FGOUv1Anim_TypeInfo, v1);
    sub_1B64870(&StringLiteral_16286/*"_SubTex"*/, v2);
    byte_49FD3FC = 1;
  }
  FGOUv1Anim_TypeInfo->static_fields->subTexID = UnityEngine_Shader__PropertyToID(
                                                   (System_String_o *)StringLiteral_16286/*"_SubTex"*/,
                                                   0LL);
}


void __fastcall FGOUv1Anim___ctor(FGOUv1Anim_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0LL;
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
  __int64 v5; // x1
  _BOOL4 isShared; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v10; // x21
  UnityEngine_Material_o *v11; // x20
  FGOUv1Anim_c *v12; // x0

  if ( (byte_49FD3FB & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Application_TypeInfo, method);
    sub_1B64870(&FGOUv1Anim_TypeInfo, v3);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v4);
    sub_1B64870(&UnityEngine_Material_TypeInfo, v5);
    byte_49FD3FB = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    isShared = this->fields.isShared;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_28;
    if ( isShared )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    else
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0LL);
    v11 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_28;
    v10 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    v11 = (UnityEngine_Material_o *)sub_1B64ABC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_68999276(v11, v10, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv1Anim_TypeInfo;
  if ( !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
  if ( !v11 )
LABEL_28:
    sub_1B64ACC(gameObject, v8);
  if ( UnityEngine_Material__HasProperty(v11, FGOUv1Anim_TypeInfo->static_fields->subTexID, 0LL) )
  {
    v12 = FGOUv1Anim_TypeInfo;
    if ( !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
      v12 = FGOUv1Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_69001512(v11, v12->static_fields->subTexID, this->fields.m_Offset, 0LL);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v11, 0LL);
        return;
      }
    }
    goto LABEL_28;
  }
}