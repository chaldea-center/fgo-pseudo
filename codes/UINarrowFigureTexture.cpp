void UINarrowFigureTexture___ctor(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4D322AE & 1) == 0 )
  {
    sub_1C93AD4(&UINarrowFigureRender_TypeInfo);
    byte_4D322AE = 1;
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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D322AC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D322AC = 1;
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
      UnityEngine_Object__Destroy_72119908(v5, 0);
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
    sub_1C93D2C(bodyTexture, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  AssetData_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4D322AB & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D322AB = 1;
  }
  if ( assetData )
  {
    loadName = this->fields.loadName;
    if ( loadName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_41245620(assetData, loadName, 0) )
      {
        v12 = this->fields.assetData;
        this->fields.loadName = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.loadName, 0, v6, v7, v8, v9, v10, v11);
        this->fields.assetData = assetData;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.assetData,
          (int32_t)assetData,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        UINarrowFigureTexture__SetTexture(this, v19);
        if ( v12 )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_41247948(v12, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v20, v21, v22, v23, v24, v25);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20
  AssetData_o *assetData; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *loadName; // x20
  GrandQuestFolderBoardItem_o *p_loadName; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D322A9 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D322A9 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_33;
      v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !v5 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_33;
    v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                   v5,
                                   v5->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_33;
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                     v5,
                                     v5->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v8, 0);
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_33;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppMethodPointer))v5->klass[1].vtable._1_Finalize.method)(
        v5,
        0,
        v5->klass[1].vtable._2_GetHashCode.methodPtr);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v5 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v5->klass[1].vtable._3_ToString.method)(
        v5,
        0,
        v5->klass[2]._1.image);
      goto LABEL_24;
    }
LABEL_33:
    sub_1C93D2C(v5, v4);
  }
LABEL_24:
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(assetData, 0);
    this->fields.assetData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetData, 0, v10, v11, v12, v13, v14, v15);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (GrandQuestFolderBoardItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_1C93A78(p_loadName, 0, v18, v19, v20, v21, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void UINarrowFigureTexture__SetActive(UINarrowFigureTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C93D2C(bodyTexture, isActive);
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
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Delegate_o *v22; // x8
  System_Action_c *v23; // x1
  AssetData_o *assetData; // x23
  System_String_o *v25; // x23
  struct System_Action_o **v26; // x23
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Action_c *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *v41; // x20
  AssetLoader_LoadEndDataHandler_o *v42; // x21

  if ( (byte_4D322AA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&UINarrowFigureRender_TypeInfo);
    sub_1C93AD4(&Method_UINarrowFigureTexture_EndLoadAsset__);
    byte_4D322AA = 1;
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
      p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
      v15 = System_Delegate__Combine(v13, (System_Delegate_o *)callbackFunc, 0);
      v22 = v15;
      if ( v15 )
      {
        v23 = System_Action_TypeInfo;
        if ( (System_Action_c *)v15->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (GrandQuestFolderBoardItem_c *)v15, (System_Action_c *)v15->klass != v23) )
        {
LABEL_29:
          sub_1C940C8(v22);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C93A78(p_callbackFunc, (int32_t)v15, v16, v17, v18, v19, v20, v21);
      return;
    }
    v25 = this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v25, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_41245620(assetData, AssetName, 0) )
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
    v26 = &this->fields.callbackFunc;
    v27 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v22 = v27;
    if ( v27 )
    {
      v34 = System_Action_TypeInfo;
      if ( (System_Action_c *)v27->klass != System_Action_TypeInfo )
        goto LABEL_29;
      *v26 = (struct System_Action_o *)v27;
      if ( (System_Action_c *)v27->klass != v34 )
        goto LABEL_29;
    }
    else
    {
      *v26 = 0;
    }
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  }
  UINarrowFigureTexture__ClearTexture(this, v11);
  this->fields.loadName = AssetName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.loadName, (int32_t)AssetName, v35, v36, v37, v38, v39, v40);
  v41 = this->fields.loadName;
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v42, (Il2CppObject *)this, Method_UINarrowFigureTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v41, v42, 1, 0);
}


void UINarrowFigureTexture__SetDepth(UINarrowFigureTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C93D2C(0, d);
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

  if ( (byte_4D322AD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_4960/*"Custom/SpriteWithMask"*/);
    sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D322AD = 1;
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
    v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4960/*"Custom/SpriteWithMask"*/, 0);
    v8 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
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
  UnityEngine_Material__SetTexture(v10, (System_String_o *)StringLiteral_16370/*"_MaskTex"*/, (UnityEngine_Texture_o *)bodyTexture, 0);
  v12 = this->fields.bodyTexture;
  BodyUvRect = UINarrowFigureRender__GetBodyUvRect((UINarrowFigureRender_o *)this, v13);
  if ( !v12 )
    goto LABEL_28;
  UITexture__set_uvRect(v12, BodyUvRect, 0);
  if ( !byte_4D322DB )
  {
    sub_1C93AD4(&UINarrowFigureRender_TypeInfo);
    byte_4D322DB = 1;
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
    sub_1C93D2C(bodyTexture, method);
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
  __int64 v8; // x1
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C93D2C(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0);
}


bool UINarrowFigureTexture__get_IsLoad(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadName != 0;
}