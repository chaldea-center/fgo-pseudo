void __fastcall MultiplyTargetMatrixChr___ctor(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4212440 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16223/*"_rootMatrix"*/, method);
    sub_B0D8A4(&StringLiteral_16195/*"_invrootMatrix"*/, v3);
    byte_4212440 = 1;
  }
  v4 = StringLiteral_16223/*"_rootMatrix"*/;
  this->fields.mainMatrix = (struct System_String_o *)StringLiteral_16223/*"_rootMatrix"*/;
  sub_B0D840(&this->fields.mainMatrix, v4);
  v5 = StringLiteral_16195/*"_invrootMatrix"*/;
  this->fields.invertMatrix = (struct System_String_o *)StringLiteral_16195/*"_invrootMatrix"*/;
  sub_B0D840(&this->fields.invertMatrix, v5);
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
    sub_B0D97C(0LL);
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

  if ( !obj )
    sub_B0D97C(this);
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this->fields.targetObj = transform;
  sub_B0D840(&this->fields.targetObj, transform);
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
  const MethodInfo *v7; // x2
  struct XWeaponTrail_array *targetXWeaponTrails; // x8
  __int64 v9; // x1
  struct UnityEngine_Renderer_array **p_targetXWeaponTrailRenderers; // x20
  struct UnityEngine_Renderer_array *v11; // x0
  unsigned __int64 v12; // x22
  UnityEngine_Renderer_array *v13; // x1
  UnityEngine_Object_o *v14; // x21
  struct XWeaponTrail_array *v15; // x8
  XWeaponTrail_o *v16; // x8
  UnityEngine_Object_o *mMeshObj; // x21
  unsigned int *v18; // x25
  srcLineSprite_o *v19; // x21
  unsigned int *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_421243C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Renderer___TypeInfo, v5);
    byte_421243C = 1;
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
        v11 = (struct UnityEngine_Renderer_array *)sub_B0D8BC(UnityEngine_Renderer___TypeInfo, v9);
        this->fields.targetXWeaponTrailRenderers = v11;
        sub_B0D840(&this->fields.targetXWeaponTrailRenderers, v11);
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        if ( !targetXWeaponTrails )
LABEL_29:
          sub_B0D97C(Component_srcLineSprite);
      }
      v12 = 0LL;
      while ( 1 )
      {
        v13 = *p_targetXWeaponTrailRenderers;
        if ( (__int64)v12 >= (int)targetXWeaponTrails->max_length )
          break;
        if ( !v13 )
          goto LABEL_29;
        if ( v12 >= v13->max_length )
          goto LABEL_32;
        v14 = (UnityEngine_Object_o *)v13->m_Items[v12];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
        {
          v15 = this->fields.targetXWeaponTrails;
          if ( !v15 )
            goto LABEL_29;
          if ( v12 >= v15->max_length )
            goto LABEL_32;
          v16 = v15->m_Items[v12];
          if ( !v16 )
            goto LABEL_29;
          mMeshObj = (UnityEngine_Object_o *)v16->fields.mMeshObj;
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
            v18 = (unsigned int *)*p_targetXWeaponTrailRenderers;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)mMeshObj,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
            if ( !v18 )
              goto LABEL_29;
            v19 = Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (srcLineSprite_o *)sub_B0D964(
                                                             Component_srcLineSprite,
                                                             *(_QWORD *)(*(_QWORD *)v18 + 64LL));
              if ( !Component_srcLineSprite )
              {
                v22 = sub_B0D99C();
                sub_B0D948(v22, 0LL);
              }
            }
            if ( v12 >= v18[6] )
            {
LABEL_32:
              v21 = sub_B0D9A8(Component_srcLineSprite);
              sub_B0D948(v21, 0LL);
            }
            v20 = &v18[2 * v12];
            *((_QWORD *)v20 + 4) = v19;
            sub_B0D840(v20 + 8, v19);
          }
        }
        targetXWeaponTrails = this->fields.targetXWeaponTrails;
        ++v12;
        if ( !targetXWeaponTrails )
          goto LABEL_29;
      }
      MultiplyTargetMatrixChr__updateMatrix(this, v13, v7);
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
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *webView; // x20
  bool v9; // w0

  if ( (byte_421243F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    sub_B0D8A4(&StringLiteral_17477/*"chr(Clone)"*/, v3);
    sub_B0D8A4(&StringLiteral_17476/*"chr"*/, v4);
    byte_421243F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  v7 = 0LL;
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
    v9 = UnityEngine_Object__op_Inequality(webView, 0LL, 0LL);
    v7 = 0LL;
    if ( v9 )
    {
      transform = (UnityEngine_GameObject_o *)Instance->fields.webView;
      if ( !transform )
        goto LABEL_25;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_25;
      v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)transform,
                                     (System_String_o *)StringLiteral_17477/*"chr(Clone)"*/,
                                     0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
      {
        transform = (UnityEngine_GameObject_o *)Instance->fields.webView;
        if ( transform )
        {
          transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
          if ( transform )
          {
            v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                           (UnityEngine_Transform_o *)transform,
                                           (System_String_o *)StringLiteral_17476/*"chr"*/,
                                           0LL);
            goto LABEL_21;
          }
        }
LABEL_25:
        sub_B0D97C(transform);
      }
    }
  }
LABEL_21:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  return (UnityEngine_Transform_o *)v7;
}


void __fastcall MultiplyTargetMatrixChr__setupTarget(MultiplyTargetMatrixChr_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_targetObj; // x20
  UnityEngine_Object_o *targetObj; // x21
  const MethodInfo *v5; // x1
  struct UnityEngine_Transform_o *TargetRoot; // x0
  UnityEngine_Object_o *v7; // x21
  struct UnityEngine_Transform_o *v8; // x0

  if ( (byte_421243D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421243D = 1;
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
    sub_B0D840(&this->fields.targetObj, TargetRoot);
    v7 = (UnityEngine_Object_o *)this->fields.targetObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(this->fields.targetObjPath, 0LL) )
    {
      if ( !*p_targetObj )
        sub_B0D97C(0LL);
      v8 = UnityEngine_Transform__Find(*p_targetObj, this->fields.targetObjPath, 0LL);
      this->fields.targetObj = v8;
      sub_B0D840(&this->fields.targetObj, v8);
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
  UnityEngine_Matrix4x4_o *inverse; // x0
  __int64 v9; // x8
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
  __int64 v21; // x0
  UnityEngine_Matrix4x4_o v22; // [xsp+0h] [xbp-2B0h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+40h] [xbp-270h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+80h] [xbp-230h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+C0h] [xbp-1F0h]
  UnityEngine_Matrix4x4_o v26; // [xsp+100h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v27; // [xsp+140h] [xbp-170h] BYREF
  int v28; // [xsp+188h] [xbp-128h]
  UnityEngine_Matrix4x4_o v29[3]; // [xsp+190h] [xbp-120h] BYREF

  if ( (byte_421243E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, targetRenderers);
    byte_421243E = 1;
  }
  memset(v29, 0, sizeof(v29));
  v28 = 0;
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
      || (UnityEngine_Transform__get_localToWorldMatrix(&v27, v7, 0LL),
          v29[2] = v27,
          (v7 = this->fields.targetObj) == 0LL) )
    {
      sub_B0D97C(v7);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&v27, v7, 0LL);
    v29[0] = v27;
    inverse = UnityEngine_Matrix4x4__get_inverse(&v27, v29, 0LL);
    v29[1] = v27;
    v9 = *(_QWORD *)&targetRenderers->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v9 )
        {
          v21 = sub_B0D9A8(inverse);
          sub_B0D948(v21, 0LL);
        }
        v11 = (UnityEngine_Object_o *)targetRenderers->m_Items[v10];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        inverse = (UnityEngine_Matrix4x4_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
        if ( ((unsigned __int8)inverse & 1) != 0 )
        {
          materialType = this->fields.materialType;
          if ( materialType == 1 )
          {
            if ( !v11 )
              sub_B0D97C(inverse);
            material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v11, 0LL);
            mainMatrix = this->fields.mainMatrix;
            v27 = v29[2];
            if ( !material )
              sub_B0D97C(0LL);
            v23 = v27;
            UnityEngine_Material__SetMatrix(material, mainMatrix, &v23, 0LL);
            v19 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v11, 0LL);
            invertMatrix = this->fields.invertMatrix;
            v25 = v29[1];
            if ( !v19 )
              sub_B0D97C(0LL);
            v22 = v25;
            UnityEngine_Material__SetMatrix(v19, invertMatrix, &v22, 0LL);
          }
          else if ( !materialType )
          {
            if ( !v11 )
              sub_B0D97C(inverse);
            sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v11, 0LL);
            v14 = this->fields.mainMatrix;
            v27 = v29[2];
            if ( !sharedMaterial )
              sub_B0D97C(0LL);
            v26 = v27;
            UnityEngine_Material__SetMatrix(sharedMaterial, v14, &v26, 0LL);
            v15 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v11, 0LL);
            v16 = this->fields.invertMatrix;
            v25 = v29[1];
            if ( !v15 )
              sub_B0D97C(0LL);
            v24 = v25;
            UnityEngine_Material__SetMatrix(v15, v16, &v24, 0LL);
          }
        }
        LODWORD(v9) = targetRenderers->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)v9 );
    }
  }
}