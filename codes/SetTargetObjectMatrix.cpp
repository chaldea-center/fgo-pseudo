void SetTargetObjectMatrix___ctor(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


Il2CppObject *SetTargetObjectMatrix__GetRenderer_object_(
        SetTargetObjectMatrix_o *this,
        const MethodInfo_39863C0 *method)
{
  UnityEngine_Component_o *v3; // x20

  v3 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (SetTargetObjectMatrix_o *)sub_224B964();
  if ( !v3 || (this = (SetTargetObjectMatrix_o *)UnityEngine_Component__get_gameObject(v3, 0)) == 0 )
    sub_2213CDC(this, method);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)this,
           (const MethodInfo_38B6F40 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


void SetTargetObjectMatrix__Start(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  int32_t rendererType; // w8
  __int64 *v4; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *Renderer_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5974554 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___);
    sub_2213A60(&Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___);
    sub_2213A60(&Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___);
    byte_5974554 = 1;
  }
  rendererType = this->fields.rendererType;
  if ( rendererType > 1 )
  {
    if ( rendererType == 2 )
    {
      v4 = &Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___;
      goto LABEL_17;
    }
    if ( rendererType == 3 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_19;
        if ( Component_object )
        {
          Renderer_object = UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)Component_object,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
LABEL_18:
          this->fields.targetRenderer = (struct UnityEngine_Renderer_o *)Renderer_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.targetRenderer,
            (int32_t)Renderer_object,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
          goto LABEL_19;
        }
      }
      sub_2213CDC(gameObject, method);
    }
  }
  else
  {
    if ( !rendererType )
    {
      v4 = &Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___;
      goto LABEL_17;
    }
    if ( rendererType == 1 )
    {
      v4 = &Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___;
LABEL_17:
      Renderer_object = SetTargetObjectMatrix__GetRenderer_object_(this, (const MethodInfo_39863C0 *)*v4);
      goto LABEL_18;
    }
  }
LABEL_19:
  SetTargetObjectMatrix__updateMatrix(this, method);
}


void SetTargetObjectMatrix__updateMatrix(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  int v4; // w8
  __int64 v5; // x1
  UnityEngine_Object_o *targetRenderer; // x20
  __int64 v7; // x1
  UnityEngine_Transform_o *material; // x0
  int32_t materialType; // w8
  UnityEngine_Matrix4x4_o *v10; // x2
  System_String_o *v11; // x1
  UnityEngine_Matrix4x4_o v12; // [xsp+0h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v13; // [xsp+40h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v14; // [xsp+80h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v15; // [xsp+C0h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v16; // [xsp+100h] [xbp-70h] BYREF

  if ( (byte_5974555 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17259/*"_targetMatrix"*/);
    byte_5974555 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  v4 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v15, 0, sizeof(v15));
  memset(&v16, 0, sizeof(v16));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetObj, 0, 0) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(targetRenderer, 0, 0) )
    {
      material = this->fields.targetObj;
      if ( material )
      {
        UnityEngine_Transform__get_localToWorldMatrix(&v14, material, 0);
        v15 = v14;
        UnityEngine_Matrix4x4__get_inverse(&v16, &v15, 0);
        materialType = this->fields.materialType;
        if ( materialType == 1 )
        {
          material = (UnityEngine_Transform_o *)this->fields.targetRenderer;
          if ( material )
          {
            material = (UnityEngine_Transform_o *)UnityEngine_Renderer__get_material(
                                                    (UnityEngine_Renderer_o *)material,
                                                    0);
            if ( material )
            {
              v10 = &v12;
              v12 = v16;
              v11 = (System_String_o *)StringLiteral_17259/*"_targetMatrix"*/;
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
                                                    0);
            if ( material )
            {
              v10 = &v13;
              v13 = v16;
              v11 = (System_String_o *)StringLiteral_17259/*"_targetMatrix"*/;
LABEL_18:
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v11, v10, 0);
              return;
            }
          }
        }
      }
      sub_2213CDC(material, v7);
    }
  }
}