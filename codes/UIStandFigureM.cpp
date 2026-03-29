void UIStandFigureM___ctor(UIStandFigureM_o *this, const MethodInfo *method)
{
  if ( (byte_4D322DA & 1) == 0 )
  {
    sub_1C93AD4(&UIStandFigureRender_TypeInfo);
    byte_4D322DA = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  UIStandFigureRender___ctor((UIStandFigureRender_o *)this, 0);
}


void UIStandFigureM__Dispose(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D322CD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D322CD = 1;
  }
  UIStandFigureM__ReleaseCharacter(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
}


void UIStandFigureM__EndLoadAsset(UIStandFigureM_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  UIStandFigureM_o *v4; // x19
  System_String_o *loadName; // x1
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

  v4 = this;
  if ( (byte_4D322D2 & 1) == 0 )
  {
    this = (UIStandFigureM_o *)sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D322D2 = 1;
  }
  loadName = v4->fields.loadName;
  if ( loadName )
  {
    if ( !assetData || (this = (UIStandFigureM_o *)assetData->fields.name) == 0 )
      sub_1C93D2C(this, loadName);
    if ( System_String__Equals_64461044((System_String_o *)this, loadName, 0) )
    {
      v12 = v4->fields.assetData;
      v4->fields.loadName = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.loadName, 0, v6, v7, v8, v9, v10, v11);
      v4->fields.assetData = assetData;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v4->fields.assetData,
        (int32_t)assetData,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      UIStandFigureM__SetTexture(v4, v19);
      if ( v12 )
      {
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAsset_41247948(v12, 0);
      }
      callbackFunc = v4->fields.callbackFunc;
      if ( callbackFunc )
      {
        v4->fields.callbackFunc = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.callbackFunc, 0, v20, v21, v22, v23, v24, v25);
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          callbackFunc->fields.method);
      }
    }
  }
}


UnityEngine_Transform_o *UIStandFigureM__GetBody(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyFilter; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D322D9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D322D9 = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIStandFigureM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_1C93D2C(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIStandFigureM__GetBodySubTexture(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4D322D8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16461/*"_SubTex"*/);
    byte_4D322D8 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_1C93D2C(bodyRenderer, method);
  }
  return UnityEngine_Material__GetTexture(
           (UnityEngine_Material_o *)bodyRenderer,
           (System_String_o *)StringLiteral_16461/*"_SubTex"*/,
           0);
}


System_String_array *UIStandFigureM__GetRequiredResourceNames(
        UIStandFigureM_o *this,
        int32_t imageId,
        int32_t faceType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *FaceImageNameByFaceType; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_String_o *v30; // x1
  Il2CppClass **v31; // x0
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  v33 = imageId;
  if ( (byte_4D322D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&StringLiteral_16734/*"a"*/);
    byte_4D322D1 = 1;
  }
  FaceImageNameByFaceType = (System_Collections_Generic_List_object__o *)UIStandFigureRender__GetFaceImageNameByFaceType(
                                                                           (UIStandFigureRender_o *)this,
                                                                           imageId,
                                                                           faceType,
                                                                           0);
  v8 = System_Int32__ToString((int32_t)&v33, 0);
  if ( !FaceImageNameByFaceType )
    goto LABEL_14;
  v10 = (Il2CppObject *)v8;
  v8 = (System_String_o *)System_Collections_Generic_List_object___Contains(
                            FaceImageNameByFaceType,
                            (Il2CppObject *)v8,
                            (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    FaceImageNameByFaceType,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
  items = FaceImageNameByFaceType->fields._items;
  v18 = Method_System_Collections_Generic_List_string__Add__;
  ++FaceImageNameByFaceType->fields._version;
  if ( !items )
    goto LABEL_14;
  size = FaceImageNameByFaceType->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      FaceImageNameByFaceType,
      v10,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    FaceImageNameByFaceType->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  v8 = System_String__Concat_64425724((System_String_o *)v10, (System_String_o *)StringLiteral_16734/*"a"*/, 0);
  v27 = FaceImageNameByFaceType->fields._items;
  v28 = Method_System_Collections_Generic_List_string__Add__;
  ++FaceImageNameByFaceType->fields._version;
  if ( !v27 )
LABEL_14:
    sub_1C93D2C(v8, v9);
  v29 = FaceImageNameByFaceType->fields._size;
  v30 = v8;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      FaceImageNameByFaceType,
      (Il2CppObject *)v8,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v27->obj.klass + v29;
    FaceImageNameByFaceType->fields._size = v29 + 1;
    v31[4] = (Il2CppClass *)v30;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  FaceImageNameByFaceType,
                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t UIStandFigureM__GetTexturePosition(
        UIStandFigureM_o *this,
        int32_t faceType,
        UnityEngine_Vector2Int_o faceTextureSize,
        const MethodInfo *method)
{
  UIStandFigureRender_c *v6; // x0
  int v7; // w8
  int v8; // w8
  int v9; // w8

  if ( (byte_4D322D4 & 1) == 0 )
  {
    sub_1C93AD4(&UIStandFigureRender_TypeInfo);
    byte_4D322D4 = 1;
  }
  if ( faceTextureSize.fields.m_X < 1 || *(__int64 *)&faceTextureSize <= 0 )
  {
    v8 = faceType - 5;
    if ( faceType >= 5 )
    {
      if ( v8 < 0 )
        v8 = faceType + 10;
      v7 = v8 >> 4;
      goto LABEL_14;
    }
  }
  else
  {
    v6 = UIStandFigureRender_TypeInfo;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
      v6 = UIStandFigureRender_TypeInfo;
    }
    if ( faceType >= 1 )
    {
      v7 = (faceType - 1)
         / (v6->static_fields->NORMAL_MAIN_SIZE_X
          / faceTextureSize.fields.m_X
          * (v6->static_fields->NORMAL_MAIN_SIZE_Y
           / faceTextureSize.fields.m_Y));
LABEL_14:
      v9 = v7 + 1;
      return 2 * v9;
    }
  }
  v9 = 0;
  return 2 * v9;
}


bool UIStandFigureM__IsEnableCrossFade(
        UIStandFigureM_o *this,
        UIStandFigureM_o *inFigure,
        UIStandFigureM_o *outFigure,
        const MethodInfo *method)
{
  _BOOL4 isWide; // w9
  _BOOL4 isHigh; // w8

  if ( !inFigure || !outFigure )
    sub_1C93D2C(this, inFigure);
  isWide = outFigure->fields.isWide;
  isHigh = inFigure->fields.isHigh;
  if ( __PAIR64__(isHigh, inFigure->fields.isWide) != __PAIR64__(outFigure->fields.isHigh, isWide) )
  {
    if ( inFigure->fields.isWide )
    {
      if ( isHigh || isWide )
        return 0;
    }
    else if ( !outFigure->fields.isWide || inFigure->fields.isHigh )
    {
      return 0;
    }
    if ( outFigure->fields.isHigh )
      return 0;
  }
  return 1;
}


void UIStandFigureM__ReleaseCharacter(UIStandFigureM_o *this, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_String_o *loadName; // x20
  GrandQuestFolderBoardItem_o *p_loadName; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D322CE & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D322CE = 1;
  }
  UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)this, 0);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(assetData, 0);
    this->fields.assetData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetData, 0, v4, v5, v6, v7, v8, v9);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (GrandQuestFolderBoardItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_1C93A78(p_loadName, 0, v12, v13, v14, v15, v16, v17);
  }
}


void UIStandFigureM__SetCharacter(
        UIStandFigureM_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w2
  const MethodInfo *v13; // x7

  if ( (byte_4D322CF & 1) == 0 )
  {
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    byte_4D322CF = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  UIStandFigureM__SetCharacter_44727608(this, svtId, ImageLimitCount, faceType, 0, callbackFunc, 0, v13);
}


bool UIStandFigureM__SetCharacter_44727608(
        UIStandFigureM_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        int32_t formId,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x24
  int v12; // w25
  int32_t v13; // w26
  System_String_o *AssetNameByForm; // x0
  System_String_o *v16; // x22
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t Id; // w8
  System_String_o *loadName; // x0
  GrandQuestFolderBoardItem_o *p_loadName; // x23
  System_Delegate_o *v28; // x0
  UIStandFigureM_c *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  GrandQuestFolderBoardItem_c *v36; // x8
  System_Action_c *v37; // x1
  struct AssetData_o *assetData; // x8
  const MethodInfo *v39; // x1
  System_String_o *klass; // x24
  System_Delegate_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Action_c *v48; // x1
  const MethodInfo *v49; // x3
  System_String_o *v50; // x21
  System_String_array *RequiredResourceNames; // x20
  AssetLoader_LoadEndDataHandler_o *v52; // x22
  AssetLoader_LoadEndDataHandler_o *v54; // x20
  int32_t imageLimitCounta; // [xsp+8h] [xbp-48h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-44h] BYREF

  p_callbackFunc = (struct System_Action_o **)(unsigned int)faceType;
  v12 = imageLimitCount;
  v13 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4D322D0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_UIStandFigureM_EndLoadAsset__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D322D0 = 1;
  }
  if ( formId )
    AssetNameByForm = StandFigureManager__GetAssetNameByForm(v13, v12, formId, 0);
  else
    AssetNameByForm = StandFigureManager__GetAssetName_41462000(v13, v12, 0);
  v16 = AssetNameByForm;
  if ( v12 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_43;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
    v12 = imageLimitCounta;
    v13 = svtIda;
  }
  Id = ServantScriptMaster__getId(v13, v12, 0);
  loadName = this->fields.loadName;
  this->fields.formId = formId;
  p_loadName = (GrandQuestFolderBoardItem_o *)&this->fields.loadName;
  this->fields.imageId = Id;
  this->fields.faceType = (int)p_callbackFunc;
  if ( loadName )
  {
    if ( System_String__Equals_64461044(loadName, v16, 0) )
    {
      if ( callbackFunc )
      {
        v28 = (System_Delegate_o *)this->fields.callbackFunc;
        this = (UIStandFigureM_o *)((char *)this + 664);
        v29 = (UIStandFigureM_c *)System_Delegate__Combine(v28, (System_Delegate_o *)callbackFunc, 0);
        v36 = (GrandQuestFolderBoardItem_c *)v29;
        if ( v29 )
        {
          v37 = System_Action_TypeInfo;
          if ( v29->_1.image != System_Action_TypeInfo )
            goto LABEL_29;
          this->klass = v29;
          if ( v29->_1.image != v37 )
            goto LABEL_29;
        }
        else
        {
          this->klass = 0;
        }
        sub_1C93A78((GrandQuestFolderBoardItem_o *)this, (int32_t)v29, v30, v31, v32, v33, v34, v35);
      }
      return 1;
    }
    klass = (System_String_o *)p_loadName->klass;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(klass, 0);
    goto LABEL_25;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_25;
  Instance = (Il2CppObject *)assetData->fields.name;
  if ( !Instance )
LABEL_43:
    sub_1C93D2C(Instance, v18);
  if ( System_String__Equals_64461044((System_String_o *)Instance, v16, 0) )
  {
    UIStandFigureM__SetTextureStatus(this, v39);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
    return 1;
  }
LABEL_25:
  if ( !callbackFunc )
    goto LABEL_32;
  p_callbackFunc = &this->fields.callbackFunc;
  v41 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v36 = (GrandQuestFolderBoardItem_c *)v41;
  if ( !v41 )
    goto LABEL_30;
  v48 = System_Action_TypeInfo;
  if ( (System_Action_c *)v41->klass == System_Action_TypeInfo )
  {
    *p_callbackFunc = (struct System_Action_o *)v41;
    if ( (System_Action_c *)v41->klass == v48 )
      goto LABEL_31;
  }
LABEL_29:
  sub_1C940C8(v36);
LABEL_30:
  *p_callbackFunc = (struct System_Action_o *)v36;
LABEL_31:
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_callbackFunc, (int32_t)v36, v42, v43, v44, v45, v46, v47);
LABEL_32:
  this->fields.loadName = v16;
  sub_1C93A78(p_loadName, (int32_t)v16, v19, v20, v21, v22, v23, v24);
  v50 = this->fields.loadName;
  this->fields.loadRequiredResource = loadRequiredResource;
  if ( loadRequiredResource )
  {
    RequiredResourceNames = UIStandFigureM__GetRequiredResourceNames(
                              this,
                              this->fields.imageId,
                              this->fields.faceType,
                              v49);
    v52 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v52, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__loadResourcesFromAssetStorage(v50, RequiredResourceNames, v52, 1, 0);
  }
  else
  {
    v54 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v54, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__loadAssetStorage(v50, v54, 1, 0);
  }
}


bool UIStandFigureM__SetCharacter_44728504(
        UIStandFigureM_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return UIStandFigureM__SetCharacter_44727608(
           this,
           svtId,
           imageLimitCount,
           faceType,
           0,
           callbackFunc,
           loadRequiredResource,
           v7);
}


void UIStandFigureM__SetCrossFadeCharacter(
        UIStandFigureM_o *this,
        UIStandFigureM_o *inFigure,
        UIStandFigureM_o *outFigure,
        System_String_o *filterName,
        bool isFromScriptFigure,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x4

  if ( !isFromScriptFigure )
    goto LABEL_6;
  if ( !inFigure )
    goto LABEL_10;
  if ( !inFigure->fields.assetData )
    return;
  if ( !outFigure )
LABEL_10:
    sub_1C93D2C(this, inFigure);
  if ( outFigure->fields.assetData )
  {
LABEL_6:
    if ( UIStandFigureRender__get_IsUseSimpleMesh((UIStandFigureRender_o *)this, 0) )
      UIStandFigureM__SetCrossFadeCharacterSimpleMesh(this, inFigure, outFigure, filterName, v10);
    else
      UIStandFigureM__SetCrossFadeCharacterUseWithFaceMesh(this, inFigure, outFigure, filterName, v10);
  }
}


void UIStandFigureM__SetCrossFadeCharacterSimpleMesh(
        UIStandFigureM_o *this,
        UIStandFigureM_o *inFigure,
        UIStandFigureM_o *outFigure,
        System_String_o *filterName,
        const MethodInfo *method)
{
  UIStandFigureM_o *v8; // x19
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v10; // x8
  int v11; // w23
  int v12; // w24
  System_String_o **v13; // x8
  UnityEngine_Shader_o *v14; // x25
  UnityEngine_Material_o *v15; // x20
  struct UnityEngine_Texture2D_array *v16; // x26
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s14
  float m_Height; // s15
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s11
  UIStandFigureM_o *v25; // x0
  const MethodInfo *v26; // x3
  int v27; // w25
  System_String_o *v28; // x1
  UnityEngine_Material_o *v29; // x0
  struct UnityEngine_Texture2D_array *v33; // x27
  float v34; // s12
  float v35; // s13
  float v36; // s14
  float v37; // s15
  float v38; // s8
  float v39; // s9
  float v40; // s10
  float v41; // s11
  UIStandFigureM_o *v42; // x0
  const MethodInfo *v43; // x3
  int v44; // w25
  System_String_o *v45; // x1
  UnityEngine_Material_o *v46; // x0
  float x; // s8
  float v51; // s9
  int v52; // w25
  float y; // s10
  float v54; // s11
  int v55; // w0
  int v56; // w23
  UIStandFigureM_o *v57; // x8
  int v58; // w21
  int v59; // w21
  int v63; // w21
  UnityEngine_Mesh_o *v64; // x21
  __int64 v65; // x22
  int32_t LeftX; // w23
  int32_t RightX; // w23
  int32_t v68; // w23
  int32_t v69; // w23
  UIStandFigureM_o *v70; // x23
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v73; // s1
  float32x2_t *v74; // x10
  float v75; // s0
  float32x2_t *v76; // x10
  int32_t v77; // s0
  float32x2_t *v78; // x8
  float v79; // s0
  __int64 v80; // x24
  float BodyU; // s8
  float BodyV; // s0
  float v83; // s8
  float BodyW; // s9
  float v85; // s0
  float v86; // s8
  float v87; // s9
  float BodyH; // s0
  float v89; // s8
  float v90; // s9
  float v91; // s10
  float v92; // s0
  __int64 v93; // x25
  float v94; // s8
  float v95; // s0
  float v96; // s8
  float v97; // s9
  float v98; // s0
  float v99; // s8
  float v100; // s9
  float v101; // s0
  float v102; // s8
  float v103; // s9
  float v104; // s10
  float v105; // s0
  System_Array_o *v106; // x22
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4D322D6 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Mesh_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E);
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    sub_1C93AD4(&StringLiteral_4941/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_1C93AD4(&StringLiteral_16366/*"_MainTex2"*/);
    sub_1C93AD4(&StringLiteral_16311/*"_FaceTex2"*/);
    sub_1C93AD4(&StringLiteral_16303/*"_FaceInfo2"*/);
    sub_1C93AD4(&StringLiteral_16299/*"_FaceAlphaTex2"*/);
    sub_1C93AD4(&StringLiteral_4939/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_1C93AD4(&StringLiteral_16302/*"_FaceInfo"*/);
    sub_1C93AD4(&StringLiteral_16312/*"_FaceTexOffset"*/);
    sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    sub_1C93AD4(&StringLiteral_16365/*"_MainTex"*/);
    sub_1C93AD4(&StringLiteral_16504/*"_UvRangeX"*/);
    sub_1C93AD4(&StringLiteral_16313/*"_FaceTexOffset2"*/);
    sub_1C93AD4(&StringLiteral_24125/*"summon"*/);
    sub_1C93AD4(&StringLiteral_16462/*"_SubTex2"*/);
    sub_1C93AD4(&StringLiteral_16461/*"_SubTex"*/);
    sub_1C93AD4(&StringLiteral_4940/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_1C93AD4(&StringLiteral_16412/*"_PositionOffset"*/);
    sub_1C93AD4(&StringLiteral_16298/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_1C93AD4(&StringLiteral_16310/*"_FaceTex"*/);
    byte_4D322D6 = 1;
  }
  v8->fields.isCrossFade = 1;
  if ( !inFigure )
    goto LABEL_97;
  textureList = inFigure->fields.textureList;
  if ( !textureList )
    goto LABEL_97;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_96;
  this = (UIStandFigureM_o *)textureList->m_Items[0];
  if ( !this )
    goto LABEL_97;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *, UIStandFigureM_o *, System_String_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method,
                               outFigure,
                               filterName,
                               method);
  if ( !outFigure )
    goto LABEL_97;
  v10 = outFigure->fields.textureList;
  if ( !v10 )
    goto LABEL_97;
  if ( !LODWORD(v10->max_length) )
    goto LABEL_96;
  v11 = (int)this;
  this = (UIStandFigureM_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_97;
  v12 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
          this,
          this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( System_String__IsNullOrEmpty(filterName, 0)
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24125/*"summon"*/, 0) )
  {
    v13 = (System_String_o **)&StringLiteral_4939/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v11 != v12 )
      v13 = (System_String_o **)&StringLiteral_4940/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_4941/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v14 = UnityEngine_Shader__Find(*v13, 0);
  v15 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v15, v14, 0);
  v16 = inFigure->fields.textureList;
  if ( !v16 )
    goto LABEL_97;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_96;
  if ( !v15 )
    goto LABEL_97;
  m_XMin = inFigure->fields.faceTextureRect.fields.m_XMin;
  m_YMin = inFigure->fields.faceTextureRect.fields.m_YMin;
  m_Width = inFigure->fields.faceTextureRect.fields.m_Width;
  m_Height = inFigure->fields.faceTextureRect.fields.m_Height;
  v21 = inFigure->fields.faceRect.fields.m_XMin;
  v22 = inFigure->fields.faceRect.fields.m_YMin;
  v23 = inFigure->fields.faceRect.fields.m_Width;
  v24 = inFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16366/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16462/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v25,
                               inFigure->fields.faceType,
                               inFigure->fields.faceTextureSize,
                               v26);
  if ( (unsigned int)this >= LODWORD(v16->max_length) )
    goto LABEL_96;
  v27 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16311/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[(int)this],
    0);
  if ( (unsigned int)(v27 + 1) >= LODWORD(v16->max_length) )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16299/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[v27 + 1],
    0);
  UIWidget__set_color((UIWidget_o *)v8, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16273/*"_Color"*/, v8->fields.mColor, 0);
  if ( inFigure->fields.faceType )
  {
    v108.fields.x = m_XMin;
    v108.fields.y = m_YMin;
    v108.fields.z = m_Width;
    v108.fields.w = m_Height;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16303/*"_FaceInfo2"*/, v108, 0);
    v28 = (System_String_o *)StringLiteral_16313/*"_FaceTexOffset2"*/;
    v29 = v15;
    v109.fields.x = v21;
    v109.fields.y = v22;
    v109.fields.z = v23;
    v109.fields.w = v24;
  }
  else
  {
    v110.fields.x = 0.0;
    v110.fields.y = 0.0;
    v110.fields.z = 0.0;
    v110.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16303/*"_FaceInfo2"*/, v110, 0);
    v28 = (System_String_o *)StringLiteral_16313/*"_FaceTexOffset2"*/;
    v109.fields.x = 0.0;
    v109.fields.y = 0.0;
    v109.fields.z = 0.0;
    v109.fields.w = 0.0;
    v29 = v15;
  }
  UnityEngine_Material__SetVector(v29, v28, v109, 0);
  v33 = outFigure->fields.textureList;
  if ( !v33 )
    goto LABEL_97;
  if ( !LODWORD(v33->max_length) )
    goto LABEL_96;
  v34 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v35 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v36 = outFigure->fields.faceTextureRect.fields.m_Width;
  v37 = outFigure->fields.faceTextureRect.fields.m_Height;
  v38 = outFigure->fields.faceRect.fields.m_XMin;
  v39 = outFigure->fields.faceRect.fields.m_YMin;
  v40 = outFigure->fields.faceRect.fields.m_Width;
  v41 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16365/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[0],
    0);
  if ( LODWORD(v33->max_length) <= 1 )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16461/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[1],
    0);
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v42,
                               outFigure->fields.faceType,
                               outFigure->fields.faceTextureSize,
                               v43);
  if ( (unsigned int)this >= LODWORD(v33->max_length) )
    goto LABEL_96;
  v44 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16310/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[(int)this],
    0);
  if ( (unsigned int)(v44 + 1) >= LODWORD(v33->max_length) )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16298/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[v44 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v111.fields.x = v34;
    v111.fields.y = v35;
    v111.fields.z = v36;
    v111.fields.w = v37;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16302/*"_FaceInfo"*/, v111, 0);
    v45 = (System_String_o *)StringLiteral_16312/*"_FaceTexOffset"*/;
    v46 = v15;
    v112.fields.x = v38;
    v112.fields.y = v39;
    v112.fields.z = v40;
    v112.fields.w = v41;
  }
  else
  {
    v113.fields.x = 0.0;
    v113.fields.y = 0.0;
    v113.fields.z = 0.0;
    v113.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16302/*"_FaceInfo"*/, v113, 0);
    v45 = (System_String_o *)StringLiteral_16312/*"_FaceTexOffset"*/;
    v112.fields.x = 0.0;
    v112.fields.y = 0.0;
    v112.fields.z = 0.0;
    v112.fields.w = 0.0;
    v46 = v15;
  }
  UnityEngine_Material__SetVector(v46, v45, v112, 0);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_96;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_97;
  x = outFigure->fields.dispOffset.fields.x;
  v51 = inFigure->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_96;
  v52 = (int)this;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_97;
  y = outFigure->fields.dispOffset.fields.y;
  v54 = inFigure->fields.dispOffset.fields.y;
  v55 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v114.fields.x = (float)(x - v51) / (float)v52;
  v114.fields.y = (float)(y - v54) / (float)v55;
  v114.fields.z = 0.0;
  v114.fields.w = 0.0;
  UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16412/*"_PositionOffset"*/, v114, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  v107.fields.y = outFigure->fields.dispOffset.fields.y;
  v107.fields.x = outFigure->fields.dispOffset.fields.x;
  v107.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v107, 0);
  if ( v11 == v12 )
  {
    v8->fields.isWide = inFigure->fields.isWide;
    v8->fields.isHigh = inFigure->fields.isHigh;
  }
  else
  {
    if ( !LODWORD(v16->max_length) )
      goto LABEL_96;
    this = (UIStandFigureM_o *)v16->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v33->max_length) )
      goto LABEL_96;
    v56 = (int)this;
    this = (UIStandFigureM_o *)v33->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    v57 = v56 >= (int)this ? inFigure : outFigure;
    v8->fields.isWide = v57->fields.isWide;
    v8->fields.isHigh = v57->fields.isHigh;
    if ( !LODWORD(v16->max_length) )
      goto LABEL_96;
    this = (UIStandFigureM_o *)v16->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v33->max_length) )
      goto LABEL_96;
    v58 = (int)this;
    this = (UIStandFigureM_o *)v33->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v58 >= (int)this )
    {
      if ( !LODWORD(v33->max_length) )
        goto LABEL_96;
      this = (UIStandFigureM_o *)v33->m_Items[0];
      if ( !this )
        goto LABEL_97;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v16->max_length) )
        goto LABEL_96;
      v63 = (int)this;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_97;
      v115.fields.y = (float)v63
                    / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v115.fields.w = 1.0;
      v115.fields.x = v115.fields.y * 0.5;
      v115.fields.z = 0.0;
    }
    else
    {
      if ( !LODWORD(v16->max_length) )
        goto LABEL_96;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_97;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v33->max_length) )
        goto LABEL_96;
      v59 = (int)this;
      this = (UIStandFigureM_o *)v33->m_Items[0];
      if ( !this )
        goto LABEL_97;
      v115.fields.w = (float)v59
                    / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v115.fields.y = 1.0;
      v115.fields.z = v115.fields.w * 0.5;
      v115.fields.x = 0.0;
    }
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16504/*"_UvRangeX"*/, v115, 0);
  }
  v64 = (UnityEngine_Mesh_o *)sub_1C93D20(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v64, 0);
  v65 = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( !v65 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v65 + 24) )
    goto LABEL_96;
  *(float *)(v65 + 32) = (float)LeftX;
  *(float *)(v65 + 36) = (float)(int)this;
  *(_DWORD *)(v65 + 40) = 0;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v65 + 24) <= 1u )
    goto LABEL_96;
  *(float *)(v65 + 44) = (float)RightX;
  *(float *)(v65 + 48) = (float)(int)this;
  *(_DWORD *)(v65 + 52) = 0;
  v68 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v65 + 24) <= 2u
    || (*(float *)(v65 + 56) = (float)v68,
        *(float *)(v65 + 60) = (float)(int)this,
        *(_DWORD *)(v65 + 64) = 0,
        v69 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0),
        this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0),
        *(_DWORD *)(v65 + 24) <= 3u) )
  {
LABEL_96:
    sub_1C93D34(this);
  }
  *(float *)(v65 + 68) = (float)v69;
  *(float *)(v65 + 72) = (float)(int)this;
  *(_DWORD *)(v65 + 76) = 0;
  this = (UIStandFigureM_o *)sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
  v70 = this;
  if ( !byte_4D2A142 )
  {
    this = (UIStandFigureM_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A142 = 1;
  }
  if ( !v70 )
LABEL_97:
    sub_1C93D2C(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v70->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_96;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v73 = -static_fields[10].n64_f32[0];
  v70->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v70->fields.rightAnchor = v73;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_96;
  v74 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v75 = -v74[10].n64_f32[0];
  *(float32x2_t *)((char *)&v70->fields.rightAnchor + 4) = vneg_f32(v74[9]);
  *((float *)&v70->fields.bottomAnchor + 1) = v75;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_96;
  v76 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v77 = -v76[10].n64_f32[0];
  v70->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v76[9]).n64_u64[0];
  v70->fields.updateAnchors = v77;
  if ( m_CancellationTokenSource == 3 )
    goto LABEL_96;
  v78 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v79 = -v78[10].n64_f32[0];
  *(float32x2_t *)(&v70->fields.updateAnchors + 1) = vneg_f32(v78[9]);
  *((float *)&v70->fields.mGo + 1) = v79;
  v80 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v80 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v80 + 24) )
    goto LABEL_96;
  *(float *)(v80 + 32) = BodyU;
  *(float *)(v80 + 36) = BodyV;
  v83 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v85 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v80 + 24) <= 1u )
    goto LABEL_96;
  *(float *)(v80 + 40) = v83 + BodyW;
  *(float *)(v80 + 44) = v85;
  v86 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v87 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v80 + 24) <= 2u )
    goto LABEL_96;
  *(float *)(v80 + 48) = v86;
  *(float *)(v80 + 52) = v87 - BodyH;
  v89 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v90 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v91 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v92 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v80 + 24) <= 3u )
    goto LABEL_96;
  *(float *)(v80 + 56) = v89 + v90;
  *(float *)(v80 + 60) = v91 - v92;
  v93 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
  v94 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v95 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v93 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v93 + 24) )
    goto LABEL_96;
  *(float *)(v93 + 32) = v94;
  *(float *)(v93 + 36) = v95;
  v96 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v97 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v98 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v93 + 24) <= 1u )
    goto LABEL_96;
  *(float *)(v93 + 40) = v96 + v97;
  *(float *)(v93 + 44) = v98;
  v99 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v100 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v101 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v93 + 24) <= 2u )
    goto LABEL_96;
  *(float *)(v93 + 48) = v99;
  *(float *)(v93 + 52) = v100 - v101;
  v102 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v103 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v104 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v105 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v93 + 24) <= 3u )
    goto LABEL_96;
  *(float *)(v93 + 56) = v102 + v103;
  *(float *)(v93 + 60) = v104 - v105;
  if ( !v64 )
    goto LABEL_97;
  UnityEngine_Mesh__set_vertices(v64, (UnityEngine_Vector3_array *)v65, 0);
  UnityEngine_Mesh__set_normals(v64, (UnityEngine_Vector3_array *)v70, 0);
  UnityEngine_Mesh__set_uv(v64, (UnityEngine_Vector2_array *)v80, 0);
  UnityEngine_Mesh__set_uv2(v64, (UnityEngine_Vector2_array *)v93, 0);
  v106 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v106,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E,
    0);
  UnityEngine_Mesh__set_triangles(v64, (System_Int32_array *)v106, 0);
  UnityEngine_Mesh__RecalculateNormals(v64, 0);
  UnityEngine_Mesh__RecalculateBounds(v64, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v64, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyRenderer;
  if ( !this )
    goto LABEL_97;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v15, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyRenderer;
  if ( !this )
    goto LABEL_97;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void UIStandFigureM__SetCrossFadeCharacterUseWithFaceMesh(
        UIStandFigureM_o *this,
        UIStandFigureM_o *inFigure,
        UIStandFigureM_o *outFigure,
        System_String_o *filterName,
        const MethodInfo *method)
{
  UIStandFigureM_o *v7; // x20
  UIStandFigureM_o *v8; // x19
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v10; // x8
  int v11; // w23
  int v12; // w24
  System_String_o **v13; // x8
  UnityEngine_Shader_o *v14; // x25
  UnityEngine_Material_o *v15; // x21
  struct UnityEngine_Texture2D_array *v16; // x26
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s14
  float m_Height; // s15
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s11
  UIStandFigureM_o *v25; // x0
  const MethodInfo *v26; // x3
  int v27; // w25
  System_String_o *v28; // x1
  UnityEngine_Material_o *v29; // x0
  struct UnityEngine_Texture2D_array *v33; // x27
  float v34; // s12
  float v35; // s13
  float v36; // s14
  float v37; // s15
  float v38; // s8
  float v39; // s9
  float v40; // s10
  float v41; // s11
  UIStandFigureM_o *v42; // x0
  const MethodInfo *v43; // x3
  int v44; // w25
  System_String_o *v45; // x1
  UnityEngine_Material_o *v46; // x0
  float x; // s8
  float v51; // s9
  int v52; // w25
  float y; // s10
  float v54; // s11
  int v55; // w0
  int v56; // w25
  int v57; // w22
  int v58; // w22
  int v62; // w22
  UnityEngine_Mesh_o *v63; // x22
  __int64 v64; // x23
  int32_t LeftX; // w24
  int32_t RightX; // w24
  int32_t v67; // w24
  int32_t v68; // w24
  unsigned int v69; // w8
  float v70; // s0
  float v71; // s1
  float v72; // s2
  float32x2_t v73; // d0
  float32x2_t v74; // d1
  __int64 v75; // d0
  float v76; // s0
  float v77; // s1
  float v78; // s2
  float v79; // s0
  float v80; // s1
  float v81; // s2
  float32x2_t v82; // d0
  float32x2_t v83; // d1
  __int64 v84; // d0
  float v85; // s0
  float v86; // s1
  float v87; // s2
  UIStandFigureM_o *v88; // x24
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v91; // s1
  float32x2_t *v92; // x10
  float v93; // s0
  float32x2_t *v94; // x10
  int32_t v95; // s0
  float32x2_t *v96; // x10
  float v97; // s0
  float32x2_t *v98; // x10
  float v99; // s0
  float32x2_t *v100; // x10
  int32_t v101; // s0
  float32x2_t *v102; // x10
  float v103; // s0
  float32x2_t *v104; // x10
  float v105; // s0
  float32x2_t *v106; // x10
  float v107; // s0
  float32x2_t *v108; // x10
  float v109; // s0
  float32x2_t *v110; // x10
  float v111; // s0
  float32x2_t *v112; // x8
  int32_t v113; // s0
  __int64 v114; // x25
  float BodyU; // s8
  float BodyV; // s0
  float v117; // s8
  float BodyW; // s9
  float v119; // s0
  float v120; // s8
  float v121; // s9
  float BodyH; // s0
  float v123; // s8
  float v124; // s9
  float v125; // s10
  float v126; // s0
  unsigned int v127; // w8
  float v128; // s0
  float v129; // s2
  __int64 v130; // x26
  float v131; // s8
  float v132; // s0
  float v133; // s8
  float v134; // s9
  float v135; // s0
  float v136; // s8
  float v137; // s9
  float v138; // s0
  float v139; // s8
  float v140; // s9
  float v141; // s10
  float v142; // s0
  unsigned int v143; // w8
  float v144; // s0
  float v145; // s2
  float v146; // s0
  float v147; // s2
  System_Array_o *v148; // x20
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = inFigure;
  v8 = this;
  if ( (byte_4D322D5 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Mesh_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131);
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    sub_1C93AD4(&StringLiteral_4941/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_1C93AD4(&StringLiteral_16366/*"_MainTex2"*/);
    sub_1C93AD4(&StringLiteral_16311/*"_FaceTex2"*/);
    sub_1C93AD4(&StringLiteral_16303/*"_FaceInfo2"*/);
    sub_1C93AD4(&StringLiteral_16299/*"_FaceAlphaTex2"*/);
    sub_1C93AD4(&StringLiteral_4939/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_1C93AD4(&StringLiteral_16302/*"_FaceInfo"*/);
    sub_1C93AD4(&StringLiteral_16312/*"_FaceTexOffset"*/);
    sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    sub_1C93AD4(&StringLiteral_16365/*"_MainTex"*/);
    sub_1C93AD4(&StringLiteral_16504/*"_UvRangeX"*/);
    sub_1C93AD4(&StringLiteral_16313/*"_FaceTexOffset2"*/);
    sub_1C93AD4(&StringLiteral_24125/*"summon"*/);
    sub_1C93AD4(&StringLiteral_16462/*"_SubTex2"*/);
    sub_1C93AD4(&StringLiteral_16461/*"_SubTex"*/);
    sub_1C93AD4(&StringLiteral_4940/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_1C93AD4(&StringLiteral_16412/*"_PositionOffset"*/);
    sub_1C93AD4(&StringLiteral_16298/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_1C93AD4(&StringLiteral_16310/*"_FaceTex"*/);
    byte_4D322D5 = 1;
  }
  v8->fields.isCrossFade = 1;
  if ( !v7 )
    goto LABEL_128;
  textureList = v7->fields.textureList;
  if ( !textureList )
    goto LABEL_128;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_127;
  this = (UIStandFigureM_o *)textureList->m_Items[0];
  if ( !this )
    goto LABEL_128;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *, UIStandFigureM_o *, System_String_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method,
                               outFigure,
                               filterName,
                               method);
  if ( !outFigure )
    goto LABEL_128;
  v10 = outFigure->fields.textureList;
  if ( !v10 )
    goto LABEL_128;
  if ( !LODWORD(v10->max_length) )
    goto LABEL_127;
  v11 = (int)this;
  this = (UIStandFigureM_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_128;
  v12 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
          this,
          this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( System_String__IsNullOrEmpty(filterName, 0)
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24125/*"summon"*/, 0) )
  {
    v13 = (System_String_o **)&StringLiteral_4939/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v11 != v12 )
      v13 = (System_String_o **)&StringLiteral_4940/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_4941/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v14 = UnityEngine_Shader__Find(*v13, 0);
  v15 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v15, v14, 0);
  v16 = v7->fields.textureList;
  if ( !v16 )
    goto LABEL_128;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  if ( !v15 )
    goto LABEL_128;
  m_XMin = v7->fields.faceTextureRect.fields.m_XMin;
  m_YMin = v7->fields.faceTextureRect.fields.m_YMin;
  m_Width = v7->fields.faceTextureRect.fields.m_Width;
  m_Height = v7->fields.faceTextureRect.fields.m_Height;
  v21 = v7->fields.faceRect.fields.m_XMin;
  v22 = v7->fields.faceRect.fields.m_YMin;
  v23 = v7->fields.faceRect.fields.m_Width;
  v24 = v7->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16366/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16462/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v25,
                               v7->fields.faceType,
                               v7->fields.faceTextureSize,
                               v26);
  if ( (unsigned int)this >= LODWORD(v16->max_length) )
    goto LABEL_127;
  v27 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16311/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[(int)this],
    0);
  if ( (unsigned int)(v27 + 1) >= LODWORD(v16->max_length) )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16299/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[v27 + 1],
    0);
  UIWidget__set_color((UIWidget_o *)v8, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16273/*"_Color"*/, v8->fields.mColor, 0);
  if ( v7->fields.faceType )
  {
    v150.fields.x = m_XMin;
    v150.fields.y = m_YMin;
    v150.fields.z = m_Width;
    v150.fields.w = m_Height;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16303/*"_FaceInfo2"*/, v150, 0);
    v28 = (System_String_o *)StringLiteral_16313/*"_FaceTexOffset2"*/;
    v29 = v15;
    v151.fields.x = v21;
    v151.fields.y = v22;
    v151.fields.z = v23;
    v151.fields.w = v24;
  }
  else
  {
    v152.fields.x = 0.0;
    v152.fields.y = 0.0;
    v152.fields.z = 0.0;
    v152.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16303/*"_FaceInfo2"*/, v152, 0);
    v28 = (System_String_o *)StringLiteral_16313/*"_FaceTexOffset2"*/;
    v151.fields.x = 0.0;
    v151.fields.y = 0.0;
    v151.fields.z = 0.0;
    v151.fields.w = 0.0;
    v29 = v15;
  }
  UnityEngine_Material__SetVector(v29, v28, v151, 0);
  v33 = outFigure->fields.textureList;
  if ( !v33 )
    goto LABEL_128;
  if ( !LODWORD(v33->max_length) )
    goto LABEL_127;
  v34 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v35 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v36 = outFigure->fields.faceTextureRect.fields.m_Width;
  v37 = outFigure->fields.faceTextureRect.fields.m_Height;
  v38 = outFigure->fields.faceRect.fields.m_XMin;
  v39 = outFigure->fields.faceRect.fields.m_YMin;
  v40 = outFigure->fields.faceRect.fields.m_Width;
  v41 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16365/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[0],
    0);
  if ( LODWORD(v33->max_length) <= 1 )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16461/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[1],
    0);
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v42,
                               outFigure->fields.faceType,
                               outFigure->fields.faceTextureSize,
                               v43);
  if ( (unsigned int)this >= LODWORD(v33->max_length) )
    goto LABEL_127;
  v44 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16310/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[(int)this],
    0);
  if ( (unsigned int)(v44 + 1) >= LODWORD(v33->max_length) )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16298/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v33->m_Items[v44 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v153.fields.x = v34;
    v153.fields.y = v35;
    v153.fields.z = v36;
    v153.fields.w = v37;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16302/*"_FaceInfo"*/, v153, 0);
    v45 = (System_String_o *)StringLiteral_16312/*"_FaceTexOffset"*/;
    v46 = v15;
    v154.fields.x = v38;
    v154.fields.y = v39;
    v154.fields.z = v40;
    v154.fields.w = v41;
  }
  else
  {
    v155.fields.x = 0.0;
    v155.fields.y = 0.0;
    v155.fields.z = 0.0;
    v155.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16302/*"_FaceInfo"*/, v155, 0);
    v45 = (System_String_o *)StringLiteral_16312/*"_FaceTexOffset"*/;
    v154.fields.x = 0.0;
    v154.fields.y = 0.0;
    v154.fields.z = 0.0;
    v154.fields.w = 0.0;
    v46 = v15;
  }
  UnityEngine_Material__SetVector(v46, v45, v154, 0);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_128;
  x = outFigure->fields.dispOffset.fields.x;
  v51 = v7->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  v52 = (int)this;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_128;
  y = outFigure->fields.dispOffset.fields.y;
  v54 = v7->fields.dispOffset.fields.y;
  v55 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v156.fields.x = (float)(x - v51) / (float)v52;
  v156.fields.y = (float)(y - v54) / (float)v55;
  v156.fields.z = 0.0;
  v156.fields.w = 0.0;
  UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16412/*"_PositionOffset"*/, v156, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_128;
  v149.fields.y = outFigure->fields.dispOffset.fields.y;
  v149.fields.x = outFigure->fields.dispOffset.fields.x;
  v149.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v149, 0);
  if ( v11 != v12 )
  {
    if ( !LODWORD(v16->max_length) )
      goto LABEL_127;
    this = (UIStandFigureM_o *)v16->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v33->max_length) )
      goto LABEL_127;
    v56 = (int)this;
    this = (UIStandFigureM_o *)v33->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v56 < (int)this )
      v7 = outFigure;
  }
  v8->fields.isWide = v7->fields.isWide;
  v8->fields.isHigh = v7->fields.isHigh;
  if ( v11 != v12 )
  {
    if ( !LODWORD(v16->max_length) )
      goto LABEL_127;
    this = (UIStandFigureM_o *)v16->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v33->max_length) )
      goto LABEL_127;
    v57 = (int)this;
    this = (UIStandFigureM_o *)v33->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v57 >= (int)this )
    {
      if ( !LODWORD(v33->max_length) )
        goto LABEL_127;
      this = (UIStandFigureM_o *)v33->m_Items[0];
      if ( !this )
        goto LABEL_128;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v16->max_length) )
        goto LABEL_127;
      v62 = (int)this;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_128;
      v157.fields.y = (float)v62
                    / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v157.fields.w = 1.0;
      v157.fields.x = v157.fields.y * 0.5;
      v157.fields.z = 0.0;
    }
    else
    {
      if ( !LODWORD(v16->max_length) )
        goto LABEL_127;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_128;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v33->max_length) )
        goto LABEL_127;
      v58 = (int)this;
      this = (UIStandFigureM_o *)v33->m_Items[0];
      if ( !this )
        goto LABEL_128;
      v157.fields.w = (float)v58
                    / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v157.fields.y = 1.0;
      v157.fields.z = v157.fields.w * 0.5;
      v157.fields.x = 0.0;
    }
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16504/*"_UvRangeX"*/, v157, 0);
  }
  v63 = (UnityEngine_Mesh_o *)sub_1C93D20(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v63, 0);
  v64 = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 12);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( !v64 )
    goto LABEL_128;
  if ( !*(_DWORD *)(v64 + 24) )
    goto LABEL_127;
  *(float *)(v64 + 32) = (float)LeftX;
  *(float *)(v64 + 36) = (float)(int)this;
  *(_DWORD *)(v64 + 40) = 0;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v64 + 24) <= 1u )
    goto LABEL_127;
  *(float *)(v64 + 44) = (float)RightX;
  *(float *)(v64 + 48) = (float)(int)this;
  *(_DWORD *)(v64 + 52) = 0;
  v67 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v64 + 24) <= 2u )
    goto LABEL_127;
  *(float *)(v64 + 56) = (float)v67;
  *(float *)(v64 + 60) = (float)(int)this;
  *(_DWORD *)(v64 + 64) = 0;
  v68 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  v69 = *(_DWORD *)(v64 + 24);
  if ( v69 <= 3 )
    goto LABEL_127;
  *(float *)(v64 + 68) = (float)v68;
  *(float *)(v64 + 72) = (float)(int)this;
  *(_DWORD *)(v64 + 76) = 0;
  if ( v69 == 4 )
    goto LABEL_127;
  v70 = v7->fields.facePositionRect.fields.m_Height;
  v71 = v7->fields.facePositionRect.fields.m_YMin;
  v72 = v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v64 + 88) = 0;
  *(float *)(v64 + 80) = v72;
  *(float *)(v64 + 84) = v70 + v71;
  if ( v69 <= 5 )
    goto LABEL_127;
  v73.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_Width;
  v74.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v64 + 100) = 0;
  *(float32x2_t *)(v64 + 92) = vadd_f32(v73, v74);
  if ( v69 == 6 )
    goto LABEL_127;
  v75 = *(_QWORD *)&v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v64 + 112) = 0;
  *(_QWORD *)(v64 + 104) = v75;
  if ( v69 <= 7 )
    goto LABEL_127;
  v76 = v7->fields.facePositionRect.fields.m_Width;
  v77 = v7->fields.facePositionRect.fields.m_XMin;
  v78 = v7->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v64 + 124) = 0;
  *(float *)(v64 + 116) = v76 + v77;
  *(float *)(v64 + 120) = v78;
  if ( v69 == 8 )
    goto LABEL_127;
  v79 = v7->fields.facePositionRect.fields.m_Height;
  v80 = v7->fields.facePositionRect.fields.m_YMin;
  v81 = v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v64 + 136) = 0;
  *(float *)(v64 + 128) = v81;
  *(float *)(v64 + 132) = v79 + v80;
  if ( v69 <= 9
    || (v82.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_Width,
        v83.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v64 + 148) = 0,
        *(float32x2_t *)(v64 + 140) = vadd_f32(v82, v83),
        v69 == 10)
    || (v84 = *(_QWORD *)&v7->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v64 + 160) = 0,
        *(_QWORD *)(v64 + 152) = v84,
        v69 <= 0xB) )
  {
LABEL_127:
    sub_1C93D34(this);
  }
  v85 = v7->fields.facePositionRect.fields.m_Width;
  v86 = v7->fields.facePositionRect.fields.m_XMin;
  v87 = v7->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v64 + 172) = 0;
  *(float *)(v64 + 164) = v85 + v86;
  *(float *)(v64 + 168) = v87;
  this = (UIStandFigureM_o *)sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 12);
  v88 = this;
  if ( !byte_4D2A142 )
  {
    this = (UIStandFigureM_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A142 = 1;
  }
  if ( !v88 )
LABEL_128:
    sub_1C93D2C(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v88->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_127;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v91 = -static_fields[10].n64_f32[0];
  v88->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v88->fields.rightAnchor = v91;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_127;
  v92 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v93 = -v92[10].n64_f32[0];
  *(float32x2_t *)((char *)&v88->fields.rightAnchor + 4) = vneg_f32(v92[9]);
  *((float *)&v88->fields.bottomAnchor + 1) = v93;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_127;
  v94 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v95 = -v94[10].n64_f32[0];
  v88->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v94[9]).n64_u64[0];
  v88->fields.updateAnchors = v95;
  if ( m_CancellationTokenSource == 3 )
    goto LABEL_127;
  v96 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v97 = -v96[10].n64_f32[0];
  *(float32x2_t *)(&v88->fields.updateAnchors + 1) = vneg_f32(v96[9]);
  *((float *)&v88->fields.mGo + 1) = v97;
  if ( m_CancellationTokenSource <= 4 )
    goto LABEL_127;
  v98 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v99 = -v98[10].n64_f32[0];
  v88->fields.mTrans = (struct UnityEngine_Transform_o *)vneg_f32(v98[9]).n64_u64[0];
  *(float *)&v88->fields.mChildren = v99;
  if ( m_CancellationTokenSource == 5 )
    goto LABEL_127;
  v100 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v101 = -v100[10].n64_f32[0];
  *(float32x2_t *)((char *)&v88->fields.mChildren + 4) = vneg_f32(v100[9]);
  v88->fields.mUpdateFrame = v101;
  if ( m_CancellationTokenSource <= 6 )
    goto LABEL_127;
  v102 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v103 = -v102[10].n64_f32[0];
  *(float32x2_t *)&v88->fields.mAnchorsCached = vneg_f32(v102[9]);
  *(float *)&v88->fields.mRoot = v103;
  if ( m_CancellationTokenSource == 7 )
    goto LABEL_127;
  v104 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v105 = -v104[10].n64_f32[0];
  *(float32x2_t *)((char *)&v88->fields.mRoot + 4) = vneg_f32(v104[9]);
  *((float *)&v88->fields.mParent + 1) = v105;
  if ( m_CancellationTokenSource <= 8 )
    goto LABEL_127;
  v106 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v107 = -v106[10].n64_f32[0];
  *(float32x2_t *)&v88->fields.mRootSet = vneg_f32(v106[9]);
  *(float *)&v88->fields.mCam = v107;
  if ( m_CancellationTokenSource == 9 )
    goto LABEL_127;
  v108 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v109 = -v108[10].n64_f32[0];
  *(float32x2_t *)((char *)&v88->fields.mCam + 4) = vneg_f32(v108[9]);
  v88->fields.mColor.fields.r = v109;
  if ( m_CancellationTokenSource <= 0xA )
    goto LABEL_127;
  v110 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v111 = -v110[10].n64_f32[0];
  *(float32x2_t *)&v88->fields.mColor.fields.g = vneg_f32(v110[9]);
  v88->fields.mColor.fields.a = v111;
  if ( m_CancellationTokenSource == 11 )
    goto LABEL_127;
  v112 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v113 = -v112[10].n64_f32[0];
  *(float32x2_t *)&v88->fields.mPivot = vneg_f32(v112[9]);
  v88->fields.mHeight = v113;
  v114 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 12);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v114 )
    goto LABEL_128;
  if ( !*(_DWORD *)(v114 + 24) )
    goto LABEL_127;
  *(float *)(v114 + 32) = BodyU;
  *(float *)(v114 + 36) = BodyV;
  v117 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v119 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v114 + 24) <= 1u )
    goto LABEL_127;
  *(float *)(v114 + 40) = v117 + BodyW;
  *(float *)(v114 + 44) = v119;
  v120 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v121 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v114 + 24) <= 2u )
    goto LABEL_127;
  *(float *)(v114 + 48) = v120;
  *(float *)(v114 + 52) = v121 - BodyH;
  v123 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v124 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v125 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v126 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  v127 = *(_DWORD *)(v114 + 24);
  if ( v127 <= 3 )
    goto LABEL_127;
  *(float *)(v114 + 56) = v123 + v124;
  *(float *)(v114 + 60) = v125 - v126;
  if ( v127 == 4 )
    goto LABEL_127;
  v128 = v7->fields.faceTextureRect.fields.m_Height + v7->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v114 + 64) = v7->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v114 + 68) = v128;
  if ( v127 <= 5 )
    goto LABEL_127;
  *(float32x2_t *)(v114 + 72) = vadd_f32(
                                  *(float32x2_t *)&v7->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&v7->fields.faceTextureRect.fields.m_XMin);
  if ( v127 == 6 )
    goto LABEL_127;
  *(_QWORD *)(v114 + 80) = *(_QWORD *)&v7->fields.faceTextureRect.fields.m_XMin;
  if ( v127 <= 7 )
    goto LABEL_127;
  v129 = v7->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v114 + 88) = v7->fields.faceTextureRect.fields.m_Width + v7->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v114 + 92) = v129;
  if ( v127 == 8 )
    goto LABEL_127;
  *(_QWORD *)(v114 + 96) = 0;
  if ( v127 <= 9 )
    goto LABEL_127;
  *(_QWORD *)(v114 + 104) = 0;
  if ( v127 == 10 )
    goto LABEL_127;
  *(_QWORD *)(v114 + 112) = 0;
  if ( v127 <= 0xB )
    goto LABEL_127;
  *(_QWORD *)(v114 + 120) = 0;
  v130 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 12);
  v131 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v132 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v130 )
    goto LABEL_128;
  if ( !*(_DWORD *)(v130 + 24) )
    goto LABEL_127;
  *(float *)(v130 + 32) = v131;
  *(float *)(v130 + 36) = v132;
  v133 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v134 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v135 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v130 + 24) <= 1u )
    goto LABEL_127;
  *(float *)(v130 + 40) = v133 + v134;
  *(float *)(v130 + 44) = v135;
  v136 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v137 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v138 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v130 + 24) <= 2u )
    goto LABEL_127;
  *(float *)(v130 + 48) = v136;
  *(float *)(v130 + 52) = v137 - v138;
  v139 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v140 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v141 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v142 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  v143 = *(_DWORD *)(v130 + 24);
  if ( v143 <= 3 )
    goto LABEL_127;
  *(float *)(v130 + 56) = v139 + v140;
  *(float *)(v130 + 60) = v141 - v142;
  if ( v143 == 4 )
    goto LABEL_127;
  v144 = v7->fields.faceTextureRect.fields.m_Height + v7->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v130 + 64) = v7->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v130 + 68) = v144;
  if ( v143 <= 5 )
    goto LABEL_127;
  *(float32x2_t *)(v130 + 72) = vadd_f32(
                                  *(float32x2_t *)&v7->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&v7->fields.faceTextureRect.fields.m_XMin);
  if ( v143 == 6 )
    goto LABEL_127;
  *(_QWORD *)(v130 + 80) = *(_QWORD *)&v7->fields.faceTextureRect.fields.m_XMin;
  if ( v143 <= 7 )
    goto LABEL_127;
  v145 = v7->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v130 + 88) = v7->fields.faceTextureRect.fields.m_Width + v7->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v130 + 92) = v145;
  if ( v143 == 8 )
    goto LABEL_127;
  v146 = v7->fields.faceTextureRect.fields.m_Height + v7->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v130 + 96) = v7->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v130 + 100) = v146;
  if ( v143 <= 9 )
    goto LABEL_127;
  *(float32x2_t *)(v130 + 104) = vadd_f32(
                                   *(float32x2_t *)&v7->fields.faceTextureRect.fields.m_Width,
                                   *(float32x2_t *)&v7->fields.faceTextureRect.fields.m_XMin);
  if ( v143 == 10 )
    goto LABEL_127;
  *(_QWORD *)(v130 + 112) = *(_QWORD *)&v7->fields.faceTextureRect.fields.m_XMin;
  if ( v143 <= 0xB )
    goto LABEL_127;
  v147 = v7->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v130 + 120) = v7->fields.faceTextureRect.fields.m_Width + v7->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v130 + 124) = v147;
  if ( !v63 )
    goto LABEL_128;
  UnityEngine_Mesh__set_vertices(v63, (UnityEngine_Vector3_array *)v64, 0);
  UnityEngine_Mesh__set_normals(v63, (UnityEngine_Vector3_array *)v88, 0);
  UnityEngine_Mesh__set_uv(v63, (UnityEngine_Vector2_array *)v114, 0);
  UnityEngine_Mesh__set_uv2(v63, (UnityEngine_Vector2_array *)v130, 0);
  v148 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 30);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v148,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131,
    0);
  UnityEngine_Mesh__set_triangles(v63, (System_Int32_array *)v148, 0);
  UnityEngine_Mesh__RecalculateNormals(v63, 0);
  UnityEngine_Mesh__RecalculateBounds(v63, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v63, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_128;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_128;
  UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyRenderer;
  if ( !this )
    goto LABEL_128;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v15, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyRenderer;
  if ( !this )
    goto LABEL_128;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void UIStandFigureM__SetDispOffset(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0
    || (v4.fields.y = this->fields.dispOffset.fields.y,
        v4.fields.x = this->fields.dispOffset.fields.x,
        v4.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.faceFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_1C93D2C(bodyFilter, method);
  }
  v5.fields.y = this->fields.dispOffset.fields.y;
  v5.fields.x = this->fields.dispOffset.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


void UIStandFigureM__SetOffsetDirect(UIStandFigureM_o *this, UnityEngine_Vector3_o offset, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter )
    goto LABEL_6;
  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0);
  if ( !bodyFilter
    || (v8.fields.x = x,
        v8.fields.y = y,
        v8.fields.z = z,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v8, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.faceFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
LABEL_6:
    sub_1C93D2C(bodyFilter, method);
  }
  v9.fields.y = y;
  v9.fields.z = z;
  v9.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v9, 0);
}


void UIStandFigureM__SetSclDirect(UIStandFigureM_o *this, UnityEngine_Vector3_o scl, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C93D2C(0, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localScale(transform, v8, 0);
}


void UIStandFigureM__SetTexture(UIStandFigureM_o *this, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  _BOOL4 loadRequiredResource; // w21
  struct UnityEngine_Texture2D_array *TextureList; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4D322D3 & 1) == 0 )
  {
    sub_1C93AD4(&UIStandFigureRender_TypeInfo);
    byte_4D322D3 = 1;
  }
  assetData = this->fields.assetData;
  loadRequiredResource = this->fields.loadRequiredResource;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  TextureList = UIStandFigureRender__GetTextureList(assetData, loadRequiredResource, 0);
  this->fields.textureList = TextureList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.textureList, (int32_t)TextureList, v6, v7, v8, v9, v10, v11);
  this->fields.faceTextureSelect = 0;
  UIStandFigureM__SetTextureStatus(this, v12);
}


void UIStandFigureM__SetTextureStatus(UIStandFigureM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  UIStandFigureRender__SetCharacterRender((UIStandFigureRender_o *)this, 0);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0
    || (v5.fields.y = this->fields.dispTop.fields.y,
        v5.fields.x = this->fields.dispTop.fields.x,
        v5.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.faceFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_1C93D2C(bodyFilter, v3);
  }
  v6.fields.y = this->fields.dispTop.fields.y;
  v6.fields.x = this->fields.dispTop.fields.x;
  v6.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v6, 0);
}


void UIStandFigureM__SetTweenColor(UIStandFigureM_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4D322D7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16317/*"_FadeFactor"*/);
    byte_4D322D7 = 1;
  }
  if ( this->fields.isCrossFade )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
      sub_1C93D2C(bodyRenderer, method);
    }
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16317/*"_FadeFactor"*/, a, 0);
  }
  else
  {
    v9.fields.b = b;
    v9.fields.a = a;
    v9.fields.r = r;
    v9.fields.g = g;
    UIStandFigureRender__SetTweenColor((UIStandFigureRender_o *)this, v9, 0);
  }
}


bool UIStandFigureM__get_IsLoad(UIStandFigureM_o *this, const MethodInfo *method)
{
  return this->fields.loadName != 0;
}