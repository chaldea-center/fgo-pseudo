void MultiplyTargetMatrix___ctor(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CF1AA4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16640/*"_rootMatrix"*/);
    sub_1C7BAE8(&StringLiteral_16618/*"_invrootMatrix"*/);
    byte_4CF1AA4 = 1;
  }
  v9 = StringLiteral_16640/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16640/*"_rootMatrix"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mainMatrix, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_16618/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16618/*"_invrootMatrix"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.invertMatrix, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultiplyTargetMatrix__SetTargetObj(
        MultiplyTargetMatrix_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !obj )
    sub_1C7BD40(this, 0);
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  this->fields.targetObj = transform;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.targetObj, (int32_t)transform, v5, v6, v7, v8, v9, v10);
}


void MultiplyTargetMatrix__Start(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_Transform_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CF1AA1 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1AA1 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetObj, 0, 0) && this->fields.targetObjPath )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_1C7BD40(gameObject, v6);
    }
    v7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)gameObject, this->fields.targetObjPath, 0);
    this->fields.targetObj = v7;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.targetObj, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
  MultiplyTargetMatrix__UpdateMatrix(this, v4);
}


void MultiplyTargetMatrix__UpdateMatrix(MultiplyTargetMatrix_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  il2cpp_array_size_t max_length; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct UnityEngine_Renderer_array *v16; // x1
  __int64 v17; // x22
  __int64 v18; // x23
  unsigned __int64 v19; // x26
  UnityEngine_Object_o *v20; // x21
  struct XWeaponTrail_array *v21; // x8
  __int64 v22; // x8
  UnityEngine_Object_o *v23; // x21
  unsigned int *v24; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x21
  __int64 v32; // x0

  if ( (byte_4CF1AA2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Renderer___TypeInfo);
    byte_4CF1AA2 = 1;
  }
  MultiplyTargetMatrix__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    max_length = targetXWeaponTrails->max_length;
    if ( max_length )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v9 = (struct UnityEngine_Renderer_array *)sub_1C7BB90(UnityEngine_Renderer___TypeInfo, max_length);
        this->fields.targetXWeaponTrailRenderers = v9;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.targetXWeaponTrailRenderers,
          (int32_t)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_27:
          sub_1C7BD40(Component_object, v16);
      }
      v17 = 4;
      v18 = 8;
      while ( 1 )
      {
        v16 = *p_targetXWeaponTrailRenderers;
        v19 = v17 - 4;
        if ( v17 - 4 >= SLODWORD(targetXWeaponTrails->max_length) )
          break;
        if ( !v16 )
          goto LABEL_27;
        if ( v19 >= LODWORD(v16->max_length) )
          goto LABEL_30;
        v20 = (UnityEngine_Object_o *)*((_QWORD *)&v16->obj.klass + v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(v20, 0, 0);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
        {
          v21 = this->fields.targetXWeaponTrails;
          if ( !v21 )
            goto LABEL_27;
          if ( v19 >= LODWORD(v21->max_length) )
            goto LABEL_30;
          v22 = *((_QWORD *)&v21->obj.klass + v17);
          if ( !v22 )
            goto LABEL_27;
          v23 = *(UnityEngine_Object_o **)(v22 + 144);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v23, 0, 0);
          if ( ((unsigned __int8)Component_object & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_27;
            v24 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v23,
                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v24 )
              goto LABEL_27;
            v31 = Component_object;
            if ( Component_object )
            {
              Component_object = (Il2CppObject *)sub_1C7BC24(Component_object, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
              if ( !Component_object )
              {
                v32 = sub_1C7BD64(0);
                sub_1C7BC10(v32, 0);
              }
            }
            if ( v19 >= v24[6] )
LABEL_30:
              sub_1C7BD48(Component_object);
            *(_QWORD *)&v24[2 * v17] = v31;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v24[v18], (int32_t)v31, v25, v26, v27, v28, v29, v30);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v17;
        v18 += 2;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrix__updateMatrix(this, v16, v5);
    }
  }
}


void MultiplyTargetMatrix__updateMatrix(
        MultiplyTargetMatrix_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  il2cpp_array_size_t max_length; // x8
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
  UnityEngine_Matrix4x4_o v23; // [xsp+0h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+40h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+80h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+C0h] [xbp-1D0h]
  UnityEngine_Matrix4x4_o v27; // [xsp+100h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+140h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+180h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+1C0h] [xbp-D0h]
  UnityEngine_Matrix4x4_o v31; // [xsp+200h] [xbp-90h]

  if ( (byte_4CF1AA3 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1AA3 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0, 0);
  if ( targetRenderers && v6 )
  {
    v8 = this->fields.targetObj;
    if ( !v8
      || (UnityEngine_Transform__get_localToWorldMatrix(&v28, v8, 0), v31 = v28, (v8 = this->fields.targetObj) == 0) )
    {
      sub_1C7BD40(v8, v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v28, v8, 0);
    v29 = v28;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v28, &v29, 0);
    v30 = v28;
    max_length = targetRenderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1C7BD48(inverse);
        v12 = (UnityEngine_Object_o *)targetRenderers->m_Items[v11];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v12 )
              sub_1C7BD40(inverse, v13);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v12, 0);
            mainMatrix = this->fields.mainMatrix;
            v28 = v31;
            if ( !material )
              sub_1C7BD40(0, mainMatrix);
            v24 = v28;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v24, 0);
            v21 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v12, 0);
            invertMatrix = this->fields.invertMatrix;
            v26 = v30;
            if ( !v21 )
              sub_1C7BD40(0, invertMatrix);
            v23 = v26;
            UnityEngine_Material__SetMatrix(v21, invertMatrix, &v23, 0);
          }
          else if ( !materialType )
          {
            if ( !v12 )
              sub_1C7BD40(inverse, v13);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v12, 0);
            v16 = this->fields.mainMatrix;
            v28 = v31;
            if ( !sharedMaterial )
              sub_1C7BD40(0, v16);
            v27 = v28;
            UnityEngine_Material__SetMatrix(sharedMaterial, v16, &v27, 0);
            v17 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v12, 0);
            v18 = this->fields.invertMatrix;
            v26 = v30;
            if ( !v17 )
              sub_1C7BD40(0, v18);
            v25 = v26;
            UnityEngine_Material__SetMatrix(v17, v18, &v25, 0);
          }
        }
        LODWORD(max_length) = targetRenderers->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)max_length );
    }
  }
}