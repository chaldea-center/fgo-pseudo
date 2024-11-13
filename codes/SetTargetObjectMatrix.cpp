void __fastcall SetTargetObjectMatrix___ctor(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


Il2CppObject *__fastcall SetTargetObjectMatrix__GetRenderer_object_(
        SetTargetObjectMatrix_o *this,
        const MethodInfo_2FB1D54 *method)
{
  UnityEngine_Component_o *v3; // x20

  v3 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (SetTargetObjectMatrix_o *)sub_1C1C718(method);
  if ( !v3 || (this = (SetTargetObjectMatrix_o *)UnityEngine_Component__get_gameObject(v3, 0LL)) == 0LL )
    sub_1BCAA3C(this, method);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)this,
           (const MethodInfo_2F626D0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


void __fastcall SetTargetObjectMatrix__Start(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 *v14; // x8
  Il2CppObject *Renderer_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B195C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___, v8, v9);
    sub_1BCA7E0(&Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___, v10, v11);
    sub_1BCA7E0(&Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___, v12, v13);
    byte_4B195C9 = 1;
  }
  switch ( this->fields.rendererType )
  {
    case 0:
      v14 = &Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___;
      goto LABEL_7;
    case 1:
      v14 = &Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___;
      goto LABEL_7;
    case 2:
      v14 = &Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___;
LABEL_7:
      Renderer_object = SetTargetObjectMatrix__GetRenderer_object_(this, (const MethodInfo_2FB1D54 *)*v14);
      goto LABEL_8;
    case 3:
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_16;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_object )
LABEL_16:
          sub_1BCAA3C(gameObject, method);
        Renderer_object = UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Component_object,
                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
LABEL_8:
        this->fields.targetRenderer = (struct UnityEngine_Renderer_o *)Renderer_object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.targetRenderer,
          (int64_t)Renderer_object,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *targetObj; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *targetRenderer; // x20
  __int64 v9; // x1
  UnityEngine_Transform_o *material; // x0
  int32_t materialType; // w8
  UnityEngine_Matrix4x4_o *v12; // x2
  System_String_o *v13; // x1
  UnityEngine_Matrix4x4_o v14; // [xsp+0h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v15; // [xsp+40h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v16; // [xsp+80h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v17; // [xsp+C0h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v18; // [xsp+100h] [xbp-70h] BYREF

  if ( (byte_4B195CA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16745/*"_targetMatrix"*/, v4, v5);
    byte_4B195CA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(targetRenderer, 0LL, 0LL) )
    {
      material = this->fields.targetObj;
      if ( material )
      {
        UnityEngine_Transform__get_localToWorldMatrix(&v18, material, 0LL);
        v17 = v18;
        UnityEngine_Matrix4x4__get_inverse(&v16, &v17, 0LL);
        v18 = v16;
        materialType = this->fields.materialType;
        if ( materialType == 1 )
        {
          material = (UnityEngine_Transform_o *)this->fields.targetRenderer;
          if ( material )
          {
            material = (UnityEngine_Transform_o *)UnityEngine_Renderer__get_material(
                                                    (UnityEngine_Renderer_o *)material,
                                                    0LL);
            v16 = v18;
            if ( material )
            {
              v12 = &v14;
              v13 = (System_String_o *)StringLiteral_16745/*"_targetMatrix"*/;
              v14 = v16;
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
            v16 = v18;
            if ( material )
            {
              v12 = &v15;
              v13 = (System_String_o *)StringLiteral_16745/*"_targetMatrix"*/;
              v15 = v16;
LABEL_18:
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v13, v12, 0LL);
              return;
            }
          }
        }
      }
      sub_1BCAA3C(material, v9);
    }
  }
}