void UINarrowFigureTexture___cctor(const MethodInfo *method)
{
  if ( (byte_4E78F9C & 1) == 0 )
  {
    sub_1D0F0B4(&UINarrowFigureTexture_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16486/*"_MaskTex"*/);
    byte_4E78F9C = 1;
  }
  UINarrowFigureTexture_TypeInfo->static_fields->MaskTexId = UnityEngine_Shader__PropertyToID(
                                                               (System_String_o *)StringLiteral_16486/*"_MaskTex"*/,
                                                               0);
}


void UINarrowFigureTexture___ctor(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4E78F9B & 1) == 0 )
  {
    sub_1D0F0B4(&UINarrowFigureRender_TypeInfo);
    byte_4E78F9B = 1;
  }
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UINarrowFigureTexture__Awake(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x0

  bodyTexture = this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1D0F30C(0, method);
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
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20

  if ( (byte_4E78F99 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E78F99 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                   v5,
                                   v5->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_24;
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                     v5,
                                     v5->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_73359484(v8, 0);
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
    sub_1D0F30C(v5, v4);
  }
}


void UINarrowFigureTexture__EndLoadAsset(
        UINarrowFigureTexture_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *loadingAssetName; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_String_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  Il2CppObject *Instance; // x0
  __int64 v21; // x1

  if ( (byte_4E78F98 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4E78F98 = 1;
  }
  loadingAssetName = this->fields.loadingAssetName;
  if ( !loadingAssetName )
    goto LABEL_8;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__compAssetStorage_41891824(assetData, loadingAssetName, 0) )
  {
    v12 = this->fields.loadingAssetName;
    this->fields.loadedAssetName = v12;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.loadedAssetName, (int32_t)v12, v6, v7, v8, v9, v10, v11);
    this->fields.loadingAssetName = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.loadingAssetName, 0, v13, v14, v15, v16, v17, v18);
    UINarrowFigureTexture__SetTexture(this, v19);
  }
  else
  {
LABEL_8:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_1D0F30C(0, v21);
    AssetManager__ReleaseReservation((AssetManager_o *)Instance, assetData, 0);
  }
}


void UINarrowFigureTexture__OnDestroy(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  UINarrowFigureTexture__ClearTexture(this, method);
  UINarrowFigureTexture__ReleaseAssetStorage(this, v3);
  *(_QWORD *)&this->fields.currentSvtId = 0;
  this->fields.maskShader = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.maskShader, 0, v4, v5, v6, v7, v8, v9);
  this->fields.maskTexture = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.maskTexture, 0, v10, v11, v12, v13, v14, v15);
}


void UINarrowFigureTexture__ReleaseAssetStorage(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  System_String_o *loadedAssetName; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_String_o *loadingAssetName; // x20
  GrandQuestFolderBoardItem_o *p_loadingAssetName; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4E78F96 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    byte_4E78F96 = 1;
  }
  loadedAssetName = this->fields.loadedAssetName;
  if ( loadedAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadedAssetName, 0);
    this->fields.loadedAssetName = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.loadedAssetName, 0, v4, v5, v6, v7, v8, v9);
  }
  loadingAssetName = this->fields.loadingAssetName;
  if ( loadingAssetName )
  {
    p_loadingAssetName = (GrandQuestFolderBoardItem_o *)&this->fields.loadingAssetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadingAssetName, 0);
    p_loadingAssetName->klass = 0;
    sub_1D0F058(p_loadingAssetName, 0, v12, v13, v14, v15, v16, v17);
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
    sub_1D0F30C(bodyTexture, isActive);
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
  bool v8; // w23
  int32_t currentLimitCountStage; // w24
  System_String_o *AssetName; // x0
  const MethodInfo *v11; // x1
  System_String_o *loadingAssetName; // x22
  System_String_o *v13; // x21
  System_String_o *loadedAssetName; // x22
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *v22; // x20
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  v8 = useGroupImage;
  if ( (byte_4E78F97 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&UINarrowFigureRender_TypeInfo);
    sub_1D0F0B4(&Method_UINarrowFigureTexture_EndLoadAsset__);
    byte_4E78F97 = 1;
  }
  currentLimitCountStage = this->fields.currentLimitCountStage;
  this->fields.currentSvtId = svtId;
  this->fields.currentLimitCountStage = limitCountStage;
  this->fields.isUseGroupImage = v8;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  AssetName = UINarrowFigureRender__GetAssetName(svtId, limitCountStage, *(const MethodInfo **)&limitCountStage);
  loadingAssetName = this->fields.loadingAssetName;
  v13 = AssetName;
  if ( loadingAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorage(loadingAssetName, v13, 0) )
      return;
LABEL_16:
    UINarrowFigureTexture__ClearTexture(this, v11);
    UINarrowFigureTexture__ReleaseAssetStorage(this, v15);
    this->fields.loadingAssetName = v13;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.loadingAssetName,
      (int32_t)v13,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = this->fields.loadingAssetName;
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v23, (Il2CppObject *)this, Method_UINarrowFigureTexture_EndLoadAsset__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v22, v23, 1, 1, 0);
    return;
  }
  loadedAssetName = this->fields.loadedAssetName;
  if ( !loadedAssetName )
    goto LABEL_16;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__compAssetStorage(loadedAssetName, v13, 0) )
    goto LABEL_16;
  if ( currentLimitCountStage != limitCountStage )
    UINarrowFigureTexture__SetTexture(this, v11);
}


void UINarrowFigureTexture__SetTexture(UINarrowFigureTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *v6; // x20
  const MethodInfo *v7; // x6
  UnityEngine_Object_o *maskShader; // x20
  struct UnityEngine_Shader_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *maskTexture; // x21
  UnityEngine_Texture_o **p_maskTexture; // x20
  Il2CppObject *object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct UITexture_o *v25; // x21
  UnityEngine_Shader_o *v26; // x23
  UnityEngine_Material_o *v27; // x22
  UnityEngine_Material_o *v28; // x21
  int32_t currentSvtId; // w21
  int32_t currentLimitCountStage; // w20
  _BOOL4 isUseGroupImage; // w22
  int32_t v32; // w1
  int32_t y; // w1
  UnityEngine_Vector2_o v34; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Rect_o uvRect; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Texture2D_o *texture2d; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E78F9A & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Material_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1D0F0B4(&UINarrowFigureRender_TypeInfo);
    sub_1D0F0B4(&UINarrowFigureTexture_TypeInfo);
    sub_1D0F0B4(&StringLiteral_4988/*"Custom/SpriteWithMask"*/);
    sub_1D0F0B4(&StringLiteral_4656/*"CommonUI/NarrowFigure/NarrowFigureMask"*/);
    byte_4E78F9A = 1;
  }
  *(_QWORD *)&uvRect.fields.m_Width = 0;
  texture2d = 0;
  v34 = 0;
  *(_QWORD *)&uvRect.fields.m_XMin = 0;
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._0_Equals.method)(
                                   gameObject,
                                   gameObject->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      maskShader = (UnityEngine_Object_o *)this->fields.maskShader;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(maskShader, 0, 0) )
      {
        v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4988/*"Custom/SpriteWithMask"*/, 0);
        this->fields.maskShader = v9;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.maskShader, (int32_t)v9, v10, v11, v12, v13, v14, v15);
      }
      maskTexture = (UnityEngine_Object_o *)this->fields.maskTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      p_maskTexture = (UnityEngine_Texture_o **)&this->fields.maskTexture;
      if ( UnityEngine_Object__op_Equality(maskTexture, 0, 0) )
      {
        object = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_4656/*"CommonUI/NarrowFigure/NarrowFigureMask"*/,
                   (const MethodInfo_32ED880 *)Method_UnityEngine_Resources_Load_Texture2D___);
        *p_maskTexture = (UnityEngine_Texture_o *)object;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.maskTexture,
          (int32_t)object,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      v25 = this->fields.bodyTexture;
      v26 = this->fields.maskShader;
      v27 = (UnityEngine_Material_o *)sub_1D0F300(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v27, v26, 0);
      if ( !v25 )
        goto LABEL_40;
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v25->klass->vtable._25_set_material.methodPtr)(
        v25,
        v27,
        v25->klass->vtable._25_set_material.method);
      gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !gameObject )
        goto LABEL_40;
      gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._0_Equals.method)(
                                                gameObject,
                                                gameObject->klass[1].vtable._1_Finalize.methodPtr);
      v28 = (UnityEngine_Material_o *)gameObject;
      if ( !UINarrowFigureTexture_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UINarrowFigureTexture_TypeInfo);
      if ( !v28 )
        goto LABEL_40;
      UnityEngine_Material__SetTexture_73223632(
        v28,
        UINarrowFigureTexture_TypeInfo->static_fields->MaskTexId,
        *p_maskTexture,
        0);
    }
    currentSvtId = this->fields.currentSvtId;
    currentLimitCountStage = this->fields.currentLimitCountStage;
    isUseGroupImage = this->fields.isUseGroupImage;
    if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    UINarrowFigureRender__GetData(currentSvtId, currentLimitCountStage, isUseGroupImage, &texture2d, &uvRect, &v34, v7);
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
          v32 = v34.fields.x == INFINITY ? 0x80000000 : (int)v34.fields.x;
          UIWidget__set_width((UIWidget_o *)gameObject, v32, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.bodyTexture;
          if ( gameObject )
          {
            if ( v34.fields.y == INFINITY )
              y = 0x80000000;
            else
              y = (int)v34.fields.y;
            UIWidget__set_height((UIWidget_o *)gameObject, y, 0);
            return;
          }
        }
      }
    }
LABEL_40:
    sub_1D0F30C(gameObject, v4);
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
    sub_1D0F30C(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0);
}