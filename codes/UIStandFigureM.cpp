void UIStandFigureM___ctor(UIStandFigureM_o *this, const MethodInfo *method)
{
  if ( (byte_593A017 & 1) == 0 )
  {
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A017 = 1;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
  UIStandFigureRender___ctor((UIStandFigureRender_o *)this, 0);
}


void UIStandFigureM__Dispose(UIStandFigureM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_593A00A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A00A = 1;
  }
  UIStandFigureM__ReleaseCharacter(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void UIStandFigureM__EndLoadAsset(UIStandFigureM_o *this, AssetData_o *assetData, const MethodInfo *method)
{
  UIStandFigureM_o *v4; // x19
  System_String_o *loadName; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  AssetData_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Action_o *callbackFunc; // x20

  v4 = this;
  if ( (byte_593A00F & 1) == 0 )
  {
    this = (UIStandFigureM_o *)sub_21FFC50(&AssetManager_TypeInfo);
    byte_593A00F = 1;
  }
  loadName = v4->fields.loadName;
  if ( loadName )
  {
    if ( !assetData || (this = (UIStandFigureM_o *)assetData->fields.name) == 0 )
      sub_21FFECC(this, loadName);
    if ( System_String__Equals_75473208((System_String_o *)this, loadName, 0) )
    {
      v12 = v4->fields.assetData;
      v4->fields.loadName = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.loadName, 0, v6, v7, v8, v9, v10, v11);
      v4->fields.assetData = assetData;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v4->fields.assetData,
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
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
        AssetManager__releaseAsset_47465556(v12, 0);
      }
      callbackFunc = v4->fields.callbackFunc;
      if ( callbackFunc )
      {
        v4->fields.callbackFunc = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_593A016 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A016 = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIStandFigureM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_21FFECC(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIStandFigureM__GetBodySubTexture(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_593A015 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16976/*"_SubTex"*/);
    byte_593A015 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_21FFECC(bodyRenderer, method);
  }
  return UnityEngine_Material__GetTexture(
           (UnityEngine_Material_o *)bodyRenderer,
           (System_String_o *)StringLiteral_16976/*"_SubTex"*/,
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_String_o *v30; // x1
  Il2CppClass **v31; // x0
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF

  v33 = imageId;
  if ( (byte_593A00E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&StringLiteral_17270/*"a"*/);
    byte_593A00E = 1;
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
                            (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    FaceImageNameByFaceType,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    FaceImageNameByFaceType->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v10;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  v8 = System_String__Concat_75438412((System_String_o *)v10, (System_String_o *)StringLiteral_17270/*"a"*/, 0);
  v27 = FaceImageNameByFaceType->fields._items;
  v28 = Method_System_Collections_Generic_List_string__Add__;
  ++FaceImageNameByFaceType->fields._version;
  if ( !v27 )
LABEL_14:
    sub_21FFECC(v8, v9);
  v29 = FaceImageNameByFaceType->fields._size;
  v30 = v8;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      FaceImageNameByFaceType,
      (Il2CppObject *)v8,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v27->obj.klass + v29;
    FaceImageNameByFaceType->fields._size = v29 + 1;
    v31[4] = (Il2CppClass *)v30;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  FaceImageNameByFaceType,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t UIStandFigureM__GetTexturePosition(
        UIStandFigureM_o *this,
        int32_t faceType,
        UnityEngine_Vector2Int_o faceTextureSize,
        const MethodInfo *method)
{
  unsigned int v6; // w8
  unsigned int v7; // w8

  if ( (byte_593A011 & 1) == 0 )
  {
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A011 = 1;
  }
  if ( faceTextureSize.fields.m_X < 1 || *(__int64 *)&faceTextureSize <= 0 )
  {
    if ( faceType >= 5 )
    {
      v6 = (unsigned int)(faceType - 5) >> 4;
      goto LABEL_12;
    }
  }
  else
  {
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&faceType);
    if ( faceType >= 1 )
    {
      v6 = (faceType - 1)
         / (UIStandFigureRender_TypeInfo->static_fields->NORMAL_MAIN_SIZE_X
          / faceTextureSize.fields.m_X
          * (UIStandFigureRender_TypeInfo->static_fields->NORMAL_MAIN_SIZE_Y
           / faceTextureSize.fields.m_Y));
LABEL_12:
      v7 = v6 + 1;
      return 2 * v7;
    }
  }
  v7 = 0;
  return 2 * v7;
}


bool UIStandFigureM__IsEnableCrossFade(
        UIStandFigureM_o *this,
        UIStandFigureM_o *inFigure,
        UIStandFigureM_o *outFigure,
        const MethodInfo *method)
{
  _BOOL4 isWide; // w8

  if ( !inFigure || !outFigure )
    sub_21FFECC(this, inFigure);
  isWide = outFigure->fields.isWide;
  if ( __PAIR64__(inFigure->fields.isHigh, inFigure->fields.isWide) != __PAIR64__(outFigure->fields.isHigh, isWide) )
  {
    if ( inFigure->fields.isWide )
    {
      if ( inFigure->fields.isHigh || isWide )
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
  __int64 v3; // x1
  AssetData_o *assetData; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *loadName; // x20
  MissionNaviTransitionBoardItem_o *p_loadName; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593A00B & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_593A00B = 1;
  }
  UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)this, 0);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAsset_47465556(assetData, 0);
    this->fields.assetData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v5, v6, v7, v8, v9, v10);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (MissionNaviTransitionBoardItem_o *)&this->fields.loadName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_21FFBF4(p_loadName, 0, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_593A00C & 1) == 0 )
  {
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    byte_593A00C = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  UIStandFigureM__SetCharacter_50984376(this, svtId, ImageLimitCount, faceType, 0, callbackFunc, 0, v13);
}


bool UIStandFigureM__SetCharacter_50984376(
        UIStandFigureM_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        int32_t formId,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x23
  int v11; // w25
  int32_t v12; // w26
  System_String_o *AssetNameByForm; // x0
  System_String_o *v16; // x22
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t Id; // w8
  System_String_o *loadName; // x0
  MissionNaviTransitionBoardItem_o *p_loadName; // x24
  __int64 v28; // x1
  System_Delegate_o *v29; // x0
  UIStandFigureM_c *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  void *v37; // x8
  System_Action_c *v38; // x1
  struct AssetData_o *assetData; // x8
  const MethodInfo *v40; // x1
  System_String_o *klass; // x23
  System_Delegate_o *v42; // x0
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  const MethodInfo *v48; // x3
  System_String_o *v49; // x21
  System_String_array *RequiredResourceNames; // x20
  AssetLoader_LoadEndDataHandler_o *v51; // x22
  __int64 v52; // x1
  AssetLoader_LoadEndDataHandler_o *v54; // x20
  __int64 v55; // x1
  int32_t imageLimitCounta; // [xsp+8h] [xbp-48h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-44h] BYREF

  p_callbackFunc = (struct System_Action_o **)(unsigned int)formId;
  v11 = imageLimitCount;
  v12 = svtId;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_593A00D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UIStandFigureM_EndLoadAsset__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A00D = 1;
  }
  if ( (_DWORD)p_callbackFunc )
    AssetNameByForm = StandFigureManager__GetAssetNameByForm(v12, v11, (int32_t)p_callbackFunc, 0);
  else
    AssetNameByForm = StandFigureManager__GetAssetName_47677540(v12, v11, 0);
  v16 = AssetNameByForm;
  if ( v11 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_43;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
    v11 = imageLimitCounta;
    v12 = svtIda;
  }
  Id = ServantScriptMaster__getId(v12, v11, 0);
  loadName = this->fields.loadName;
  this->fields.faceType = faceType;
  p_loadName = (MissionNaviTransitionBoardItem_o *)&this->fields.loadName;
  this->fields.imageId = Id;
  this->fields.formId = (int)p_callbackFunc;
  if ( loadName )
  {
    if ( System_String__Equals_75473208(loadName, v16, 0) )
    {
      if ( callbackFunc )
      {
        v29 = (System_Delegate_o *)this->fields.callbackFunc;
        this = (UIStandFigureM_o *)((char *)this + 664);
        v30 = (UIStandFigureM_c *)System_Delegate__Combine(v29, (System_Delegate_o *)callbackFunc, 0);
        v37 = v30;
        if ( v30 )
        {
          v38 = System_Action_TypeInfo;
          if ( v30->_1.image != System_Action_TypeInfo )
            goto LABEL_29;
          this->klass = v30;
          if ( v30->_1.image != v38 )
            goto LABEL_29;
        }
        else
        {
          this->klass = 0;
        }
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)this, (int32_t)v30, v31, v32, v33, v34, v35, v36);
      }
      return 1;
    }
    klass = (System_String_o *)p_loadName->klass;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
    AssetManager__releaseAssetStorage(klass, 0);
    goto LABEL_25;
  }
  assetData = this->fields.assetData;
  if ( !assetData )
    goto LABEL_25;
  Instance = (Il2CppObject *)assetData->fields.name;
  if ( !Instance )
LABEL_43:
    sub_21FFECC(Instance, v18);
  if ( System_String__Equals_75473208((System_String_o *)Instance, v16, 0) )
  {
    UIStandFigureM__SetTextureStatus(this, v40);
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
  v42 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v37 = v42;
  if ( !v42 )
    goto LABEL_30;
  v38 = System_Action_TypeInfo;
  if ( (System_Action_c *)v42->klass == System_Action_TypeInfo )
  {
    *p_callbackFunc = (struct System_Action_o *)v42;
    if ( (System_Action_c *)v42->klass == v38 )
      goto LABEL_31;
  }
LABEL_29:
  sub_220024C(v37, v38, v31);
LABEL_30:
  *p_callbackFunc = 0;
LABEL_31:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_callbackFunc, (int32_t)v37, v31, v43, v44, v45, v46, v47);
LABEL_32:
  this->fields.loadName = v16;
  sub_21FFBF4(p_loadName, (int32_t)v16, v19, v20, v21, v22, v23, v24);
  v49 = this->fields.loadName;
  this->fields.loadRequiredResource = loadRequiredResource;
  if ( loadRequiredResource )
  {
    RequiredResourceNames = UIStandFigureM__GetRequiredResourceNames(
                              this,
                              this->fields.imageId,
                              this->fields.faceType,
                              v48);
    v51 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v51, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v52);
    return AssetManager__loadResourcesFromAssetStorage(v49, RequiredResourceNames, v51, 1, 0);
  }
  else
  {
    v54 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v54, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v55);
    return AssetManager__loadAssetStorage(v49, v54, 1, 0, 0);
  }
}


bool UIStandFigureM__SetCharacter_50985276(
        UIStandFigureM_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return UIStandFigureM__SetCharacter_50984376(
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
    sub_21FFECC(this, inFigure);
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
  float v29; // s0 OVERLAPPED
  float v30; // s1
  System_String_o *v31; // x1
  float v32; // s2
  float v33; // s3
  struct UnityEngine_Texture2D_array *v34; // x27
  float v35; // s12
  float v36; // s13
  float v37; // s14
  float v38; // s15
  float v39; // s8
  float v40; // s9
  float v41; // s10
  float v42; // s11
  UnityEngine_Vector2Int_o v43; // x2
  UIStandFigureM_o *v44; // x0
  const MethodInfo *v45; // x3
  int v46; // w25
  float v47; // s0 OVERLAPPED
  float v48; // s1
  System_String_o *v49; // x1
  float v50; // s2
  float v51; // s3
  float x; // s8
  float v53; // s9
  int v54; // w25
  float y; // s10
  float v56; // s11
  int v57; // w0
  int v58; // w23
  UIStandFigureM_o *v59; // x8
  int v60; // w21
  int v61; // w21
  float v62; // s3
  float v63; // s1
  float v64; // s2
  float v65; // s0 OVERLAPPED
  int v66; // w21
  int v67; // w0
  UnityEngine_Mesh_o *v68; // x21
  __int64 v69; // x22
  int32_t LeftX; // w23
  int32_t RightX; // w23
  int32_t v72; // w23
  int32_t v73; // w23
  UIStandFigureM_o *v74; // x23
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v77; // s1
  float32x2_t *v78; // x10
  float v79; // s1
  float32x2_t *v80; // x10
  int32_t v81; // s1
  float32x2_t *v82; // x8
  float v83; // s1
  __int64 v84; // x24
  float BodyU; // s8
  float BodyV; // s0
  float v87; // s8
  float BodyW; // s9
  float v89; // s0
  float v90; // s8
  float v91; // s9
  float BodyH; // s0
  float v93; // s8
  float v94; // s9
  float v95; // s10
  float v96; // s0
  __int64 v97; // x25
  float v98; // s8
  float v99; // s0
  float v100; // s8
  float v101; // s9
  float v102; // s0
  float v103; // s8
  float v104; // s9
  float v105; // s0
  float v106; // s8
  float v107; // s9
  float v108; // s10
  float v109; // s0
  System_Array_o *v110; // x0
  System_RuntimeFieldHandle_o v111; // x1
  System_Int32_array *v112; // x22
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_593A013 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Mesh_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    sub_21FFC50(&StringLiteral_5097/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_21FFC50(&StringLiteral_16880/*"_MainTex2"*/);
    sub_21FFC50(&StringLiteral_16825/*"_FaceTex2"*/);
    sub_21FFC50(&StringLiteral_16817/*"_FaceInfo2"*/);
    sub_21FFC50(&StringLiteral_16813/*"_FaceAlphaTex2"*/);
    sub_21FFC50(&StringLiteral_5095/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_21FFC50(&StringLiteral_16816/*"_FaceInfo"*/);
    sub_21FFC50(&StringLiteral_16826/*"_FaceTexOffset"*/);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    sub_21FFC50(&StringLiteral_17023/*"_UvRangeX"*/);
    sub_21FFC50(&StringLiteral_16827/*"_FaceTexOffset2"*/);
    sub_21FFC50(&StringLiteral_25046/*"summon"*/);
    sub_21FFC50(&StringLiteral_16977/*"_SubTex2"*/);
    sub_21FFC50(&StringLiteral_16976/*"_SubTex"*/);
    sub_21FFC50(&StringLiteral_5096/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_21FFC50(&StringLiteral_16927/*"_PositionOffset"*/);
    sub_21FFC50(&StringLiteral_16812/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_21FFC50(&StringLiteral_16824/*"_FaceTex"*/);
    byte_593A013 = 1;
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
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25046/*"summon"*/, 0) )
  {
    v13 = (System_String_o **)&StringLiteral_5095/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v11 != v12 )
      v13 = (System_String_o **)&StringLiteral_5096/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_5097/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v14 = UnityEngine_Shader__Find(*v13, 0);
  v15 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16880/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  if ( (v16->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16977/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  faceTextureSize = inFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v26, inFigure->fields.faceType, faceTextureSize, v27);
  if ( (unsigned int)this >= LODWORD(v16->max_length) )
    goto LABEL_96;
  v28 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16825/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[(int)this],
    0);
  if ( (unsigned int)(v28 + 1) >= LODWORD(v16->max_length) )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16813/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[v28 + 1],
    0);
  UIWidget__set_color((UIWidget_o *)v8, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16781/*"_Color"*/, v8->fields.mColor, 0);
  if ( inFigure->fields.faceType )
  {
    v114.fields.x = m_XMin;
    v114.fields.y = m_YMin;
    v114.fields.z = m_Width;
    v114.fields.w = m_Height;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16817/*"_FaceInfo2"*/, v114, 0);
    v29 = v21;
    v30 = v22;
    v31 = (System_String_o *)StringLiteral_16827/*"_FaceTexOffset2"*/;
    v32 = v23;
    v33 = v24;
  }
  else
  {
    v115.fields.x = 0.0;
    v115.fields.y = 0.0;
    v115.fields.z = 0.0;
    v115.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16817/*"_FaceInfo2"*/, v115, 0);
    v31 = (System_String_o *)StringLiteral_16827/*"_FaceTexOffset2"*/;
    v29 = 0.0;
    v30 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
  }
  UnityEngine_Material__SetVector(v15, v31, *(UnityEngine_Vector4_o *)&v29, 0);
  v34 = outFigure->fields.textureList;
  if ( !v34 )
    goto LABEL_97;
  if ( !LODWORD(v34->max_length) )
    goto LABEL_96;
  v35 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v36 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v37 = outFigure->fields.faceTextureRect.fields.m_Width;
  v38 = outFigure->fields.faceTextureRect.fields.m_Height;
  v39 = outFigure->fields.faceRect.fields.m_XMin;
  v40 = outFigure->fields.faceRect.fields.m_YMin;
  v41 = outFigure->fields.faceRect.fields.m_Width;
  v42 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16879/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[0],
    0);
  if ( (v34->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16976/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[1],
    0);
  v43 = outFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v44, outFigure->fields.faceType, v43, v45);
  if ( (unsigned int)this >= LODWORD(v34->max_length) )
    goto LABEL_96;
  v46 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16824/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[(int)this],
    0);
  if ( (unsigned int)(v46 + 1) >= LODWORD(v34->max_length) )
    goto LABEL_96;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16812/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[v46 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v116.fields.x = v35;
    v116.fields.y = v36;
    v116.fields.z = v37;
    v116.fields.w = v38;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16816/*"_FaceInfo"*/, v116, 0);
    v47 = v39;
    v48 = v40;
    v49 = (System_String_o *)StringLiteral_16826/*"_FaceTexOffset"*/;
    v50 = v41;
    v51 = v42;
  }
  else
  {
    v117.fields.x = 0.0;
    v117.fields.y = 0.0;
    v117.fields.z = 0.0;
    v117.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16816/*"_FaceInfo"*/, v117, 0);
    v49 = (System_String_o *)StringLiteral_16826/*"_FaceTexOffset"*/;
    v47 = 0.0;
    v48 = 0.0;
    v50 = 0.0;
    v51 = 0.0;
  }
  UnityEngine_Material__SetVector(v15, v49, *(UnityEngine_Vector4_o *)&v47, 0);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_96;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_97;
  x = outFigure->fields.dispOffset.fields.x;
  v53 = inFigure->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_96;
  v54 = (int)this;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_97;
  y = outFigure->fields.dispOffset.fields.y;
  v56 = inFigure->fields.dispOffset.fields.y;
  v57 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v118.fields.w = 0.0;
  v118.fields.x = (float)(x - v53) / (float)v54;
  v118.fields.y = (float)(y - v56) / (float)v57;
  v118.fields.z = 0.0;
  UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16927/*"_PositionOffset"*/, v118, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_97;
  v113.fields.z = 0.0;
  v113.fields.y = outFigure->fields.dispOffset.fields.y;
  v113.fields.x = outFigure->fields.dispOffset.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v113, 0);
  if ( v11 == v12 )
  {
    *(_WORD *)&v8->fields.isWide = *(_WORD *)&inFigure->fields.isWide;
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
    if ( !LODWORD(v34->max_length) )
      goto LABEL_96;
    v58 = (int)this;
    this = (UIStandFigureM_o *)v34->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    v59 = v58 >= (int)this ? inFigure : outFigure;
    *(_WORD *)&v8->fields.isWide = *(_WORD *)&v59->fields.isWide;
    if ( !LODWORD(v16->max_length) )
      goto LABEL_96;
    this = (UIStandFigureM_o *)v16->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v34->max_length) )
      goto LABEL_96;
    v60 = (int)this;
    this = (UIStandFigureM_o *)v34->m_Items[0];
    if ( !this )
      goto LABEL_97;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v60 >= (int)this )
    {
      if ( !LODWORD(v34->max_length) )
        goto LABEL_96;
      this = (UIStandFigureM_o *)v34->m_Items[0];
      if ( !this )
        goto LABEL_97;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v16->max_length) )
        goto LABEL_96;
      v66 = (int)this;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_97;
      v67 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
              this,
              this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v64 = 0.0;
      v62 = 1.0;
      v63 = (float)v66 / (float)v67;
      v65 = v63 * 0.5;
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
      if ( !LODWORD(v34->max_length) )
        goto LABEL_96;
      v61 = (int)this;
      this = (UIStandFigureM_o *)v34->m_Items[0];
      if ( !this )
        goto LABEL_97;
      v62 = (float)v61
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v63 = 1.0;
      v64 = v62 * 0.5;
      v65 = 0.0;
    }
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_17023/*"_UvRangeX"*/, *(UnityEngine_Vector4_o *)&v65, 0);
  }
  v68 = (UnityEngine_Mesh_o *)sub_21FFEBC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v68, 0);
  v69 = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( !v69 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v69 + 24) )
    goto LABEL_96;
  *(_DWORD *)(v69 + 40) = 0;
  *(float *)(v69 + 32) = (float)LeftX;
  *(float *)(v69 + 36) = (float)(int)this;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( (*(_DWORD *)(v69 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_96;
  *(_DWORD *)(v69 + 52) = 0;
  *(float *)(v69 + 44) = (float)RightX;
  *(float *)(v69 + 48) = (float)(int)this;
  v72 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v69 + 24) <= 2u
    || (*(_DWORD *)(v69 + 64) = 0,
        *(float *)(v69 + 56) = (float)v72,
        *(float *)(v69 + 60) = (float)(int)this,
        v73 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0),
        this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0),
        (*(_DWORD *)(v69 + 24) & 0xFFFFFFFC) == 0) )
  {
LABEL_96:
    sub_21FFED4(this);
  }
  *(_DWORD *)(v69 + 76) = 0;
  *(float *)(v69 + 68) = (float)v73;
  *(float *)(v69 + 72) = (float)(int)this;
  this = (UIStandFigureM_o *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
  v74 = this;
  if ( !byte_5931949 )
  {
    this = (UIStandFigureM_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931949 = 1;
  }
  if ( !v74 )
LABEL_97:
    sub_21FFECC(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v74->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_96;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v77 = -static_fields[10].n64_f32[0];
  v74->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v74->fields.rightAnchor = v77;
  if ( (m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_96;
  v78 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v79 = -v78[10].n64_f32[0];
  *(float32x2_t *)((char *)&v74->fields.rightAnchor + 4) = vneg_f32(v78[9]);
  *((float *)&v74->fields.bottomAnchor + 1) = v79;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_96;
  v80 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v81 = -v80[10].n64_f32[0];
  v74->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v80[9]).n64_u64[0];
  v74->fields.updateAnchors = v81;
  if ( (m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    goto LABEL_96;
  v82 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v83 = -v82[10].n64_f32[0];
  *(float32x2_t *)(&v74->fields.updateAnchors + 1) = vneg_f32(v82[9]);
  *((float *)&v74->fields.mGo + 1) = v83;
  v84 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v84 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v84 + 24) )
    goto LABEL_96;
  *(float *)(v84 + 32) = BodyU;
  *(float *)(v84 + 36) = BodyV;
  v87 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v89 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( (*(_DWORD *)(v84 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_96;
  *(float *)(v84 + 40) = v87 + BodyW;
  *(float *)(v84 + 44) = v89;
  v90 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v91 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v84 + 24) <= 2u )
    goto LABEL_96;
  *(float *)(v84 + 48) = v90;
  *(float *)(v84 + 52) = v91 - BodyH;
  v93 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v94 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v95 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v96 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( (*(_DWORD *)(v84 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_96;
  *(float *)(v84 + 56) = v93 + v94;
  *(float *)(v84 + 60) = v95 - v96;
  v97 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  v98 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v99 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( !v97 )
    goto LABEL_97;
  if ( !*(_DWORD *)(v97 + 24) )
    goto LABEL_96;
  *(float *)(v97 + 32) = v98;
  *(float *)(v97 + 36) = v99;
  v100 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v101 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v102 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  if ( (*(_DWORD *)(v97 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_96;
  *(float *)(v97 + 40) = v100 + v101;
  *(float *)(v97 + 44) = v102;
  v103 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v104 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v105 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v97 + 24) <= 2u )
    goto LABEL_96;
  *(float *)(v97 + 48) = v103;
  *(float *)(v97 + 52) = v104 - v105;
  v106 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v8, 0);
  v107 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v8, 0);
  v108 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v8, 0);
  v109 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v8, 0);
  if ( (*(_DWORD *)(v97 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_96;
  *(float *)(v97 + 56) = v106 + v107;
  *(float *)(v97 + 60) = v108 - v109;
  if ( !v68 )
    goto LABEL_97;
  UnityEngine_Mesh__set_vertices(v68, (UnityEngine_Vector3_array *)v69, 0);
  UnityEngine_Mesh__set_normals(v68, (UnityEngine_Vector3_array *)v74, 0);
  UnityEngine_Mesh__set_uv(v68, (UnityEngine_Vector2_array *)v84, 0);
  UnityEngine_Mesh__set_uv2(v68, (UnityEngine_Vector2_array *)v97, 0);
  v110 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 6);
  v111.fields.value = Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E;
  v112 = (System_Int32_array *)v110;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v110, v111, 0);
  UnityEngine_Mesh__set_triangles(v68, v112, 0);
  UnityEngine_Mesh__RecalculateNormals(v68, 0);
  UnityEngine_Mesh__RecalculateBounds(v68, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_97;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v68, 0);
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
  UnityEngine_Vector2Int_o faceTextureSize; // x2
  UIStandFigureM_o *v26; // x0
  const MethodInfo *v27; // x3
  int v28; // w25
  float v29; // s0 OVERLAPPED
  float v30; // s1
  System_String_o *v31; // x1
  float v32; // s2
  float v33; // s3
  struct UnityEngine_Texture2D_array *v34; // x27
  float v35; // s12
  float v36; // s13
  float v37; // s14
  float v38; // s15
  float v39; // s8
  float v40; // s9
  float v41; // s10
  float v42; // s11
  UnityEngine_Vector2Int_o v43; // x2
  UIStandFigureM_o *v44; // x0
  const MethodInfo *v45; // x3
  int v46; // w25
  float v47; // s0 OVERLAPPED
  float v48; // s1
  System_String_o *v49; // x1
  float v50; // s2
  float v51; // s3
  float x; // s8
  float v53; // s9
  int v54; // w25
  float y; // s10
  float v56; // s11
  int v57; // w0
  int v58; // w23
  int v59; // w22
  int v60; // w22
  float v61; // s3
  float v62; // s1
  float v63; // s2
  float v64; // s0 OVERLAPPED
  int v65; // w22
  int v66; // w0
  UnityEngine_Mesh_o *v67; // x22
  __int64 v68; // x23
  int32_t LeftX; // w24
  int32_t RightX; // w24
  int32_t v71; // w24
  int32_t v72; // w24
  unsigned int v73; // w8
  float v74; // s0
  float v75; // s1
  float32x2_t v76; // d0
  float32x2_t v77; // d1
  __int64 v78; // d0
  float v79; // s0
  float v80; // s1
  float v81; // s0
  float v82; // s1
  float32x2_t v83; // d0
  float32x2_t v84; // d1
  __int64 v85; // d0
  float v86; // s0
  float v87; // s1
  UIStandFigureM_o *v88; // x24
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v91; // s1
  float32x2_t *v92; // x10
  float v93; // s1
  float32x2_t *v94; // x10
  int32_t v95; // s1
  float32x2_t *v96; // x10
  float v97; // s1
  float32x2_t *v98; // x10
  float v99; // s1
  float32x2_t *v100; // x10
  int32_t v101; // s1
  float32x2_t *v102; // x10
  float v103; // s1
  float32x2_t *v104; // x10
  float v105; // s1
  float32x2_t *v106; // x10
  float v107; // s1
  float32x2_t *v108; // x10
  float v109; // s1
  float32x2_t *v110; // x10
  float v111; // s1
  float32x2_t *v112; // x8
  int32_t v113; // s1
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
  float v129; // s1
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
  float v145; // s1
  float v146; // s0
  float v147; // s1
  System_Array_o *v148; // x0
  System_RuntimeFieldHandle_o v149; // x1
  System_Int32_array *v150; // x20
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = inFigure;
  v8 = this;
  if ( (byte_593A012 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Mesh_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    sub_21FFC50(&StringLiteral_5097/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_21FFC50(&StringLiteral_16880/*"_MainTex2"*/);
    sub_21FFC50(&StringLiteral_16825/*"_FaceTex2"*/);
    sub_21FFC50(&StringLiteral_16817/*"_FaceInfo2"*/);
    sub_21FFC50(&StringLiteral_16813/*"_FaceAlphaTex2"*/);
    sub_21FFC50(&StringLiteral_5095/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_21FFC50(&StringLiteral_16816/*"_FaceInfo"*/);
    sub_21FFC50(&StringLiteral_16826/*"_FaceTexOffset"*/);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    sub_21FFC50(&StringLiteral_17023/*"_UvRangeX"*/);
    sub_21FFC50(&StringLiteral_16827/*"_FaceTexOffset2"*/);
    sub_21FFC50(&StringLiteral_25046/*"summon"*/);
    sub_21FFC50(&StringLiteral_16977/*"_SubTex2"*/);
    sub_21FFC50(&StringLiteral_16976/*"_SubTex"*/);
    sub_21FFC50(&StringLiteral_5096/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_21FFC50(&StringLiteral_16927/*"_PositionOffset"*/);
    sub_21FFC50(&StringLiteral_16812/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_21FFC50(&StringLiteral_16824/*"_FaceTex"*/);
    byte_593A012 = 1;
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
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25046/*"summon"*/, 0) )
  {
    v13 = (System_String_o **)&StringLiteral_5095/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v11 != v12 )
      v13 = (System_String_o **)&StringLiteral_5096/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_5097/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v14 = UnityEngine_Shader__Find(*v13, 0);
  v15 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16880/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  if ( (v16->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16977/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  faceTextureSize = v7->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v26, v7->fields.faceType, faceTextureSize, v27);
  if ( (unsigned int)this >= LODWORD(v16->max_length) )
    goto LABEL_127;
  v28 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16825/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[(int)this],
    0);
  if ( (unsigned int)(v28 + 1) >= LODWORD(v16->max_length) )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16813/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v16->m_Items[v28 + 1],
    0);
  UIWidget__set_color((UIWidget_o *)v8, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16781/*"_Color"*/, v8->fields.mColor, 0);
  if ( v7->fields.faceType )
  {
    v152.fields.x = m_XMin;
    v152.fields.y = m_YMin;
    v152.fields.z = m_Width;
    v152.fields.w = m_Height;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16817/*"_FaceInfo2"*/, v152, 0);
    v29 = v21;
    v30 = v22;
    v31 = (System_String_o *)StringLiteral_16827/*"_FaceTexOffset2"*/;
    v32 = v23;
    v33 = v24;
  }
  else
  {
    v153.fields.x = 0.0;
    v153.fields.y = 0.0;
    v153.fields.z = 0.0;
    v153.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16817/*"_FaceInfo2"*/, v153, 0);
    v31 = (System_String_o *)StringLiteral_16827/*"_FaceTexOffset2"*/;
    v29 = 0.0;
    v30 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
  }
  UnityEngine_Material__SetVector(v15, v31, *(UnityEngine_Vector4_o *)&v29, 0);
  v34 = outFigure->fields.textureList;
  if ( !v34 )
    goto LABEL_128;
  if ( !LODWORD(v34->max_length) )
    goto LABEL_127;
  v35 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v36 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v37 = outFigure->fields.faceTextureRect.fields.m_Width;
  v38 = outFigure->fields.faceTextureRect.fields.m_Height;
  v39 = outFigure->fields.faceRect.fields.m_XMin;
  v40 = outFigure->fields.faceRect.fields.m_YMin;
  v41 = outFigure->fields.faceRect.fields.m_Width;
  v42 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16879/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[0],
    0);
  if ( (v34->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16976/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[1],
    0);
  v43 = outFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v44, outFigure->fields.faceType, v43, v45);
  if ( (unsigned int)this >= LODWORD(v34->max_length) )
    goto LABEL_127;
  v46 = (int)this;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16824/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[(int)this],
    0);
  if ( (unsigned int)(v46 + 1) >= LODWORD(v34->max_length) )
    goto LABEL_127;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16812/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v34->m_Items[v46 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v154.fields.x = v35;
    v154.fields.y = v36;
    v154.fields.z = v37;
    v154.fields.w = v38;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16816/*"_FaceInfo"*/, v154, 0);
    v47 = v39;
    v48 = v40;
    v49 = (System_String_o *)StringLiteral_16826/*"_FaceTexOffset"*/;
    v50 = v41;
    v51 = v42;
  }
  else
  {
    v155.fields.x = 0.0;
    v155.fields.y = 0.0;
    v155.fields.z = 0.0;
    v155.fields.w = 0.0;
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16816/*"_FaceInfo"*/, v155, 0);
    v49 = (System_String_o *)StringLiteral_16826/*"_FaceTexOffset"*/;
    v47 = 0.0;
    v48 = 0.0;
    v50 = 0.0;
    v51 = 0.0;
  }
  UnityEngine_Material__SetVector(v15, v49, *(UnityEngine_Vector4_o *)&v47, 0);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_128;
  x = outFigure->fields.dispOffset.fields.x;
  v53 = v7->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v16->max_length) )
    goto LABEL_127;
  v54 = (int)this;
  this = (UIStandFigureM_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_128;
  y = outFigure->fields.dispOffset.fields.y;
  v56 = v7->fields.dispOffset.fields.y;
  v57 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v156.fields.w = 0.0;
  v156.fields.x = (float)(x - v53) / (float)v54;
  v156.fields.y = (float)(y - v56) / (float)v57;
  v156.fields.z = 0.0;
  UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_16927/*"_PositionOffset"*/, v156, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_128;
  v151.fields.z = 0.0;
  v151.fields.y = outFigure->fields.dispOffset.fields.y;
  v151.fields.x = outFigure->fields.dispOffset.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v151, 0);
  if ( v11 == v12 )
  {
    *(_WORD *)&v8->fields.isWide = *(_WORD *)&v7->fields.isWide;
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
    if ( !LODWORD(v34->max_length) )
      goto LABEL_127;
    v58 = (int)this;
    this = (UIStandFigureM_o *)v34->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v58 < (int)this )
      v7 = outFigure;
    *(_WORD *)&v8->fields.isWide = *(_WORD *)&v7->fields.isWide;
    if ( !LODWORD(v16->max_length) )
      goto LABEL_127;
    this = (UIStandFigureM_o *)v16->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v34->max_length) )
      goto LABEL_127;
    v59 = (int)this;
    this = (UIStandFigureM_o *)v34->m_Items[0];
    if ( !this )
      goto LABEL_128;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v59 >= (int)this )
    {
      if ( !LODWORD(v34->max_length) )
        goto LABEL_127;
      this = (UIStandFigureM_o *)v34->m_Items[0];
      if ( !this )
        goto LABEL_128;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v16->max_length) )
        goto LABEL_127;
      v65 = (int)this;
      this = (UIStandFigureM_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_128;
      v66 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
              this,
              this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v63 = 0.0;
      v61 = 1.0;
      v62 = (float)v65 / (float)v66;
      v64 = v62 * 0.5;
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
      if ( !LODWORD(v34->max_length) )
        goto LABEL_127;
      v60 = (int)this;
      this = (UIStandFigureM_o *)v34->m_Items[0];
      if ( !this )
        goto LABEL_128;
      v61 = (float)v60
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v62 = 1.0;
      v63 = v61 * 0.5;
      v64 = 0.0;
    }
    UnityEngine_Material__SetVector(v15, (System_String_o *)StringLiteral_17023/*"_UvRangeX"*/, *(UnityEngine_Vector4_o *)&v64, 0);
  }
  v67 = (UnityEngine_Mesh_o *)sub_21FFEBC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v67, 0);
  v68 = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 12);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( !v68 )
    goto LABEL_128;
  if ( !*(_DWORD *)(v68 + 24) )
    goto LABEL_127;
  *(_DWORD *)(v68 + 40) = 0;
  *(float *)(v68 + 32) = (float)LeftX;
  *(float *)(v68 + 36) = (float)(int)this;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v8, 0);
  if ( (*(_DWORD *)(v68 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_127;
  *(_DWORD *)(v68 + 52) = 0;
  *(float *)(v68 + 44) = (float)RightX;
  *(float *)(v68 + 48) = (float)(int)this;
  v71 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  if ( *(_DWORD *)(v68 + 24) <= 2u )
    goto LABEL_127;
  *(_DWORD *)(v68 + 64) = 0;
  *(float *)(v68 + 56) = (float)v71;
  *(float *)(v68 + 60) = (float)(int)this;
  v72 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v8, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v8, 0);
  v73 = *(_DWORD *)(v68 + 24);
  if ( v73 <= 3 )
    goto LABEL_127;
  *(_DWORD *)(v68 + 76) = 0;
  *(float *)(v68 + 68) = (float)v72;
  *(float *)(v68 + 72) = (float)(int)this;
  if ( v73 == 4 )
    goto LABEL_127;
  v74 = v7->fields.facePositionRect.fields.m_Height + v7->fields.facePositionRect.fields.m_YMin;
  v75 = v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v68 + 88) = 0;
  *(float *)(v68 + 80) = v75;
  *(float *)(v68 + 84) = v74;
  if ( v73 <= 5 )
    goto LABEL_127;
  v76.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_Width;
  v77.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v68 + 100) = 0;
  *(float32x2_t *)(v68 + 92) = vadd_f32(v76, v77);
  if ( v73 == 6 )
    goto LABEL_127;
  v78 = *(_QWORD *)&v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v68 + 112) = 0;
  *(_QWORD *)(v68 + 104) = v78;
  if ( v73 <= 7 )
    goto LABEL_127;
  v79 = v7->fields.facePositionRect.fields.m_Width + v7->fields.facePositionRect.fields.m_XMin;
  v80 = v7->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v68 + 124) = 0;
  *(float *)(v68 + 116) = v79;
  *(float *)(v68 + 120) = v80;
  if ( v73 == 8 )
    goto LABEL_127;
  v81 = v7->fields.facePositionRect.fields.m_Height + v7->fields.facePositionRect.fields.m_YMin;
  v82 = v7->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v68 + 136) = 0;
  *(float *)(v68 + 128) = v82;
  *(float *)(v68 + 132) = v81;
  if ( v73 <= 9
    || (v83.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_Width,
        v84.n64_u64[0] = *(unsigned __int64 *)&v7->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v68 + 148) = 0,
        *(float32x2_t *)(v68 + 140) = vadd_f32(v83, v84),
        v73 == 10)
    || (v85 = *(_QWORD *)&v7->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v68 + 160) = 0,
        *(_QWORD *)(v68 + 152) = v85,
        v73 <= 0xB) )
  {
LABEL_127:
    sub_21FFED4(this);
  }
  v86 = v7->fields.facePositionRect.fields.m_Width + v7->fields.facePositionRect.fields.m_XMin;
  v87 = v7->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v68 + 172) = 0;
  *(float *)(v68 + 164) = v86;
  *(float *)(v68 + 168) = v87;
  this = (UIStandFigureM_o *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 12);
  v88 = this;
  if ( !byte_5931949 )
  {
    this = (UIStandFigureM_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931949 = 1;
  }
  if ( !v88 )
LABEL_128:
    sub_21FFECC(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v88->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_127;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v91 = -static_fields[10].n64_f32[0];
  v88->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v88->fields.rightAnchor = v91;
  if ( (m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
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
  if ( (m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
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
  if ( (m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
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
  v114 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 12);
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
  if ( (*(_DWORD *)(v114 + 24) & 0xFFFFFFFE) == 0 )
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
  v130 = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 12);
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
  if ( (*(_DWORD *)(v130 + 24) & 0xFFFFFFFE) == 0 )
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
  if ( !v67 )
    goto LABEL_128;
  UnityEngine_Mesh__set_vertices(v67, (UnityEngine_Vector3_array *)v68, 0);
  UnityEngine_Mesh__set_normals(v67, (UnityEngine_Vector3_array *)v88, 0);
  UnityEngine_Mesh__set_uv(v67, (UnityEngine_Vector2_array *)v114, 0);
  UnityEngine_Mesh__set_uv2(v67, (UnityEngine_Vector2_array *)v130, 0);
  v148 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 30);
  v149.fields.value = Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131;
  v150 = (System_Int32_array *)v148;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v148, v149, 0);
  UnityEngine_Mesh__set_triangles(v67, v150, 0);
  UnityEngine_Mesh__RecalculateNormals(v67, 0);
  UnityEngine_Mesh__RecalculateBounds(v67, 0);
  this = (UIStandFigureM_o *)v8->fields.bodyFilter;
  if ( !this )
    goto LABEL_128;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v67, 0);
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
    || (v4.fields.z = 0.0,
        v4.fields.y = this->fields.dispOffset.fields.y,
        v4.fields.x = this->fields.dispOffset.fields.x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.faceFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_21FFECC(bodyFilter, method);
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
    sub_21FFECC(bodyFilter, method);
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
    sub_21FFECC(0, v7);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  if ( (byte_593A010 & 1) == 0 )
  {
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A010 = 1;
  }
  assetData = this->fields.assetData;
  loadRequiredResource = this->fields.loadRequiredResource;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
  TextureList = UIStandFigureRender__GetTextureList(assetData, loadRequiredResource, 0);
  this->fields.textureList = TextureList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)TextureList,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    || (v5.fields.z = 0.0,
        v5.fields.y = this->fields.dispTop.fields.y,
        v5.fields.x = this->fields.dispTop.fields.x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0),
        (bodyFilter = (UnityEngine_Component_o *)this->fields.faceFilter) == 0)
    || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
  {
    sub_21FFECC(bodyFilter, v3);
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
  if ( (byte_593A014 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16831/*"_FadeFactor"*/);
    byte_593A014 = 1;
  }
  if ( this->fields.isCrossFade )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
      sub_21FFECC(bodyRenderer, method);
    }
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16831/*"_FadeFactor"*/, a, 0);
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