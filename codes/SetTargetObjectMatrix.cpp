void __fastcall SetTargetObjectMatrix___ctor(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


Il2CppObject *__fastcall SetTargetObjectMatrix__GetRenderer_object_(
        SetTargetObjectMatrix_o *this,
        const MethodInfo_2FA25A8 *method)
{
  UnityEngine_Component_o *v3; // x20

  v3 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (SetTargetObjectMatrix_o *)sub_1B9D67C();
  if ( !v3 || (this = (SetTargetObjectMatrix_o *)UnityEngine_Component__get_gameObject(v3, 0LL)) == 0LL )
    sub_1B4D1EC(this, method);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)this,
           (const MethodInfo_2F53444 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


void __fastcall SetTargetObjectMatrix__Start(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8
  Il2CppObject *Renderer_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_49BE428 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___, v5);
    sub_1B4CF90(&Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___, v6);
    sub_1B4CF90(&Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___, v7);
    byte_49BE428 = 1;
  }
  switch ( this->fields.rendererType )
  {
    case 0:
      v8 = &Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___;
      goto LABEL_7;
    case 1:
      v8 = &Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___;
      goto LABEL_7;
    case 2:
      v8 = &Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___;
LABEL_7:
      Renderer_object = SetTargetObjectMatrix__GetRenderer_object_(this, (const MethodInfo_2FA25A8 *)*v8);
      goto LABEL_8;
    case 3:
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_16;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_object )
LABEL_16:
          sub_1B4D1EC(gameObject, method);
        Renderer_object = UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Component_object,
                            (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Renderer___);
LABEL_8:
        this->fields.targetRenderer = (struct UnityEngine_Renderer_o *)Renderer_object;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.targetRenderer, (int32_t)Renderer_object, v10, v11);
      }
LABEL_9:
      SetTargetObjectMatrix__updateMatrix(this, method);
      return;
    default:
      goto LABEL_9;
  }
}


void __fastcall SetTargetObjectMatrix__updateMatrix(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  __int64 v6; // x1
  UnityEngine_Transform_o *material; // x0
  int32_t materialType; // w8
  UnityEngine_Matrix4x4_o *v9; // x2
  System_String_o *v10; // x1
  UnityEngine_Matrix4x4_o v11; // [xsp+0h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v12; // [xsp+40h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v13; // [xsp+80h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v14; // [xsp+C0h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v15; // [xsp+100h] [xbp-70h] BYREF

  if ( (byte_49BE429 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_16272/*"_targetMatrix"*/, v3);
    byte_49BE429 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetRenderer, 0LL, 0LL) )
    {
      material = this->fields.targetObj;
      if ( material )
      {
        UnityEngine_Transform__get_localToWorldMatrix(&v15, material, 0LL);
        v14 = v15;
        UnityEngine_Matrix4x4__get_inverse(&v13, &v14, 0LL);
        v15 = v13;
        materialType = this->fields.materialType;
        if ( materialType == 1 )
        {
          material = (UnityEngine_Transform_o *)this->fields.targetRenderer;
          if ( material )
          {
            material = (UnityEngine_Transform_o *)UnityEngine_Renderer__get_material(
                                                    (UnityEngine_Renderer_o *)material,
                                                    0LL);
            v13 = v15;
            if ( material )
            {
              v9 = &v11;
              v10 = (System_String_o *)StringLiteral_16272/*"_targetMatrix"*/;
              v11 = v13;
              goto LABEL_18;
            }
          }
        }
        else
        {
          if ( materialType )
            return;
          material = (UnityEngine_Transform_o *)this->fields.targetRenderer;
          if ( material )
          {
            material = (UnityEngine_Transform_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                    (UnityEngine_Renderer_o *)material,
                                                    0LL);
            v13 = v15;
            if ( material )
            {
              v9 = &v12;
              v10 = (System_String_o *)StringLiteral_16272/*"_targetMatrix"*/;
              v12 = v13;
LABEL_18:
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v10, v9, 0LL);
              return;
            }
          }
        }
      }
      sub_1B4D1EC(material, v6);
    }
  }
}