void __fastcall FGO_param3ObjectPoint3___ctor(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint3__Start(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v13; // x21
  float v14; // s0
  UnityEngine_Material_o *v15; // x21
  float v16; // s1
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v18; // x19
  float v19; // s2

  if ( (byte_42B036A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B52984(&StringLiteral_16298/*"_threeValue2_1"*/);
    sub_B52984(&StringLiteral_16299/*"_threeValue2_2"*/);
    sub_B52984(&StringLiteral_16297/*"_threeValue2_0"*/);
    byte_42B036A = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._renderer,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16297/*"_threeValue2_0"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16298/*"_threeValue2_1"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16299/*"_threeValue2_2"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v13 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_22;
  LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v13 )
    goto LABEL_22;
  UnityEngine_Material__SetFloat(v13, (System_String_o *)StringLiteral_16297/*"_threeValue2_0"*/, v14, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v15 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v15
    || (UnityEngine_Material__SetFloat(v15, (System_String_o *)StringLiteral_16298/*"_threeValue2_1"*/, v16, 0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL),
        (TargetObject = this->fields.TargetObject) == 0LL)
    || (v18 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_position(
                                                 (UnityEngine_Transform_o *)renderer,
                                                 0LL),
        !v18) )
  {
LABEL_22:
    sub_B52A5C(renderer, v11);
  }
  UnityEngine_Material__SetFloat(v18, (System_String_o *)StringLiteral_16299/*"_threeValue2_2"*/, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint3__Update(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v4; // x20
  float v5; // s0
  UnityEngine_Material_o *v6; // x20
  float v7; // s1
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v9; // x19
  float v10; // s2

  if ( (byte_42B036B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16298/*"_threeValue2_1"*/);
    sub_B52984(&StringLiteral_16299/*"_threeValue2_2"*/);
    sub_B52984(&StringLiteral_16297/*"_threeValue2_0"*/);
    byte_42B036B = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v4 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_16;
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v4 )
    goto LABEL_16;
  UnityEngine_Material__SetFloat(v4, (System_String_o *)StringLiteral_16297/*"_threeValue2_0"*/, v5, 0LL);
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
  *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v6
    || (UnityEngine_Material__SetFloat(v6, (System_String_o *)StringLiteral_16298/*"_threeValue2_1"*/, v7, 0LL),
        (renderer = this->fields._renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL),
        (TargetObject = this->fields.TargetObject) == 0LL)
    || (v9 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_position(
                                                 (UnityEngine_Transform_o *)renderer,
                                                 0LL),
        !v9) )
  {
LABEL_16:
    sub_B52A5C(renderer, method);
  }
  UnityEngine_Material__SetFloat(v9, (System_String_o *)StringLiteral_16299/*"_threeValue2_2"*/, v10, 0LL);
}