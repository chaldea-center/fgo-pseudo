void __fastcall MultiplyTargetMatrixChr___ctor(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E9D7F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16368/*"_rootMatrix"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16340/*"_invrootMatrix"*/, v9, v10, v11);
    byte_42E9D7F = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_16368/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16368/*"_rootMatrix"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mainMatrix, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16340/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16340/*"_invrootMatrix"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.invertMatrix, v13, v14, v15, v16, v17, v18, v19);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(this, 0LL);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_B5D560(
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  srcLineSprite_o *Component_srcLineSprite; // x0
  const MethodInfo *v12; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v14; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Renderer_array *v23; // x1
  unsigned __int64 v24; // x22
  UnityEngine_Object_o *v25; // x21
  struct XWeaponTrail_array *v26; // x8
  XWeaponTrail_o *v27; // x8
  UnityEngine_Object_o *mMeshObj; // x21
  unsigned int *v29; // x25
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x21
  unsigned int *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_42E9D7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Renderer___TypeInfo, v8, v9, v10);
    byte_42E9D7B = 1;
  }
  MultiplyTargetMatrixChr__updateMatrix(this, this->fields.targetRenderers, v2);
  targetXWeaponTrails = this->fields.targetXWeaponTrails;
  if ( targetXWeaponTrails )
  {
    v14 = *(_QWORD *)&targetXWeaponTrails->max_length;
    if ( v14 )
    {
      p_targetXWeaponTrailRenderers = &this->fields.targetXWeaponTrailRenderers;
      if ( !this->fields.targetXWeaponTrailRenderers )
      {
        v16 = (struct UnityEngine_Renderer_array *)sub_B5D5DC(UnityEngine_Renderer___TypeInfo, v14);
        this->fields.targetXWeaponTrailRenderers = v16;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.targetXWeaponTrailRenderers,
          (System_Int32_array **)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_29:
          sub_B5D69C(Component_srcLineSprite, v23);
      }
      v24 = 0LL;
      while ( 1 )
      {
        v23 = *p_targetXWeaponTrailRenderers;
        if ( (__int64)v24 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v23 )
          goto LABEL_29;
        if ( v24 >= v23->max_length )
          goto LABEL_32;
        v25 = (UnityEngine_Object_o *)v23->m_Items[v24];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
        {
          v26 = this->fields.targetXWeaponTrails;
          if ( !v26 )
            goto LABEL_29;
          if ( v24 >= v26->max_length )
            goto LABEL_32;
          v27 = v26->m_Items[v24];
          if ( !v27 )
            goto LABEL_29;
          mMeshObj = (UnityEngine_Object_o *)v27->fields.mMeshObj;
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
            v29 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)mMeshObj,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v29 )
              goto LABEL_29;
            v36 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (srcLineSprite_o *)sub_B5D684(
                                                             Component_srcLineSprite,
                                                             *(_QWORD *)(*(_QWORD *)v29 + 64LL));
              if ( !Component_srcLineSprite )
              {
                v39 = sub_B5D6BC(0LL);
                sub_B5D668(v39, 0LL);
              }
            }
            if ( v24 >= v29[6] )
            {
LABEL_32:
              v38 = sub_B5D6C8(Component_srcLineSprite);
              sub_B5D668(v38, 0LL);
            }
            v37 = &v29[2 * v24];
            *((_QWORD *)v37 + 4) = v36;
            sub_B5D560((BattleServantConfConponent_o *)(v37 + 8), v36, v30, v31, v32, v33, v34, v35);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v24;
        if ( !targetXWeaponTrails )
          goto LABEL_29;
      }
      MultiplyTargetMatrixChr__updateMatrix(this, v23, v12);
    }
  }
}


UnityEngine_Transform_o *__fastcall MultiplyTargetMatrixChr__getChrTrans(
        MultiplyTargetMatrixChr_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WebViewManager_o *Instance; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *webView; // x20
  bool v18; // w0

  if ( (byte_42E9D7E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_17640/*"chr(Clone)"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_17639/*"chr"*/, v10, v11, v12);
    byte_42E9D7E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  v16 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_25;
    webView = (UnityEngine_Object_o *)Instance->fields.webView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = UnityEngine_Object__op_Inequality(webView, 0LL, 0LL);
    v16 = 0LL;
    if ( v18 )
    {
      transform = (UnityEngine_GameObject_o *)Instance->fields.webView;
      if ( !transform )
        goto LABEL_25;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_25;
      v16 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)transform,
                                      (System_String_o *)StringLiteral_17640/*"chr(Clone)"*/,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
      {
        transform = (UnityEngine_GameObject_o *)Instance->fields.webView;
        if ( transform )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
          if ( transform )
          {
            v16 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)transform,
                                            (System_String_o *)StringLiteral_17639/*"chr"*/,
                                            0LL);
            goto LABEL_21;
          }
        }
LABEL_25:
        sub_B5D69C(transform, v15);
      }
    }
  }
LABEL_21:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
  return (UnityEngine_Transform_o *)v16;
}


void __fastcall MultiplyTargetMatrixChr__setupTarget(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o **p_targetObj; // x20
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v7; // x1
  struct UnityEngine_Transform_o *TargetRoot; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  struct UnityEngine_Transform_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E9D7C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9D7C = 1;
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
    TargetRoot = MultiplyTargetMatrixChr__GetTargetRoot(this, v7);
    this->fields.targetObj = TargetRoot;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.targetObj,
      (System_Int32_array **)TargetRoot,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v15 = (UnityEngine_Object_o *)this->fields.targetObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(this->fields.targetObjPath, 0LL) )
    {
      if ( !*p_targetObj )
        sub_B5D69C(0LL, v16);
      v17 = UnityEngine_Transform__Find(*p_targetObj, this->fields.targetObjPath, 0LL);
      this->fields.targetObj = v17;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.targetObj,
        (System_Int32_array **)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
  }
}


void __fastcall MultiplyTargetMatrixChr__updateMatrix(
        MultiplyTargetMatrixChr_o *this,
        UnityEngine_Renderer_array *targetRenderers,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *targetObj; // x21
  bool v7; // w0
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x24
  UnityEngine_Object_o *v13; // x22
  __int64 v14; // x1
  int32_t materialType; // w8
  UnityEngine_Material_o *sharedMaterial; // x0
  System_String_o *v17; // x1
  UnityEngine_Material_o *v18; // x0
  System_String_o *v19; // x1
  UnityEngine_Material_o *material; // x0
  System_String_o *mainMatrix; // x1
  UnityEngine_Material_o *v22; // x0
  System_String_o *invertMatrix; // x1
  __int64 v24; // x0
  UnityEngine_Matrix4x4_o v25; // [xsp+0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+40h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+80h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v28; // [xsp+C0h] [xbp-1F0h]
  UnityEngine_Matrix4x4_o v29; // [xsp+100h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+140h] [xbp-170h] BYREF
  int v31; // [xsp+188h] [xbp-128h]
  UnityEngine_Matrix4x4_o v32[3]; // [xsp+190h] [xbp-120h] BYREF

  if ( (byte_42E9D7D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)targetRenderers, (_DWORD)method, v3);
    byte_42E9D7D = 1;
  }
  memset(v32, 0, sizeof(v32));
  v31 = 0;
  targetObj = (UnityEngine_Object_o *)this->fields.targetObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(targetObj, 0LL, 0LL);
  if ( targetRenderers && v7 )
  {
    v9 = this->fields.targetObj;
    if ( !v9
      || (UnityEngine_Transform__get_localToWorldMatrix(&v30, v9, 0LL),
          v32[2] = v30,
          (v9 = this->fields.targetObj) == 0LL) )
    {
      sub_B5D69C(v9, v8);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v30, v9, 0LL);
    v32[0] = v30;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v30, v32, 0LL);
    v32[1] = v30;
    v11 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      do
      {
        if ( v12 >= (unsigned int)v11 )
        {
          v24 = sub_B5D6C8(inverse);
          sub_B5D668(v24, 0LL);
        }
        v13 = (UnityEngine_Object_o *)targetRenderers->m_Items[v12];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v13 )
              sub_B5D69C(inverse, v14);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v13, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v30 = v32[2];
            if ( !material )
              sub_B5D69C(0LL, mainMatrix);
            v26 = v30;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v26, 0LL);
            v22 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v13, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v28 = v32[1];
            if ( !v22 )
              sub_B5D69C(0LL, invertMatrix);
            v25 = v28;
            UnityEngine_Material__SetMatrix(v22, invertMatrix, &v25, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v13 )
              sub_B5D69C(inverse, v14);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v13, 0LL);
            v17 = this->fields.mainMatrix;
            v30 = v32[2];
            if ( !sharedMaterial )
              sub_B5D69C(0LL, v17);
            v29 = v30;
            UnityEngine_Material__SetMatrix(sharedMaterial, v17, &v29, 0LL);
            v18 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v13, 0LL);
            v19 = this->fields.invertMatrix;
            v28 = v32[1];
            if ( !v18 )
              sub_B5D69C(0LL, v19);
            v27 = v28;
            UnityEngine_Material__SetMatrix(v18, v19, &v27, 0LL);
          }
        }
        LODWORD(v11) = targetRenderers->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)v11 );
    }
  }
}