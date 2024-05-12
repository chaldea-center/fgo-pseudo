void __fastcall MultiplyTargetMatrix___ctor(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438C2CD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16482/*"_rootMatrix"*/);
    sub_B775C4(&StringLiteral_16454/*"_invrootMatrix"*/);
    byte_438C2CD = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16482/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16482/*"_rootMatrix"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.mainMatrix, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16454/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16454/*"_invrootMatrix"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.invertMatrix, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultiplyTargetMatrix__SetTargetObj(
        MultiplyTargetMatrix_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !obj )
    sub_B7769C(this, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetObj,
    (System_Int32_array **)transform,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MultiplyTargetMatrix__Start(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_Transform_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438C2CA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C2CA = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(targetObj, 0LL, 0LL) && this->fields.targetObjPath )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_B7769C(gameObject, v6);
    }
    v7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)gameObject, this->fields.targetObjPath, 0LL);
    this->fields.targetObj = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.targetObj,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  MultiplyTargetMatrix__UpdateMatrix(this, v4);
}


void __fastcall MultiplyTargetMatrix__UpdateMatrix(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  srcLineSprite_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v7; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Renderer_array *v16; // x1
  unsigned __int64 v17; // x22
  UnityEngine_Object_o *v18; // x21
  struct XWeaponTrail_array *v19; // x8
  XWeaponTrail_o *v20; // x8
  UnityEngine_Object_o *mMeshObj; // x21
  unsigned int *v22; // x25
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  unsigned int *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_438C2CB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Renderer___TypeInfo);
    byte_438C2CB = 1;
  }
  MultiplyTargetMatrix__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    v7 = *(_QWORD *)&targetXWeaponTrails->max_length;
    if ( v7 )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v9 = (struct UnityEngine_Renderer_array *)sub_B775DC(UnityEngine_Renderer___TypeInfo, v7);
        this->fields.targetXWeaponTrailRenderers = v9;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.targetXWeaponTrailRenderers,
          (System_Int32_array **)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_29:
          sub_B7769C(Component_srcLineSprite, v16);
      }
      v17 = 0LL;
      while ( 1 )
      {
        v16 = *p_targetXWeaponTrailRenderers;
        if ( (__int64)v17 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v16 )
          goto LABEL_29;
        if ( v17 >= v16->max_length )
          goto LABEL_32;
        v18 = (UnityEngine_Object_o *)v16->m_Items[v17];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
        {
          v19 = this->fields.targetXWeaponTrails;
          if ( !v19 )
            goto LABEL_29;
          if ( v17 >= v19->max_length )
            goto LABEL_32;
          v20 = v19->m_Items[v17];
          if ( !v20 )
            goto LABEL_29;
          mMeshObj = (UnityEngine_Object_o *)v20->fields.mMeshObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(mMeshObj, 0LL, 0LL);
          if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
          {
            if ( !mMeshObj )
              goto LABEL_29;
            v22 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)mMeshObj,
                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v22 )
              goto LABEL_29;
            v29 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (srcLineSprite_o *)sub_B77684(
                                                             Component_srcLineSprite,
                                                             *(_QWORD *)(*(_QWORD *)v22 + 64LL));
              if ( !Component_srcLineSprite )
              {
                v32 = sub_B776BC(0LL);
                sub_B77668(v32, 0LL);
              }
            }
            if ( v17 >= v22[6] )
            {
LABEL_32:
              v31 = sub_B776C8(Component_srcLineSprite);
              sub_B77668(v31, 0LL);
            }
            v30 = &v22[2 * v17];
            *((_QWORD *)v30 + 4) = v29;
            sub_B77560((BattleServantConfConponent_o *)(v30 + 8), v29, v23, v24, v25, v26, v27, v28);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v17;
        if ( !targetXWeaponTrails )
          goto LABEL_29;
      }
      MultiplyTargetMatrix__updateMatrix(this, v16, v5);
    }
  }
}


void __fastcall MultiplyTargetMatrix__updateMatrix(
        MultiplyTargetMatrix_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x22
  __int64 v13; // x1
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v16; // x1
  UnityEngine_Material_o *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_Material_o *material; // x0
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v21; // x0
  System_String_o *invertMatrix; // x1
  __int64 v23; // x0
  UnityEngine_Matrix4x4_o v24; // [xsp+0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+40h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+80h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+C0h] [xbp-1F0h]
  UnityEngine_Matrix4x4_o v28; // [xsp+100h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+140h] [xbp-170h] BYREF
  int v30; // [xsp+188h] [xbp-128h]
  UnityEngine_Matrix4x4_o v31[3]; // [xsp+190h] [xbp-120h] BYREF

  if ( (byte_438C2CC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C2CC = 1;
  }
  memset(v31, 0, sizeof(v31));
  v30 = 0;
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL);
  if ( targetRenderers && v6 )
  {
    v8 = this->fields.targetObj;
    if ( !v8
      || (UnityEngine_Transform__get_localToWorldMatrix(&v29, v8, 0LL),
          v31[2] = v29,
          (v8 = this->fields.targetObj) == 0LL) )
    {
      sub_B7769C(v8, v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v29, v8, 0LL);
    v31[0] = v29;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v29, v31, 0LL);
    v31[1] = v29;
    v10 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)v10 )
        {
          v23 = sub_B776C8(inverse);
          sub_B77668(v23, 0LL);
        }
        v12 = (UnityEngine_Object_o *)targetRenderers->m_Items[v11];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v12 )
              sub_B7769C(inverse, v13);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v12, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v29 = v31[2];
            if ( !material )
              sub_B7769C(0LL, mainMatrix);
            v25 = v29;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v25, 0LL);
            v21 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v12, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v27 = v31[1];
            if ( !v21 )
              sub_B7769C(0LL, invertMatrix);
            v24 = v27;
            UnityEngine_Material__SetMatrix(v21, invertMatrix, &v24, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v12 )
              sub_B7769C(inverse, v13);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v12, 0LL);
            v16 = this->fields.mainMatrix;
            v29 = v31[2];
            if ( !sharedMaterial )
              sub_B7769C(0LL, v16);
            v28 = v29;
            UnityEngine_Material__SetMatrix(sharedMaterial, v16, &v28, 0LL);
            v17 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v12, 0LL);
            v18 = this->fields.invertMatrix;
            v27 = v31[1];
            if ( !v17 )
              sub_B7769C(0LL, v18);
            v26 = v27;
            UnityEngine_Material__SetMatrix(v17, v18, &v26, 0LL);
          }
        }
        LODWORD(v10) = targetRenderers->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)v10 );
    }
  }
}