void FGOUv1Anim___cctor(const MethodInfo *method)
{
  if ( (byte_59373E2 & 1) == 0 )
  {
    sub_21FFC50(&FGOUv1Anim_TypeInfo);
    sub_21FFC50(&StringLiteral_16976/*"_SubTex"*/);
    byte_59373E2 = 1;
  }
  FGOUv1Anim_TypeInfo->static_fields->subTexID = UnityEngine_Shader__PropertyToID(
                                                   (System_String_o *)StringLiteral_16976/*"_SubTex"*/,
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
  __int64 v2; // x2
  _BOOL4 isShared; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Material_o *sharedMaterial; // x0
  __int64 v8; // x2
  UnityEngine_Material_o *v9; // x21
  UnityEngine_Material_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  FGOUv1Anim_c *v13; // x0

  if ( (byte_59373E1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&FGOUv1Anim_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    byte_59373E1 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    isShared = this->fields.isShared;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( isShared )
    {
      if ( !gameObject )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( !gameObject )
        goto LABEL_30;
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( !gameObject )
        goto LABEL_30;
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0);
    }
    v10 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_30;
    v9 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0);
    v10 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_83061620(v10, v9, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv1Anim_TypeInfo;
  if ( !*(&FGOUv1Anim_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo, v6, v8);
  if ( !v10 )
LABEL_30:
    sub_21FFECC(gameObject, v6);
  if ( UnityEngine_Material__HasProperty(v10, FGOUv1Anim_TypeInfo->static_fields->subTexID, 0) )
  {
    v13 = FGOUv1Anim_TypeInfo;
    if ( !*(&FGOUv1Anim_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FGOUv1Anim_TypeInfo, v11, v12);
      v13 = FGOUv1Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_83063460(v10, v13->static_fields->subTexID, this->fields.m_Offset, 0);
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v11, v12);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v10, 0);
        return;
      }
    }
    goto LABEL_30;
  }
}