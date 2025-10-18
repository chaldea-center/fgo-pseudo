void MultiplyTargetMatrixChr___ctor(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C46368 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16579/*"_rootMatrix"*/);
    sub_1C37058(&StringLiteral_16557/*"_invrootMatrix"*/);
    byte_4C46368 = 1;
  }
  v5 = StringLiteral_16579/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16579/*"_rootMatrix"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mainMatrix, v5, v2, v3);
  v6 = StringLiteral_16557/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16557/*"_invrootMatrix"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.invertMatrix, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Transform_o *MultiplyTargetMatrixChr__GetTargetRoot(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  int32_t targetObjPathRootType; // w8
  UnityEngine_GameObject_o *gameObject; // x0

  targetObjPathRootType = this->fields.targetObjPathRootType;
  if ( targetObjPathRootType == 1 )
    return MultiplyTargetMatrixChr__getChrTrans(this, method);
  if ( targetObjPathRootType )
    return 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !obj )
    sub_1C372B4(this);
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  this->fields.targetObj = transform;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)transform, v5, v6);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x22
  __int64 v13; // x23
  struct UnityEngine_Renderer_array *v14; // x1
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct XWeaponTrail_array *v17; // x8
  __int64 v18; // x8
  UnityEngine_Object_o *v19; // x21
  unsigned int *v20; // x27
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x21
  __int64 v24; // x0

  if ( (byte_4C46364 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Renderer___TypeInfo);
    byte_4C46364 = 1;
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
        v9 = (struct UnityEngine_Renderer_array *)sub_1C37100(UnityEngine_Renderer___TypeInfo, max_length);
        this->fields.targetXWeaponTrailRenderers = v9;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetXWeaponTrailRenderers, (int32_t)v9, v10, v11);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_27:
          sub_1C372B4(Component_object);
      }
      v12 = 4;
      v13 = 8;
      while ( 1 )
      {
        v14 = *p_targetXWeaponTrailRenderers;
        v15 = v12 - 4;
        if ( v12 - 4 >= SLODWORD(targetXWeaponTrails->max_length) )
          break;
        if ( !v14 )
          goto LABEL_27;
        if ( v15 >= LODWORD(v14->max_length) )
          goto LABEL_30;
        v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14->obj.klass + v12);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(v16, 0, 0);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
        {
          v17 = this->fields.targetXWeaponTrails;
          if ( !v17 )
            goto LABEL_27;
          if ( v15 >= LODWORD(v17->max_length) )
            goto LABEL_30;
          v18 = *((_QWORD *)&v17->obj.klass + v12);
          if ( !v18 )
            goto LABEL_27;
          v19 = *(UnityEngine_Object_o **)(v18 + 144);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v19, 0, 0);
          if ( ((unsigned __int8)Component_object & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_27;
            v20 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v19,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v20 )
              goto LABEL_27;
            v23 = Component_object;
            if ( Component_object )
            {
              Component_object = (Il2CppObject *)sub_1C37194(Component_object, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
              if ( !Component_object )
              {
                v24 = sub_1C372D8(0);
                sub_1C37180(v24, 0);
              }
            }
            if ( v15 >= v20[6] )
LABEL_30:
              sub_1C372BC(Component_object);
            *(_QWORD *)&v20[2 * v12] = v23;
            sub_1C36FFC((CGThumbnailListItem_o *)&v20[v13], (int32_t)v23, v21, v22);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v12;
        v13 += 2;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrixChr__updateMatrix(this, v14, v5);
    }
  }
}


UnityEngine_Transform_o *MultiplyTargetMatrixChr__getChrTrans(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *monitor; // x20
  bool v6; // w0

  if ( (byte_4C46367 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C37058(&StringLiteral_17962/*"chr(Clone)"*/);
    sub_1C37058(&StringLiteral_17961/*"chr"*/);
    byte_4C46367 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Instance, 0, 0);
  v4 = 0;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_21;
    monitor = (UnityEngine_Object_o *)Instance[3].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
    v4 = 0;
    if ( v6 )
    {
      transform = (UnityEngine_GameObject_o *)Instance[3].monitor;
      if ( !transform )
        goto LABEL_21;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_21;
      v4 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)transform,
                                     (System_String_o *)StringLiteral_17962/*"chr(Clone)"*/,
                                     0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
      {
        transform = (UnityEngine_GameObject_o *)Instance[3].monitor;
        if ( transform )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
          if ( transform )
          {
            v4 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                           (UnityEngine_Transform_o *)transform,
                                           (System_String_o *)StringLiteral_17961/*"chr"*/,
                                           0);
            goto LABEL_18;
          }
        }
LABEL_21:
        sub_1C372B4(transform);
      }
    }
  }
LABEL_18:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Equality(v4, 0, 0);
  return (UnityEngine_Transform_o *)v4;
}


void MultiplyTargetMatrixChr__setupTarget(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_targetObj; // x20
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v5; // x1
  struct UnityEngine_Transform_o *TargetRoot; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x21
  struct UnityEngine_Transform_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C46365 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46365 = 1;
  }
  p_targetObj = &this->fields.targetObj;
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetObj, 0, 0) )
  {
    TargetRoot = MultiplyTargetMatrixChr__GetTargetRoot(this, v5);
    this->fields.targetObj = TargetRoot;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)TargetRoot, v7, v8);
    v9 = (UnityEngine_Object_o *)this->fields.targetObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) && !System_String__IsNullOrEmpty(this->fields.targetObjPath, 0) )
    {
      if ( !*p_targetObj )
        sub_1C372B4(0);
      v10 = UnityEngine_Transform__Find(*p_targetObj, this->fields.targetObjPath, 0);
      this->fields.targetObj = v10;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)v10, v11, v12);
    }
  }
}


void MultiplyTargetMatrixChr__updateMatrix(
        MultiplyTargetMatrixChr_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  bool v6; // w0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x24
  UnityEngine_Object_o *v11; // x22
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v14; // x1
  UnityEngine_Material_o *v15; // x0
  System_String_o *v16; // x1
  UnityEngine_Material_o *material; // x0
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v19; // x0
  System_String_o *invertMatrix; // x1
  UnityEngine_Matrix4x4_o v21; // [xsp+0h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+40h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+80h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+C0h] [xbp-1D0h]
  UnityEngine_Matrix4x4_o v25; // [xsp+100h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+140h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+180h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+1C0h] [xbp-D0h]
  UnityEngine_Matrix4x4_o v29; // [xsp+200h] [xbp-90h]

  if ( (byte_4C46366 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46366 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0, 0);
  if ( targetRenderers && v6 )
  {
    v7 = this->fields.targetObj;
    if ( !v7
      || (UnityEngine_Transform__get_localToWorldMatrix(&v26, v7, 0), v29 = v26, (v7 = this->fields.targetObj) == 0) )
    {
      sub_1C372B4(v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v26, v7, 0);
    v27 = v26;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v26, &v27, 0);
    v28 = v26;
    max_length = targetRenderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C372BC(inverse);
        v11 = (UnityEngine_Object_o *)targetRenderers->m_Items[v10];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v11 )
              sub_1C372B4(inverse);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v11, 0);
            mainMatrix = this->fields.mainMatrix;
            v26 = v29;
            if ( !material )
              sub_1C372B4(0);
            v22 = v26;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v22, 0);
            v19 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v11, 0);
            invertMatrix = this->fields.invertMatrix;
            v24 = v28;
            if ( !v19 )
              sub_1C372B4(0);
            v21 = v24;
            UnityEngine_Material__SetMatrix(v19, invertMatrix, &v21, 0);
          }
          else if ( !materialType )
          {
            if ( !v11 )
              sub_1C372B4(inverse);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v11, 0);
            v14 = this->fields.mainMatrix;
            v26 = v29;
            if ( !sharedMaterial )
              sub_1C372B4(0);
            v25 = v26;
            UnityEngine_Material__SetMatrix(sharedMaterial, v14, &v25, 0);
            v15 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v11, 0);
            v16 = this->fields.invertMatrix;
            v24 = v28;
            if ( !v15 )
              sub_1C372B4(0);
            v23 = v24;
            UnityEngine_Material__SetMatrix(v15, v16, &v23, 0);
          }
        }
        LODWORD(max_length) = targetRenderers->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)max_length );
    }
  }
}