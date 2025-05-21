void __fastcall MultiplyTargetMatrixChr___ctor(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B47B90 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16561/*"_rootMatrix"*/, method);
    sub_1BDB878(&StringLiteral_16535/*"_invrootMatrix"*/, v5);
    byte_4B47B90 = 1;
  }
  v6 = StringLiteral_16561/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16561/*"_rootMatrix"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mainMatrix, v6, v2, v3);
  v7 = StringLiteral_16535/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16535/*"_invrootMatrix"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.invertMatrix, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall MultiplyTargetMatrixChr__GetTargetRoot(
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
    return 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v4);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


void __fastcall MultiplyTargetMatrixChr__LateUpdate(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MultiplyTargetMatrixChr__setupTarget(this, method);
  MultiplyTargetMatrixChr__UpdateMatrix(this, v3);
}


void __fastcall MultiplyTargetMatrixChr__SetTargetObj(
        MultiplyTargetMatrixChr_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !obj )
    sub_1BDBAD4(this, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)transform, v5, v6);
}


void __fastcall MultiplyTargetMatrixChr__Start(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MultiplyTargetMatrixChr__setupTarget(this, method);
  MultiplyTargetMatrixChr__UpdateMatrix(this, v3);
}


void __fastcall MultiplyTargetMatrixChr__UpdateMatrix(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v9; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Renderer_array *v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  unsigned __int64 v17; // x26
  UnityEngine_Object_o *v18; // x21
  struct XWeaponTrail_array *v19; // x8
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x21
  unsigned int *v22; // x27
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x21
  __int64 v25; // x0

  if ( (byte_4B47B8C & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Renderer___TypeInfo, v5);
    byte_4B47B8C = 1;
  }
  MultiplyTargetMatrixChr__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    v9 = *(_QWORD *)&targetXWeaponTrails->max_length;
    if ( v9 )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v11 = (struct UnityEngine_Renderer_array *)sub_1BDB920(UnityEngine_Renderer___TypeInfo, v9);
        this->fields.targetXWeaponTrailRenderers = v11;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetXWeaponTrailRenderers, (int32_t)v11, v12, v13);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_27:
          sub_1BDBAD4(Component_object, v14);
      }
      v15 = 4LL;
      v16 = 8LL;
      while ( 1 )
      {
        v14 = *p_targetXWeaponTrailRenderers;
        v17 = v15 - 4;
        if ( v15 - 4 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v14 )
          goto LABEL_27;
        if ( v17 >= v14->max_length )
          goto LABEL_30;
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v14->obj.klass + v15);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
        {
          v19 = this->fields.targetXWeaponTrails;
          if ( !v19 )
            goto LABEL_27;
          if ( v17 >= v19->max_length )
            goto LABEL_30;
          v20 = *((_QWORD *)&v19->obj.klass + v15);
          if ( !v20 )
            goto LABEL_27;
          v21 = *(UnityEngine_Object_o **)(v20 + 144);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
          if ( ((unsigned __int8)Component_object & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_27;
            v22 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v21,
                                 (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v22 )
              goto LABEL_27;
            v24 = Component_object;
            if ( Component_object )
            {
              Component_object = (Il2CppObject *)sub_1BDB9B4(Component_object, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
              if ( !Component_object )
              {
                v25 = sub_1BDBAF8(0LL);
                sub_1BDB9A0(v25, 0LL);
              }
            }
            if ( v17 >= v22[6] )
LABEL_30:
              sub_1BDBADC(Component_object, v14, v7);
            *(_QWORD *)&v22[2 * v15] = v24;
            sub_1BDB81C((CGThumbnailListItem_o *)&v22[v16], (int32_t)v24, (int32_t)v7, v23);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v15;
        v16 += 2LL;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrixChr__updateMatrix(this, v14, v7);
    }
  }
}


UnityEngine_Transform_o *__fastcall MultiplyTargetMatrixChr__getChrTrans(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *monitor; // x20
  bool v10; // w0

  if ( (byte_4B47B8F & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    sub_1BDB878(&StringLiteral_17968/*"chr(Clone)"*/, v3);
    sub_1BDB878(&StringLiteral_17967/*"chr"*/, v4);
    byte_4B47B8F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
  v8 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_21;
    monitor = (UnityEngine_Object_o *)Instance[3].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    v8 = 0LL;
    if ( v10 )
    {
      transform = (UnityEngine_GameObject_o *)Instance[3].monitor;
      if ( !transform )
        goto LABEL_21;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_21;
      v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)transform,
                                     (System_String_o *)StringLiteral_17968/*"chr(Clone)"*/,
                                     0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
      {
        transform = (UnityEngine_GameObject_o *)Instance[3].monitor;
        if ( transform )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
          if ( transform )
          {
            v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                           (UnityEngine_Transform_o *)transform,
                                           (System_String_o *)StringLiteral_17967/*"chr"*/,
                                           0LL);
            goto LABEL_18;
          }
        }
LABEL_21:
        sub_1BDBAD4(transform, v7);
      }
    }
  }
LABEL_18:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  return (UnityEngine_Transform_o *)v8;
}


void __fastcall MultiplyTargetMatrixChr__setupTarget(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_targetObj; // x20
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v5; // x1
  struct UnityEngine_Transform_o *TargetRoot; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  struct UnityEngine_Transform_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B47B8D & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47B8D = 1;
  }
  p_targetObj = &this->fields.targetObj;
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetObj, 0LL, 0LL) )
  {
    TargetRoot = MultiplyTargetMatrixChr__GetTargetRoot(this, v5);
    this->fields.targetObj = TargetRoot;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)TargetRoot, v7, v8);
    v9 = (UnityEngine_Object_o *)this->fields.targetObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(this->fields.targetObjPath, 0LL) )
    {
      if ( !*p_targetObj )
        sub_1BDBAD4(0LL, v10);
      v11 = UnityEngine_Transform__Find(*p_targetObj, this->fields.targetObjPath, 0LL);
      this->fields.targetObj = v11;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetObj, (int32_t)v11, v12, v13);
    }
  }
}


void __fastcall MultiplyTargetMatrixChr__updateMatrix(
        MultiplyTargetMatrixChr_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObj; // x21
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  UnityEngine_Object_o *v14; // x22
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v17; // x1
  UnityEngine_Material_o *v18; // x0
  System_String_o *v19; // x1
  UnityEngine_Material_o *material; // x0
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v22; // x0
  System_String_o *invertMatrix; // x1
  UnityEngine_Matrix4x4_o v24; // [xsp+0h] [xbp-290h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+40h] [xbp-250h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+80h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+C0h] [xbp-1D0h]
  UnityEngine_Matrix4x4_o v28; // [xsp+100h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+140h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+180h] [xbp-110h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+1C0h] [xbp-D0h]
  UnityEngine_Matrix4x4_o v32; // [xsp+200h] [xbp-90h]

  if ( (byte_4B47B8E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, targetRenderers);
    byte_4B47B8E = 1;
  }
  memset(&v30, 0, sizeof(v30));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL);
  if ( targetRenderers && v6 )
  {
    v8 = this->fields.targetObj;
    if ( !v8
      || (UnityEngine_Transform__get_localToWorldMatrix(&v29, v8, 0LL), v32 = v29, (v8 = this->fields.targetObj) == 0LL) )
    {
      sub_1BDBAD4(v8, v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v29, v8, 0LL);
    v30 = v29;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v29, &v30, 0LL);
    v31 = v29;
    v12 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( v13 >= (unsigned int)v12 )
          sub_1BDBADC(inverse, v10, v11);
        v14 = (UnityEngine_Object_o *)targetRenderers->m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v14 )
              sub_1BDBAD4(inverse, v10);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v29 = v32;
            if ( !material )
              sub_1BDBAD4(0LL, mainMatrix);
            v25 = v29;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v25, 0LL);
            v22 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v27 = v31;
            if ( !v22 )
              sub_1BDBAD4(0LL, invertMatrix);
            v24 = v27;
            UnityEngine_Material__SetMatrix(v22, invertMatrix, &v24, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v14 )
              sub_1BDBAD4(inverse, v10);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0LL);
            v17 = this->fields.mainMatrix;
            v29 = v32;
            if ( !sharedMaterial )
              sub_1BDBAD4(0LL, v17);
            v28 = v29;
            UnityEngine_Material__SetMatrix(sharedMaterial, v17, &v28, 0LL);
            v18 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0LL);
            v19 = this->fields.invertMatrix;
            v27 = v31;
            if ( !v18 )
              sub_1BDBAD4(0LL, v19);
            v26 = v27;
            UnityEngine_Material__SetMatrix(v18, v19, &v26, 0LL);
          }
        }
        LODWORD(v12) = targetRenderers->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
  }
}