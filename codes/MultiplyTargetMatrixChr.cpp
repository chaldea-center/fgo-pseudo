void MultiplyTargetMatrixChr___ctor(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
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

  if ( (byte_593BC5B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17216/*"_rootMatrix"*/);
    sub_21FFC50(&StringLiteral_17194/*"_invrootMatrix"*/);
    byte_593BC5B = 1;
  }
  v9 = StringLiteral_17216/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_17216/*"_rootMatrix"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mainMatrix, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17194/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_17194/*"_invrootMatrix"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.invertMatrix, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Transform_o *MultiplyTargetMatrixChr__GetTargetRoot(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  int32_t targetObjPathRootType; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  targetObjPathRootType = this->fields.targetObjPathRootType;
  if ( targetObjPathRootType == 1 )
    return MultiplyTargetMatrixChr__getChrTrans(this, method);
  if ( targetObjPathRootType )
    return 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  return UnityEngine_GameObject__get_transform(gameObject, 0);
}


void MultiplyTargetMatrixChr__LateUpdate(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MultiplyTargetMatrixChr__setupTarget(this, method);
  MultiplyTargetMatrixChr__UpdateMatrix(this, v3);
}


void MultiplyTargetMatrixChr__SetTargetObj(
        MultiplyTargetMatrixChr_o *this,
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


void MultiplyTargetMatrixChr__Start(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MultiplyTargetMatrixChr__setupTarget(this, method);
  MultiplyTargetMatrixChr__UpdateMatrix(this, v3);
}


void MultiplyTargetMatrixChr__UpdateMatrix(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
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

  if ( (byte_593BC57 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Renderer___TypeInfo);
    byte_593BC57 = 1;
  }
  MultiplyTargetMatrixChr__updateMatrix(this, this->fields.targetRenderers, v2);
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
      MultiplyTargetMatrixChr__updateMatrix(this, v16, v5);
    }
  }
}


UnityEngine_Transform_o *MultiplyTargetMatrixChr__getChrTrans(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *monitor; // x20
  bool v8; // w0
  __int64 v9; // x1

  if ( (byte_593BC5A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_21FFC50(&StringLiteral_18717/*"chr(Clone)"*/);
    sub_21FFC50(&StringLiteral_18716/*"chr"*/);
    byte_593BC5A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Instance, 0, 0);
  v6 = 0;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_21;
    monitor = (UnityEngine_Object_o *)Instance[3].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v8 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
    v6 = 0;
    if ( v8 )
    {
      transform = (UnityEngine_GameObject_o *)Instance[3].monitor;
      if ( !transform )
        goto LABEL_21;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_21;
      v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)transform,
                                     (System_String_o *)StringLiteral_18717/*"chr(Clone)"*/,
                                     0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
      {
        transform = (UnityEngine_GameObject_o *)Instance[3].monitor;
        if ( transform )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
          if ( transform )
          {
            v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                           (UnityEngine_Transform_o *)transform,
                                           (System_String_o *)StringLiteral_18716/*"chr"*/,
                                           0);
            goto LABEL_18;
          }
        }
LABEL_21:
        sub_21FFECC(transform, v5);
      }
    }
  }
LABEL_18:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__op_Equality(v6, 0, 0);
  return (UnityEngine_Transform_o *)v6;
}


void MultiplyTargetMatrixChr__setupTarget(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_targetObj; // x20
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v5; // x1
  struct UnityEngine_Transform_o *TargetRoot; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  struct UnityEngine_Transform_o *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_593BC58 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC58 = 1;
  }
  p_targetObj = &this->fields.targetObj;
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(targetObj, 0, 0) )
  {
    TargetRoot = MultiplyTargetMatrixChr__GetTargetRoot(this, v5);
    this->fields.targetObj = TargetRoot;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetObj,
      (int32_t)TargetRoot,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v14 = (UnityEngine_Object_o *)this->fields.targetObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) && !System_String__IsNullOrEmpty(this->fields.targetObjPath, 0) )
    {
      if ( !*p_targetObj )
        sub_21FFECC(0, v15);
      v16 = UnityEngine_Transform__Find(*p_targetObj, this->fields.targetObjPath, 0);
      this->fields.targetObj = v16;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.targetObj,
        (int32_t)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
  }
}


void MultiplyTargetMatrixChr__updateMatrix(
        MultiplyTargetMatrixChr_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  int v6; // w8
  bool v7; // w0
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x24
  UnityEngine_Object_o *v14; // x22
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  __int64 v17; // x1
  System_String_o *v18; // x1
  UnityEngine_Material_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x1
  UnityEngine_Material_o *material; // x0
  __int64 v23; // x1
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v25; // x0
  __int64 v26; // x1
  System_String_o *invertMatrix; // x1
  UnityEngine_Matrix4x4_o v28; // [xsp+0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+40h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+80h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+C0h] [xbp-1F0h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+100h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+140h] [xbp-170h] BYREF
  int v34; // [xsp+188h] [xbp-128h]
  UnityEngine_Matrix4x4_o v35; // [xsp+190h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v36[2]; // [xsp+1D0h] [xbp-E0h] BYREF

  if ( (byte_593BC59 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC59 = 1;
  }
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  v34 = 0;
  v6 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v35, 0, sizeof(v35));
  memset(v36, 0, sizeof(v36));
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetRenderers);
  v7 = UnityEngine_Object__op_Inequality(targetObj, 0, 0);
  if ( targetRenderers && v7 )
  {
    v9 = this->fields.targetObj;
    if ( !v9
      || (UnityEngine_Transform__get_localToWorldMatrix(&v33, v9, 0), v9 = this->fields.targetObj, v36[1] = v33, !v9) )
    {
      sub_21FFECC(v9, v8);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v32, v9, 0);
    v35 = v32;
    inverse = UnityEngine_Matrix4x4__get_inverse(v36, &v35, 0);
    max_length = targetRenderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= (unsigned int)max_length )
          sub_21FFED4(inverse);
        v14 = (UnityEngine_Object_o *)targetRenderers->m_Items[v13];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v14 )
              sub_21FFECC(inverse, v11);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0);
            if ( !material )
              sub_21FFECC(0, v23);
            mainMatrix = this->fields.mainMatrix;
            v29 = v36[1];
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v29, 0);
            v25 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0);
            if ( !v25 )
              sub_21FFECC(0, v26);
            invertMatrix = this->fields.invertMatrix;
            v28 = v36[0];
            UnityEngine_Material__SetMatrix(v25, invertMatrix, &v28, 0);
          }
          else if ( !materialType )
          {
            if ( !v14 )
              sub_21FFECC(inverse, v11);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0);
            if ( !sharedMaterial )
              sub_21FFECC(0, v17);
            v18 = this->fields.mainMatrix;
            v31 = v36[1];
            UnityEngine_Material__SetMatrix(sharedMaterial, v18, &v31, 0);
            v19 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0);
            if ( !v19 )
              sub_21FFECC(0, v20);
            v21 = this->fields.invertMatrix;
            v30 = v36[0];
            UnityEngine_Material__SetMatrix(v19, v21, &v30, 0);
          }
        }
        LODWORD(max_length) = targetRenderers->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)max_length );
    }
  }
}