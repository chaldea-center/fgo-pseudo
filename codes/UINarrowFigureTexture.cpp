void UINarrowFigureTexture___cctor(const MethodInfo *method)
{
  if ( (byte_5939FEB & 1) == 0 )
  {
    sub_21FFC50(&UINarrowFigureTexture_TypeInfo);
    sub_21FFC50(&StringLiteral_16884/*"_MaskTex"*/);
    byte_5939FEB = 1;
  }
  UINarrowFigureTexture_TypeInfo->static_fields->MaskTexId = UnityEngine_Shader__PropertyToID(
                                                               (System_String_o *)StringLiteral_16884/*"_MaskTex"*/,
                                                               0);
}


void UINarrowFigureTexture___ctor(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  if ( (byte_5939FEA & 1) == 0 )
  {
    sub_21FFC50(&UINarrowFigureRender_TypeInfo);
    byte_5939FEA = 1;
  }
  if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, method);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UINarrowFigureTexture__Awake(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x0

  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
    bodyTexture,
    0,
    bodyTexture->klass->vtable._25_set_material.method);
}


void UINarrowFigureTexture__ClearTexture(UINarrowFigureTexture_o *this, const MethodInfo *method)
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

  if ( (byte_5939FE8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939FE8 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_24;
      v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !v5 )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_24;
    v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                   v5,
                                   v5->klass[1].vtable._1_Finalize.methodPtr);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_24;
      v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                      v5,
                                      v5->klass[1].vtable._1_Finalize.methodPtr);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_83246496(v11, 0);
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_24;
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
      return;
    }
LABEL_24:
    sub_21FFECC(v5, v4);
  }
}


void UINarrowFigureTexture__EndLoadAsset(
        UINarrowFigureTexture_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *loadingAssetName; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_String_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  Il2CppObject *Instance; // x0
  __int64 v21; // x1

  if ( (byte_5939FE7 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_5939FE7 = 1;
  }
  loadingAssetName = this->fields.loadingAssetName;
  if ( !loadingAssetName )
    goto LABEL_8;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetData);
  if ( AssetManager__compAssetStorage_47463144(assetData, loadingAssetName, 0) )
  {
    v12 = this->fields.loadingAssetName;
    this->fields.loadedAssetName = v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssetName,
      (int32_t)v12,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    this->fields.loadingAssetName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadingAssetName, 0, v13, v14, v15, v16, v17, v18);
    UINarrowFigureTexture__SetTexture(this, v19);
  }
  else
  {
LABEL_8:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v21);
    AssetManager__ReleaseReservation((AssetManager_o *)Instance, assetData, 0);
  }
}


void UINarrowFigureTexture__OnDestroy(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  UINarrowFigureTexture__ClearTexture(this, method);
  UINarrowFigureTexture__ReleaseAssetStorage(this, v3);
  *(_QWORD *)&this->fields.currentSvtId = 0;
  this->fields.maskShader = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.maskShader, 0, v4, v5, v6, v7, v8, v9);
  this->fields.maskTexture = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.maskTexture, 0, v10, v11, v12, v13, v14, v15);
}


void UINarrowFigureTexture__ReleaseAssetStorage(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  System_String_o *loadedAssetName; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *loadingAssetName; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5939FE5 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5939FE5 = 1;
  }
  loadedAssetName = this->fields.loadedAssetName;
  if ( loadedAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(loadedAssetName, 0);
    this->fields.loadedAssetName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssetName, 0, v4, v5, v6, v7, v8, v9);
  }
  loadingAssetName = this->fields.loadingAssetName;
  if ( loadingAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(loadingAssetName, 0);
    this->fields.loadingAssetName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadingAssetName, 0, v11, v12, v13, v14, v15, v16);
  }
}


void UINarrowFigureTexture__ReleaseCharacter(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UINarrowFigureTexture__ClearTexture(this, method);
  UINarrowFigureTexture__ReleaseAssetStorage(this, v3);
  *(_QWORD *)&this->fields.currentSvtId = 0;
}


// local variable allocation has failed, the output may be wrong!
void UINarrowFigureTexture__SetActive(UINarrowFigureTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_21FFECC(bodyTexture, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UINarrowFigureTexture__SetCharacter(
        UINarrowFigureTexture_o *this,
        int32_t svtId,
        int32_t limitCountStage,
        bool useGroupImage,
        const MethodInfo *method)
{
  bool v8; // w22
  UINarrowFigureRender_c *v9; // x0
  int32_t currentLimitCountStage; // w24
  int v11; // w8
  System_String_o *AssetName; // x0
  const MethodInfo *v13; // x1
  System_String_o *loadingAssetName; // x22
  System_String_o *v15; // x21
  System_String_o *loadedAssetName; // x22
  const MethodInfo *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  __int64 v26; // x1

  v8 = useGroupImage;
  if ( (byte_5939FE6 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UINarrowFigureRender_TypeInfo);
    sub_21FFC50(&Method_UINarrowFigureTexture_EndLoadAsset__);
    byte_5939FE6 = 1;
  }
  v9 = UINarrowFigureRender_TypeInfo;
  currentLimitCountStage = this->fields.currentLimitCountStage;
  this->fields.currentSvtId = svtId;
  this->fields.currentLimitCountStage = limitCountStage;
  v11 = *(&v9->_2.cctor_finished + 1);
  this->fields.isUseGroupImage = v8;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(v9, *(_QWORD *)&svtId);
  AssetName = UINarrowFigureRender__GetAssetName(svtId, limitCountStage, *(const MethodInfo **)&limitCountStage);
  loadingAssetName = this->fields.loadingAssetName;
  v15 = AssetName;
  if ( loadingAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
    if ( AssetManager__compAssetStorage(loadingAssetName, v15, 0) )
      return;
LABEL_16:
    UINarrowFigureTexture__ClearTexture(this, v13);
    UINarrowFigureTexture__ReleaseAssetStorage(this, v17);
    this->fields.loadingAssetName = v15;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadingAssetName,
      (int32_t)v15,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = this->fields.loadingAssetName;
    v25 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v25, (Il2CppObject *)this, Method_UINarrowFigureTexture_EndLoadAsset__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26);
    AssetManager__loadAssetStorage(v24, v25, 1, 1, 0);
    return;
  }
  loadedAssetName = this->fields.loadedAssetName;
  if ( !loadedAssetName )
    goto LABEL_16;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
  if ( !AssetManager__compAssetStorage(loadedAssetName, v15, 0) )
    goto LABEL_16;
  if ( currentLimitCountStage != limitCountStage )
    UINarrowFigureTexture__SetTexture(this, v13);
}


void UINarrowFigureTexture__SetTexture(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  int v4; // w8
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x6
  UnityEngine_Object_o *maskShader; // x20
  __int64 v12; // x1
  struct UnityEngine_Shader_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Object_o *maskTexture; // x20
  Il2CppObject *object; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UITexture_o *v28; // x20
  UnityEngine_Shader_o *v29; // x22
  UnityEngine_Material_o *v30; // x21
  UnityEngine_Material_o *v31; // x20
  int32_t currentSvtId; // w20
  int32_t currentLimitCountStage; // w21
  _BOOL4 isUseGroupImage; // w22
  int32_t v35; // w1
  int32_t y; // w1
  UnityEngine_Vector2_o size; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o uvRect; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Texture2D_o *texture2d; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_5939FE9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_21FFC50(&UINarrowFigureRender_TypeInfo);
    sub_21FFC50(&UINarrowFigureTexture_TypeInfo);
    sub_21FFC50(&StringLiteral_5116/*"Custom/SpriteWithMask"*/);
    sub_21FFC50(&StringLiteral_4781/*"CommonUI/NarrowFigure/NarrowFigureMask"*/);
    byte_5939FE9 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  texture2d = 0;
  *(_QWORD *)&uvRect.fields.m_XMin = 0;
  *(_QWORD *)&uvRect.fields.m_Width = 0;
  v4 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  size = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(bodyTexture, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !gameObject )
      goto LABEL_40;
    v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._0_Equals.method)(
                                   gameObject,
                                   gameObject->klass[1].vtable._1_Finalize.methodPtr);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(v8, 0, 0) )
    {
      maskShader = (UnityEngine_Object_o *)this->fields.maskShader;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Equality(maskShader, 0, 0) )
      {
        v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5116/*"Custom/SpriteWithMask"*/, 0);
        this->fields.maskShader = v13;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.maskShader,
          (int32_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      maskTexture = (UnityEngine_Object_o *)this->fields.maskTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Equality(maskTexture, 0, 0) )
      {
        object = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_4781/*"CommonUI/NarrowFigure/NarrowFigureMask"*/,
                   (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_Texture2D___);
        this->fields.maskTexture = (struct UnityEngine_Texture2D_o *)object;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.maskTexture,
          (int32_t)object,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      v28 = this->fields.bodyTexture;
      v29 = this->fields.maskShader;
      v30 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v30, v29, 0);
      if ( !v28 )
        goto LABEL_40;
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v28->klass->vtable._25_set_material.methodPtr)(
        v28,
        v30,
        v28->klass->vtable._25_set_material.method);
      gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !gameObject )
        goto LABEL_40;
      gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._0_Equals.method)(
                                                gameObject,
                                                gameObject->klass[1].vtable._1_Finalize.methodPtr);
      v31 = (UnityEngine_Material_o *)gameObject;
      if ( !*(&UINarrowFigureTexture_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UINarrowFigureTexture_TypeInfo, v5);
      if ( !v31 )
        goto LABEL_40;
      UnityEngine_Material__SetTexture_83063164(
        v31,
        UINarrowFigureTexture_TypeInfo->static_fields->MaskTexId,
        (UnityEngine_Texture_o *)this->fields.maskTexture,
        0);
    }
    currentSvtId = this->fields.currentSvtId;
    currentLimitCountStage = this->fields.currentLimitCountStage;
    isUseGroupImage = this->fields.isUseGroupImage;
    if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, v9);
    UINarrowFigureRender__GetData(
      currentSvtId,
      currentLimitCountStage,
      isUseGroupImage,
      &texture2d,
      &uvRect,
      &size,
      v10);
    gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( gameObject )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Texture2D_o *, void *))gameObject->klass[1].vtable._3_ToString.method)(
        gameObject,
        texture2d,
        gameObject->klass[2]._1.image);
      gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( gameObject )
      {
        UITexture__set_uvRect((UITexture_o *)gameObject, uvRect, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
        if ( gameObject )
        {
          v35 = size.fields.x == INFINITY ? 0x80000000 : (int)size.fields.x;
          UIWidget__set_width((UIWidget_o *)gameObject, v35, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
          if ( gameObject )
          {
            if ( size.fields.y == INFINITY )
              y = 0x80000000;
            else
              y = (int)size.fields.y;
            UIWidget__set_height((UIWidget_o *)gameObject, y, 0);
            return;
          }
        }
      }
    }
LABEL_40:
    sub_21FFECC(gameObject, v5);
  }
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
    sub_21FFECC(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0);
}