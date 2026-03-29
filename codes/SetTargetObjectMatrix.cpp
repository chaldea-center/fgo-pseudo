void SetTargetObjectMatrix___ctor(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


Il2CppObject *SetTargetObjectMatrix__GetRenderer_object_(
        SetTargetObjectMatrix_o *this,
        const MethodInfo_324C588 *method)
{
  UnityEngine_Component_o *v3; // x20

  v3 = (UnityEngine_Component_o *)this;
  if ( !method->rgctx_data )
    this = (SetTargetObjectMatrix_o *)sub_1C69BC4();
  if ( !v3 || (this = (SetTargetObjectMatrix_o *)UnityEngine_Component__get_gameObject(v3, 0)) == 0 )
    sub_1C93D2C(this, method);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)this,
           (const MethodInfo_31FC084 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


void SetTargetObjectMatrix__Start(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  __int64 *v3; // x8
  Il2CppObject *Renderer_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4D344EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___);
    sub_1C93AD4(&Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___);
    sub_1C93AD4(&Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___);
    byte_4D344EA = 1;
  }
  switch ( this->fields.rendererType )
  {
    case 0:
      v3 = &Method_SetTargetObjectMatrix_GetRenderer_SkinnedMeshRenderer___;
      goto LABEL_7;
    case 1:
      v3 = &Method_SetTargetObjectMatrix_GetRenderer_MeshRenderer___;
      goto LABEL_7;
    case 2:
      v3 = &Method_SetTargetObjectMatrix_GetRenderer_SpriteRenderer___;
LABEL_7:
      Renderer_object = SetTargetObjectMatrix__GetRenderer_object_(this, (const MethodInfo_324C588 *)*v3);
      goto LABEL_8;
    case 3:
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_16;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !Component_object )
LABEL_16:
          sub_1C93D2C(gameObject, method);
        Renderer_object = UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)Component_object,
                            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Renderer___);
LABEL_8:
        this->fields.targetRenderer = (struct UnityEngine_Renderer_o *)Renderer_object;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.targetRenderer,
          (int32_t)Renderer_object,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10);
      }
LABEL_9:
      SetTargetObjectMatrix__updateMatrix(this, method);
      return;
    default:
      goto LABEL_9;
  }
}


void SetTargetObjectMatrix__updateMatrix(SetTargetObjectMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x20
  UnityEngine_Object_o *targetRenderer; // x20
  __int64 v5; // x1
  UnityEngine_Transform_o *material; // x0
  int32_t materialType; // w8
  UnityEngine_Matrix4x4_o *v8; // x2
  System_String_o *v9; // x1
  UnityEngine_Matrix4x4_o v10; // [xsp+0h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v11; // [xsp+40h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v12; // [xsp+80h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v13; // [xsp+C0h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v14; // [xsp+100h] [xbp-70h] BYREF

  if ( (byte_4D344EB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16689/*"_targetMatrix"*/);
    byte_4D344EB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetObj, 0, 0) )
  {
    targetRenderer = (UnityEngine_Object_o *)this->fields.targetRenderer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetRenderer, 0, 0) )
    {
      material = this->fields.targetObj;
      if ( material )
      {
        UnityEngine_Transform__get_localToWorldMatrix(&v14, material, 0);
        v13 = v14;
        UnityEngine_Matrix4x4__get_inverse(&v12, &v13, 0);
        v14 = v12;
        materialType = this->fields.materialType;
        if ( materialType == 1 )
        {
          material = (UnityEngine_Transform_o *)this->fields.targetRenderer;
          if ( material )
          {
            material = (UnityEngine_Transform_o *)UnityEngine_Renderer__get_material(
                                                    (UnityEngine_Renderer_o *)material,
                                                    0);
            v12 = v14;
            if ( material )
            {
              v8 = &v10;
              v9 = (System_String_o *)StringLiteral_16689/*"_targetMatrix"*/;
              v10 = v12;
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
            v12 = v14;
            if ( material )
            {
              v8 = &v11;
              v9 = (System_String_o *)StringLiteral_16689/*"_targetMatrix"*/;
              v11 = v12;
LABEL_18:
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v9, v8, 0);
              return;
            }
          }
        }
      }
      sub_1C93D2C(material, v5);
    }
  }
}