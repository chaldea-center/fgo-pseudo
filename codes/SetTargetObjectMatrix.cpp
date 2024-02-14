void __fastcall SetTargetObjectMatrix___ctor(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_SpriteRenderer_o *__fastcall SetTargetObjectMatrix__GetRenderer_SpriteRenderer_(
        SetTargetObjectMatrix_o *this,
        const MethodInfo_204F158 *method)
{
  if ( !this
    || (this = (SetTargetObjectMatrix_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_B0D97C(this);
  }
  return (UnityEngine_SpriteRenderer_o *)((__int64 (*)(void))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)();
}


void __fastcall SetTargetObjectMatrix__Start(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct UnityEngine_Renderer_o *Renderer_SpriteRenderer; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_Renderer_o **p_targetRenderer; // x0

  if ( (byte_4218A75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___, v5);
    sub_B0D8A4(&Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___, v6);
    sub_B0D8A4(&Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___, v7);
    byte_4218A75 = 1;
  }
  switch ( this->fields.rendererType )
  {
    case 0:
      v8 = &Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___;
      goto LABEL_14;
    case 1:
      v8 = &Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___;
      goto LABEL_14;
    case 2:
      v8 = &Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___;
LABEL_14:
      Renderer_SpriteRenderer = (struct UnityEngine_Renderer_o *)SetTargetObjectMatrix__GetRenderer_SpriteRenderer_(
                                                                   this,
                                                                   (const MethodInfo_204F158 *)*v8);
      p_targetRenderer = &this->fields.targetRenderer;
      this->fields.targetRenderer = Renderer_SpriteRenderer;
      goto LABEL_15;
    case 3:
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_17;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
LABEL_17:
          sub_B0D97C(gameObject);
        Renderer_SpriteRenderer = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                     (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        this->fields.targetRenderer = Renderer_SpriteRenderer;
        p_targetRenderer = &this->fields.targetRenderer;
LABEL_15:
        sub_B0D840(
          (BattleServantConfConponent_o *)p_targetRenderer,
          (System_Int32_array **)Renderer_SpriteRenderer,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
LABEL_16:
      SetTargetObjectMatrix__updateMatrix(this, method);
      return;
    default:
      goto LABEL_16;
  }
}


void __fastcall SetTargetObjectMatrix__updateMatrix(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  UnityEngine_Transform_o *material; // x0
  int32_t materialType; // w8
  UnityEngine_Matrix4x4_o *v8; // x2
  System_String_o *v9; // x1
  UnityEngine_Matrix4x4_o v10; // [xsp+0h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v11; // [xsp+40h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v12; // [xsp+80h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v13[2]; // [xsp+C0h] [xbp-A0h] BYREF

  if ( (byte_4218A76 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16228/*"_targetMatrix"*/, v3);
    byte_4218A76 = 1;
  }
  memset(v13, 0, sizeof(v13));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(targetRenderer, 0LL, 0LL) )
    {
      material = this->fields.targetObj;
      if ( material )
      {
        UnityEngine_Transform__get_localToWorldMatrix(&v12, material, 0LL);
        v13[0] = v12;
        UnityEngine_Matrix4x4__get_inverse(&v12, v13, 0LL);
        v13[1] = v12;
        materialType = this->fields.materialType;
        if ( materialType == 1 )
        {
          material = (UnityEngine_Transform_o *)this->fields.targetRenderer;
          if ( material )
          {
            material = (UnityEngine_Transform_o *)UnityEngine_Renderer__get_material(
                                                    (UnityEngine_Renderer_o *)material,
                                                    0LL);
            v12 = v13[1];
            if ( material )
            {
              v8 = &v10;
              v9 = (System_String_o *)StringLiteral_16228/*"_targetMatrix"*/;
              v10 = v12;
              goto LABEL_20;
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
            v12 = v13[1];
            if ( material )
            {
              v8 = &v11;
              v9 = (System_String_o *)StringLiteral_16228/*"_targetMatrix"*/;
              v11 = v12;
LABEL_20:
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v9, v8, 0LL);
              return;
            }
          }
        }
      }
      sub_B0D97C(material);
    }
  }
}