void FGOUv1Anim___cctor(const MethodInfo *method)
{
  if ( (byte_4C26085 & 1) == 0 )
  {
    sub_1C2D490(&FGOUv1Anim_TypeInfo);
    sub_1C2D490(&StringLiteral_16355/*"_SubTex"*/);
    byte_4C26085 = 1;
  }
  FGOUv1Anim_TypeInfo->static_fields->subTexID = UnityEngine_Shader__PropertyToID(
                                                   (System_String_o *)StringLiteral_16355/*"_SubTex"*/,
                                                   0);
}


void FGOUv1Anim___ctor(FGOUv1Anim_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOUv1Anim__Start(FGOUv1Anim_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void FGOUv1Anim__Update(FGOUv1Anim_o *this, const MethodInfo *method)
{
  FGOUv1Anim__UpdateUV(this, method);
}


void FGOUv1Anim__UpdateUV(FGOUv1Anim_o *this, const MethodInfo *method)
{
  _BOOL4 isShared; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v7; // x21
  UnityEngine_Material_o *v8; // x20
  FGOUv1Anim_c *v9; // x0

  if ( (byte_4C26084 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&FGOUv1Anim_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    byte_4C26084 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    isShared = this->fields.isShared;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_28;
    if ( isShared )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
    else
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0);
    v8 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_28;
    v7 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
    v8 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71026932(v8, v7, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv1Anim_TypeInfo;
  if ( !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
  if ( !v8 )
LABEL_28:
    sub_1C2D6EC(gameObject, v5);
  if ( UnityEngine_Material__HasProperty(v8, FGOUv1Anim_TypeInfo->static_fields->subTexID, 0) )
  {
    v9 = FGOUv1Anim_TypeInfo;
    if ( !FGOUv1Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo);
      v9 = FGOUv1Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_71029168(v8, v9->static_fields->subTexID, this->fields.m_Offset, 0);
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v8, 0);
        return;
      }
    }
    goto LABEL_28;
  }
}