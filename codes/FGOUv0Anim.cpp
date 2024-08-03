void __fastcall FGOUv0Anim___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49FB302 & 1) == 0 )
  {
    sub_1B640C8(&FGOUv0Anim_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, v2);
    byte_49FB302 = 1;
  }
  FGOUv0Anim_TypeInfo->static_fields->mainTexID = UnityEngine_Shader__PropertyToID(
                                                    (System_String_o *)StringLiteral_16193/*"_MainTex"*/,
                                                    0LL);
}


void __fastcall FGOUv0Anim___ctor(FGOUv0Anim_o *this, const MethodInfo *method)
{
  this->fields.m_Offset = 0LL;
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
  __int64 v5; // x1
  _BOOL4 isShared; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Material_o *v12; // x20
  FGOUv0Anim_c *v13; // x0

  if ( (byte_49FB301 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&FGOUv0Anim_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v4);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v5);
    byte_49FB301 = 1;
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
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_28;
    if ( isShared )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    else
      sharedMaterial = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)gameObject, 0LL);
    v12 = sharedMaterial;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !gameObject )
      goto LABEL_28;
    v9 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)gameObject, 0LL);
    v12 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v10, v11);
    UnityEngine_Material___ctor_68991096(v12, v9, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)FGOUv0Anim_TypeInfo;
  if ( !FGOUv0Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv0Anim_TypeInfo);
  if ( !v12 )
LABEL_28:
    sub_1B64324(gameObject);
  if ( UnityEngine_Material__HasProperty(v12, FGOUv0Anim_TypeInfo->static_fields->mainTexID, 0LL) )
  {
    v13 = FGOUv0Anim_TypeInfo;
    if ( !FGOUv0Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv0Anim_TypeInfo);
      v13 = FGOUv0Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_68993332(v12, v13->static_fields->mainTexID, this->fields.m_Offset, 0LL);
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
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( gameObject )
      {
        UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)gameObject, v12, 0LL);
        return;
      }
    }
    goto LABEL_28;
  }
}