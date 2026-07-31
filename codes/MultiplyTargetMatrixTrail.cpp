void MultiplyTargetMatrixTrail___ctor(MultiplyTargetMatrixTrail_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593BC5F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17216/*"_rootMatrix"*/);
    sub_21FFC50(&StringLiteral_17194/*"_invrootMatrix"*/);
    byte_593BC5F = 1;
  }
  v9 = StringLiteral_17216/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_17216/*"_rootMatrix"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mainMatrix, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17194/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_17194/*"_invrootMatrix"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.invertMatrix, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultiplyTargetMatrixTrail__SetTargetObj(
        MultiplyTargetMatrixTrail_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !obj )
    sub_21FFECC(this, 0);
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  this->fields.targetObj = transform;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.targetObj, (int32_t)transform, v5, v6, v7, v8, v9, v10);
}


void MultiplyTargetMatrixTrail__Start(MultiplyTargetMatrixTrail_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct UnityEngine_Transform_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593BC5C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC5C = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(targetObj, 0, 0) && this->fields.targetObjPath )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v6);
    }
    v7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)gameObject, this->fields.targetObjPath, 0);
    this->fields.targetObj = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.targetObj, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
  MultiplyTargetMatrixTrail__UpdateMatrix(this, v4);
}


void MultiplyTargetMatrixTrail__UpdateMatrix(MultiplyTargetMatrixTrail_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  il2cpp_array_size_t max_length; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UnityEngine_Renderer_array *v16; // x1
  __int64 v17; // x24
  __int64 v18; // x25
  unsigned __int64 v19; // x26
  UnityEngine_Object_o *v20; // x21
  struct XWeaponTrail_array *v21; // x8
  __int64 v22; // x8
  UnityEngine_Object_o *v23; // x21
  unsigned int *v24; // x27
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x0

  if ( (byte_593BC5D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Renderer___TypeInfo);
    byte_593BC5D = 1;
  }
  MultiplyTargetMatrixTrail__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    max_length = targetXWeaponTrails->max_length;
    if ( max_length )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v9 = (struct UnityEngine_Renderer_array *)sub_21FFD10(UnityEngine_Renderer___TypeInfo, max_length);
        this->fields.targetXWeaponTrailRenderers = v9;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.targetXWeaponTrailRenderers,
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
          sub_21FFECC(Component_object, v16);
      }
      v17 = 4;
      v18 = 8;
      while ( 1 )
      {
        v19 = v17 - 4;
        v16 = *p_targetXWeaponTrailRenderers;
        if ( v17 - 4 >= SLODWORD(targetXWeaponTrails->max_length) )
          break;
        if ( !v16 )
          goto LABEL_27;
        if ( v19 >= LODWORD(v16->max_length) )
          goto LABEL_30;
        v20 = (UnityEngine_Object_o *)*((_QWORD *)&v16->obj.klass + v17);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
          Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v23, 0, 0);
          if ( ((unsigned __int8)Component_object & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_27;
            v24 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v23,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v24 )
              goto LABEL_27;
            v31 = Component_object;
            if ( Component_object )
            {
              Component_object = (Il2CppObject *)sub_21FFDA4(Component_object, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
              if ( !Component_object )
              {
                v33 = sub_21FFEF0(0, v32);
                sub_21FFD90(v33, 0);
              }
            }
            if ( v19 >= v24[6] )
LABEL_30:
              sub_21FFED4(Component_object);
            *(_QWORD *)&v24[2 * v17] = v31;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24[v18], (int32_t)v31, v25, v26, v27, v28, v29, v30);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v17;
        v18 += 2;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrixTrail__updateMatrix(this, v16, v5);
    }
  }
}


void MultiplyTargetMatrixTrail__updateMatrix(
        MultiplyTargetMatrixTrail_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  int v6; // w8
  bool v7; // w0
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Matrix4x4_o *worldToLocalMatrix; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x25
  UnityEngine_Object_o *v14; // x22
  int32_t materialType; // w8
  __int64 v16; // x1
  UnityEngine_Object_o *sharedMaterial; // x23
  UnityEngine_Material_o *v18; // x0
  __int64 v19; // x1
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v21; // x0
  __int64 v22; // x1
  System_String_o *invertMatrix; // x1
  __int64 v24; // x1
  UnityEngine_Object_o *material; // x23
  System_String_o *v26; // x1
  System_String_o *v27; // x1
  __int64 v28; // x1
  UnityEngine_Object_o *trailMaterial; // x22
  System_String_o *v30; // x1
  System_String_o *v31; // x1
  UnityEngine_Matrix4x4_o v32; // [xsp+10h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+50h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+90h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+D0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+110h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+150h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+190h] [xbp-130h] BYREF
  int v39; // [xsp+1D8h] [xbp-E8h]
  UnityEngine_Matrix4x4_o v40[2]; // [xsp+1E0h] [xbp-E0h] BYREF

  if ( (byte_593BC5E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_593BC5E = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  v39 = 0;
  v6 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(v40, 0, sizeof(v40));
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetRenderers);
  v7 = UnityEngine_Object__op_Inequality(targetObj, 0, 0);
  if ( targetRenderers && v7 )
  {
    v9 = this->fields.targetObj;
    if ( !v9
      || (UnityEngine_Transform__get_localToWorldMatrix(&v38, v9, 0), v9 = this->fields.targetObj, v40[1] = v38, !v9) )
    {
      sub_21FFECC(v9, v8);
    }
    worldToLocalMatrix = UnityEngine_Transform__get_worldToLocalMatrix(v40, v9, 0);
    max_length = targetRenderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)max_length )
          sub_21FFED4(worldToLocalMatrix);
        v14 = (UnityEngine_Object_o *)targetRenderers->m_Items[v13];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        worldToLocalMatrix = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)worldToLocalMatrix & 1) == 0 )
          goto LABEL_42;
        materialType = this->fields.materialType;
        if ( materialType == 1 )
          break;
        if ( !materialType )
        {
          if ( !v14 )
            sub_21FFECC(worldToLocalMatrix, v11);
          sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                     (UnityEngine_Renderer_o *)v14,
                                                     0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
          worldToLocalMatrix = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(sharedMaterial, 0, 0);
          if ( ((unsigned __int8)worldToLocalMatrix & 1) != 0 )
          {
            v18 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0);
            if ( !v18 )
              sub_21FFECC(0, v19);
            mainMatrix = this->fields.mainMatrix;
            v37 = v40[1];
            UnityEngine_Material__SetMatrix(v18, mainMatrix, &v37, 0);
            v21 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0);
            if ( !v21 )
              sub_21FFECC(0, v22);
            invertMatrix = this->fields.invertMatrix;
            v36 = v40[0];
            UnityEngine_Material__SetMatrix(v21, invertMatrix, &v36, 0);
          }
LABEL_36:
          if ( (UnityEngine_ParticleSystemRenderer_c *)v14->klass == UnityEngine_ParticleSystemRenderer_TypeInfo )
          {
            trailMaterial = (UnityEngine_Object_o *)UnityEngine_ParticleSystemRenderer__get_trailMaterial(
                                                      (UnityEngine_ParticleSystemRenderer_o *)v14,
                                                      0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
            worldToLocalMatrix = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(trailMaterial, 0, 0);
            if ( ((unsigned __int8)worldToLocalMatrix & 1) != 0 )
            {
              if ( !trailMaterial )
                sub_21FFECC(worldToLocalMatrix, v11);
              v30 = this->fields.mainMatrix;
              v33 = v40[1];
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)trailMaterial, v30, &v33, 0);
              v31 = this->fields.invertMatrix;
              v32 = v40[0];
              UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)trailMaterial, v31, &v32, 0);
            }
          }
          goto LABEL_42;
        }
        if ( v14 )
          goto LABEL_36;
LABEL_42:
        LODWORD(max_length) = targetRenderers->max_length;
        if ( (__int64)++v13 >= (int)max_length )
          return;
      }
      if ( !v14 )
        sub_21FFECC(worldToLocalMatrix, v11);
      material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      worldToLocalMatrix = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(material, 0, 0);
      if ( ((unsigned __int8)worldToLocalMatrix & 1) != 0 )
      {
        if ( !material )
          sub_21FFECC(worldToLocalMatrix, v11);
        v26 = this->fields.mainMatrix;
        v35 = v40[1];
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v26, &v35, 0);
        v27 = this->fields.invertMatrix;
        v34 = v40[0];
        UnityEngine_Material__SetMatrix((UnityEngine_Material_o *)material, v27, &v34, 0);
      }
      goto LABEL_36;
    }
  }
}