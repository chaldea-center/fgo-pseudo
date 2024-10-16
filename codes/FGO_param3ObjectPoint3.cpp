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
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Renderer_o **p_renderer; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  UnityEngine_Renderer_o *renderer; // x0
  UnityEngine_Material_o *v12; // x21
  float v13; // s0
  UnityEngine_Material_o *v14; // x21
  float v15; // s1
  UnityEngine_GameObject_o *TargetObject; // x8
  UnityEngine_Material_o *v17; // x19
  float v18; // s2

  if ( (byte_4AB4C09 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1BAB41C(&StringLiteral_16617/*"_threeValue2_1"*/, v3);
    sub_1BAB41C(&StringLiteral_16618/*"_threeValue2_2"*/, v4);
    sub_1BAB41C(&StringLiteral_16616/*"_threeValue2_0"*/, v5);
    byte_4AB4C09 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields._renderer = (struct UnityEngine_Renderer_o *)Component_object;
  p_renderer = &this->fields._renderer;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._renderer, (int32_t)Component_object, v8, v9);
  renderer = this->fields._renderer;
  if ( !renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16616/*"_threeValue2_0"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16617/*"_threeValue2_1"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !renderer )
    goto LABEL_22;
  UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)renderer, (System_String_o *)StringLiteral_16618/*"_threeValue2_2"*/, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v12 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_22;
  LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v12 )
    goto LABEL_22;
  UnityEngine_Material__SetFloat(v12, (System_String_o *)StringLiteral_16616/*"_threeValue2_0"*/, v13, 0LL);
  renderer = *p_renderer;
  if ( !*p_renderer )
    goto LABEL_22;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL);
  if ( !this->fields.TargetObject )
    goto LABEL_22;
  v14 = (UnityEngine_Material_o *)renderer;
  renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(this->fields.TargetObject, 0LL);
  if ( !renderer )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v15 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)renderer, 0LL);
  if ( !v14
    || (UnityEngine_Material__SetFloat(v14, (System_String_o *)StringLiteral_16617/*"_threeValue2_1"*/, v15, 0LL),
        (renderer = *p_renderer) == 0LL)
    || (renderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterial(renderer, 0LL),
        (TargetObject = this->fields.TargetObject) == 0LL)
    || (v17 = (UnityEngine_Material_o *)renderer,
        (renderer = (UnityEngine_Renderer_o *)UnityEngine_GameObject__get_transform(TargetObject, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v18 - 2) = UnityEngine_Transform__get_position(
                                                 (UnityEngine_Transform_o *)renderer,
                                                 0LL),
        !v17) )
  {
LABEL_22:
    sub_1BAB678(renderer, v10);
  }
  UnityEngine_Material__SetFloat(v17, (System_String_o *)StringLiteral_16618/*"_threeValue2_2"*/, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FGO_param3ObjectPoint3__Update(FGO_param3ObjectPoint3_o *this, const MethodInfo *method)
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

  if ( (byte_4AB4C0A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_16617/*"_threeValue2_1"*/, method);
    sub_1BAB41C(&StringLiteral_16618/*"_threeValue2_2"*/, v3);
    sub_1BAB41C(&StringLiteral_16616/*"_threeValue2_0"*/, v4);
    byte_4AB4C0A = 1;
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
  UnityEngine_Material__SetFloat(v6, (System_String_o *)StringLiteral_16616/*"_threeValue2_0"*/, v7, 0LL);
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
    || (UnityEngine_Material__SetFloat(v8, (System_String_o *)StringLiteral_16617/*"_threeValue2_1"*/, v9, 0LL),
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
    sub_1BAB678(renderer, method);
  }
  UnityEngine_Material__SetFloat(v11, (System_String_o *)StringLiteral_16618/*"_threeValue2_2"*/, v12, 0LL);
}