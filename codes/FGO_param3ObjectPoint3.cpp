void FGO_param3ObjectPoint3___ctor(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGO_param3ObjectPoint3__Start(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v9; // x21
  float v10; // s0
  UnityEngine_Material_o *v11; // x21
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v13; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C26095 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&StringLiteral_16592/*"_threeValue2_1"*/);
    sub_1C2D490(&StringLiteral_16593/*"_threeValue2_2"*/);
    sub_1C2D490(&StringLiteral_16591/*"_threeValue2_0"*/);
    byte_4C26095 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._renderer, (int32_t)Component_object, v5, v6);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16591/*"_threeValue2_0"*/, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16592/*"_threeValue2_1"*/, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16593/*"_threeValue2_2"*/, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v9 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0);
  if ( !renderer )
    goto LABEL_22;
  LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0);
  if ( !v9 )
    goto LABEL_22;
  UnityEngine_Material__SetFloat(v9, (System_String_o *)StringLiteral_16591/*"_threeValue2_0"*/, v10, 0);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v11 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0);
  if ( !renderer )
    goto LABEL_22;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0);
  if ( !v11
    || (UnityEngine_Material__SetFloat(v11, (System_String_o *)StringLiteral_16592/*"_threeValue2_1"*/, position.fields.y, 0),
        (renderer = *p_renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0),
        (TargetObject = this->fields.TargetObject) == 0)
    || (v13 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0)) == 0)
    || (v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0), !v13) )
  {
LABEL_22:
    sub_1C2D6EC(renderer, v7);
  }
  UnityEngine_Material__SetFloat(v13, (System_String_o *)StringLiteral_16593/*"_threeValue2_2"*/, v15.fields.z, 0);
}


void FGO_param3ObjectPoint3__Update(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v4; // x20
  float v5; // s0
  UnityEngine_Material_o *v6; // x20
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v8; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C26096 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16592/*"_threeValue2_1"*/);
    sub_1C2D490(&StringLiteral_16593/*"_threeValue2_2"*/);
    sub_1C2D490(&StringLiteral_16591/*"_threeValue2_0"*/);
    byte_4C26096 = 1;
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
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0);
  if ( !v4 )
    goto LABEL_16;
  UnityEngine_Material__SetFloat(v4, (System_String_o *)StringLiteral_16591/*"_threeValue2_0"*/, v5, 0);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v6 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0);
  if ( !renderer )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0);
  if ( !v6
    || (UnityEngine_Material__SetFloat(v6, (System_String_o *)StringLiteral_16592/*"_threeValue2_1"*/, position.fields.y, 0),
        (renderer = this->fields._renderer) == 0)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0),
        (TargetObject = this->fields.TargetObject) == 0)
    || (v8 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0)) == 0)
    || (v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0), !v8) )
  {
LABEL_16:
    sub_1C2D6EC(renderer, method);
  }
  UnityEngine_Material__SetFloat(v8, (System_String_o *)StringLiteral_16593/*"_threeValue2_2"*/, v10.fields.z, 0);
}