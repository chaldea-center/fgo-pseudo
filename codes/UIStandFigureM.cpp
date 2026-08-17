void UIStandFigureM___ctor(UIStandFigureM_o *this, const MethodInfo *method)
{
  if ( (byte_59721EB & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_59721EB = 1;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
  UIStandFigureRender___ctor((UIStandFigureRender_o *)this, 0);
}


void UIStandFigureM__Dispose(UIStandFigureM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_59721DE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721DE = 1;
  }
  UIStandFigureM__ReleaseCharacter(this, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
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
  if ( (byte_59721E3 & 1) == 0 )
  {
    this = (UIStandFigureM_o *)sub_2213A60(&AssetManager_TypeInfo);
    byte_59721E3 = 1;
  }
  loadName = v4->fields.loadName;
  if ( loadName )
  {
    if ( !assetData || (this = (UIStandFigureM_o *)assetData->fields.name) == 0 )
      sub_2213CDC(this, loadName);
    if ( System_String__Equals_75686512((System_String_o *)this, loadName, 0) )
    {
      v12 = v4->fields.assetData;
      v4->fields.loadName = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.loadName, 0, v6, v7, v8, v9, v10, v11);
      v4->fields.assetData = assetData;
      sub_2213A04(
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
        AssetManager__releaseAsset_47496972(v12, 0);
      }
      callbackFunc = v4->fields.callbackFunc;
      if ( callbackFunc )
      {
        v4->fields.callbackFunc = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_59721EA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59721EA = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIStandFigureM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_2213CDC(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIStandFigureM__GetBodySubTexture(UIStandFigureM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_59721E9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    byte_59721E9 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_2213CDC(bodyRenderer, method);
  }
  return UnityEngine_Material__GetTexture(
           (UnityEngine_Material_o *)bodyRenderer,
           (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
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
  if ( (byte_59721E2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&StringLiteral_17306/*"a"*/);
    byte_59721E2 = 1;
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
                            (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    FaceImageNameByFaceType,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    FaceImageNameByFaceType->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  v8 = System_String__Concat_75651716((System_String_o *)v10, (System_String_o *)StringLiteral_17306/*"a"*/, 0);
  v27 = FaceImageNameByFaceType->fields._items;
  v28 = Method_System_Collections_Generic_List_string__Add__;
  ++FaceImageNameByFaceType->fields._version;
  if ( !v27 )
LABEL_14:
    sub_2213CDC(v8, v9);
  v29 = FaceImageNameByFaceType->fields._size;
  v30 = v8;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      FaceImageNameByFaceType,
      (Il2CppObject *)v8,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v27->obj.klass + v29;
    FaceImageNameByFaceType->fields._size = v29 + 1;
    v31[4] = (Il2CppClass *)v30;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  FaceImageNameByFaceType,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_59721E5 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_59721E5 = 1;
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
    sub_2213CDC(this, inFigure);
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

  if ( (byte_59721DF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_59721DF = 1;
  }
  UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)this, 0);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAsset_47496972(assetData, 0);
    this->fields.assetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v5, v6, v7, v8, v9, v10);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (MissionNaviTransitionBoardItem_o *)&this->fields.loadName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_2213A04(p_loadName, 0, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_59721E0 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_59721E0 = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  UIStandFigureM__SetCharacter_51055412(this, svtId, ImageLimitCount, faceType, 0, callbackFunc, 0, v13);
}


bool UIStandFigureM__SetCharacter_51055412(
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
  if ( (byte_59721E1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_UIStandFigureM_EndLoadAsset__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59721E1 = 1;
  }
  if ( (_DWORD)p_callbackFunc )
    AssetNameByForm = StandFigureManager__GetAssetNameByForm(v12, v11, (int32_t)p_callbackFunc, 0);
  else
    AssetNameByForm = StandFigureManager__GetAssetName_47708836(v12, v11, 0);
  v16 = AssetNameByForm;
  if ( v11 >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    if ( System_String__Equals_75686512(loadName, v16, 0) )
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)this, (int32_t)v30, v31, v32, v33, v34, v35, v36);
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
    sub_2213CDC(Instance, v18);
  if ( System_String__Equals_75686512((System_String_o *)Instance, v16, 0) )
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
  sub_221405C(v37, v38, v31);
LABEL_30:
  *p_callbackFunc = 0;
LABEL_31:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_callbackFunc, (int32_t)v37, v31, v43, v44, v45, v46, v47);
LABEL_32:
  this->fields.loadName = v16;
  sub_2213A04(p_loadName, (int32_t)v16, v19, v20, v21, v22, v23, v24);
  v49 = this->fields.loadName;
  this->fields.loadRequiredResource = loadRequiredResource;
  if ( loadRequiredResource )
  {
    RequiredResourceNames = UIStandFigureM__GetRequiredResourceNames(
                              this,
                              this->fields.imageId,
                              this->fields.faceType,
                              v48);
    v51 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v51, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v52);
    return AssetManager__loadResourcesFromAssetStorage(v49, RequiredResourceNames, v51, 1, 0);
  }
  else
  {
    v54 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v54, (Il2CppObject *)this, Method_UIStandFigureM_EndLoadAsset__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v55);
    return AssetManager__loadAssetStorage(v49, v54, 1, 0, 0);
  }
}


bool UIStandFigureM__SetCharacter_51056312(
        UIStandFigureM_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return UIStandFigureM__SetCharacter_51055412(
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
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  bool IsUseSimpleMesh; // w0
  const MethodInfo *v13; // x5
  bool v14; // w4

  if ( !isFromScriptFigure )
    goto LABEL_6;
  if ( !inFigure )
    goto LABEL_10;
  if ( !inFigure->fields.assetData )
    return;
  if ( !outFigure )
LABEL_10:
    sub_2213CDC(this, inFigure);
  if ( outFigure->fields.assetData )
  {
LABEL_6:
    IsUseSimpleMesh = UIStandFigureRender__get_IsUseSimpleMesh((UIStandFigureRender_o *)this, 0);
    v14 = isContinueSilhouette;
    if ( IsUseSimpleMesh )
      UIStandFigureM__SetCrossFadeCharacterSimpleMesh(this, inFigure, outFigure, filterName, v14, v13);
    else
      UIStandFigureM__SetCrossFadeCharacterUseWithFaceMesh(this, inFigure, outFigure, filterName, v14, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureM__SetCrossFadeCharacterSimpleMesh(
        UIStandFigureM_o *this,
        UIStandFigureM_o *inFigure,
        UIStandFigureM_o *outFigure,
        System_String_o *filterName,
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  UIStandFigureM_o *v10; // x19
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v12; // x8
  int v13; // w23
  int v14; // w24
  System_String_o *v15; // x0
  System_String_o **v16; // x8
  UnityEngine_Shader_o *v17; // x26
  UnityEngine_Material_o *v18; // x20
  struct UnityEngine_Texture2D_array *v19; // x27
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s14
  float m_Height; // s15
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float v27; // s11
  UnityEngine_Vector2Int_o faceTextureSize; // x2
  UIStandFigureM_o *v29; // x0
  const MethodInfo *v30; // x3
  int v31; // w26
  float v32; // s0 OVERLAPPED
  float v33; // s1
  System_String_o *v34; // x1
  float v35; // s2
  float v36; // s3
  struct UnityEngine_Texture2D_array *v37; // x26
  float v38; // s12
  float v39; // s13
  float v40; // s14
  float v41; // s15
  float v42; // s8
  float v43; // s9
  float v44; // s10
  float v45; // s11
  UnityEngine_Vector2Int_o v46; // x2
  UIStandFigureM_o *v47; // x0
  const MethodInfo *v48; // x3
  int v49; // w25
  float v50; // s0 OVERLAPPED
  float v51; // s1
  System_String_o *v52; // x1
  float v53; // s2
  float v54; // s3
  float x; // s8
  float v56; // s9
  int v57; // w25
  float y; // s10
  float v59; // s11
  int v60; // w0
  int v61; // w23
  UIStandFigureM_o *v62; // x8
  int v63; // w21
  int v64; // w21
  float v65; // s3
  float v66; // s1
  float v67; // s2
  float v68; // s0 OVERLAPPED
  int v69; // w21
  int v70; // w0
  UnityEngine_Mesh_o *v71; // x21
  __int64 v72; // x22
  int32_t LeftX; // w23
  int32_t RightX; // w23
  int32_t v75; // w23
  int32_t v76; // w23
  UIStandFigureM_o *v77; // x23
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v80; // s1
  float32x2_t *v81; // x10
  float v82; // s1
  float32x2_t *v83; // x10
  int32_t v84; // s1
  float32x2_t *v85; // x8
  float v86; // s1
  __int64 v87; // x24
  float BodyU; // s8
  float BodyV; // s0
  float v90; // s8
  float BodyW; // s9
  float v92; // s0
  float v93; // s8
  float v94; // s9
  float BodyH; // s0
  float v96; // s8
  float v97; // s9
  float v98; // s10
  float v99; // s0
  __int64 v100; // x25
  float v101; // s8
  float v102; // s0
  float v103; // s8
  float v104; // s9
  float v105; // s0
  float v106; // s8
  float v107; // s9
  float v108; // s0
  float v109; // s8
  float v110; // s9
  float v111; // s10
  float v112; // s0
  System_Array_o *v113; // x0
  System_RuntimeFieldHandle_o v114; // x1
  System_Int32_array *v115; // x22
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = this;
  if ( (byte_59721E7 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_5105/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_2213A60(&StringLiteral_16871/*"_FilterColor"*/);
    sub_2213A60(&StringLiteral_16239/*"WhenSilhouette"*/);
    sub_2213A60(&StringLiteral_16915/*"_MainTex2"*/);
    sub_2213A60(&StringLiteral_16859/*"_FaceTex2"*/);
    sub_2213A60(&StringLiteral_16851/*"_FaceInfo2"*/);
    sub_2213A60(&StringLiteral_16847/*"_FaceAlphaTex2"*/);
    sub_2213A60(&StringLiteral_5103/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_2213A60(&StringLiteral_16850/*"_FaceInfo"*/);
    sub_2213A60(&StringLiteral_16860/*"_FaceTexOffset"*/);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_17058/*"_UvRangeX"*/);
    sub_2213A60(&StringLiteral_16861/*"_FaceTexOffset2"*/);
    sub_2213A60(&StringLiteral_25094/*"summon"*/);
    sub_2213A60(&StringLiteral_17012/*"_SubTex2"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    sub_2213A60(&StringLiteral_5104/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_2213A60(&StringLiteral_16962/*"_PositionOffset"*/);
    sub_2213A60(&StringLiteral_16846/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_2213A60(&StringLiteral_16858/*"_FaceTex"*/);
    byte_59721E7 = 1;
  }
  v10->fields.isCrossFade = 1;
  if ( !inFigure )
    goto LABEL_101;
  textureList = inFigure->fields.textureList;
  if ( !textureList )
    goto LABEL_101;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_100;
  this = (UIStandFigureM_o *)textureList->m_Items[0];
  if ( !this )
    goto LABEL_101;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *, UIStandFigureM_o *, System_String_o *, bool, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method,
                               outFigure,
                               filterName,
                               isContinueSilhouette,
                               method);
  if ( !outFigure )
    goto LABEL_101;
  v12 = outFigure->fields.textureList;
  if ( !v12 )
    goto LABEL_101;
  if ( !LODWORD(v12->max_length) )
    goto LABEL_100;
  v13 = (int)this;
  this = (UIStandFigureM_o *)v12->m_Items[0];
  if ( !this )
    goto LABEL_101;
  v14 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
          this,
          this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( System_String__IsNullOrEmpty(filterName, 0)
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25094/*"summon"*/, 0) )
  {
    v16 = (System_String_o **)&StringLiteral_5103/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v13 != v14 )
      v16 = (System_String_o **)&StringLiteral_5104/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
    v15 = *v16;
    if ( isContinueSilhouette )
      v15 = System_String__Concat_75651716(v15, (System_String_o *)StringLiteral_16239/*"WhenSilhouette"*/, 0);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_5105/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v17 = UnityEngine_Shader__Find(v15, 0);
  v18 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v18, v17, 0);
  v19 = inFigure->fields.textureList;
  if ( !v19 )
    goto LABEL_101;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_100;
  if ( !v18 )
    goto LABEL_101;
  m_XMin = inFigure->fields.faceTextureRect.fields.m_XMin;
  m_YMin = inFigure->fields.faceTextureRect.fields.m_YMin;
  m_Width = inFigure->fields.faceTextureRect.fields.m_Width;
  m_Height = inFigure->fields.faceTextureRect.fields.m_Height;
  v24 = inFigure->fields.faceRect.fields.m_XMin;
  v25 = inFigure->fields.faceRect.fields.m_YMin;
  v26 = inFigure->fields.faceRect.fields.m_Width;
  v27 = inFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16915/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[0],
    0);
  if ( (v19->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_17012/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[1],
    0);
  faceTextureSize = inFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v29, inFigure->fields.faceType, faceTextureSize, v30);
  if ( (unsigned int)this >= LODWORD(v19->max_length) )
    goto LABEL_100;
  v31 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16859/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[(int)this],
    0);
  if ( (unsigned int)(v31 + 1) >= LODWORD(v19->max_length) )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16847/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[v31 + 1],
    0);
  if ( isContinueSilhouette )
    UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16871/*"_FilterColor"*/, v10->fields.filterColor, 0);
  UIWidget__set_color((UIWidget_o *)v10, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16813/*"_Color"*/, v10->fields.mColor, 0);
  if ( inFigure->fields.faceType )
  {
    v117.fields.x = m_XMin;
    v117.fields.y = m_YMin;
    v117.fields.z = m_Width;
    v117.fields.w = m_Height;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v117, 0);
    v32 = v24;
    v33 = v25;
    v34 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v35 = v26;
    v36 = v27;
  }
  else
  {
    v118.fields.x = 0.0;
    v118.fields.y = 0.0;
    v118.fields.z = 0.0;
    v118.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v118, 0);
    v34 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v32 = 0.0;
    v33 = 0.0;
    v35 = 0.0;
    v36 = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v34, *(UnityEngine_Vector4_o *)&v32, 0);
  v37 = outFigure->fields.textureList;
  if ( !v37 )
    goto LABEL_101;
  if ( !LODWORD(v37->max_length) )
    goto LABEL_100;
  v38 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v39 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v40 = outFigure->fields.faceTextureRect.fields.m_Width;
  v41 = outFigure->fields.faceTextureRect.fields.m_Height;
  v42 = outFigure->fields.faceRect.fields.m_XMin;
  v43 = outFigure->fields.faceRect.fields.m_YMin;
  v44 = outFigure->fields.faceRect.fields.m_Width;
  v45 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[0],
    0);
  if ( (v37->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[1],
    0);
  v46 = outFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v47, outFigure->fields.faceType, v46, v48);
  if ( (unsigned int)this >= LODWORD(v37->max_length) )
    goto LABEL_100;
  v49 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[(int)this],
    0);
  if ( (unsigned int)(v49 + 1) >= LODWORD(v37->max_length) )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16846/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[v49 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v119.fields.x = v38;
    v119.fields.y = v39;
    v119.fields.z = v40;
    v119.fields.w = v41;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v119, 0);
    v50 = v42;
    v51 = v43;
    v52 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v53 = v44;
    v54 = v45;
  }
  else
  {
    v120.fields.x = 0.0;
    v120.fields.y = 0.0;
    v120.fields.z = 0.0;
    v120.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v120, 0);
    v52 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v50 = 0.0;
    v51 = 0.0;
    v53 = 0.0;
    v54 = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v52, *(UnityEngine_Vector4_o *)&v50, 0);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_100;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_101;
  x = outFigure->fields.dispOffset.fields.x;
  v56 = inFigure->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_100;
  v57 = (int)this;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_101;
  y = outFigure->fields.dispOffset.fields.y;
  v59 = inFigure->fields.dispOffset.fields.y;
  v60 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v121.fields.w = 0.0;
  v121.fields.x = (float)(x - v56) / (float)v57;
  v121.fields.y = (float)(y - v59) / (float)v60;
  v121.fields.z = 0.0;
  UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16962/*"_PositionOffset"*/, v121, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_101;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_101;
  v116.fields.z = 0.0;
  v116.fields.y = outFigure->fields.dispOffset.fields.y;
  v116.fields.x = outFigure->fields.dispOffset.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v116, 0);
  if ( v13 == v14 )
  {
    *(_WORD *)&v10->fields.isWide = *(_WORD *)&inFigure->fields.isWide;
  }
  else
  {
    if ( !LODWORD(v19->max_length) )
      goto LABEL_100;
    this = (UIStandFigureM_o *)v19->m_Items[0];
    if ( !this )
      goto LABEL_101;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v37->max_length) )
      goto LABEL_100;
    v61 = (int)this;
    this = (UIStandFigureM_o *)v37->m_Items[0];
    if ( !this )
      goto LABEL_101;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    v62 = v61 >= (int)this ? inFigure : outFigure;
    *(_WORD *)&v10->fields.isWide = *(_WORD *)&v62->fields.isWide;
    if ( !LODWORD(v19->max_length) )
      goto LABEL_100;
    this = (UIStandFigureM_o *)v19->m_Items[0];
    if ( !this )
      goto LABEL_101;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v37->max_length) )
      goto LABEL_100;
    v63 = (int)this;
    this = (UIStandFigureM_o *)v37->m_Items[0];
    if ( !this )
      goto LABEL_101;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v63 >= (int)this )
    {
      if ( !LODWORD(v37->max_length) )
        goto LABEL_100;
      this = (UIStandFigureM_o *)v37->m_Items[0];
      if ( !this )
        goto LABEL_101;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v19->max_length) )
        goto LABEL_100;
      v69 = (int)this;
      this = (UIStandFigureM_o *)v19->m_Items[0];
      if ( !this )
        goto LABEL_101;
      v70 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
              this,
              this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v67 = 0.0;
      v65 = 1.0;
      v66 = (float)v69 / (float)v70;
      v68 = v66 * 0.5;
    }
    else
    {
      if ( !LODWORD(v19->max_length) )
        goto LABEL_100;
      this = (UIStandFigureM_o *)v19->m_Items[0];
      if ( !this )
        goto LABEL_101;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v37->max_length) )
        goto LABEL_100;
      v64 = (int)this;
      this = (UIStandFigureM_o *)v37->m_Items[0];
      if ( !this )
        goto LABEL_101;
      v65 = (float)v64
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v66 = 1.0;
      v67 = v65 * 0.5;
      v68 = 0.0;
    }
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_17058/*"_UvRangeX"*/, *(UnityEngine_Vector4_o *)&v68, 0);
  }
  v71 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v71, 0);
  v72 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( !v72 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v72 + 24) )
    goto LABEL_100;
  *(_DWORD *)(v72 + 40) = 0;
  *(float *)(v72 + 32) = (float)LeftX;
  *(float *)(v72 + 36) = (float)(int)this;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v72 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  *(_DWORD *)(v72 + 52) = 0;
  *(float *)(v72 + 44) = (float)RightX;
  *(float *)(v72 + 48) = (float)(int)this;
  v75 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v72 + 24) <= 2u
    || (*(_DWORD *)(v72 + 64) = 0,
        *(float *)(v72 + 56) = (float)v75,
        *(float *)(v72 + 60) = (float)(int)this,
        v76 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0),
        this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0),
        (*(_DWORD *)(v72 + 24) & 0xFFFFFFFC) == 0) )
  {
LABEL_100:
    sub_2213CE4(this);
  }
  *(_DWORD *)(v72 + 76) = 0;
  *(float *)(v72 + 68) = (float)v76;
  *(float *)(v72 + 72) = (float)(int)this;
  this = (UIStandFigureM_o *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v77 = this;
  if ( !byte_5969AE9 )
  {
    this = (UIStandFigureM_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v77 )
LABEL_101:
    sub_2213CDC(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v77->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_100;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v80 = -static_fields[10].n64_f32[0];
  v77->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v77->fields.rightAnchor = v80;
  if ( (m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  v81 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v82 = -v81[10].n64_f32[0];
  *(float32x2_t *)((char *)&v77->fields.rightAnchor + 4) = vneg_f32(v81[9]);
  *((float *)&v77->fields.bottomAnchor + 1) = v82;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_100;
  v83 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v84 = -v83[10].n64_f32[0];
  v77->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v83[9]).n64_u64[0];
  v77->fields.updateAnchors = v84;
  if ( (m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  v85 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v86 = -v85[10].n64_f32[0];
  *(float32x2_t *)(&v77->fields.updateAnchors + 1) = vneg_f32(v85[9]);
  *((float *)&v77->fields.mGo + 1) = v86;
  v87 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v87 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v87 + 24) )
    goto LABEL_100;
  *(float *)(v87 + 32) = BodyU;
  *(float *)(v87 + 36) = BodyV;
  v90 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v92 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v87 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  *(float *)(v87 + 40) = v90 + BodyW;
  *(float *)(v87 + 44) = v92;
  v93 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v94 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v87 + 24) <= 2u )
    goto LABEL_100;
  *(float *)(v87 + 48) = v93;
  *(float *)(v87 + 52) = v94 - BodyH;
  v96 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v97 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v98 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v99 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v87 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  *(float *)(v87 + 56) = v96 + v97;
  *(float *)(v87 + 60) = v98 - v99;
  v100 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  v101 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v102 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v100 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v100 + 24) )
    goto LABEL_100;
  *(float *)(v100 + 32) = v101;
  *(float *)(v100 + 36) = v102;
  v103 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v104 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v105 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v100 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  *(float *)(v100 + 40) = v103 + v104;
  *(float *)(v100 + 44) = v105;
  v106 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v107 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v108 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v100 + 24) <= 2u )
    goto LABEL_100;
  *(float *)(v100 + 48) = v106;
  *(float *)(v100 + 52) = v107 - v108;
  v109 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v110 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v111 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v112 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v100 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  *(float *)(v100 + 56) = v109 + v110;
  *(float *)(v100 + 60) = v111 - v112;
  if ( !v71 )
    goto LABEL_101;
  UnityEngine_Mesh__set_vertices(v71, (UnityEngine_Vector3_array *)v72, 0);
  UnityEngine_Mesh__set_normals(v71, (UnityEngine_Vector3_array *)v77, 0);
  UnityEngine_Mesh__set_uv(v71, (UnityEngine_Vector2_array *)v87, 0);
  UnityEngine_Mesh__set_uv2(v71, (UnityEngine_Vector2_array *)v100, 0);
  v113 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
  v114.fields.value = Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E;
  v115 = (System_Int32_array *)v113;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v113, v114, 0);
  UnityEngine_Mesh__set_triangles(v71, v115, 0);
  UnityEngine_Mesh__RecalculateNormals(v71, 0);
  UnityEngine_Mesh__RecalculateBounds(v71, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_101;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v71, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_101;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_101;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_101;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_101;
  UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyRenderer;
  if ( !this )
    goto LABEL_101;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v18, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyRenderer;
  if ( !this )
    goto LABEL_101;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIStandFigureM__SetCrossFadeCharacterUseWithFaceMesh(
        UIStandFigureM_o *this,
        UIStandFigureM_o *inFigure,
        UIStandFigureM_o *outFigure,
        System_String_o *filterName,
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  UIStandFigureM_o *v9; // x20
  UIStandFigureM_o *v10; // x19
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v12; // x8
  int v13; // w23
  int v14; // w24
  System_String_o *v15; // x0
  System_String_o **v16; // x8
  UnityEngine_Shader_o *v17; // x26
  UnityEngine_Material_o *v18; // x21
  struct UnityEngine_Texture2D_array *v19; // x27
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s14
  float m_Height; // s15
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float v27; // s11
  UnityEngine_Vector2Int_o faceTextureSize; // x2
  UIStandFigureM_o *v29; // x0
  const MethodInfo *v30; // x3
  int v31; // w26
  float v32; // s0 OVERLAPPED
  float v33; // s1
  System_String_o *v34; // x1
  float v35; // s2
  float v36; // s3
  struct UnityEngine_Texture2D_array *v37; // x26
  float v38; // s12
  float v39; // s13
  float v40; // s14
  float v41; // s15
  float v42; // s8
  float v43; // s9
  float v44; // s10
  float v45; // s11
  UnityEngine_Vector2Int_o v46; // x2
  UIStandFigureM_o *v47; // x0
  const MethodInfo *v48; // x3
  int v49; // w25
  float v50; // s0 OVERLAPPED
  float v51; // s1
  System_String_o *v52; // x1
  float v53; // s2
  float v54; // s3
  float x; // s8
  float v56; // s9
  int v57; // w25
  float y; // s10
  float v59; // s11
  int v60; // w0
  int v61; // w23
  int v62; // w22
  int v63; // w22
  float v64; // s3
  float v65; // s1
  float v66; // s2
  float v67; // s0 OVERLAPPED
  int v68; // w22
  int v69; // w0
  UnityEngine_Mesh_o *v70; // x22
  __int64 v71; // x23
  int32_t LeftX; // w24
  int32_t RightX; // w24
  int32_t v74; // w24
  int32_t v75; // w24
  unsigned int v76; // w8
  float v77; // s0
  float v78; // s1
  float32x2_t v79; // d0
  float32x2_t v80; // d1
  __int64 v81; // d0
  float v82; // s0
  float v83; // s1
  float v84; // s0
  float v85; // s1
  float32x2_t v86; // d0
  float32x2_t v87; // d1
  __int64 v88; // d0
  float v89; // s0
  float v90; // s1
  UIStandFigureM_o *v91; // x24
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v94; // s1
  float32x2_t *v95; // x10
  float v96; // s1
  float32x2_t *v97; // x10
  int32_t v98; // s1
  float32x2_t *v99; // x10
  float v100; // s1
  float32x2_t *v101; // x10
  float v102; // s1
  float32x2_t *v103; // x10
  int32_t v104; // s1
  float32x2_t *v105; // x10
  float v106; // s1
  float32x2_t *v107; // x10
  float v108; // s1
  float32x2_t *v109; // x10
  float v110; // s1
  float32x2_t *v111; // x10
  float v112; // s1
  float32x2_t *v113; // x10
  float v114; // s1
  float32x2_t *v115; // x8
  int32_t v116; // s1
  __int64 v117; // x25
  float BodyU; // s8
  float BodyV; // s0
  float v120; // s8
  float BodyW; // s9
  float v122; // s0
  float v123; // s8
  float v124; // s9
  float BodyH; // s0
  float v126; // s8
  float v127; // s9
  float v128; // s10
  float v129; // s0
  unsigned int v130; // w8
  float v131; // s0
  float v132; // s1
  __int64 v133; // x26
  float v134; // s8
  float v135; // s0
  float v136; // s8
  float v137; // s9
  float v138; // s0
  float v139; // s8
  float v140; // s9
  float v141; // s0
  float v142; // s8
  float v143; // s9
  float v144; // s10
  float v145; // s0
  unsigned int v146; // w8
  float v147; // s0
  float v148; // s1
  float v149; // s0
  float v150; // s1
  System_Array_o *v151; // x0
  System_RuntimeFieldHandle_o v152; // x1
  System_Int32_array *v153; // x20
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = inFigure;
  v10 = this;
  if ( (byte_59721E6 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_5105/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/);
    sub_2213A60(&StringLiteral_16871/*"_FilterColor"*/);
    sub_2213A60(&StringLiteral_16239/*"WhenSilhouette"*/);
    sub_2213A60(&StringLiteral_16915/*"_MainTex2"*/);
    sub_2213A60(&StringLiteral_16859/*"_FaceTex2"*/);
    sub_2213A60(&StringLiteral_16851/*"_FaceInfo2"*/);
    sub_2213A60(&StringLiteral_16847/*"_FaceAlphaTex2"*/);
    sub_2213A60(&StringLiteral_5103/*"Custom/Sprite-ScriptActionFigureCrossFade"*/);
    sub_2213A60(&StringLiteral_16850/*"_FaceInfo"*/);
    sub_2213A60(&StringLiteral_16860/*"_FaceTexOffset"*/);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_17058/*"_UvRangeX"*/);
    sub_2213A60(&StringLiteral_16861/*"_FaceTexOffset2"*/);
    sub_2213A60(&StringLiteral_25094/*"summon"*/);
    sub_2213A60(&StringLiteral_17012/*"_SubTex2"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    sub_2213A60(&StringLiteral_5104/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/);
    sub_2213A60(&StringLiteral_16962/*"_PositionOffset"*/);
    sub_2213A60(&StringLiteral_16846/*"_FaceAlphaTex"*/);
    this = (UIStandFigureM_o *)sub_2213A60(&StringLiteral_16858/*"_FaceTex"*/);
    byte_59721E6 = 1;
  }
  v10->fields.isCrossFade = 1;
  if ( !v9 )
    goto LABEL_132;
  textureList = v9->fields.textureList;
  if ( !textureList )
    goto LABEL_132;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_131;
  this = (UIStandFigureM_o *)textureList->m_Items[0];
  if ( !this )
    goto LABEL_132;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *, UIStandFigureM_o *, System_String_o *, bool, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method,
                               outFigure,
                               filterName,
                               isContinueSilhouette,
                               method);
  if ( !outFigure )
    goto LABEL_132;
  v12 = outFigure->fields.textureList;
  if ( !v12 )
    goto LABEL_132;
  if ( !LODWORD(v12->max_length) )
    goto LABEL_131;
  v13 = (int)this;
  this = (UIStandFigureM_o *)v12->m_Items[0];
  if ( !this )
    goto LABEL_132;
  v14 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
          this,
          this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( System_String__IsNullOrEmpty(filterName, 0)
    || !System_String__op_Equality(filterName, (System_String_o *)StringLiteral_25094/*"summon"*/, 0) )
  {
    v16 = (System_String_o **)&StringLiteral_5103/*"Custom/Sprite-ScriptActionFigureCrossFade"*/;
    if ( v13 != v14 )
      v16 = (System_String_o **)&StringLiteral_5104/*"Custom/Sprite-ScriptActionFigureCrossFadeAnotherWide"*/;
    v15 = *v16;
    if ( isContinueSilhouette )
      v15 = System_String__Concat_75651716(v15, (System_String_o *)StringLiteral_16239/*"WhenSilhouette"*/, 0);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_5105/*"Custom/Sprite-ScriptActionFigureCrossFadeSummon"*/;
  }
  v17 = UnityEngine_Shader__Find(v15, 0);
  v18 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v18, v17, 0);
  v19 = v9->fields.textureList;
  if ( !v19 )
    goto LABEL_132;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_131;
  if ( !v18 )
    goto LABEL_132;
  m_XMin = v9->fields.faceTextureRect.fields.m_XMin;
  m_YMin = v9->fields.faceTextureRect.fields.m_YMin;
  m_Width = v9->fields.faceTextureRect.fields.m_Width;
  m_Height = v9->fields.faceTextureRect.fields.m_Height;
  v24 = v9->fields.faceRect.fields.m_XMin;
  v25 = v9->fields.faceRect.fields.m_YMin;
  v26 = v9->fields.faceRect.fields.m_Width;
  v27 = v9->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16915/*"_MainTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[0],
    0);
  if ( (v19->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_17012/*"_SubTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[1],
    0);
  faceTextureSize = v9->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v29, v9->fields.faceType, faceTextureSize, v30);
  if ( (unsigned int)this >= LODWORD(v19->max_length) )
    goto LABEL_131;
  v31 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16859/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[(int)this],
    0);
  if ( (unsigned int)(v31 + 1) >= LODWORD(v19->max_length) )
    goto LABEL_131;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16847/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[v31 + 1],
    0);
  if ( isContinueSilhouette )
    UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16871/*"_FilterColor"*/, v10->fields.filterColor, 0);
  UIWidget__set_color((UIWidget_o *)v10, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16813/*"_Color"*/, v10->fields.mColor, 0);
  if ( v9->fields.faceType )
  {
    v155.fields.x = m_XMin;
    v155.fields.y = m_YMin;
    v155.fields.z = m_Width;
    v155.fields.w = m_Height;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v155, 0);
    v32 = v24;
    v33 = v25;
    v34 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v35 = v26;
    v36 = v27;
  }
  else
  {
    v156.fields.x = 0.0;
    v156.fields.y = 0.0;
    v156.fields.z = 0.0;
    v156.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v156, 0);
    v34 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v32 = 0.0;
    v33 = 0.0;
    v35 = 0.0;
    v36 = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v34, *(UnityEngine_Vector4_o *)&v32, 0);
  v37 = outFigure->fields.textureList;
  if ( !v37 )
    goto LABEL_132;
  if ( !LODWORD(v37->max_length) )
    goto LABEL_131;
  v38 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v39 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v40 = outFigure->fields.faceTextureRect.fields.m_Width;
  v41 = outFigure->fields.faceTextureRect.fields.m_Height;
  v42 = outFigure->fields.faceRect.fields.m_XMin;
  v43 = outFigure->fields.faceRect.fields.m_YMin;
  v44 = outFigure->fields.faceRect.fields.m_Width;
  v45 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[0],
    0);
  if ( (v37->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[1],
    0);
  v46 = outFigure->fields.faceTextureSize;
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(v47, outFigure->fields.faceType, v46, v48);
  if ( (unsigned int)this >= LODWORD(v37->max_length) )
    goto LABEL_131;
  v49 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[(int)this],
    0);
  if ( (unsigned int)(v49 + 1) >= LODWORD(v37->max_length) )
    goto LABEL_131;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16846/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v37->m_Items[v49 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v157.fields.x = v38;
    v157.fields.y = v39;
    v157.fields.z = v40;
    v157.fields.w = v41;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v157, 0);
    v50 = v42;
    v51 = v43;
    v52 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v53 = v44;
    v54 = v45;
  }
  else
  {
    v158.fields.x = 0.0;
    v158.fields.y = 0.0;
    v158.fields.z = 0.0;
    v158.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v158, 0);
    v52 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v50 = 0.0;
    v51 = 0.0;
    v53 = 0.0;
    v54 = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v52, *(UnityEngine_Vector4_o *)&v50, 0);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_131;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_132;
  x = outFigure->fields.dispOffset.fields.x;
  v56 = v9->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_131;
  v57 = (int)this;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_132;
  y = outFigure->fields.dispOffset.fields.y;
  v59 = v9->fields.dispOffset.fields.y;
  v60 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v159.fields.w = 0.0;
  v159.fields.x = (float)(x - v56) / (float)v57;
  v159.fields.y = (float)(y - v59) / (float)v60;
  v159.fields.z = 0.0;
  UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16962/*"_PositionOffset"*/, v159, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_132;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_132;
  v154.fields.z = 0.0;
  v154.fields.y = outFigure->fields.dispOffset.fields.y;
  v154.fields.x = outFigure->fields.dispOffset.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v154, 0);
  if ( v13 == v14 )
  {
    *(_WORD *)&v10->fields.isWide = *(_WORD *)&v9->fields.isWide;
  }
  else
  {
    if ( !LODWORD(v19->max_length) )
      goto LABEL_131;
    this = (UIStandFigureM_o *)v19->m_Items[0];
    if ( !this )
      goto LABEL_132;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v37->max_length) )
      goto LABEL_131;
    v61 = (int)this;
    this = (UIStandFigureM_o *)v37->m_Items[0];
    if ( !this )
      goto LABEL_132;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v61 < (int)this )
      v9 = outFigure;
    *(_WORD *)&v10->fields.isWide = *(_WORD *)&v9->fields.isWide;
    if ( !LODWORD(v19->max_length) )
      goto LABEL_131;
    this = (UIStandFigureM_o *)v19->m_Items[0];
    if ( !this )
      goto LABEL_132;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v37->max_length) )
      goto LABEL_131;
    v62 = (int)this;
    this = (UIStandFigureM_o *)v37->m_Items[0];
    if ( !this )
      goto LABEL_132;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v62 >= (int)this )
    {
      if ( !LODWORD(v37->max_length) )
        goto LABEL_131;
      this = (UIStandFigureM_o *)v37->m_Items[0];
      if ( !this )
        goto LABEL_132;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v19->max_length) )
        goto LABEL_131;
      v68 = (int)this;
      this = (UIStandFigureM_o *)v19->m_Items[0];
      if ( !this )
        goto LABEL_132;
      v69 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
              this,
              this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v66 = 0.0;
      v64 = 1.0;
      v65 = (float)v68 / (float)v69;
      v67 = v65 * 0.5;
    }
    else
    {
      if ( !LODWORD(v19->max_length) )
        goto LABEL_131;
      this = (UIStandFigureM_o *)v19->m_Items[0];
      if ( !this )
        goto LABEL_132;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v37->max_length) )
        goto LABEL_131;
      v63 = (int)this;
      this = (UIStandFigureM_o *)v37->m_Items[0];
      if ( !this )
        goto LABEL_132;
      v64 = (float)v63
          / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                     this,
                     this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v65 = 1.0;
      v66 = v64 * 0.5;
      v67 = 0.0;
    }
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_17058/*"_UvRangeX"*/, *(UnityEngine_Vector4_o *)&v67, 0);
  }
  v70 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v70, 0);
  v71 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 12);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( !v71 )
    goto LABEL_132;
  if ( !*(_DWORD *)(v71 + 24) )
    goto LABEL_131;
  *(_DWORD *)(v71 + 40) = 0;
  *(float *)(v71 + 32) = (float)LeftX;
  *(float *)(v71 + 36) = (float)(int)this;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v71 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  *(_DWORD *)(v71 + 52) = 0;
  *(float *)(v71 + 44) = (float)RightX;
  *(float *)(v71 + 48) = (float)(int)this;
  v74 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v71 + 24) <= 2u )
    goto LABEL_131;
  *(_DWORD *)(v71 + 64) = 0;
  *(float *)(v71 + 56) = (float)v74;
  *(float *)(v71 + 60) = (float)(int)this;
  v75 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0);
  v76 = *(_DWORD *)(v71 + 24);
  if ( v76 <= 3 )
    goto LABEL_131;
  *(_DWORD *)(v71 + 76) = 0;
  *(float *)(v71 + 68) = (float)v75;
  *(float *)(v71 + 72) = (float)(int)this;
  if ( v76 == 4 )
    goto LABEL_131;
  v77 = v9->fields.facePositionRect.fields.m_Height + v9->fields.facePositionRect.fields.m_YMin;
  v78 = v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 88) = 0;
  *(float *)(v71 + 80) = v78;
  *(float *)(v71 + 84) = v77;
  if ( v76 <= 5 )
    goto LABEL_131;
  v79.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_Width;
  v80.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 100) = 0;
  *(float32x2_t *)(v71 + 92) = vadd_f32(v79, v80);
  if ( v76 == 6 )
    goto LABEL_131;
  v81 = *(_QWORD *)&v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 112) = 0;
  *(_QWORD *)(v71 + 104) = v81;
  if ( v76 <= 7 )
    goto LABEL_131;
  v82 = v9->fields.facePositionRect.fields.m_Width + v9->fields.facePositionRect.fields.m_XMin;
  v83 = v9->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v71 + 124) = 0;
  *(float *)(v71 + 116) = v82;
  *(float *)(v71 + 120) = v83;
  if ( v76 == 8 )
    goto LABEL_131;
  v84 = v9->fields.facePositionRect.fields.m_Height + v9->fields.facePositionRect.fields.m_YMin;
  v85 = v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v71 + 136) = 0;
  *(float *)(v71 + 128) = v85;
  *(float *)(v71 + 132) = v84;
  if ( v76 <= 9
    || (v86.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_Width,
        v87.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v71 + 148) = 0,
        *(float32x2_t *)(v71 + 140) = vadd_f32(v86, v87),
        v76 == 10)
    || (v88 = *(_QWORD *)&v9->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v71 + 160) = 0,
        *(_QWORD *)(v71 + 152) = v88,
        v76 <= 0xB) )
  {
LABEL_131:
    sub_2213CE4(this);
  }
  v89 = v9->fields.facePositionRect.fields.m_Width + v9->fields.facePositionRect.fields.m_XMin;
  v90 = v9->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v71 + 172) = 0;
  *(float *)(v71 + 164) = v89;
  *(float *)(v71 + 168) = v90;
  this = (UIStandFigureM_o *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 12);
  v91 = this;
  if ( !byte_5969AE9 )
  {
    this = (UIStandFigureM_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v91 )
LABEL_132:
    sub_2213CDC(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v91->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_131;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v94 = -static_fields[10].n64_f32[0];
  v91->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v91->fields.rightAnchor = v94;
  if ( (m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  v95 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v96 = -v95[10].n64_f32[0];
  *(float32x2_t *)((char *)&v91->fields.rightAnchor + 4) = vneg_f32(v95[9]);
  *((float *)&v91->fields.bottomAnchor + 1) = v96;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_131;
  v97 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v98 = -v97[10].n64_f32[0];
  v91->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v97[9]).n64_u64[0];
  v91->fields.updateAnchors = v98;
  if ( (m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    goto LABEL_131;
  v99 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v100 = -v99[10].n64_f32[0];
  *(float32x2_t *)(&v91->fields.updateAnchors + 1) = vneg_f32(v99[9]);
  *((float *)&v91->fields.mGo + 1) = v100;
  if ( m_CancellationTokenSource <= 4 )
    goto LABEL_131;
  v101 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v102 = -v101[10].n64_f32[0];
  v91->fields.mTrans = (struct UnityEngine_Transform_o *)vneg_f32(v101[9]).n64_u64[0];
  *(float *)&v91->fields.mChildren = v102;
  if ( m_CancellationTokenSource == 5 )
    goto LABEL_131;
  v103 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v104 = -v103[10].n64_f32[0];
  *(float32x2_t *)((char *)&v91->fields.mChildren + 4) = vneg_f32(v103[9]);
  v91->fields.mUpdateFrame = v104;
  if ( m_CancellationTokenSource <= 6 )
    goto LABEL_131;
  v105 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v106 = -v105[10].n64_f32[0];
  *(float32x2_t *)&v91->fields.mAnchorsCached = vneg_f32(v105[9]);
  *(float *)&v91->fields.mRoot = v106;
  if ( (m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
    goto LABEL_131;
  v107 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v108 = -v107[10].n64_f32[0];
  *(float32x2_t *)((char *)&v91->fields.mRoot + 4) = vneg_f32(v107[9]);
  *((float *)&v91->fields.mParent + 1) = v108;
  if ( m_CancellationTokenSource <= 8 )
    goto LABEL_131;
  v109 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v110 = -v109[10].n64_f32[0];
  *(float32x2_t *)&v91->fields.mRootSet = vneg_f32(v109[9]);
  *(float *)&v91->fields.mCam = v110;
  if ( m_CancellationTokenSource == 9 )
    goto LABEL_131;
  v111 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v112 = -v111[10].n64_f32[0];
  *(float32x2_t *)((char *)&v91->fields.mCam + 4) = vneg_f32(v111[9]);
  v91->fields.mColor.fields.r = v112;
  if ( m_CancellationTokenSource <= 0xA )
    goto LABEL_131;
  v113 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v114 = -v113[10].n64_f32[0];
  *(float32x2_t *)&v91->fields.mColor.fields.g = vneg_f32(v113[9]);
  v91->fields.mColor.fields.a = v114;
  if ( m_CancellationTokenSource == 11 )
    goto LABEL_131;
  v115 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v116 = -v115[10].n64_f32[0];
  *(float32x2_t *)&v91->fields.mPivot = vneg_f32(v115[9]);
  v91->fields.mHeight = v116;
  v117 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 12);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v117 )
    goto LABEL_132;
  if ( !*(_DWORD *)(v117 + 24) )
    goto LABEL_131;
  *(float *)(v117 + 32) = BodyU;
  *(float *)(v117 + 36) = BodyV;
  v120 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v122 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v117 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  *(float *)(v117 + 40) = v120 + BodyW;
  *(float *)(v117 + 44) = v122;
  v123 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v124 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v117 + 24) <= 2u )
    goto LABEL_131;
  *(float *)(v117 + 48) = v123;
  *(float *)(v117 + 52) = v124 - BodyH;
  v126 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v127 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v128 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v129 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  v130 = *(_DWORD *)(v117 + 24);
  if ( v130 <= 3 )
    goto LABEL_131;
  *(float *)(v117 + 56) = v126 + v127;
  *(float *)(v117 + 60) = v128 - v129;
  if ( v130 == 4 )
    goto LABEL_131;
  v131 = v9->fields.faceTextureRect.fields.m_Height + v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v117 + 64) = v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v117 + 68) = v131;
  if ( v130 <= 5 )
    goto LABEL_131;
  *(float32x2_t *)(v117 + 72) = vadd_f32(
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_XMin);
  if ( v130 == 6 )
    goto LABEL_131;
  *(_QWORD *)(v117 + 80) = *(_QWORD *)&v9->fields.faceTextureRect.fields.m_XMin;
  if ( v130 <= 7 )
    goto LABEL_131;
  v132 = v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v117 + 88) = v9->fields.faceTextureRect.fields.m_Width + v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v117 + 92) = v132;
  if ( v130 == 8 )
    goto LABEL_131;
  *(_QWORD *)(v117 + 96) = 0;
  if ( v130 <= 9 )
    goto LABEL_131;
  *(_QWORD *)(v117 + 104) = 0;
  if ( v130 == 10 )
    goto LABEL_131;
  *(_QWORD *)(v117 + 112) = 0;
  if ( v130 <= 0xB )
    goto LABEL_131;
  *(_QWORD *)(v117 + 120) = 0;
  v133 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 12);
  v134 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v135 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v133 )
    goto LABEL_132;
  if ( !*(_DWORD *)(v133 + 24) )
    goto LABEL_131;
  *(float *)(v133 + 32) = v134;
  *(float *)(v133 + 36) = v135;
  v136 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v137 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v138 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v133 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  *(float *)(v133 + 40) = v136 + v137;
  *(float *)(v133 + 44) = v138;
  v139 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v140 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v141 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v133 + 24) <= 2u )
    goto LABEL_131;
  *(float *)(v133 + 48) = v139;
  *(float *)(v133 + 52) = v140 - v141;
  v142 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v143 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v144 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v145 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  v146 = *(_DWORD *)(v133 + 24);
  if ( v146 <= 3 )
    goto LABEL_131;
  *(float *)(v133 + 56) = v142 + v143;
  *(float *)(v133 + 60) = v144 - v145;
  if ( v146 == 4 )
    goto LABEL_131;
  v147 = v9->fields.faceTextureRect.fields.m_Height + v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v133 + 64) = v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v133 + 68) = v147;
  if ( v146 <= 5 )
    goto LABEL_131;
  *(float32x2_t *)(v133 + 72) = vadd_f32(
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_XMin);
  if ( v146 == 6 )
    goto LABEL_131;
  *(_QWORD *)(v133 + 80) = *(_QWORD *)&v9->fields.faceTextureRect.fields.m_XMin;
  if ( v146 <= 7 )
    goto LABEL_131;
  v148 = v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v133 + 88) = v9->fields.faceTextureRect.fields.m_Width + v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v133 + 92) = v148;
  if ( v146 == 8 )
    goto LABEL_131;
  v149 = v9->fields.faceTextureRect.fields.m_Height + v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v133 + 96) = v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v133 + 100) = v149;
  if ( v146 <= 9 )
    goto LABEL_131;
  *(float32x2_t *)(v133 + 104) = vadd_f32(
                                   *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_Width,
                                   *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_XMin);
  if ( v146 == 10 )
    goto LABEL_131;
  *(_QWORD *)(v133 + 112) = *(_QWORD *)&v9->fields.faceTextureRect.fields.m_XMin;
  if ( v146 <= 0xB )
    goto LABEL_131;
  v150 = v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v133 + 120) = v9->fields.faceTextureRect.fields.m_Width + v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v133 + 124) = v150;
  if ( !v70 )
    goto LABEL_132;
  UnityEngine_Mesh__set_vertices(v70, (UnityEngine_Vector3_array *)v71, 0);
  UnityEngine_Mesh__set_normals(v70, (UnityEngine_Vector3_array *)v91, 0);
  UnityEngine_Mesh__set_uv(v70, (UnityEngine_Vector2_array *)v117, 0);
  UnityEngine_Mesh__set_uv2(v70, (UnityEngine_Vector2_array *)v133, 0);
  v151 = (System_Array_o *)sub_2213B20(int___TypeInfo, 30);
  v152.fields.value = Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131;
  v153 = (System_Int32_array *)v151;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v151, v152, 0);
  UnityEngine_Mesh__set_triangles(v70, v153, 0);
  UnityEngine_Mesh__RecalculateNormals(v70, 0);
  UnityEngine_Mesh__RecalculateBounds(v70, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_132;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v70, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_132;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_132;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_132;
  this = (UIStandFigureM_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)this, 0);
  if ( !this )
    goto LABEL_132;
  UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)this, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyRenderer;
  if ( !this )
    goto LABEL_132;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v18, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyRenderer;
  if ( !this )
    goto LABEL_132;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_132;
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
    sub_2213CDC(bodyFilter, method);
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
    sub_2213CDC(bodyFilter, method);
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
    sub_2213CDC(0, v7);
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

  if ( (byte_59721E4 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_59721E4 = 1;
  }
  assetData = this->fields.assetData;
  loadRequiredResource = this->fields.loadRequiredResource;
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
  TextureList = UIStandFigureRender__GetTextureList(assetData, loadRequiredResource, 0);
  this->fields.textureList = TextureList;
  sub_2213A04(
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
    sub_2213CDC(bodyFilter, v3);
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
  if ( (byte_59721E8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16865/*"_FadeFactor"*/);
    byte_59721E8 = 1;
  }
  if ( this->fields.isCrossFade )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
      sub_2213CDC(bodyRenderer, method);
    }
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16865/*"_FadeFactor"*/, a, 0);
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