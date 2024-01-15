void __fastcall FGO_param3ObjectPoint3___ctor(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint3__Start(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Renderer_o *Component_WebViewObject; // x0
  UnityEngine_Renderer_o **p_renderer; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v16; // x0
  UnityEngine_Material_o *v17; // x0
  UnityEngine_Material_o *v18; // x0
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Transform_o *transform; // x0
  float v21; // s0
  UnityEngine_Material_o *v22; // x0
  UnityEngine_Material_o *v23; // x21
  UnityEngine_Transform_o *v24; // x0
  float v25; // s1
  UnityEngine_Material_o *v26; // x0
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v28; // x19
  UnityEngine_Transform_o *v29; // x0
  float v30; // s2

  if ( (byte_40F9F6A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B16FFC(&StringLiteral_16125/*"_threeValue2_1"*/, v3);
    sub_B16FFC(&StringLiteral_16126/*"_threeValue2_2"*/, v4);
    sub_B16FFC(&StringLiteral_16124/*"_threeValue2_0"*/, v5);
    byte_40F9F6A = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  p_renderer = &this->fields._renderer;
  this->fields._renderer = Component_WebViewObject;
  sub_B16F98(
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
  sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !sharedMaterial )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword(sharedMaterial, (System_String_o *)StringLiteral_16124/*"_threeValue2_0"*/, 0LL);
  if ( !*p_renderer )
    goto LABEL_22;
  v16 = UnityEngine_Renderer__get_sharedMaterial(*p_renderer, 0LL);
  if ( !v16 )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword(v16, (System_String_o *)StringLiteral_16125/*"_threeValue2_1"*/, 0LL);
  if ( !*p_renderer )
    goto LABEL_22;
  v17 = UnityEngine_Renderer__get_sharedMaterial(*p_renderer, 0LL);
  if ( !v17 )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword(v17, (System_String_o *)StringLiteral_16126/*"_threeValue2_2"*/, 0LL);
  if ( !*p_renderer )
    goto LABEL_22;
  v18 = UnityEngine_Renderer__get_sharedMaterial(*p_renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v19 = v18;
  transform = UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !transform )
    goto LABEL_22;
  LODWORD(v21) = (unsigned int)UnityEngine_Transform__get_position(transform, 0LL);
  if ( !v19 )
    goto LABEL_22;
  UnityEngine_Material__SetFloat(v19, (System_String_o *)StringLiteral_16124/*"_threeValue2_0"*/, v21, 0LL);
  if ( !*p_renderer )
    goto LABEL_22;
  v22 = UnityEngine_Renderer__get_sharedMaterial(*p_renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v23 = v22;
  v24 = UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !v24
    || (*(UnityEngine_Vector3_o *)(&v25 - 1) = UnityEngine_Transform__get_position(v24, 0LL), !v23)
    || (UnityEngine_Material__SetFloat(v23, (System_String_o *)StringLiteral_16125/*"_threeValue2_1"*/, v25, 0LL), !*p_renderer)
    || (v26 = UnityEngine_Renderer__get_sharedMaterial(*p_renderer, 0LL),
        (TargetObject = this->fields.TargetObject) == 0LL)
    || (v28 = v26, (v29 = UnityEngine_GameObject__get_transform(TargetObject, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v30 - 2) = UnityEngine_Transform__get_position(v29, 0LL), !v28) )
  {
LABEL_22:
    sub_B170D4();
  }
  UnityEngine_Material__SetFloat(v28, (System_String_o *)StringLiteral_16126/*"_threeValue2_2"*/, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint3__Update(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *sharedMaterial; // x0
  UnityEngine_Material_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  float v9; // s0
  UnityEngine_Renderer_o *v10; // x0
  UnityEngine_Material_o *v11; // x0
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Transform_o *v13; // x0
  float v14; // s1
  UnityEngine_Renderer_o *v15; // x0
  UnityEngine_Material_o *v16; // x0
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v18; // x19
  UnityEngine_Transform_o *v19; // x0
  float v20; // s2

  if ( (byte_40F9F6B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16125/*"_threeValue2_1"*/, method);
    sub_B16FFC(&StringLiteral_16126/*"_threeValue2_2"*/, v3);
    sub_B16FFC(&StringLiteral_16124/*"_threeValue2_0"*/, v4);
    byte_40F9F6B = 1;
  }
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_16;
  sharedMaterial = UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v7 = sharedMaterial;
  transform = UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !transform )
    goto LABEL_16;
  LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_position(transform, 0LL);
  if ( !v7 )
    goto LABEL_16;
  UnityEngine_Material__SetFloat(v7, (System_String_o *)StringLiteral_16124/*"_threeValue2_0"*/, v9, 0LL);
  v10 = this->fields._renderer;
  if ( !v10 )
    goto LABEL_16;
  v11 = UnityEngine_Renderer__get_sharedMaterial(v10, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_16;
  v12 = v11;
  v13 = UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !v13 )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_position(v13, 0LL);
  if ( !v12
    || (UnityEngine_Material__SetFloat(v12, (System_String_o *)StringLiteral_16125/*"_threeValue2_1"*/, v14, 0LL),
        (v15 = this->fields._renderer) == 0LL)
    || (v16 = UnityEngine_Renderer__get_sharedMaterial(v15, 0LL), (TargetObject = this->fields.TargetObject) == 0LL)
    || (v18 = v16, (v19 = UnityEngine_GameObject__get_transform(TargetObject, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v20 - 2) = UnityEngine_Transform__get_position(v19, 0LL), !v18) )
  {
LABEL_16:
    sub_B170D4();
  }
  UnityEngine_Material__SetFloat(v18, (System_String_o *)StringLiteral_16126/*"_threeValue2_2"*/, v20, 0LL);
}