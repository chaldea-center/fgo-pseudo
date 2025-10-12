void UINarrowFigureTexture___ctor(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4C392BB & 1) == 0 )
  {
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    byte_4C392BB = 1;
  }
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  *(_QWORD *)&this->fields.imageLimitCount = -1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UINarrowFigureTexture__Awake(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x0

  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
    bodyTexture,
    0,
    bodyTexture->klass->vtable._25_set_material.method);
}


void UINarrowFigureTexture__ClearTexture(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *v5; // x20

  if ( (byte_4C392B9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C392B9 = 1;
  }
  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_16;
  bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0);
  if ( !bodyTexture )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, 0, 0);
  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_16;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))bodyTexture->klass[1].vtable._0_Equals.method)(
                                 bodyTexture,
                                 bodyTexture->klass[1].vtable._1_Finalize.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( bodyTexture )
    {
      v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))bodyTexture->klass[1].vtable._0_Equals.method)(
                                     bodyTexture,
                                     bodyTexture->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v5, 0);
      bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( bodyTexture )
      {
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppMethodPointer))bodyTexture->klass[1].vtable._1_Finalize.method)(
          bodyTexture,
          0,
          bodyTexture->klass[1].vtable._2_GetHashCode.methodPtr);
        goto LABEL_14;
      }
    }
LABEL_16:
    sub_1C32E7C(bodyTexture);
  }
LABEL_14:
  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_16;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))bodyTexture->klass[1].vtable._3_ToString.method)(
    bodyTexture,
    0,
    bodyTexture->klass[2]._1.image);
  this->fields.textureImageLimitCount = -1;
}


// attributes: thunk
void UINarrowFigureTexture__Destroy(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  UINarrowFigureTexture__ReleaseCharacter(this, method);
}


void UINarrowFigureTexture__EndLoadAsset(
        UINarrowFigureTexture_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *loadName; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  AssetData_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C392B8 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C392B8 = 1;
  }
  if ( assetData )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_40433000(assetData, loadName, 0) )
      {
        v8 = this->fields.assetData;
        this->fields.loadName = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadName, 0, v6, v7);
        this->fields.assetData = assetData;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)assetData, v9, v10);
        UINarrowFigureTexture__SetTexture(this, v11);
        if ( v8 )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40435328(v8, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v12, v13);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
    }
  }
}


void UINarrowFigureTexture__ReleaseCharacter(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x20
  AssetData_o *assetData; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *loadName; // x20
  CGThumbnailListItem_o *p_loadName; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C392B6 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C392B6 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v4 )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v4, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v4 )
        goto LABEL_33;
      v4 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v4, 0);
      if ( !v4 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v4, 0, 0);
    }
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v4 )
      goto LABEL_33;
    v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v4->klass[1].vtable._0_Equals.method)(
                                   v4,
                                   v4->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v4 )
        goto LABEL_33;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v4->klass[1].vtable._0_Equals.method)(
                                     v4,
                                     v4->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v7, 0);
      v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v4 )
        goto LABEL_33;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppMethodPointer))v4->klass[1].vtable._1_Finalize.method)(
        v4,
        0,
        v4->klass[1].vtable._2_GetHashCode.methodPtr);
    }
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v4 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v4->klass[1].vtable._3_ToString.method)(
        v4,
        0,
        v4->klass[2]._1.image);
      goto LABEL_24;
    }
LABEL_33:
    sub_1C32E7C(v4);
  }
LABEL_24:
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435328(assetData, 0);
    this->fields.assetData = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetData, 0, v9, v10);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (CGThumbnailListItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_1C32BC4(p_loadName, 0, v13, v14);
  }
}


void UINarrowFigureTexture__SetActive(UINarrowFigureTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C32E7C(bodyTexture);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UINarrowFigureTexture__SetCharacter(
        UINarrowFigureTexture_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  System_String_o *loadName; // x23
  System_Delegate_o *v13; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1
  AssetData_o *assetData; // x23
  System_String_o *v21; // x23
  struct System_Action_o **v22; // x23
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_c *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_4C392B7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    sub_1C32C20(&Method_UINarrowFigureTexture_EndLoadAsset__);
    byte_4C392B7 = 1;
  }
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  AssetName = UINarrowFigureRender__GetAssetName(svtId, imageLimitCount, *(const MethodInfo **)&imageLimitCount);
  UINarrowFigureRender__SetCharacter((UINarrowFigureRender_o *)this, svtId, imageLimitCount, v10);
  loadName = this->fields.loadName;
  if ( loadName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorage(loadName, AssetName, 0) )
    {
      if ( !callbackFunc )
        return;
      v13 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      v15 = System_Delegate__Combine(v13, (System_Delegate_o *)callbackFunc, 0);
      v18 = v15;
      if ( v15 )
      {
        v19 = System_Action_TypeInfo;
        if ( (System_Action_c *)v15->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (CGThumbnailListItem_c *)v15, (System_Action_c *)v15->klass != v19) )
        {
LABEL_29:
          sub_1C3313C(v18);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C32BC4(p_callbackFunc, (int32_t)v15, v16, v17);
      return;
    }
    v21 = this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v21, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_40433000(assetData, AssetName, 0) )
      {
        if ( this->fields.textureImageLimitCount != this->fields.imageLimitCount )
          UINarrowFigureTexture__SetTexture(this, v11);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        return;
      }
    }
  }
  if ( callbackFunc )
  {
    v22 = &this->fields.callbackFunc;
    v23 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v18 = v23;
    if ( v23 )
    {
      v26 = System_Action_TypeInfo;
      if ( (System_Action_c *)v23->klass != System_Action_TypeInfo )
        goto LABEL_29;
      *v22 = (struct System_Action_o *)v23;
      if ( (System_Action_c *)v23->klass != v26 )
        goto LABEL_29;
    }
    else
    {
      *v22 = 0;
    }
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v23, v24, v25);
  }
  UINarrowFigureTexture__ClearTexture(this, v11);
  this->fields.loadName = AssetName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)AssetName, v27, v28);
  v29 = this->fields.loadName;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v30, (Il2CppObject *)this, Method_UINarrowFigureTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v29, v30, 1, 0);
}


void UINarrowFigureTexture__SetDepth(UINarrowFigureTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C32E7C(0);
  UIWidget__set_depth(bodyTexture, d, 0);
}


void UINarrowFigureTexture__SetHideCharacter(
        UINarrowFigureTexture_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  UINarrowFigureTexture__SetCharacter(this, 100001, 0, callbackFunc, v3);
}


void UINarrowFigureTexture__SetTexture(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0
  UnityEngine_Object_o *v4; // x20
  const MethodInfo *v5; // x2
  struct UITexture_o *v6; // x20
  UnityEngine_Shader_o *v7; // x22
  UnityEngine_Material_o *v8; // x21
  struct UITexture_o *v9; // x20
  UnityEngine_Material_o *v10; // x20
  const MethodInfo *v11; // x2
  UITexture_o *v12; // x20
  const MethodInfo *v13; // x1
  intptr_t m_CachedPtr; // x9
  float v15; // s0
  float v16; // s8
  int32_t v17; // w1
  int32_t v18; // w1
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C392BA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C392BA = 1;
  }
  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_28;
  bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0);
  if ( !bodyTexture )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, 1, 0);
  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_28;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))bodyTexture->klass[1].vtable._0_Equals.method)(
                                 bodyTexture,
                                 bodyTexture->klass[1].vtable._1_Finalize.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v6 = this->fields.bodyTexture;
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
    v8 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    if ( !v6 )
      goto LABEL_28;
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v6->klass->vtable._25_set_material.methodPtr)(
      v6,
      v8,
      v6->klass->vtable._25_set_material.method);
  }
  v9 = this->fields.bodyTexture;
  bodyTexture = (UnityEngine_Component_o *)UINarrowFigureRender__GetBodyTexture(
                                             (UINarrowFigureRender_o *)this,
                                             this->fields.assetData,
                                             v5);
  if ( !v9 )
    goto LABEL_28;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Component_o *, const MethodInfo *))v9->klass->vtable._27_set_mainTexture.methodPtr)(
    v9,
    bodyTexture,
    v9->klass->vtable._27_set_mainTexture.method);
  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    goto LABEL_28;
  v10 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))bodyTexture->klass[1].vtable._0_Equals.method)(
                                    bodyTexture,
                                    bodyTexture->klass[1].vtable._1_Finalize.methodPtr);
  bodyTexture = (UnityEngine_Component_o *)UINarrowFigureRender__GetBodyAlphaTexture(
                                             (UINarrowFigureRender_o *)this,
                                             this->fields.assetData,
                                             v11);
  if ( !v10 )
    goto LABEL_28;
  UnityEngine_Material__SetTexture(v10, (System_String_o *)StringLiteral_16267/*"_MaskTex"*/, (UnityEngine_Texture_o *)bodyTexture, 0);
  v12 = this->fields.bodyTexture;
  BodyUvRect = UINarrowFigureRender__GetBodyUvRect((UINarrowFigureRender_o *)this, v13);
  if ( !v12 )
    goto LABEL_28;
  UITexture__set_uvRect(v12, BodyUvRect, 0);
  if ( !byte_4C39304 )
  {
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    byte_4C39304 = 1;
  }
  bodyTexture = (UnityEngine_Component_o *)UINarrowFigureRender_TypeInfo;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    bodyTexture = (UnityEngine_Component_o *)UINarrowFigureRender_TypeInfo;
  }
  if ( !this->fields.bodyTexture
    || ((m_CachedPtr = bodyTexture[7].fields.m_CachedPtr,
         v15 = *(float *)(m_CachedPtr + 32),
         v16 = *(float *)(m_CachedPtr + 36),
         v15 != INFINITY)
      ? (v17 = (int)v15)
      : (v17 = 0x80000000),
        UIWidget__set_width((UIWidget_o *)this->fields.bodyTexture, v17, 0),
        (bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture) == 0) )
  {
LABEL_28:
    sub_1C32E7C(bodyTexture);
  }
  if ( v16 == INFINITY )
    v18 = 0x80000000;
  else
    v18 = (int)v16;
  UIWidget__set_height((UIWidget_o *)bodyTexture, v18, 0);
}


void UINarrowFigureTexture__SetTweenColor(
        UINarrowFigureTexture_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C32E7C(0);
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIWidget__set_color(bodyTexture, v9, 0);
}


bool UINarrowFigureTexture__get_IsLoad(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadName != 0;
}