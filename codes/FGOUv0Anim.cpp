void __fastcall FGOUv0Anim___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_40F9F54 & 1) == 0 )
  {
    sub_B16FFC(&FGOUv0Anim_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_15950, v2);
    byte_40F9F54 = 1;
  }
  FGOUv0Anim_TypeInfo->static_fields->mainTexID = UnityEngine_Shader__PropertyToID(
                                                    (System_String_o *)StringLiteral_15950,
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
  UnityEngine_Renderer_o *Component_srcLineSprite; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Renderer_o *v10; // x0
  UnityEngine_Material_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  UnityEngine_Material_o *v16; // x20
  FGOUv0Anim_c *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Renderer_o *v19; // x0

  if ( (byte_40F9F53 & 1) == 0 )
  {
    sub_B16FFC(&FGOUv0Anim_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v4);
    byte_40F9F53 = 1;
  }
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    klass_low = LOBYTE(this[1].klass);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !Component_srcLineSprite )
      goto LABEL_26;
    if ( klass_low )
      sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(Component_srcLineSprite, 0LL);
    else
      sharedMaterial = UnityEngine_Renderer__get_material(Component_srcLineSprite, 0LL);
    v16 = sharedMaterial;
  }
  else
  {
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v9 )
      goto LABEL_26;
    v10 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v9,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
    if ( !v10 )
      goto LABEL_26;
    v11 = UnityEngine_Renderer__get_sharedMaterial(v10, 0LL);
    v16 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v12, v13, v14, v15);
    UnityEngine_Material___ctor_40718828(v16, v11, 0LL);
  }
  if ( (BYTE3(FGOUv0Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv0Anim_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FGOUv0Anim_TypeInfo);
  if ( !v16 )
LABEL_26:
    sub_B170D4();
  if ( UnityEngine_Material__HasProperty(v16, FGOUv0Anim_TypeInfo->static_fields->mainTexID, 0LL) )
  {
    v17 = FGOUv0Anim_TypeInfo;
    if ( (BYTE3(FGOUv0Anim_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FGOUv0Anim_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FGOUv0Anim_TypeInfo);
      v17 = FGOUv0Anim_TypeInfo;
    }
    UnityEngine_Material__SetTextureOffset_40720980(
      v16,
      v17->static_fields->mainTexID,
      *(UnityEngine_Vector2_o *)&this->fields.m_Offset.fields.y,
      0LL);
  }
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v18 )
    {
      v19 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v18,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
      if ( v19 )
      {
        UnityEngine_Renderer__set_sharedMaterial(v19, v16, 0LL);
        return;
      }
    }
    goto LABEL_26;
  }
}