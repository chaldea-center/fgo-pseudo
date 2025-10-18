void UIStandFigureM___ctor(UIStandFigureM_o *this, const MethodInfo *method)
{
  if ( (byte_4C448DC & 1) == 0 )
  {
    sub_1C37058(&UIStandFigureRender_TypeInfo);
    byte_4C448DC = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  UIStandFigureRender___ctor((UIStandFigureRender_o *)this, 0);
}


void UIStandFigureM__Dispose(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C448CF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C448CF = 1;
  }
  UIStandFigureM__ReleaseCharacter(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void UIStandFigureM__EndLoadAsset(UIStandFigureM_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  UIStandFigureM_o *v4; // x19
  System_String_o *loadName; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  AssetData_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o *callbackFunc; // x20

  v4 = this;
  if ( (byte_4C448D4 & 1) == 0 )
  {
    this = (UIStandFigureM_o *)sub_1C37058(&AssetManager_TypeInfo);
    byte_4C448D4 = 1;
  }
  loadName = v4->fields.loadName;
  if ( loadName )
  {
    if ( !assetData || (this = (UIStandFigureM_o *)assetData->fields.name) == 0 )
      sub_1C372B4(this);
    if ( System_String__Equals_63596960((System_String_o *)this, loadName, 0) )
    {
      v8 = v4->fields.assetData;
      v4->fields.loadName = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.loadName, 0, v6, v7);
      v4->fields.assetData = assetData;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.assetData, (int32_t)assetData, v9, v10);
      UIStandFigureM__SetTexture(v4, v11);
      if ( v8 )
      {
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAsset_40534712(v8, 0);
      }
      callbackFunc = v4->fields.callbackFunc;
      if ( callbackFunc )
      {
        v4->fields.callbackFunc = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.callbackFunc, 0, v12, v13);
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

  if ( (byte_4C448DB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C448DB = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIStandFigureM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_1C372B4(v4);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIStandFigureM__GetBodySubTexture(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C448DA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16359/*"_SubTex"*/);
    byte_4C448DA = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_1C372B4(bodyRenderer);
  }
  return UnityEngine_Material__GetTexture(
           (UnityEngine_Material_o *)bodyRenderer,
           (System_String_o *)StringLiteral_16359/*"_SubTex"*/,
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
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_String_o *v21; // x1
  Il2CppClass **v22; // x0
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = imageId;
  if ( (byte_4C448D3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&StringLiteral_16631/*"a"*/);
    byte_4C448D3 = 1;
  }
  FaceImageNameByFaceType = (System_Collections_Generic_List_object__o *)UIStandFigureRender__GetFaceImageNameByFaceType(
                                                                           (UIStandFigureRender_o *)this,
                                                                           imageId,
                                                                           faceType,
                                                                           0);
  v8 = System_Int32__ToString((int32_t)&v24, 0);
  if ( !FaceImageNameByFaceType )
    goto LABEL_14;
  v9 = (Il2CppObject *)v8;
  v8 = (System_String_o *)System_Collections_Generic_List_object___Contains(
                            FaceImageNameByFaceType,
                            (Il2CppObject *)v8,
                            (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    FaceImageNameByFaceType,
                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
  items = FaceImageNameByFaceType->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++FaceImageNameByFaceType->fields._version;
  if ( !items )
    goto LABEL_14;
  size = FaceImageNameByFaceType->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      FaceImageNameByFaceType,
      v9,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    FaceImageNameByFaceType->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
  }
  v8 = System_String__Concat_63561656((System_String_o *)v9, (System_String_o *)StringLiteral_16631/*"a"*/, 0);
  v18 = FaceImageNameByFaceType->fields._items;
  v19 = Method_System_Collections_Generic_List_string__Add__;
  ++FaceImageNameByFaceType->fields._version;
  if ( !v18 )
LABEL_14:
    sub_1C372B4(v8);
  v20 = FaceImageNameByFaceType->fields._size;
  v21 = v8;
  if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      FaceImageNameByFaceType,
      (Il2CppObject *)v8,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v18->obj.klass + v20;
    FaceImageNameByFaceType->fields._size = v20 + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  FaceImageNameByFaceType,
                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4C448D6 & 1) == 0 )
  {
    sub_1C37058(&UIStandFigureRender_TypeInfo);
    byte_4C448D6 = 1;
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
    sub_1C372B4(this);
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
  const MethodInfo *v5; // x3
  System_String_o *loadName; // x20
  CGThumbnailListItem_o *p_loadName; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C448D0 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C448D0 = 1;
  }
  UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)this, 0);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(assetData, 0);
    this->fields.assetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v4, v5);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (CGThumbnailListItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_1C36FFC(p_loadName, 0, v8, v9);
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

  if ( (byte_4C448D1 & 1) == 0 )
  {
    sub_1C37058(&ImageLimitCount_TypeInfo);
    byte_4C448D1 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  UIStandFigureM__SetCharacter_44041056(this, svtId, ImageLimitCount, faceType, 0, callbackFunc, 0, v13);
}


bool UIStandFigureM__SetCharacter_44041056(
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t Id; // w8
  System_String_o *loadName; // x0
  CGThumbnailListItem_o *p_loadName; // x23
  System_Delegate_o *v23; // x0
  UIStandFigureM_c *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  CGThumbnailListItem_c *v27; // x8
  System_Action_c *v28; // x1
  struct AssetData_o *assetData; // x8
  const MethodInfo *v30; // x1
  System_String_o *klass; // x24
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Action_c *v35; // x1
  const MethodInfo *v36; // x3
  System_String_o *v37; // x21
  System_String_array *RequiredResourceNames; // x20
  AssetLoader_LoadEndDataHandler_o *v39; // x22
  AssetLoader_LoadEndDataHandler_o *v41; // x20
  int32_t imageLimitCounta; // [xsp+8h] [xbp-48h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-44h] BYREF

  p_callbackFunc = (struct System_Action_o **)(unsigned int)faceType;
  v12 = imageLimitCount;
  v13 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C448D2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_UIStandFigureM_EndLoadAsset__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C448D2 = 1;
  }
  if ( formId )
    AssetNameByForm = StandFigureManager__GetAssetNameByForm(v13, v12, formId, 0);
  else
    AssetNameByForm = StandFigureManager__GetAssetName_40743184(v13, v12, 0);
  v16 = AssetNameByForm;
  if ( v12 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_43;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
    v12 = imageLimitCounta;
    v13 = svtIda;
  }
  Id = ServantScriptMaster__getId(v13, v12, 0);
  loadName = this->fields.loadName;
  this->fields.formId = formId;
  p_loadName = (CGThumbnailListItem_o *)&this->fields.loadName;
  this->fields.imageId = Id;
  this->fields.faceType = (int)p_callbackFunc;
  if ( loadName )
  {
    if ( System_String__Equals_63596960(loadName, v16, 0) )
    {
      if ( callbackFunc )
      {
        v23 = (System_Delegate_o *)this->fields.callbackFunc;
        this = (UIStandFigureM_o *)((char *)this + 664);
        v24 = (UIStandFigureM_c *)System_Delegate__Combine(v23, (System_Delegate_o *)callbackFunc, 0);
        v27 = (CGThumbnailListItem_c *)v24;
        if ( v24 )
        {
          v28 = System_Action_TypeInfo;
          if ( v24->_1.image != System_Action_TypeInfo )
            goto LABEL_29;
          this->klass = v24;
          if ( v24->_1.image != v28 )
            goto LABEL_29;
        }
        else
        {
          this->klass = 0;
        }
        sub_1C36FFC((CGThumbnailListItem_o *)this, (int32_t)v24, v25, v26);
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
    sub_1C372B4(Instance);
  if ( System_String__Equals_63596960((System_String_o *)Instance, v16, 0) )
  {
    UIStandFigureM__SetTextureStatus(this, v30);
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
  v32 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v27 = (CGThumbnailListItem_c *)v32;
  if ( !v32 )
    goto LABEL_30;
  v35 = System_Action_TypeInfo;
  if ( (System_Action_c *)v32->klass == System_Action_TypeInfo )
  {
    *p_callbackFunc = (struct System_Action_o *)v32;
    if ( (System_Action_c *)v32->klass == v35 )
      goto LABEL_31;
  }
LABEL_29:
  sub_1C37574(v27);
LABEL_30:
  *p_callbackFunc = (struct System_Action_o *)v27;
LABEL_31:
  sub_1C36FFC((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)v27, v33, v34);
LABEL_32:
  this->fields.loadName = v16;
  sub_1C36FFC(p_loadName, (int32_t)v16, v18, v19);
  v37 = this->fields.loadName;
  this->fields.loadRequiredResource = loadRequiredResource;
  if ( loadRequiredResource )
  {
    RequiredResourceNames = UIStandFigureM__GetRequiredResourceNames(
                              this,
                              this->fields.imageId,
                              this->fields.faceType,
                              v36);
    v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v39, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__loadResourcesFromAssetStorage(v37, RequiredResourceNames, v39, 1, 0);
  }
  else
  {
    v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v41, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__loadAssetStorage(v37, v41, 1, 0);
  }
}


bool UIStandFigureM__SetCharacter_44041952(
        UIStandFigureM_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return UIStandFigureM__SetCharacter_44041056(
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
    sub_1C372B4(this);
  if ( outFigure->fields.assetData )
  {
LABEL_6:
    if ( UIStandFigureRender__get_IsUseSimpleMesh((UIStandFigureRender_o *)this, 0) )
      UIStandFigureM__SetCrossFadeCharacterSimpleMesh(this, inFigure, outFigure, filterName, v10);
    else
      UIStandFigureM__SetCrossFadeCharacterUseWithFaceMesh(this, inFigure, outFigure, filterName, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Vector2Int_o faceTextureSize; // x2
  UIStandFigureM_o *v26; // x0
  const MethodInfo *v27; // x3
  int v28; // w25
  System_String_o *v29; // x1
  UnityEngine_Material_o *v30; // x0
  float v31; // s0 OVERLAPPED
  float v32; // s1
  float v33; // s2
  float v34; // s3
  struct UnityEngine_Texture2D_array *v35; // x27
  float v36; // s12
  float v37; // s13
  float v38; // s14
  float v39; // s15
  float v40; // s8
  float v41; // s9
  float v42; // s10
  float v43; // s11
  UnityEngine_Vector2Int_o v44; // x2
  UIStandFigureM_o *v45; // x0
  const MethodInfo *v46; // x3
  int v47; // w25
  System_String_o *v48; // x1
  UnityEngine_Material_o *v49; // x0
  float v50; // s0 OVERLAPPED
  float v51; // s1
  float v52; // s2
  float v53; // s3
  float x; // s8
  float v55; // s9
  int v56; // w25
  float y; // s10
  float v58; // s11
  int v59; // w0
  int v60; // w23
  UIStandFigureM_o *v61; // x8
  int v62; // w21
  int v63; // w21
  float v64; // s3
  float v65; // s1
  float v66; // s2
  float v67; // s0 OVERLAPPED
  int v68; // w21
  UnityEngine_Mesh_o *v69; // x21
  __int64 v70; // x22
  int32_t LeftX; // w23
  int32_t RightX; // w23
  int32_t v73; // w23
  int32_t v74; // w23
  UIStandFigureM_o *v75; // x23
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v78; // s1
  float32x2_t *v79; // x10
  float v80; // s0
  float32x2_t *v81; // x10
  int32_t v82; // s0
  float32x2_t *v83; // x8
  float v84; // s0
  __int64 v85; // x24
  float BodyU; // s8
  float BodyV; // s0
  float v88; // s8
  float BodyW; // s9
  float v90; // s0
  float v91; // s8
  float v92; // s9
  float BodyH; // s0
  float v94; // s8
  float v95; // s9
  float v96; // s10
  float v97; // s0
  __int64 v98; // x25
  float v99; // s8
  float v100; // s0
  float v101; // s8
  float v102; // s9
  float v103; // s0
  float v104; // s8
  float v105; // s9
  float v106; // s0
  float v107; // s8
  float v108; // s9
  float v109; // s10
  float v110; // s0
  System_Array_o *v111; // x0
  System_RuntimeFieldHandle_o v112; // x1
  System_Int32_array *v113; // x22
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4C448D8 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Mesh_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    sub_1C37058(&StringLiteral_4921/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_1C37058(&StringLiteral_16265/*"_MainTex2"*/);
    sub_1C37058(&StringLiteral_16211/*"_FaceTex2"*/);
    sub_1C37058(&StringLiteral_16203/*"_FaceInfo2"*/);
    sub_1C37058(&StringLiteral_16199/*"_FaceAlphaTex2"*/);
    sub_1C37058(&StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_1C37058(&StringLiteral_16202/*"_FaceInfo"*/);
    sub_1C37058(&StringLiteral_16212/*"_FaceTexOffset"*/);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_16264/*"_MainTex"*/);
    sub_1C37058(&StringLiteral_16401/*"_UvRangeX"*/);
    sub_1C37058(&StringLiteral_16213/*"_FaceTexOffset2"*/);
    sub_1C37058(&StringLiteral_23827/*"summon"*/);
    sub_1C37058(&StringLiteral_16360/*"_SubTex2"*/);
    sub_1C37058(&StringLiteral_16359/*"_SubTex"*/);
    sub_1C37058(&StringLiteral_4920/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_1C37058(&StringLiteral_16311/*"_PositionOffset"*/);
    sub_1C37058(&StringLiteral_16198/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_1C37058(&StringLiteral_16210/*"_FaceTex"*/);
    byte_4C448D8 = 1;
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
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23827/*"summon"*/, 0) )
  {
    v13 = (System_String_o **)&StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v11 != v12 )
      v13 = (System_String_o **)&StringLiteral_4920/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_4921/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v14 = UnityEngine_Shader__Find(*v13, 0);
  v15 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16265/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16360/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  faceTextureSize = inFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v26, inFigure->fields.faceType, faceTextureSize, v27);
  if ( (unsigned int)this >= LODWORD(v16->max_length) )
    goto LABEL_96;
  v28 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16211/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[(int)this],
    0);
  if ( (unsigned int)(v28 + 1) >= LODWORD(v16->max_length) )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16199/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[v28 + 1],
    0);
  UIWidget__set_color((UIWidget_o *)v8, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16173/*"_Color"*/, v8->fields.mColor, 0);
  if ( inFigure->fields.faceType )
  {
    v115.fields.x = m_XMin;
    v115.fields.y = m_YMin;
    v115.fields.z = m_Width;
    v115.fields.w = m_Height;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16203/*"_FaceInfo2"*/, v115, 0);
    v29 = (System_String_o *)StringLiteral_16213/*"_FaceTexOffset2"*/;
    v30 = v15;
    v31 = v21;
    v32 = v22;
    v33 = v23;
    v34 = v24;
  }
  else
  {
    v116.fields.x = 0.0;
    v116.fields.y = 0.0;
    v116.fields.z = 0.0;
    v116.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16203/*"_FaceInfo2"*/, v116, 0);
    v29 = (System_String_o *)StringLiteral_16213/*"_FaceTexOffset2"*/;
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
    v30 = v15;
  }
  UnityEngine_Material__SetVector(v30, v29, *(UnityEngine_Vector4_o *)&v31, 0);
  v35 = outFigure->fields.textureList;
  if ( !v35 )
    goto LABEL_97;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_96;
  v36 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v37 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v38 = outFigure->fields.faceTextureRect.fields.m_Width;
  v39 = outFigure->fields.faceTextureRect.fields.m_Height;
  v40 = outFigure->fields.faceRect.fields.m_XMin;
  v41 = outFigure->fields.faceRect.fields.m_YMin;
  v42 = outFigure->fields.faceRect.fields.m_Width;
  v43 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[0],
    0);
  if ( LODWORD(v35->max_length) <= 1 )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16359/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[1],
    0);
  v44 = outFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v45, outFigure->fields.faceType, v44, v46);
  if ( (unsigned int)this >= LODWORD(v35->max_length) )
    goto LABEL_96;
  v47 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16210/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[(int)this],
    0);
  if ( (unsigned int)(v47 + 1) >= LODWORD(v35->max_length) )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16198/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[v47 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v117.fields.x = v36;
    v117.fields.y = v37;
    v117.fields.z = v38;
    v117.fields.w = v39;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16202/*"_FaceInfo"*/, v117, 0);
    v48 = (System_String_o *)StringLiteral_16212/*"_FaceTexOffset"*/;
    v49 = v15;
    v50 = v40;
    v51 = v41;
    v52 = v42;
    v53 = v43;
  }
  else
  {
    v118.fields.x = 0.0;
    v118.fields.y = 0.0;
    v118.fields.z = 0.0;
    v118.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16202/*"_FaceInfo"*/, v118, 0);
    v48 = (System_String_o *)StringLiteral_16212/*"_FaceTexOffset"*/;
    v50 = 0.0;
    v51 = 0.0;
    v52 = 0.0;
    v53 = 0.0;
    v49 = v15;
  }
  UnityEngine_Material__SetVector(v49, v48, *(UnityEngine_Vector4_o *)&v50, 0);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_96;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_97;
  x = outFigure->fields.dispOffset.fields.x;
  v55 = inFigure->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_96;
  v56 = (int)this;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_97;
  y = outFigure->fields.dispOffset.fields.y;
  v58 = inFigure->fields.dispOffset.fields.y;
  v59 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v119.fields.x = (float)(x - v55) / (float)v56;
  v119.fields.y = (float)(y - v58) / (float)v59;
  v119.fields.z = 0.0;
  v119.fields.w = 0.0;
  UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16311/*"_PositionOffset"*/, v119, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  v114.fields.y = outFigure->fields.dispOffset.fields.y;
  v114.fields.x = outFigure->fields.dispOffset.fields.x;
  v114.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v114, 0);
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
    if ( !LODWORD(v35->max_length) )
      goto LABEL_96;
    v60 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    v61 = v60 >= (int)this ? inFigure : outFigure;
    v8->fields.isWide = v61->fields.isWide;
    v8->fields.isHigh = v61->fields.isHigh;
    if ( !LODWORD(v16->max_length) )
      goto LABEL_96;
    this = (UIStandFigureM_o *)v16->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v35->max_length) )
      goto LABEL_96;
    v62 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v62 >= (int)this )
    {
      if ( !LODWORD(v35->max_length) )
        goto LABEL_96;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_97;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v16->max_length) )
        goto LABEL_96;
      v68 = (int)this;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_97;
      v65 = (float)v68
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v64 = 1.0;
      v67 = v65 * 0.5;
      v66 = 0.0;
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
      if ( !LODWORD(v35->max_length) )
        goto LABEL_96;
      v63 = (int)this;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_97;
      v64 = (float)v63
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v65 = 1.0;
      v66 = v64 * 0.5;
      v67 = 0.0;
    }
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16401/*"_UvRangeX"*/, *(UnityEngine_Vector4_o *)&v67, 0);
  }
  v69 = (UnityEngine_Mesh_o *)sub_1C372A4(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v69, 0);
  v70 = sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( !v70 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v70 + 24) )
    goto LABEL_96;
  *(float *)(v70 + 32) = (float)LeftX;
  *(float *)(v70 + 36) = (float)(int)this;
  *(_DWORD *)(v70 + 40) = 0;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v70 + 24) <= 1u )
    goto LABEL_96;
  *(float *)(v70 + 44) = (float)RightX;
  *(float *)(v70 + 48) = (float)(int)this;
  *(_DWORD *)(v70 + 52) = 0;
  v73 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v70 + 24) <= 2u
    || (*(float *)(v70 + 56) = (float)v73,
        *(float *)(v70 + 60) = (float)(int)this,
        *(_DWORD *)(v70 + 64) = 0,
        v74 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0),
        this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0),
        *(_DWORD *)(v70 + 24) <= 3u) )
  {
LABEL_96:
    sub_1C372BC(this);
  }
  *(float *)(v70 + 68) = (float)v74;
  *(float *)(v70 + 72) = (float)(int)this;
  *(_DWORD *)(v70 + 76) = 0;
  this = (UIStandFigureM_o *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  v75 = this;
  if ( !byte_4C3C92A )
  {
    this = (UIStandFigureM_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C92A = 1;
  }
  if ( !v75 )
LABEL_97:
    sub_1C372B4(this);
  m_CancellationTokenSource = (unsigned int)v75->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_96;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v78 = -static_fields[10].n64_f32[0];
  v75->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v75->fields.rightAnchor = v78;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_96;
  v79 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v80 = -v79[10].n64_f32[0];
  *(float32x2_t *)((char *)&v75->fields.rightAnchor + 4) = vneg_f32(v79[9]);
  *((float *)&v75->fields.bottomAnchor + 1) = v80;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_96;
  v81 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v82 = -v81[10].n64_f32[0];
  v75->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v81[9]).n64_u64[0];
  v75->fields.updateAnchors = v82;
  if ( m_CancellationTokenSource == 3 )
    goto LABEL_96;
  v83 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v84 = -v83[10].n64_f32[0];
  *(float32x2_t *)(&v75->fields.updateAnchors + 1) = vneg_f32(v83[9]);
  *((float *)&v75->fields.mGo + 1) = v84;
  v85 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v85 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v85 + 24) )
    goto LABEL_96;
  *(float *)(v85 + 32) = BodyU;
  *(float *)(v85 + 36) = BodyV;
  v88 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v90 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v85 + 24) <= 1u )
    goto LABEL_96;
  *(float *)(v85 + 40) = v88 + BodyW;
  *(float *)(v85 + 44) = v90;
  v91 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v92 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v85 + 24) <= 2u )
    goto LABEL_96;
  *(float *)(v85 + 48) = v91;
  *(float *)(v85 + 52) = v92 - BodyH;
  v94 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v95 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v96 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v97 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v85 + 24) <= 3u )
    goto LABEL_96;
  *(float *)(v85 + 56) = v94 + v95;
  *(float *)(v85 + 60) = v96 - v97;
  v98 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  v99 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v100 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v98 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v98 + 24) )
    goto LABEL_96;
  *(float *)(v98 + 32) = v99;
  *(float *)(v98 + 36) = v100;
  v101 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v102 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v103 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v98 + 24) <= 1u )
    goto LABEL_96;
  *(float *)(v98 + 40) = v101 + v102;
  *(float *)(v98 + 44) = v103;
  v104 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v105 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v106 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v98 + 24) <= 2u )
    goto LABEL_96;
  *(float *)(v98 + 48) = v104;
  *(float *)(v98 + 52) = v105 - v106;
  v107 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v108 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v109 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v110 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v98 + 24) <= 3u )
    goto LABEL_96;
  *(float *)(v98 + 56) = v107 + v108;
  *(float *)(v98 + 60) = v109 - v110;
  if ( !v69 )
    goto LABEL_97;
  UnityEngine_Mesh__set_vertices(v69, (UnityEngine_Vector3_array *)v70, 0);
  UnityEngine_Mesh__set_normals(v69, (UnityEngine_Vector3_array *)v75, 0);
  UnityEngine_Mesh__set_uv(v69, (UnityEngine_Vector2_array *)v85, 0);
  UnityEngine_Mesh__set_uv2(v69, (UnityEngine_Vector2_array *)v98, 0);
  v111 = (System_Array_o *)sub_1C37100(int___TypeInfo, 6);
  v112.fields.value = Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E;
  v113 = (System_Int32_array *)v111;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v111, v112, 0);
  UnityEngine_Mesh__set_triangles(v69, v113, 0);
  UnityEngine_Mesh__RecalculateNormals(v69, 0);
  UnityEngine_Mesh__RecalculateBounds(v69, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v69, 0);
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


// local variable allocation has failed, the output may be wrong!
void UIStandFigureM__SetCrossFadeCharacterUseWithFaceMesh(
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
  UnityEngine_Vector2Int_o faceTextureSize; // x2
  UIStandFigureM_o *v26; // x0
  const MethodInfo *v27; // x3
  int v28; // w25
  System_String_o *v29; // x1
  UnityEngine_Material_o *v30; // x0
  float v31; // s0 OVERLAPPED
  float v32; // s1
  float v33; // s2
  float v34; // s3
  struct UnityEngine_Texture2D_array *v35; // x27
  float v36; // s12
  float v37; // s13
  float v38; // s14
  float v39; // s15
  float v40; // s8
  float v41; // s9
  float v42; // s10
  float v43; // s11
  UnityEngine_Vector2Int_o v44; // x2
  UIStandFigureM_o *v45; // x0
  const MethodInfo *v46; // x3
  int v47; // w25
  System_String_o *v48; // x1
  UnityEngine_Material_o *v49; // x0
  float v50; // s0 OVERLAPPED
  float v51; // s1
  float v52; // s2
  float v53; // s3
  float x; // s8
  float v55; // s9
  int v56; // w25
  float y; // s10
  float v58; // s11
  int v59; // w0
  int v60; // w25
  int v61; // w22
  int v62; // w22
  float v63; // s3
  float v64; // s1
  float v65; // s2
  float v66; // s0 OVERLAPPED
  int v67; // w22
  UnityEngine_Mesh_o *v68; // x22
  __int64 v69; // x23
  int32_t LeftX; // w24
  int32_t RightX; // w24
  int32_t v72; // w24
  int32_t v73; // w24
  unsigned int v74; // w8
  float v75; // s0
  float v76; // s1
  float v77; // s2
  float32x2_t v78; // d0
  float32x2_t v79; // d1
  __int64 v80; // d0
  float v81; // s0
  float v82; // s1
  float v83; // s2
  float v84; // s0
  float v85; // s1
  float v86; // s2
  float32x2_t v87; // d0
  float32x2_t v88; // d1
  __int64 v89; // d0
  float v90; // s0
  float v91; // s1
  float v92; // s2
  UIStandFigureM_o *v93; // x24
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v96; // s1
  float32x2_t *v97; // x10
  float v98; // s0
  float32x2_t *v99; // x10
  int32_t v100; // s0
  float32x2_t *v101; // x10
  float v102; // s0
  float32x2_t *v103; // x10
  float v104; // s0
  float32x2_t *v105; // x10
  int32_t v106; // s0
  float32x2_t *v107; // x10
  float v108; // s0
  float32x2_t *v109; // x10
  float v110; // s0
  float32x2_t *v111; // x10
  float v112; // s0
  float32x2_t *v113; // x10
  float v114; // s0
  float32x2_t *v115; // x10
  float v116; // s0
  float32x2_t *v117; // x8
  int32_t v118; // s0
  __int64 v119; // x25
  float BodyU; // s8
  float BodyV; // s0
  float v122; // s8
  float BodyW; // s9
  float v124; // s0
  float v125; // s8
  float v126; // s9
  float BodyH; // s0
  float v128; // s8
  float v129; // s9
  float v130; // s10
  float v131; // s0
  unsigned int v132; // w8
  float v133; // s0
  float v134; // s2
  __int64 v135; // x26
  float v136; // s8
  float v137; // s0
  float v138; // s8
  float v139; // s9
  float v140; // s0
  float v141; // s8
  float v142; // s9
  float v143; // s0
  float v144; // s8
  float v145; // s9
  float v146; // s10
  float v147; // s0
  unsigned int v148; // w8
  float v149; // s0
  float v150; // s2
  float v151; // s0
  float v152; // s2
  System_Array_o *v153; // x0
  System_RuntimeFieldHandle_o v154; // x1
  System_Int32_array *v155; // x20
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4C448D7 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Mesh_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    sub_1C37058(&StringLiteral_4921/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_1C37058(&StringLiteral_16265/*"_MainTex2"*/);
    sub_1C37058(&StringLiteral_16211/*"_FaceTex2"*/);
    sub_1C37058(&StringLiteral_16203/*"_FaceInfo2"*/);
    sub_1C37058(&StringLiteral_16199/*"_FaceAlphaTex2"*/);
    sub_1C37058(&StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_1C37058(&StringLiteral_16202/*"_FaceInfo"*/);
    sub_1C37058(&StringLiteral_16212/*"_FaceTexOffset"*/);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_16264/*"_MainTex"*/);
    sub_1C37058(&StringLiteral_16401/*"_UvRangeX"*/);
    sub_1C37058(&StringLiteral_16213/*"_FaceTexOffset2"*/);
    sub_1C37058(&StringLiteral_23827/*"summon"*/);
    sub_1C37058(&StringLiteral_16360/*"_SubTex2"*/);
    sub_1C37058(&StringLiteral_16359/*"_SubTex"*/);
    sub_1C37058(&StringLiteral_4920/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_1C37058(&StringLiteral_16311/*"_PositionOffset"*/);
    sub_1C37058(&StringLiteral_16198/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_1C37058(&StringLiteral_16210/*"_FaceTex"*/);
    byte_4C448D7 = 1;
  }
  v8->fields.isCrossFade = 1;
  if ( !inFigure )
    goto LABEL_128;
  textureList = inFigure->fields.textureList;
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
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23827/*"summon"*/, 0) )
  {
    v13 = (System_String_o **)&StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v11 != v12 )
      v13 = (System_String_o **)&StringLiteral_4920/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_4921/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v14 = UnityEngine_Shader__Find(*v13, 0);
  v15 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v15, v14, 0);
  v16 = inFigure->fields.textureList;
  if ( !v16 )
    goto LABEL_128;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  if ( !v15 )
    goto LABEL_128;
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
    (System_String_o *)StringLiteral_16265/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16360/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  faceTextureSize = inFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v26, inFigure->fields.faceType, faceTextureSize, v27);
  if ( (unsigned int)this >= LODWORD(v16->max_length) )
    goto LABEL_127;
  v28 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16211/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[(int)this],
    0);
  if ( (unsigned int)(v28 + 1) >= LODWORD(v16->max_length) )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16199/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[v28 + 1],
    0);
  UIWidget__set_color((UIWidget_o *)v8, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16173/*"_Color"*/, v8->fields.mColor, 0);
  if ( inFigure->fields.faceType )
  {
    v157.fields.x = m_XMin;
    v157.fields.y = m_YMin;
    v157.fields.z = m_Width;
    v157.fields.w = m_Height;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16203/*"_FaceInfo2"*/, v157, 0);
    v29 = (System_String_o *)StringLiteral_16213/*"_FaceTexOffset2"*/;
    v30 = v15;
    v31 = v21;
    v32 = v22;
    v33 = v23;
    v34 = v24;
  }
  else
  {
    v158.fields.x = 0.0;
    v158.fields.y = 0.0;
    v158.fields.z = 0.0;
    v158.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16203/*"_FaceInfo2"*/, v158, 0);
    v29 = (System_String_o *)StringLiteral_16213/*"_FaceTexOffset2"*/;
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
    v30 = v15;
  }
  UnityEngine_Material__SetVector(v30, v29, *(UnityEngine_Vector4_o *)&v31, 0);
  v35 = outFigure->fields.textureList;
  if ( !v35 )
    goto LABEL_128;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_127;
  v36 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v37 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v38 = outFigure->fields.faceTextureRect.fields.m_Width;
  v39 = outFigure->fields.faceTextureRect.fields.m_Height;
  v40 = outFigure->fields.faceRect.fields.m_XMin;
  v41 = outFigure->fields.faceRect.fields.m_YMin;
  v42 = outFigure->fields.faceRect.fields.m_Width;
  v43 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[0],
    0);
  if ( LODWORD(v35->max_length) <= 1 )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16359/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[1],
    0);
  v44 = outFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v45, outFigure->fields.faceType, v44, v46);
  if ( (unsigned int)this >= LODWORD(v35->max_length) )
    goto LABEL_127;
  v47 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16210/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[(int)this],
    0);
  if ( (unsigned int)(v47 + 1) >= LODWORD(v35->max_length) )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16198/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[v47 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v159.fields.x = v36;
    v159.fields.y = v37;
    v159.fields.z = v38;
    v159.fields.w = v39;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16202/*"_FaceInfo"*/, v159, 0);
    v48 = (System_String_o *)StringLiteral_16212/*"_FaceTexOffset"*/;
    v49 = v15;
    v50 = v40;
    v51 = v41;
    v52 = v42;
    v53 = v43;
  }
  else
  {
    v160.fields.x = 0.0;
    v160.fields.y = 0.0;
    v160.fields.z = 0.0;
    v160.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16202/*"_FaceInfo"*/, v160, 0);
    v48 = (System_String_o *)StringLiteral_16212/*"_FaceTexOffset"*/;
    v50 = 0.0;
    v51 = 0.0;
    v52 = 0.0;
    v53 = 0.0;
    v49 = v15;
  }
  UnityEngine_Material__SetVector(v49, v48, *(UnityEngine_Vector4_o *)&v50, 0);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_128;
  x = outFigure->fields.dispOffset.fields.x;
  v55 = inFigure->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  v56 = (int)this;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_128;
  y = outFigure->fields.dispOffset.fields.y;
  v58 = inFigure->fields.dispOffset.fields.y;
  v59 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v161.fields.x = (float)(x - v55) / (float)v56;
  v161.fields.y = (float)(y - v58) / (float)v59;
  v161.fields.z = 0.0;
  v161.fields.w = 0.0;
  UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16311/*"_PositionOffset"*/, v161, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_128;
  v156.fields.y = outFigure->fields.dispOffset.fields.y;
  v156.fields.x = outFigure->fields.dispOffset.fields.x;
  v156.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v156, 0);
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
    if ( !LODWORD(v35->max_length) )
      goto LABEL_127;
    v60 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v60 < (int)this )
      inFigure = outFigure;
  }
  v8->fields.isWide = inFigure->fields.isWide;
  v8->fields.isHigh = inFigure->fields.isHigh;
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
    if ( !LODWORD(v35->max_length) )
      goto LABEL_127;
    v61 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v61 >= (int)this )
    {
      if ( !LODWORD(v35->max_length) )
        goto LABEL_127;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_128;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v16->max_length) )
        goto LABEL_127;
      v67 = (int)this;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_128;
      v64 = (float)v67
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v63 = 1.0;
      v66 = v64 * 0.5;
      v65 = 0.0;
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
      if ( !LODWORD(v35->max_length) )
        goto LABEL_127;
      v62 = (int)this;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_128;
      v63 = (float)v62
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v64 = 1.0;
      v65 = v63 * 0.5;
      v66 = 0.0;
    }
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16401/*"_UvRangeX"*/, *(UnityEngine_Vector4_o *)&v66, 0);
  }
  v68 = (UnityEngine_Mesh_o *)sub_1C372A4(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v68, 0);
  v69 = sub_1C37100(UnityEngine_Vector3___TypeInfo, 12);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( !v69 )
    goto LABEL_128;
  if ( !*(_DWORD *)(v69 + 24) )
    goto LABEL_127;
  *(float *)(v69 + 32) = (float)LeftX;
  *(float *)(v69 + 36) = (float)(int)this;
  *(_DWORD *)(v69 + 40) = 0;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v69 + 24) <= 1u )
    goto LABEL_127;
  *(float *)(v69 + 44) = (float)RightX;
  *(float *)(v69 + 48) = (float)(int)this;
  *(_DWORD *)(v69 + 52) = 0;
  v72 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v69 + 24) <= 2u )
    goto LABEL_127;
  *(float *)(v69 + 56) = (float)v72;
  *(float *)(v69 + 60) = (float)(int)this;
  *(_DWORD *)(v69 + 64) = 0;
  v73 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  v74 = *(_DWORD *)(v69 + 24);
  if ( v74 <= 3 )
    goto LABEL_127;
  *(float *)(v69 + 68) = (float)v73;
  *(float *)(v69 + 72) = (float)(int)this;
  *(_DWORD *)(v69 + 76) = 0;
  if ( v74 == 4 )
    goto LABEL_127;
  v75 = inFigure->fields.facePositionRect.fields.m_Height;
  v76 = inFigure->fields.facePositionRect.fields.m_YMin;
  v77 = inFigure->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v69 + 88) = 0;
  *(float *)(v69 + 80) = v77;
  *(float *)(v69 + 84) = v75 + v76;
  if ( v74 <= 5 )
    goto LABEL_127;
  v78.n64_u64[0] = *(unsigned __int64 *)&inFigure->fields.facePositionRect.fields.m_Width;
  v79.n64_u64[0] = *(unsigned __int64 *)&inFigure->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v69 + 100) = 0;
  *(float32x2_t *)(v69 + 92) = vadd_f32(v78, v79);
  if ( v74 == 6 )
    goto LABEL_127;
  v80 = *(_QWORD *)&inFigure->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v69 + 112) = 0;
  *(_QWORD *)(v69 + 104) = v80;
  if ( v74 <= 7 )
    goto LABEL_127;
  v81 = inFigure->fields.facePositionRect.fields.m_Width;
  v82 = inFigure->fields.facePositionRect.fields.m_XMin;
  v83 = inFigure->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v69 + 124) = 0;
  *(float *)(v69 + 116) = v81 + v82;
  *(float *)(v69 + 120) = v83;
  if ( v74 == 8 )
    goto LABEL_127;
  v84 = inFigure->fields.facePositionRect.fields.m_Height;
  v85 = inFigure->fields.facePositionRect.fields.m_YMin;
  v86 = inFigure->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v69 + 136) = 0;
  *(float *)(v69 + 128) = v86;
  *(float *)(v69 + 132) = v84 + v85;
  if ( v74 <= 9
    || (v87.n64_u64[0] = *(unsigned __int64 *)&inFigure->fields.facePositionRect.fields.m_Width,
        v88.n64_u64[0] = *(unsigned __int64 *)&inFigure->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v69 + 148) = 0,
        *(float32x2_t *)(v69 + 140) = vadd_f32(v87, v88),
        v74 == 10)
    || (v89 = *(_QWORD *)&inFigure->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v69 + 160) = 0,
        *(_QWORD *)(v69 + 152) = v89,
        v74 <= 0xB) )
  {
LABEL_127:
    sub_1C372BC(this);
  }
  v90 = inFigure->fields.facePositionRect.fields.m_Width;
  v91 = inFigure->fields.facePositionRect.fields.m_XMin;
  v92 = inFigure->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v69 + 172) = 0;
  *(float *)(v69 + 164) = v90 + v91;
  *(float *)(v69 + 168) = v92;
  this = (UIStandFigureM_o *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 12);
  v93 = this;
  if ( !byte_4C3C92A )
  {
    this = (UIStandFigureM_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C92A = 1;
  }
  if ( !v93 )
LABEL_128:
    sub_1C372B4(this);
  m_CancellationTokenSource = (unsigned int)v93->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_127;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v96 = -static_fields[10].n64_f32[0];
  v93->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v93->fields.rightAnchor = v96;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_127;
  v97 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v98 = -v97[10].n64_f32[0];
  *(float32x2_t *)((char *)&v93->fields.rightAnchor + 4) = vneg_f32(v97[9]);
  *((float *)&v93->fields.bottomAnchor + 1) = v98;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_127;
  v99 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v100 = -v99[10].n64_f32[0];
  v93->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v99[9]).n64_u64[0];
  v93->fields.updateAnchors = v100;
  if ( m_CancellationTokenSource == 3 )
    goto LABEL_127;
  v101 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v102 = -v101[10].n64_f32[0];
  *(float32x2_t *)(&v93->fields.updateAnchors + 1) = vneg_f32(v101[9]);
  *((float *)&v93->fields.mGo + 1) = v102;
  if ( m_CancellationTokenSource <= 4 )
    goto LABEL_127;
  v103 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v104 = -v103[10].n64_f32[0];
  v93->fields.mTrans = (struct UnityEngine_Transform_o *)vneg_f32(v103[9]).n64_u64[0];
  *(float *)&v93->fields.mChildren = v104;
  if ( m_CancellationTokenSource == 5 )
    goto LABEL_127;
  v105 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v106 = -v105[10].n64_f32[0];
  *(float32x2_t *)((char *)&v93->fields.mChildren + 4) = vneg_f32(v105[9]);
  v93->fields.mUpdateFrame = v106;
  if ( m_CancellationTokenSource <= 6 )
    goto LABEL_127;
  v107 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v108 = -v107[10].n64_f32[0];
  *(float32x2_t *)&v93->fields.mAnchorsCached = vneg_f32(v107[9]);
  *(float *)&v93->fields.mRoot = v108;
  if ( m_CancellationTokenSource == 7 )
    goto LABEL_127;
  v109 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v110 = -v109[10].n64_f32[0];
  *(float32x2_t *)((char *)&v93->fields.mRoot + 4) = vneg_f32(v109[9]);
  *((float *)&v93->fields.mParent + 1) = v110;
  if ( m_CancellationTokenSource <= 8 )
    goto LABEL_127;
  v111 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v112 = -v111[10].n64_f32[0];
  *(float32x2_t *)&v93->fields.mRootSet = vneg_f32(v111[9]);
  *(float *)&v93->fields.mCam = v112;
  if ( m_CancellationTokenSource == 9 )
    goto LABEL_127;
  v113 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v114 = -v113[10].n64_f32[0];
  *(float32x2_t *)((char *)&v93->fields.mCam + 4) = vneg_f32(v113[9]);
  v93->fields.mColor.fields.r = v114;
  if ( m_CancellationTokenSource <= 0xA )
    goto LABEL_127;
  v115 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v116 = -v115[10].n64_f32[0];
  *(float32x2_t *)&v93->fields.mColor.fields.g = vneg_f32(v115[9]);
  v93->fields.mColor.fields.a = v116;
  if ( m_CancellationTokenSource == 11 )
    goto LABEL_127;
  v117 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v118 = -v117[10].n64_f32[0];
  *(float32x2_t *)&v93->fields.mPivot = vneg_f32(v117[9]);
  v93->fields.mHeight = v118;
  v119 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 12);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v119 )
    goto LABEL_128;
  if ( !*(_DWORD *)(v119 + 24) )
    goto LABEL_127;
  *(float *)(v119 + 32) = BodyU;
  *(float *)(v119 + 36) = BodyV;
  v122 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v124 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v119 + 24) <= 1u )
    goto LABEL_127;
  *(float *)(v119 + 40) = v122 + BodyW;
  *(float *)(v119 + 44) = v124;
  v125 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v126 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v119 + 24) <= 2u )
    goto LABEL_127;
  *(float *)(v119 + 48) = v125;
  *(float *)(v119 + 52) = v126 - BodyH;
  v128 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v129 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v130 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v131 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  v132 = *(_DWORD *)(v119 + 24);
  if ( v132 <= 3 )
    goto LABEL_127;
  *(float *)(v119 + 56) = v128 + v129;
  *(float *)(v119 + 60) = v130 - v131;
  if ( v132 == 4 )
    goto LABEL_127;
  v133 = inFigure->fields.faceTextureRect.fields.m_Height + inFigure->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v119 + 64) = inFigure->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v119 + 68) = v133;
  if ( v132 <= 5 )
    goto LABEL_127;
  *(float32x2_t *)(v119 + 72) = vadd_f32(
                                  *(float32x2_t *)&inFigure->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&inFigure->fields.faceTextureRect.fields.m_XMin);
  if ( v132 == 6 )
    goto LABEL_127;
  *(_QWORD *)(v119 + 80) = *(_QWORD *)&inFigure->fields.faceTextureRect.fields.m_XMin;
  if ( v132 <= 7 )
    goto LABEL_127;
  v134 = inFigure->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v119 + 88) = inFigure->fields.faceTextureRect.fields.m_Width
                        + inFigure->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v119 + 92) = v134;
  if ( v132 == 8 )
    goto LABEL_127;
  *(_QWORD *)(v119 + 96) = 0;
  if ( v132 <= 9 )
    goto LABEL_127;
  *(_QWORD *)(v119 + 104) = 0;
  if ( v132 == 10 )
    goto LABEL_127;
  *(_QWORD *)(v119 + 112) = 0;
  if ( v132 <= 0xB )
    goto LABEL_127;
  *(_QWORD *)(v119 + 120) = 0;
  v135 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 12);
  v136 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v137 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v135 )
    goto LABEL_128;
  if ( !*(_DWORD *)(v135 + 24) )
    goto LABEL_127;
  *(float *)(v135 + 32) = v136;
  *(float *)(v135 + 36) = v137;
  v138 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v139 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v140 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v135 + 24) <= 1u )
    goto LABEL_127;
  *(float *)(v135 + 40) = v138 + v139;
  *(float *)(v135 + 44) = v140;
  v141 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v142 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v143 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v135 + 24) <= 2u )
    goto LABEL_127;
  *(float *)(v135 + 48) = v141;
  *(float *)(v135 + 52) = v142 - v143;
  v144 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v145 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v146 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v147 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  v148 = *(_DWORD *)(v135 + 24);
  if ( v148 <= 3 )
    goto LABEL_127;
  *(float *)(v135 + 56) = v144 + v145;
  *(float *)(v135 + 60) = v146 - v147;
  if ( v148 == 4 )
    goto LABEL_127;
  v149 = inFigure->fields.faceTextureRect.fields.m_Height + inFigure->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v135 + 64) = inFigure->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v135 + 68) = v149;
  if ( v148 <= 5 )
    goto LABEL_127;
  *(float32x2_t *)(v135 + 72) = vadd_f32(
                                  *(float32x2_t *)&inFigure->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&inFigure->fields.faceTextureRect.fields.m_XMin);
  if ( v148 == 6 )
    goto LABEL_127;
  *(_QWORD *)(v135 + 80) = *(_QWORD *)&inFigure->fields.faceTextureRect.fields.m_XMin;
  if ( v148 <= 7 )
    goto LABEL_127;
  v150 = inFigure->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v135 + 88) = inFigure->fields.faceTextureRect.fields.m_Width
                        + inFigure->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v135 + 92) = v150;
  if ( v148 == 8 )
    goto LABEL_127;
  v151 = inFigure->fields.faceTextureRect.fields.m_Height + inFigure->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v135 + 96) = inFigure->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v135 + 100) = v151;
  if ( v148 <= 9 )
    goto LABEL_127;
  *(float32x2_t *)(v135 + 104) = vadd_f32(
                                   *(float32x2_t *)&inFigure->fields.faceTextureRect.fields.m_Width,
                                   *(float32x2_t *)&inFigure->fields.faceTextureRect.fields.m_XMin);
  if ( v148 == 10 )
    goto LABEL_127;
  *(_QWORD *)(v135 + 112) = *(_QWORD *)&inFigure->fields.faceTextureRect.fields.m_XMin;
  if ( v148 <= 0xB )
    goto LABEL_127;
  v152 = inFigure->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v135 + 120) = inFigure->fields.faceTextureRect.fields.m_Width
                         + inFigure->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v135 + 124) = v152;
  if ( !v68 )
    goto LABEL_128;
  UnityEngine_Mesh__set_vertices(v68, (UnityEngine_Vector3_array *)v69, 0);
  UnityEngine_Mesh__set_normals(v68, (UnityEngine_Vector3_array *)v93, 0);
  UnityEngine_Mesh__set_uv(v68, (UnityEngine_Vector2_array *)v119, 0);
  UnityEngine_Mesh__set_uv2(v68, (UnityEngine_Vector2_array *)v135, 0);
  v153 = (System_Array_o *)sub_1C37100(int___TypeInfo, 30);
  v154.fields.value = Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131;
  v155 = (System_Int32_array *)v153;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v153, v154, 0);
  UnityEngine_Mesh__set_triangles(v68, v155, 0);
  UnityEngine_Mesh__RecalculateNormals(v68, 0);
  UnityEngine_Mesh__RecalculateBounds(v68, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v68, 0);
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
    sub_1C372B4(bodyFilter);
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
    sub_1C372B4(bodyFilter);
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
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localScale(transform, v7, 0);
}


void UIStandFigureM__SetTexture(UIStandFigureM_o *this, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  _BOOL4 loadRequiredResource; // w21
  struct UnityEngine_Texture2D_array *TextureList; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4C448D5 & 1) == 0 )
  {
    sub_1C37058(&UIStandFigureRender_TypeInfo);
    byte_4C448D5 = 1;
  }
  assetData = this->fields.assetData;
  loadRequiredResource = this->fields.loadRequiredResource;
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  TextureList = UIStandFigureRender__GetTextureList(assetData, loadRequiredResource, 0);
  this->fields.textureList = TextureList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.textureList, (int32_t)TextureList, v6, v7);
  this->fields.faceTextureSelect = 0;
  UIStandFigureM__SetTextureStatus(this, v8);
}


void UIStandFigureM__SetTextureStatus(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  UIStandFigureRender__SetCharacterRender((UIStandFigureRender_o *)this, 0);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0
    || (v4.fields.y = this->fields.dispTop.fields.y,
        v4.fields.x = this->fields.dispTop.fields.x,
        v4.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.faceFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_1C372B4(bodyFilter);
  }
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
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
  if ( (byte_4C448D9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16217/*"_FadeFactor"*/);
    byte_4C448D9 = 1;
  }
  if ( this->fields.isCrossFade )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
      sub_1C372B4(bodyRenderer);
    }
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16217/*"_FadeFactor"*/, a, 0);
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