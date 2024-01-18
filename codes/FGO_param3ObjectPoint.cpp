void __fastcall FGO_param3ObjectPoint___ctor(FGO_param3ObjectPoint_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint__Start(FGO_param3ObjectPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v16; // x21
  float v17; // s0
  UnityEngine_Material_o *v18; // x21
  float v19; // s1
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v21; // x19
  float v22; // s2

  if ( (byte_41885B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&StringLiteral_16188/*"_threeValue2"*/, v3);
    sub_B2C35C(&StringLiteral_16183/*"_threeValue0"*/, v4);
    sub_B2C35C(&StringLiteral_16184/*"_threeValue1"*/, v5);
    byte_41885B9 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
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
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16183/*"_threeValue0"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16184/*"_threeValue1"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16188/*"_threeValue2"*/, 0LL);
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
  UnityEngine_Material__SetFloat(v16, (System_String_o *)StringLiteral_16183/*"_threeValue0"*/, v17, 0LL);
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
    || (UnityEngine_Material__SetFloat(v18, (System_String_o *)StringLiteral_16184/*"_threeValue1"*/, v19, 0LL),
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
    sub_B2C434(renderer, v14);
  }
  UnityEngine_Material__SetFloat(v21, (System_String_o *)StringLiteral_16188/*"_threeValue2"*/, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint__Update(FGO_param3ObjectPoint_o *this, const MethodInfo *method)
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

  if ( (byte_41885BA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16188/*"_threeValue2"*/, method);
    sub_B2C35C(&StringLiteral_16183/*"_threeValue0"*/, v3);
    sub_B2C35C(&StringLiteral_16184/*"_threeValue1"*/, v4);
    byte_41885BA = 1;
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
  UnityEngine_Material__SetFloat(v6, (System_String_o *)StringLiteral_16183/*"_threeValue0"*/, v7, 0LL);
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
    || (UnityEngine_Material__SetFloat(v8, (System_String_o *)StringLiteral_16184/*"_threeValue1"*/, v9, 0LL),
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
    sub_B2C434(renderer, method);
  }
  UnityEngine_Material__SetFloat(v11, (System_String_o *)StringLiteral_16188/*"_threeValue2"*/, v12, 0LL);
}