void FGO_param3ObjectPoint3___ctor(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_param3ObjectPoint3__Start(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v13; // x21
  UnityEngine_Material_o *v14; // x21
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v16; // x19
  float v17; // s0
  float y; // s1
  float z; // s2

  if ( (byte_4D2F78B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C93AD4(&StringLiteral_16699/*"_threeValue2_1"*/);
    sub_1C93AD4(&StringLiteral_16700/*"_threeValue2_2"*/);
    sub_1C93AD4(&StringLiteral_16698/*"_threeValue2_0"*/);
    byte_4D2F78B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._renderer,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16698/*"_threeValue2_0"*/, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16699/*"_threeValue2_1"*/, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16700/*"_threeValue2_2"*/, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v13 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0);
  if ( !renderer )
    goto LABEL_22;
  LODWORD(v17) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0);
  if ( !v13 )
    goto LABEL_22;
  UnityEngine_Material__SetFloat(v13, (System_String_o *)StringLiteral_16698/*"_threeValue2_0"*/, v17, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v14 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0);
  if ( !renderer )
    goto LABEL_22;
  y = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0).fields.y;
  if ( !v14
    || (UnityEngine_Material__SetFloat(v14, (System_String_o *)StringLiteral_16699/*"_threeValue2_1"*/, y, 0), (renderer = *p_renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0),
        (TargetObject = this->fields.TargetObject) == 0)
    || (v16 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0)) == 0)
    || (z = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0).fields.z, !v16) )
  {
LABEL_22:
    sub_1C93D2C(renderer, v11);
  }
  UnityEngine_Material__SetFloat(v16, (System_String_o *)StringLiteral_16700/*"_threeValue2_2"*/, z, 0);
}


void FGO_param3ObjectPoint3__Update(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v4; // x20
  UnityEngine_Material_o *v5; // x20
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v7; // x19
  float v8; // s0
  float y; // s1
  float z; // s2

  if ( (byte_4D2F78C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16699/*"_threeValue2_1"*/);
    sub_1C93AD4(&StringLiteral_16700/*"_threeValue2_2"*/);
    sub_1C93AD4(&StringLiteral_16698/*"_threeValue2_0"*/);
    byte_4D2F78C = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v4 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0);
  if ( !renderer )
    goto LABEL_16;
  LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0);
  if ( !v4 )
    goto LABEL_16;
  UnityEngine_Material__SetFloat(v4, (System_String_o *)StringLiteral_16698/*"_threeValue2_0"*/, v8, 0);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v5 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0);
  if ( !renderer )
    goto LABEL_16;
  y = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0).fields.y;
  if ( !v5
    || (UnityEngine_Material__SetFloat(v5, (System_String_o *)StringLiteral_16699/*"_threeValue2_1"*/, y, 0),
        (renderer = this->fields._renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0),
        (TargetObject = this->fields.TargetObject) == 0)
    || (v7 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0)) == 0)
    || (z = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0).fields.z, !v7) )
  {
LABEL_16:
    sub_1C93D2C(renderer, method);
  }
  UnityEngine_Material__SetFloat(v7, (System_String_o *)StringLiteral_16700/*"_threeValue2_2"*/, z, 0);
}