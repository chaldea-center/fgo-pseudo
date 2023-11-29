void __fastcall MultiplyTargetMatrixChr___ctor(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FC046 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16110, method);
    sub_B16FFC(&StringLiteral_16083, v9);
    byte_40FC046 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_16110;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16110;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mainMatrix, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_16083;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16083;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.invertMatrix, v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall MultiplyTargetMatrixChr__GetTargetRoot(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  int32_t targetObjPathRootType; // w8
  UnityEngine_GameObject_o *gameObject; // x0

  targetObjPathRootType = this->fields.targetObjPathRootType;
  if ( targetObjPathRootType == 1 )
    return MultiplyTargetMatrixChr__getChrTrans(this, method);
  if ( targetObjPathRootType )
    return 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !obj )
    sub_B170D4();
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObj,
    (System_Int32_array **)transform,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v9; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  unsigned __int64 v18; // x22
  UnityEngine_Renderer_array *v19; // x1
  UnityEngine_Object_o *v20; // x21
  struct XWeaponTrail_array *v21; // x8
  XWeaponTrail_o *v22; // x8
  UnityEngine_Object_o *mMeshObj; // x21
  unsigned int *v24; // x25
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  unsigned int *v31; // x0

  if ( (byte_40FC042 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Renderer___TypeInfo, v5);
    byte_40FC042 = 1;
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
        v11 = (struct UnityEngine_Renderer_array *)sub_B17014(UnityEngine_Renderer___TypeInfo, v9, v7);
        this->fields.targetXWeaponTrailRenderers = v11;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.targetXWeaponTrailRenderers,
          (System_Int32_array **)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_29:
          sub_B170D4();
      }
      v18 = 0LL;
      while ( 1 )
      {
        v19 = *p_targetXWeaponTrailRenderers;
        if ( (__int64)v18 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v19 )
          goto LABEL_29;
        if ( v18 >= v19->max_length )
          goto LABEL_32;
        v20 = (UnityEngine_Object_o *)v19->m_Items[v18];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
        {
          v21 = this->fields.targetXWeaponTrails;
          if ( !v21 )
            goto LABEL_29;
          if ( v18 >= v21->max_length )
            goto LABEL_32;
          v22 = v21->m_Items[v18];
          if ( !v22 )
            goto LABEL_29;
          mMeshObj = (UnityEngine_Object_o *)v22->fields.mMeshObj;
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
            v24 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)mMeshObj,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v24 )
              goto LABEL_29;
            v30 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (srcLineSprite_o *)sub_B170BC(
                                                             Component_srcLineSprite,
                                                             *(_QWORD *)(*(_QWORD *)v24 + 64LL));
              if ( !Component_srcLineSprite )
              {
                sub_B170F4(0LL);
                sub_B170A0();
              }
            }
            if ( v18 >= v24[6] )
            {
LABEL_32:
              sub_B17100(Component_srcLineSprite, v19, v7);
              sub_B170A0();
            }
            v31 = &v24[2 * v18];
            *((_QWORD *)v31 + 4) = v30;
            sub_B16F98((BattleServantConfConponent_o *)(v31 + 8), v30, v7, v25, v26, v27, v28, v29);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v18;
        if ( !targetXWeaponTrails )
          goto LABEL_29;
      }
      MultiplyTargetMatrixChr__updateMatrix(this, v19, (const MethodInfo *)v7);
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
  WebViewManager_o *Instance; // x19
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *webView; // x20
  bool v8; // w0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0

  if ( (byte_40FC045 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    sub_B16FFC(&StringLiteral_17355, v3);
    sub_B16FFC(&StringLiteral_17354, v4);
    byte_40FC045 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      goto LABEL_25;
    webView = (UnityEngine_Object_o *)Instance->fields.webView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(webView, 0LL, 0LL);
    v6 = 0LL;
    if ( v8 )
    {
      v9 = (UnityEngine_GameObject_o *)Instance->fields.webView;
      if ( !v9 )
        goto LABEL_25;
      transform = UnityEngine_GameObject__get_transform(v9, 0LL);
      if ( !transform )
        goto LABEL_25;
      v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_17355, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
      {
        v11 = (UnityEngine_GameObject_o *)Instance->fields.webView;
        if ( v11 )
        {
          v12 = UnityEngine_GameObject__get_transform(v11, 0LL);
          if ( v12 )
          {
            v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v12, (System_String_o *)StringLiteral_17354, 0LL);
            goto LABEL_21;
          }
        }
LABEL_25:
        sub_B170D4();
      }
    }
  }
LABEL_21:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  return (UnityEngine_Transform_o *)v6;
}


void __fastcall MultiplyTargetMatrixChr__setupTarget(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_targetObj; // x20
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v5; // x1
  struct UnityEngine_Transform_o *TargetRoot; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *v13; // x21
  struct UnityEngine_Transform_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FC043 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC043 = 1;
  }
  p_targetObj = &this->fields.targetObj;
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(targetObj, 0LL, 0LL) )
  {
    TargetRoot = MultiplyTargetMatrixChr__GetTargetRoot(this, v5);
    this->fields.targetObj = TargetRoot;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.targetObj,
      (System_Int32_array **)TargetRoot,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (UnityEngine_Object_o *)this->fields.targetObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(this->fields.targetObjPath, 0LL) )
    {
      if ( !*p_targetObj )
        sub_B170D4();
      v14 = UnityEngine_Transform__Find(*p_targetObj, this->fields.targetObjPath, 0LL);
      this->fields.targetObj = v14;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.targetObj,
        (System_Int32_array **)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
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
  UnityEngine_Transform_o *v7; // x0
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
  UnityEngine_Matrix4x4_o v24; // [xsp+0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+40h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+80h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+C0h] [xbp-1F0h]
  UnityEngine_Matrix4x4_o v28; // [xsp+100h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v29; // [xsp+140h] [xbp-170h] BYREF
  int v30; // [xsp+188h] [xbp-128h]
  UnityEngine_Matrix4x4_o v31[3]; // [xsp+190h] [xbp-120h] BYREF

  if ( (byte_40FC044 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, targetRenderers);
    byte_40FC044 = 1;
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
    v7 = this->fields.targetObj;
    if ( !v7
      || (UnityEngine_Transform__get_localToWorldMatrix(&v29, v7, 0LL),
          v31[2] = v29,
          (v8 = this->fields.targetObj) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v29, v8, 0LL);
    v31[0] = v29;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v29, v31, 0LL);
    v31[1] = v29;
    v12 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( v13 >= (unsigned int)v12 )
        {
          sub_B17100(inverse, v10, v11);
          sub_B170A0();
        }
        v14 = (UnityEngine_Object_o *)targetRenderers->m_Items[v13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v14 )
              sub_B170D4();
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v29 = v31[2];
            if ( !material )
              sub_B170D4();
            v25 = v29;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v25, 0LL);
            v22 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v14, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v27 = v31[1];
            if ( !v22 )
              sub_B170D4();
            v24 = v27;
            UnityEngine_Material__SetMatrix(v22, invertMatrix, &v24, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v14 )
              sub_B170D4();
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0LL);
            v17 = this->fields.mainMatrix;
            v29 = v31[2];
            if ( !sharedMaterial )
              sub_B170D4();
            v28 = v29;
            UnityEngine_Material__SetMatrix(sharedMaterial, v17, &v28, 0LL);
            v18 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v14, 0LL);
            v19 = this->fields.invertMatrix;
            v27 = v31[1];
            if ( !v18 )
              sub_B170D4();
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