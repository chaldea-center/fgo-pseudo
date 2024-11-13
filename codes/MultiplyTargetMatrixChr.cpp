void __fastcall MultiplyTargetMatrixChr___ctor(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B18F60 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16740/*"_rootMatrix"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_16714/*"_invrootMatrix"*/, v9, v10);
    byte_4B18F60 = 1;
  }
  v11 = StringLiteral_16740/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16740/*"_rootMatrix"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainMatrix, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_16714/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16714/*"_invrootMatrix"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.invertMatrix, v12, v13, v14, v15, v16, v17, v18);
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
    sub_1BCAA3C(0LL, v4);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( !obj )
    sub_1BCAA3C(this, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetObj, (int64_t)transform, v5, v6, v7, v8, v9, v10);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Component_object; // x0
  const MethodInfo *v9; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v11; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Renderer_array *v20; // x1
  __int64 v21; // x22
  __int64 v22; // x23
  unsigned __int64 v23; // x26
  UnityEngine_Object_o *v24; // x21
  struct XWeaponTrail_array *v25; // x8
  __int64 v26; // x8
  UnityEngine_Object_o *v27; // x21
  unsigned int *v28; // x27
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x21
  __int64 v36; // x0

  if ( (byte_4B18F5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Renderer___TypeInfo, v6, v7);
    byte_4B18F5C = 1;
  }
  MultiplyTargetMatrixChr__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    v11 = *(_QWORD *)&targetXWeaponTrails->max_length;
    if ( v11 )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v13 = (struct UnityEngine_Renderer_array *)sub_1BCA888(UnityEngine_Renderer___TypeInfo, v11);
        this->fields.targetXWeaponTrailRenderers = v13;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.targetXWeaponTrailRenderers,
          (int64_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_27:
          sub_1BCAA3C(Component_object, v20);
      }
      v21 = 4LL;
      v22 = 8LL;
      while ( 1 )
      {
        v20 = *p_targetXWeaponTrailRenderers;
        v23 = v21 - 4;
        if ( v21 - 4 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v20 )
          goto LABEL_27;
        if ( v23 >= v20->max_length )
          goto LABEL_30;
        v24 = (UnityEngine_Object_o *)*((_QWORD *)&v20->obj.klass + v21);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        Component_object = UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
        if ( (Component_object & 1) != 0 )
        {
          v25 = this->fields.targetXWeaponTrails;
          if ( !v25 )
            goto LABEL_27;
          if ( v23 >= v25->max_length )
            goto LABEL_30;
          v26 = *((_QWORD *)&v25->obj.klass + v21);
          if ( !v26 )
            goto LABEL_27;
          v27 = *(UnityEngine_Object_o **)(v26 + 144);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
          Component_object = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
          if ( (Component_object & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_27;
            v28 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v27,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v28 )
              goto LABEL_27;
            v35 = Component_object;
            if ( Component_object )
            {
              Component_object = sub_1BCA91C(Component_object, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
              if ( !Component_object )
              {
                v36 = sub_1BCAA60(0LL);
                sub_1BCA908(v36, 0LL);
              }
            }
            if ( v23 >= v28[6] )
LABEL_30:
              sub_1BCAA44(Component_object, v20);
            *(_QWORD *)&v28[2 * v21] = v35;
            sub_1BCA784((PartyOrganizationUtility_o *)&v28[v22], v35, v29, v30, v31, v32, v33, v34);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v21;
        v22 += 2LL;
        if ( !targetXWeaponTrails )
          goto LABEL_27;
      }
      MultiplyTargetMatrixChr__updateMatrix(this, v20, v9);
    }
  }
}


UnityEngine_Transform_o *__fastcall MultiplyTargetMatrixChr__getChrTrans(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *klass; // x20
  bool v15; // w0
  __int64 v16; // x1

  if ( (byte_4B18F5F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3, v4);
    sub_1BCA7E0(&StringLiteral_18146/*"chr(Clone)"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_18145/*"chr"*/, v7, v8);
    byte_4B18F5F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
  v13 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_21;
    klass = (UnityEngine_Object_o *)Instance[4].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    v15 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
    v13 = 0LL;
    if ( v15 )
    {
      transform = (UnityEngine_GameObject_o *)Instance[4].klass;
      if ( !transform )
        goto LABEL_21;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_21;
      v13 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)transform,
                                      (System_String_o *)StringLiteral_18146/*"chr(Clone)"*/,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      if ( UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
      {
        transform = (UnityEngine_GameObject_o *)Instance[4].klass;
        if ( transform )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
          if ( transform )
          {
            v13 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)transform,
                                            (System_String_o *)StringLiteral_18145/*"chr"*/,
                                            0LL);
            goto LABEL_18;
          }
        }
LABEL_21:
        sub_1BCAA3C(transform, v12);
      }
    }
  }
LABEL_18:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  return (UnityEngine_Transform_o *)v13;
}


void __fastcall MultiplyTargetMatrixChr__setupTarget(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o **p_targetObj; // x20
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v6; // x1
  struct UnityEngine_Transform_o *TargetRoot; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  struct UnityEngine_Transform_o *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B18F5D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18F5D = 1;
  }
  p_targetObj = &this->fields.targetObj;
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(targetObj, 0LL, 0LL) )
  {
    TargetRoot = MultiplyTargetMatrixChr__GetTargetRoot(this, v6);
    this->fields.targetObj = TargetRoot;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetObj, (int64_t)TargetRoot, v8, v9, v10, v11, v12, v13);
    v15 = (UnityEngine_Object_o *)this->fields.targetObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(this->fields.targetObjPath, 0LL) )
    {
      if ( !*p_targetObj )
        sub_1BCAA3C(0LL, v16);
      v17 = UnityEngine_Transform__Find(*p_targetObj, this->fields.targetObjPath, 0LL);
      this->fields.targetObj = v17;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetObj, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x24
  UnityEngine_Object_o *v13; // x22
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

  if ( (byte_4B18F5E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, targetRenderers, method);
    byte_4B18F5E = 1;
  }
  memset(&v29, 0, sizeof(v29));
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetRenderers);
  v6 = UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL);
  if ( targetRenderers && v6 )
  {
    v8 = this->fields.targetObj;
    if ( !v8
      || (UnityEngine_Transform__get_localToWorldMatrix(&v28, v8, 0LL), v31 = v28, (v8 = this->fields.targetObj) == 0LL) )
    {
      sub_1BCAA3C(v8, v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v28, v8, 0LL);
    v29 = v28;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v28, &v29, 0LL);
    v30 = v28;
    v11 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      do
      {
        if ( v12 >= (unsigned int)v11 )
          sub_1BCAA44(inverse, v10);
        v13 = (UnityEngine_Object_o *)targetRenderers->m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v13 )
              sub_1BCAA3C(inverse, v10);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v13, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v28 = v31;
            if ( !material )
              sub_1BCAA3C(0LL, mainMatrix);
            v24 = v28;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v24, 0LL);
            v21 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v13, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v26 = v30;
            if ( !v21 )
              sub_1BCAA3C(0LL, invertMatrix);
            v23 = v26;
            UnityEngine_Material__SetMatrix(v21, invertMatrix, &v23, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v13 )
              sub_1BCAA3C(inverse, v10);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v13, 0LL);
            v16 = this->fields.mainMatrix;
            v28 = v31;
            if ( !sharedMaterial )
              sub_1BCAA3C(0LL, v16);
            v27 = v28;
            UnityEngine_Material__SetMatrix(sharedMaterial, v16, &v27, 0LL);
            v17 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v13, 0LL);
            v18 = this->fields.invertMatrix;
            v26 = v30;
            if ( !v17 )
              sub_1BCAA3C(0LL, v18);
            v25 = v26;
            UnityEngine_Material__SetMatrix(v17, v18, &v25, 0LL);
          }
        }
        LODWORD(v11) = targetRenderers->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)v11 );
    }
  }
}