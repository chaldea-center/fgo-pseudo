void __fastcall FGO_param3ObjectPoint2___ctor(FGO_param3ObjectPoint2_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint2__Start(FGO_param3ObjectPoint2_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v16; // x21
  float v17; // s0
  UnityEngine_Material_o *v18; // x21
  float v19; // s1
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v21; // x19
  float v22; // s2

  if ( (byte_4C20DD7 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1C3B764(&StringLiteral_16904/*"bit_omikuzi_open"*/, v3);
    sub_1C3B764(&StringLiteral_16903/*"bit_omikuzi_get"*/, v4);
    sub_1C3B764(&StringLiteral_16902/*"bit_mural_update{0}"*/, v5);
    byte_4C20DD7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._renderer,
    (int64_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16902/*"bit_mural_update{0}"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16903/*"bit_omikuzi_get"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16904/*"bit_omikuzi_open"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v16 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_22;
  LODWORD(v17) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v16 )
    goto LABEL_22;
  UnityEngine_Material__SetFloat(v16, (System_String_o *)StringLiteral_16902/*"bit_mural_update{0}"*/, v17, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v18 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v18
    || (UnityEngine_Material__SetFloat(v18, (System_String_o *)StringLiteral_16903/*"bit_omikuzi_get"*/, v19, 0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL),
        (TargetObject = this->fields.TargetObject) == 0LL)
    || (v21 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v22 - 2) = UnityEngine_Transform__get_position(
                                                 (UnityEngine_Transform_o *)renderer,
                                                 0LL),
        !v21) )
  {
LABEL_22:
    sub_1C3B9C0(renderer, v14);
  }
  UnityEngine_Material__SetFloat(v21, (System_String_o *)StringLiteral_16904/*"bit_omikuzi_open"*/, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint2__Update(FGO_param3ObjectPoint2_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v6; // x20
  float v7; // s0
  UnityEngine_Material_o *v8; // x20
  float v9; // s1
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v11; // x19
  float v12; // s2

  if ( (byte_4C20DD8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16904/*"bit_omikuzi_open"*/, method);
    sub_1C3B764(&StringLiteral_16903/*"bit_omikuzi_get"*/, v3);
    sub_1C3B764(&StringLiteral_16902/*"bit_mural_update{0}"*/, v4);
    byte_4C20DD8 = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v6 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_16;
  LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v6 )
    goto LABEL_16;
  UnityEngine_Material__SetFloat(v6, (System_String_o *)StringLiteral_16902/*"bit_mural_update{0}"*/, v7, 0LL);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v8 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v8
    || (UnityEngine_Material__SetFloat(v8, (System_String_o *)StringLiteral_16903/*"bit_omikuzi_get"*/, v9, 0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL),
        (TargetObject = this->fields.TargetObject) == 0LL)
    || (v11 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_position(
                                                 (UnityEngine_Transform_o *)renderer,
                                                 0LL),
        !v11) )
  {
LABEL_16:
    sub_1C3B9C0(renderer, method);
  }
  UnityEngine_Material__SetFloat(v11, (System_String_o *)StringLiteral_16904/*"bit_omikuzi_open"*/, v12, 0LL);
}