void UIMasterFigureTextureOld___ctor(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  if ( (byte_597218E & 1) == 0 )
  {
    sub_2213A60(&UIMasterFigureRenderOld_TypeInfo);
    byte_597218E = 1;
  }
  if ( !*(&UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo, method);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


// attributes: thunk
void UIMasterFigureTextureOld__Destroy(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  UIMasterFigureTextureOld__ReleaseCharacter(this, method);
}


void UIMasterFigureTextureOld__EndLoadAsset(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_47505140; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int max_length; // w8
  struct AssetData_array *v12; // x20
  AssetData_o **m_Items; // x9
  AssetData_array *assetDataList; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Action_o *onLoadCallbackFunc; // x20

  if ( (byte_597218C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_597218C = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetStorage_47505140 = AssetManager__getAssetStorage_47505140(loadNameList, 0);
    if ( AssetStorage_47505140 )
    {
      max_length = AssetStorage_47505140->max_length;
      v12 = AssetStorage_47505140;
      if ( max_length < 1 )
      {
LABEL_11:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList, 0, v5, v6, v7, v8, v9, v10);
        this->fields.assetDataList = v12;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList,
          (int32_t)v12,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        UIMasterFigureTextureOld__SetTexture(this, v21);
        if ( assetDataList )
        {
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
          AssetManager__releaseAsset_47497180(assetDataList, 0);
        }
        onLoadCallbackFunc = this->fields.onLoadCallbackFunc;
        if ( onLoadCallbackFunc )
        {
          this->fields.onLoadCallbackFunc = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.onLoadCallbackFunc,
            0,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          ((void (__fastcall *)(intptr_t, intptr_t))onLoadCallbackFunc->fields.invoke_impl)(
            onLoadCallbackFunc->fields.method_code,
            onLoadCallbackFunc->fields.method);
        }
      }
      else
      {
        m_Items = AssetStorage_47505140->m_Items;
        while ( *m_Items )
        {
          --max_length;
          ++m_Items;
          if ( !max_length )
            goto LABEL_11;
        }
      }
    }
  }
}


UITexture_o *UIMasterFigureTextureOld__GetBodyTexture(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  return this->fields.bodyTexture;
}


void UIMasterFigureTextureOld__ReleaseCharacter(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  AssetData_array *assetDataList; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_array *loadNameList; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5972188 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972188 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                   v5,
                                   v5->klass[1].vtable._1_Finalize.methodPtr);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_33;
      v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                      v5,
                                      v5->klass[1].vtable._1_Finalize.methodPtr);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_83459800(v11, 0);
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
    sub_2213CDC(v5, v4);
  }
LABEL_24:
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetManager__releaseAsset_47497180(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList, 0, v13, v14, v15, v16, v17, v18);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetManager__releaseAssetStorage_47506132(loadNameList, 0);
    this->fields.loadNameList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList, 0, v20, v21, v22, v23, v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureTextureOld__SetActive(UIMasterFigureTextureOld_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_2213CDC(bodyTexture, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureTextureOld__SetCharacter(
        UIMasterFigureTextureOld_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callbackFunc,
        int32_t overWriteEquipId,
        bool ignoreOriginalOffset,
        const MethodInfo *method)
{
  System_String_array *AssetNameList; // x25
  const MethodInfo *v16; // x5
  const MethodInfo *v17; // x3

  if ( (byte_5972189 & 1) == 0 )
  {
    sub_2213A60(&UIMasterFigureRenderOld_TypeInfo);
    byte_5972189 = 1;
  }
  if ( !*(&UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&dispType);
  AssetNameList = UIMasterFigureRenderOld__GetAssetNameList(
                    genderType,
                    equipId,
                    overWriteEquipId,
                    *(const MethodInfo **)&equipId);
  UIMasterFigureRenderOld__SetCharacter(
    (UIMasterFigureRenderOld_o *)this,
    dispType,
    genderType,
    equipId,
    ignoreOriginalOffset,
    v16);
  UIMasterFigureTextureOld__StartLoadAsset(this, AssetNameList, callbackFunc, v17);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureTextureOld__SetDepth(UIMasterFigureTextureOld_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_2213CDC(0, *(_QWORD *)&d);
  UIWidget__set_depth(bodyTexture, d, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureTextureOld__SetEnemy(
        UIMasterFigureTextureOld_o *this,
        int32_t enemyFaceId,
        int32_t battleId,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_array *EnemyAssetNameList; // x22
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_597218A & 1) == 0 )
  {
    sub_2213A60(&UIMasterFigureRenderOld_TypeInfo);
    byte_597218A = 1;
  }
  if ( !*(&UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&enemyFaceId);
  EnemyAssetNameList = UIMasterFigureRenderOld__GetEnemyAssetNameList(enemyFaceId, *(const MethodInfo **)&enemyFaceId);
  UIMasterFigureRenderOld__SetEnemy((UIMasterFigureRenderOld_o *)this, battleId, v10);
  UIMasterFigureTextureOld__StartLoadAsset(this, EnemyAssetNameList, callbackFunc, v11);
}


void UIMasterFigureTextureOld__SetOffsetDirect(
        UIMasterFigureTextureOld_o *this,
        UnityEngine_Vector3_o offset,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (z = offset.fields.z,
        y = offset.fields.y,
        x = offset.fields.x,
        (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyTexture, 0)) == 0) )
  {
    sub_2213CDC(bodyTexture, method);
  }
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyTexture, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureTextureOld__SetSizeDirect(
        UIMasterFigureTextureOld_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (UIWidget__set_width(bodyTexture, width, 0), (bodyTexture = (UIWidget_o *)this->fields.bodyTexture) == 0) )
  {
    sub_2213CDC(bodyTexture, *(_QWORD *)&width);
  }
  UIWidget__set_height(bodyTexture, height, 0);
}


void UIMasterFigureTextureOld__SetTexture(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Shader_o *v4; // x22
  UnityEngine_Material_o *v5; // x21
  UnityEngine_Texture_o *BodyAlphaTexture; // x0
  __int64 v7; // x1
  UIMasterFigureRenderOld_o *v8; // x0
  struct UITexture_o *v9; // x20
  const MethodInfo *v10; // x2
  UIMasterFigureRenderOld_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1

  if ( (byte_597218D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_597218D = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v5 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v5, v4, 0);
  if ( !bodyTexture
    || (v8 = (UIMasterFigureRenderOld_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
                                            bodyTexture,
                                            v5,
                                            bodyTexture->klass->vtable._25_set_material.method),
        v9 = this->fields.bodyTexture,
        BodyAlphaTexture = (UnityEngine_Texture_o *)UIMasterFigureRenderOld__GetBodyTexture(
                                                      v8,
                                                      this->fields.assetDataList,
                                                      v10),
        !v9)
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v9->klass->vtable._27_set_mainTexture.methodPtr)(
          v9,
          BodyAlphaTexture,
          v9->klass->vtable._27_set_mainTexture.method),
        (BodyAlphaTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture) == 0)
    || (v11 = (UIMasterFigureRenderOld_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&BodyAlphaTexture->klass[1]._2.cctor_finished)(
                                             BodyAlphaTexture,
                                             BodyAlphaTexture->klass[1]._2.cctor_thread),
        BodyAlphaTexture = (UnityEngine_Texture_o *)UIMasterFigureRenderOld__GetBodyAlphaTexture(
                                                      v11,
                                                      this->fields.assetDataList,
                                                      v12),
        !v11) )
  {
    sub_2213CDC(BodyAlphaTexture, v7);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)v11,
    (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
    BodyAlphaTexture,
    0);
  UIMasterFigureTextureOld__SetTextureStatus(this, v13);
}


void UIMasterFigureTextureOld__SetTextureStatus(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  UITexture_o *bodyTexture; // x20
  UIWidget_o *transform; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v8; // w1
  int32_t v9; // w1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  bodyTexture = this->fields.bodyTexture;
  BodyUvRect = UIMasterFigureRenderOld__GetBodyUvRect((UIMasterFigureRenderOld_o *)this, method);
  if ( !bodyTexture )
    goto LABEL_18;
  UITexture__set_uvRect(bodyTexture, BodyUvRect, 0);
  BodySize = UIMasterFigureRenderOld__GetBodySize((UIMasterFigureRenderOld_o *)this, v6);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  v8 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
  UIWidget__set_width(transform, v8, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  v9 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
  UIWidget__set_height(transform, v9, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_18;
  v10.fields.z = 0.0;
  v10.fields.y = this->fields.dispOffset.fields.y;
  v10.fields.x = this->fields.dispOffset.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
    return;
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform
    || (transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_18:
    sub_2213CDC(transform, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
}


void UIMasterFigureTextureOld__SetTweenColor(
        UIMasterFigureTextureOld_o *this,
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
    sub_2213CDC(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0);
}


void UIMasterFigureTextureOld__StartLoadAsset(
        UIMasterFigureTextureOld_o *this,
        System_String_array *loadNameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_array *v11; // x22
  __int64 v12; // x1
  struct System_Action_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Action_o *v20; // x8
  System_Action_c *v21; // x1
  AssetData_array *assetDataList; // x22
  const MethodInfo *v23; // x1
  System_String_array *v24; // x22
  struct System_Action_o *v25; // x0
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_array *v31; // x20
  System_Action_o *v32; // x21
  __int64 v33; // x1

  if ( (byte_597218B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UIMasterFigureTextureOld_EndLoadAsset__);
    byte_597218B = 1;
  }
  v11 = this->fields.loadNameList;
  if ( v11 )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, loadNameList);
    if ( AssetManager__compAssetStorageList(v11, loadNameList, 0) )
    {
      if ( !callbackFunc )
        return;
      v13 = (struct System_Action_o *)System_Delegate__Combine(
                                        (System_Delegate_o *)this->fields.onLoadCallbackFunc,
                                        (System_Delegate_o *)callbackFunc,
                                        0);
      v20 = v13;
      if ( v13 )
      {
        v21 = System_Action_TypeInfo;
        if ( v13->klass != System_Action_TypeInfo || (this->fields.onLoadCallbackFunc = v13, v13->klass != v21) )
        {
LABEL_25:
          sub_221405C(v20, v21, v14);
          return;
        }
      }
      else
      {
        this->fields.onLoadCallbackFunc = 0;
      }
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.onLoadCallbackFunc,
        (int32_t)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      return;
    }
    v24 = this->fields.loadNameList;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
    AssetManager__releaseAssetStorage_47506132(v24, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, loadNameList);
      if ( AssetManager__compAssetStorageList_47494836(assetDataList, loadNameList, 0) )
      {
        UIMasterFigureTextureOld__SetTextureStatus(this, v23);
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
    v25 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.onLoadCallbackFunc,
                                      (System_Delegate_o *)callbackFunc,
                                      0);
    v20 = v25;
    if ( v25 )
    {
      v21 = System_Action_TypeInfo;
      if ( v25->klass != System_Action_TypeInfo )
        goto LABEL_25;
      this->fields.onLoadCallbackFunc = v25;
      if ( v25->klass != v21 )
        goto LABEL_25;
    }
    else
    {
      this->fields.onLoadCallbackFunc = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onLoadCallbackFunc,
      (int32_t)v25,
      v14,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  this->fields.loadNameList = loadNameList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList,
    (int32_t)loadNameList,
    (System_String_o *)callbackFunc,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v31 = this->fields.loadNameList;
  v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_UIMasterFigureTextureOld_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
  AssetManager__loadAssetStorage_47503780(v31, v32, 1, 0);
}


bool UIMasterFigureTextureOld__get_IsLoad(UIMasterFigureTextureOld_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}