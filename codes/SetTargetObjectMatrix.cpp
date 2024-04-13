void __fastcall SetTargetObjectMatrix___ctor(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_SpriteRenderer_o *__fastcall SetTargetObjectMatrix__GetRenderer_SpriteRenderer_(
        SetTargetObjectMatrix_o *this,
        const MethodInfo_1E6AAAC *method)
{
  if ( !this
    || (this = (SetTargetObjectMatrix_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  return (UnityEngine_SpriteRenderer_o *)((__int64 (*)(void))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)();
}


void __fastcall SetTargetObjectMatrix__Start(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 *v20; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct UnityEngine_Renderer_o *Renderer_SpriteRenderer; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_Renderer_o **p_targetRenderer; // x0

  if ( (byte_42ECF05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___, v11, v12, v13);
    sub_B5D5C4(&Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___, v14, v15, v16);
    sub_B5D5C4(&Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___, v17, v18, v19);
    byte_42ECF05 = 1;
  }
  switch ( this->fields.rendererType )
  {
    case 0:
      v20 = &Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___;
      goto LABEL_14;
    case 1:
      v20 = &Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___;
      goto LABEL_14;
    case 2:
      v20 = &Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___;
LABEL_14:
      Renderer_SpriteRenderer = (struct UnityEngine_Renderer_o *)SetTargetObjectMatrix__GetRenderer_SpriteRenderer_(
                                                                   this,
                                                                   (const MethodInfo_1E6AAAC *)*v20);
      p_targetRenderer = &this->fields.targetRenderer;
      this->fields.targetRenderer = Renderer_SpriteRenderer;
      goto LABEL_15;
    case 3:
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_17;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
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
          sub_B5D69C(gameObject, method);
        Renderer_SpriteRenderer = (struct UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                     (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        this->fields.targetRenderer = Renderer_SpriteRenderer;
        p_targetRenderer = &this->fields.targetRenderer;
LABEL_15:
        sub_B5D560(
          (BattleServantConfConponent_o *)p_targetRenderer,
          (System_Int32_array **)Renderer_SpriteRenderer,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *material; // x0
  int32_t materialType; // w8
  UnityEngine_Matrix4x4_o *v13; // x2
  System_String_o *v14; // x1
  UnityEngine_Matrix4x4_o v15; // [xsp+0h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v16; // [xsp+40h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v17; // [xsp+80h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v18[2]; // [xsp+C0h] [xbp-A0h] BYREF

  if ( (byte_42ECF06 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16373/*"_targetMatrix"*/, v5, v6, v7);
    byte_42ECF06 = 1;
  }
  memset(v18, 0, sizeof(v18));
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
        UnityEngine_Transform__get_localToWorldMatrix(&v17, material, 0LL);
        v18[0] = v17;
        UnityEngine_Matrix4x4__get_inverse(&v17, v18, 0LL);
        v18[1] = v17;
        materialType = this->fields.materialType;
        if ( materialType == 1 )
        {
          material = (UnityEngine_Transform_o *)this->fields.targetRenderer;
          if ( material )
          {
            material = (UnityEngine_Transform_o *)UnityEngine_Renderer__get_material(
                                                    (UnityEngine_Renderer_o *)material,
                                                    0LL);
            v17 = v18[1];
            if ( material )
            {
              v13 = &v15;
              v14 = (System_String_o *)StringLiteral_16373/*"_targetMatrix"*/;
              v15 = v17;
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
            v17 = v18[1];
            if ( material )
            {
              v13 = &v16;
              v14 = (System_String_o *)StringLiteral_16373/*"_targetMatrix"*/;
              v16 = v17;
LABEL_20:
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v14, v13, 0LL);
              return;
            }
          }
        }
      }
      sub_B5D69C(material, v10);
    }
  }
}