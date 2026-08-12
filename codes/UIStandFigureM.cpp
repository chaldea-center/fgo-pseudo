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
  UIStandFigureM_o *v28; // x0
  const MethodInfo *v29; // x3
  int v30; // w26
  System_String_o *v32; // x1
  struct UnityEngine_Texture2D_array *v35; // x26
  float v36; // s12
  float v37; // s13
  float v38; // s14
  float v39; // s15
  float v40; // s8
  float v41; // s9
  float v42; // s10
  float v43; // s11
  UIStandFigureM_o *v44; // x0
  const MethodInfo *v45; // x3
  int v46; // w25
  System_String_o *v48; // x1
  float x; // s8
  float v52; // s9
  int v53; // w25
  float y; // s10
  float v55; // s11
  int v56; // w0
  int v57; // w23
  UIStandFigureM_o *v58; // x8
  int v59; // w21
  int v60; // w21
  int v64; // w21
  int v65; // w0
  UnityEngine_Mesh_o *v66; // x21
  __int64 v67; // x22
  int32_t LeftX; // w23
  int32_t RightX; // w23
  int32_t v70; // w23
  int32_t v71; // w23
  UIStandFigureM_o *v72; // x23
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v75; // s1
  float32x2_t *v76; // x10
  float v77; // s1
  float32x2_t *v78; // x10
  int32_t v79; // s1
  float32x2_t *v80; // x8
  float v81; // s1
  __int64 v82; // x24
  float BodyU; // s8
  float BodyV; // s0
  float v85; // s8
  float BodyW; // s9
  float v87; // s0
  float v88; // s8
  float v89; // s9
  float BodyH; // s0
  float v91; // s8
  float v92; // s9
  float v93; // s10
  float v94; // s0
  __int64 v95; // x25
  float v96; // s8
  float v97; // s0
  float v98; // s8
  float v99; // s9
  float v100; // s0
  float v101; // s8
  float v102; // s9
  float v103; // s0
  float v104; // s8
  float v105; // s9
  float v106; // s10
  float v107; // s0
  System_Array_o *v108; // x22
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v28,
                               inFigure->fields.faceType,
                               inFigure->fields.faceTextureSize,
                               v29);
  if ( (unsigned int)this >= LODWORD(v19->max_length) )
    goto LABEL_100;
  v30 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16859/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[(int)this],
    0);
  if ( (unsigned int)(v30 + 1) >= LODWORD(v19->max_length) )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16847/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[v30 + 1],
    0);
  if ( isContinueSilhouette )
    UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16871/*"_FilterColor"*/, v10->fields.filterColor, 0);
  UIWidget__set_color((UIWidget_o *)v10, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16813/*"_Color"*/, v10->fields.mColor, 0);
  if ( inFigure->fields.faceType )
  {
    v110.fields.x = m_XMin;
    v110.fields.y = m_YMin;
    v110.fields.z = m_Width;
    v110.fields.w = m_Height;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v110, 0);
    v111.fields.x = v24;
    v111.fields.y = v25;
    v32 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v111.fields.z = v26;
    v111.fields.w = v27;
  }
  else
  {
    v112.fields.x = 0.0;
    v112.fields.y = 0.0;
    v112.fields.z = 0.0;
    v112.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v112, 0);
    v32 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v111.fields.x = 0.0;
    v111.fields.y = 0.0;
    v111.fields.z = 0.0;
    v111.fields.w = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v32, v111, 0);
  v35 = outFigure->fields.textureList;
  if ( !v35 )
    goto LABEL_101;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_100;
  v36 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v37 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v38 = outFigure->fields.faceTextureRect.fields.m_Width;
  v39 = outFigure->fields.faceTextureRect.fields.m_Height;
  v40 = outFigure->fields.faceRect.fields.m_XMin;
  v41 = outFigure->fields.faceRect.fields.m_YMin;
  v42 = outFigure->fields.faceRect.fields.m_Width;
  v43 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[0],
    0);
  if ( (v35->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[1],
    0);
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v44,
                               outFigure->fields.faceType,
                               outFigure->fields.faceTextureSize,
                               v45);
  if ( (unsigned int)this >= LODWORD(v35->max_length) )
    goto LABEL_100;
  v46 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[(int)this],
    0);
  if ( (unsigned int)(v46 + 1) >= LODWORD(v35->max_length) )
    goto LABEL_100;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16846/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[v46 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v113.fields.x = v36;
    v113.fields.y = v37;
    v113.fields.z = v38;
    v113.fields.w = v39;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v113, 0);
    v114.fields.x = v40;
    v114.fields.y = v41;
    v48 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v114.fields.z = v42;
    v114.fields.w = v43;
  }
  else
  {
    v115.fields.x = 0.0;
    v115.fields.y = 0.0;
    v115.fields.z = 0.0;
    v115.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v115, 0);
    v48 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v114.fields.x = 0.0;
    v114.fields.y = 0.0;
    v114.fields.z = 0.0;
    v114.fields.w = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v48, v114, 0);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_100;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_101;
  x = outFigure->fields.dispOffset.fields.x;
  v52 = inFigure->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_100;
  v53 = (int)this;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_101;
  y = outFigure->fields.dispOffset.fields.y;
  v55 = inFigure->fields.dispOffset.fields.y;
  v56 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v116.fields.w = 0.0;
  v116.fields.x = (float)(x - v52) / (float)v53;
  v116.fields.y = (float)(y - v55) / (float)v56;
  v116.fields.z = 0.0;
  UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16962/*"_PositionOffset"*/, v116, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_101;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_101;
  v109.fields.z = 0.0;
  v109.fields.y = outFigure->fields.dispOffset.fields.y;
  v109.fields.x = outFigure->fields.dispOffset.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v109, 0);
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
    if ( !LODWORD(v35->max_length) )
      goto LABEL_100;
    v57 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_101;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    v58 = v57 >= (int)this ? inFigure : outFigure;
    *(_WORD *)&v10->fields.isWide = *(_WORD *)&v58->fields.isWide;
    if ( !LODWORD(v19->max_length) )
      goto LABEL_100;
    this = (UIStandFigureM_o *)v19->m_Items[0];
    if ( !this )
      goto LABEL_101;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( !LODWORD(v35->max_length) )
      goto LABEL_100;
    v59 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_101;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v59 >= (int)this )
    {
      if ( !LODWORD(v35->max_length) )
        goto LABEL_100;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_101;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v19->max_length) )
        goto LABEL_100;
      v64 = (int)this;
      this = (UIStandFigureM_o *)v19->m_Items[0];
      if ( !this )
        goto LABEL_101;
      v65 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
              this,
              this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v117.fields.z = 0.0;
      v117.fields.w = 1.0;
      v117.fields.y = (float)v64 / (float)v65;
      v117.fields.x = v117.fields.y * 0.5;
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
      if ( !LODWORD(v35->max_length) )
        goto LABEL_100;
      v60 = (int)this;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_101;
      v117.fields.w = (float)v60
                    / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v117.fields.y = 1.0;
      v117.fields.z = v117.fields.w * 0.5;
      v117.fields.x = 0.0;
    }
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_17058/*"_UvRangeX"*/, v117, 0);
  }
  v66 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v66, 0);
  v67 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( !v67 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v67 + 24) )
    goto LABEL_100;
  *(_DWORD *)(v67 + 40) = 0;
  *(float *)(v67 + 32) = (float)LeftX;
  *(float *)(v67 + 36) = (float)(int)this;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v67 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  *(_DWORD *)(v67 + 52) = 0;
  *(float *)(v67 + 44) = (float)RightX;
  *(float *)(v67 + 48) = (float)(int)this;
  v70 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v67 + 24) <= 2u
    || (*(_DWORD *)(v67 + 64) = 0,
        *(float *)(v67 + 56) = (float)v70,
        *(float *)(v67 + 60) = (float)(int)this,
        v71 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0),
        this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0),
        (*(_DWORD *)(v67 + 24) & 0xFFFFFFFC) == 0) )
  {
LABEL_100:
    sub_2213CE4(this);
  }
  *(_DWORD *)(v67 + 76) = 0;
  *(float *)(v67 + 68) = (float)v71;
  *(float *)(v67 + 72) = (float)(int)this;
  this = (UIStandFigureM_o *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v72 = this;
  if ( !byte_5969AE9 )
  {
    this = (UIStandFigureM_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v72 )
LABEL_101:
    sub_2213CDC(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v72->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_100;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v75 = -static_fields[10].n64_f32[0];
  v72->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v72->fields.rightAnchor = v75;
  if ( (m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  v76 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v77 = -v76[10].n64_f32[0];
  *(float32x2_t *)((char *)&v72->fields.rightAnchor + 4) = vneg_f32(v76[9]);
  *((float *)&v72->fields.bottomAnchor + 1) = v77;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_100;
  v78 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v79 = -v78[10].n64_f32[0];
  v72->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v78[9]).n64_u64[0];
  v72->fields.updateAnchors = v79;
  if ( (m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  v80 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v81 = -v80[10].n64_f32[0];
  *(float32x2_t *)(&v72->fields.updateAnchors + 1) = vneg_f32(v80[9]);
  *((float *)&v72->fields.mGo + 1) = v81;
  v82 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v82 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v82 + 24) )
    goto LABEL_100;
  *(float *)(v82 + 32) = BodyU;
  *(float *)(v82 + 36) = BodyV;
  v85 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v87 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v82 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  *(float *)(v82 + 40) = v85 + BodyW;
  *(float *)(v82 + 44) = v87;
  v88 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v89 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v82 + 24) <= 2u )
    goto LABEL_100;
  *(float *)(v82 + 48) = v88;
  *(float *)(v82 + 52) = v89 - BodyH;
  v91 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v92 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v93 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v94 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v82 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  *(float *)(v82 + 56) = v91 + v92;
  *(float *)(v82 + 60) = v93 - v94;
  v95 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  v96 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v97 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v95 )
    goto LABEL_101;
  if ( !*(_DWORD *)(v95 + 24) )
    goto LABEL_100;
  *(float *)(v95 + 32) = v96;
  *(float *)(v95 + 36) = v97;
  v98 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v99 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v100 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v95 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_100;
  *(float *)(v95 + 40) = v98 + v99;
  *(float *)(v95 + 44) = v100;
  v101 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v102 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v103 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v95 + 24) <= 2u )
    goto LABEL_100;
  *(float *)(v95 + 48) = v101;
  *(float *)(v95 + 52) = v102 - v103;
  v104 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v105 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v106 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v107 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v95 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_100;
  *(float *)(v95 + 56) = v104 + v105;
  *(float *)(v95 + 60) = v106 - v107;
  if ( !v66 )
    goto LABEL_101;
  UnityEngine_Mesh__set_vertices(v66, (UnityEngine_Vector3_array *)v67, 0);
  UnityEngine_Mesh__set_normals(v66, (UnityEngine_Vector3_array *)v72, 0);
  UnityEngine_Mesh__set_uv(v66, (UnityEngine_Vector2_array *)v82, 0);
  UnityEngine_Mesh__set_uv2(v66, (UnityEngine_Vector2_array *)v95, 0);
  v108 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v108,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__17561EE993D63D39DEA46FA556F169AC25EA9094105A6E8EB18EACBD66ACD57E,
    0);
  UnityEngine_Mesh__set_triangles(v66, (System_Int32_array *)v108, 0);
  UnityEngine_Mesh__RecalculateNormals(v66, 0);
  UnityEngine_Mesh__RecalculateBounds(v66, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_101;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v66, 0);
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
  UIStandFigureM_o *v28; // x0
  const MethodInfo *v29; // x3
  int v30; // w26
  System_String_o *v32; // x1
  struct UnityEngine_Texture2D_array *v35; // x26
  float v36; // s12
  float v37; // s13
  float v38; // s14
  float v39; // s15
  float v40; // s8
  float v41; // s9
  float v42; // s10
  float v43; // s11
  UIStandFigureM_o *v44; // x0
  const MethodInfo *v45; // x3
  int v46; // w25
  System_String_o *v48; // x1
  float x; // s8
  float v52; // s9
  int v53; // w25
  float y; // s10
  float v55; // s11
  int v56; // w0
  int v57; // w23
  int v58; // w22
  int v59; // w22
  int v63; // w22
  int v64; // w0
  UnityEngine_Mesh_o *v65; // x22
  __int64 v66; // x23
  int32_t LeftX; // w24
  int32_t RightX; // w24
  int32_t v69; // w24
  int32_t v70; // w24
  unsigned int v71; // w8
  float v72; // s0
  float v73; // s1
  float32x2_t v74; // d0
  float32x2_t v75; // d1
  __int64 v76; // d0
  float v77; // s0
  float v78; // s1
  float v79; // s0
  float v80; // s1
  float32x2_t v81; // d0
  float32x2_t v82; // d1
  __int64 v83; // d0
  float v84; // s0
  float v85; // s1
  UIStandFigureM_o *v86; // x24
  unsigned int m_CancellationTokenSource; // w9
  float32x2_t *static_fields; // x10
  float v89; // s1
  float32x2_t *v90; // x10
  float v91; // s1
  float32x2_t *v92; // x10
  int32_t v93; // s1
  float32x2_t *v94; // x10
  float v95; // s1
  float32x2_t *v96; // x10
  float v97; // s1
  float32x2_t *v98; // x10
  int32_t v99; // s1
  float32x2_t *v100; // x10
  float v101; // s1
  float32x2_t *v102; // x10
  float v103; // s1
  float32x2_t *v104; // x10
  float v105; // s1
  float32x2_t *v106; // x10
  float v107; // s1
  float32x2_t *v108; // x10
  float v109; // s1
  float32x2_t *v110; // x8
  int32_t v111; // s1
  __int64 v112; // x25
  float BodyU; // s8
  float BodyV; // s0
  float v115; // s8
  float BodyW; // s9
  float v117; // s0
  float v118; // s8
  float v119; // s9
  float BodyH; // s0
  float v121; // s8
  float v122; // s9
  float v123; // s10
  float v124; // s0
  unsigned int v125; // w8
  float v126; // s0
  float v127; // s1
  __int64 v128; // x26
  float v129; // s8
  float v130; // s0
  float v131; // s8
  float v132; // s9
  float v133; // s0
  float v134; // s8
  float v135; // s9
  float v136; // s0
  float v137; // s8
  float v138; // s9
  float v139; // s10
  float v140; // s0
  unsigned int v141; // w8
  float v142; // s0
  float v143; // s1
  float v144; // s0
  float v145; // s1
  System_Array_o *v146; // x20
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v28,
                               v9->fields.faceType,
                               v9->fields.faceTextureSize,
                               v29);
  if ( (unsigned int)this >= LODWORD(v19->max_length) )
    goto LABEL_131;
  v30 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16859/*"_FaceTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[(int)this],
    0);
  if ( (unsigned int)(v30 + 1) >= LODWORD(v19->max_length) )
    goto LABEL_131;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16847/*"_FaceAlphaTex2"*/,
    (UnityEngine_Texture_o *)v19->m_Items[v30 + 1],
    0);
  if ( isContinueSilhouette )
    UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16871/*"_FilterColor"*/, v10->fields.filterColor, 0);
  UIWidget__set_color((UIWidget_o *)v10, outFigure->fields.mColor, 0);
  UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16813/*"_Color"*/, v10->fields.mColor, 0);
  if ( v9->fields.faceType )
  {
    v148.fields.x = m_XMin;
    v148.fields.y = m_YMin;
    v148.fields.z = m_Width;
    v148.fields.w = m_Height;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v148, 0);
    v149.fields.x = v24;
    v149.fields.y = v25;
    v32 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v149.fields.z = v26;
    v149.fields.w = v27;
  }
  else
  {
    v150.fields.x = 0.0;
    v150.fields.y = 0.0;
    v150.fields.z = 0.0;
    v150.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16851/*"_FaceInfo2"*/, v150, 0);
    v32 = (System_String_o *)StringLiteral_16861/*"_FaceTexOffset2"*/;
    v149.fields.x = 0.0;
    v149.fields.y = 0.0;
    v149.fields.z = 0.0;
    v149.fields.w = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v32, v149, 0);
  v35 = outFigure->fields.textureList;
  if ( !v35 )
    goto LABEL_132;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_131;
  v36 = outFigure->fields.faceTextureRect.fields.m_XMin;
  v37 = outFigure->fields.faceTextureRect.fields.m_YMin;
  v38 = outFigure->fields.faceTextureRect.fields.m_Width;
  v39 = outFigure->fields.faceTextureRect.fields.m_Height;
  v40 = outFigure->fields.faceRect.fields.m_XMin;
  v41 = outFigure->fields.faceRect.fields.m_YMin;
  v42 = outFigure->fields.faceRect.fields.m_Width;
  v43 = outFigure->fields.faceRect.fields.m_Height;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[0],
    0);
  if ( (v35->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[1],
    0);
  this = (UIStandFigureM_o *)UIStandFigureM__GetTexturePosition(
                               v44,
                               outFigure->fields.faceType,
                               outFigure->fields.faceTextureSize,
                               v45);
  if ( (unsigned int)this >= LODWORD(v35->max_length) )
    goto LABEL_131;
  v46 = (int)this;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16858/*"_FaceTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[(int)this],
    0);
  if ( (unsigned int)(v46 + 1) >= LODWORD(v35->max_length) )
    goto LABEL_131;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16846/*"_FaceAlphaTex"*/,
    (UnityEngine_Texture_o *)v35->m_Items[v46 + 1],
    0);
  if ( outFigure->fields.faceType )
  {
    v151.fields.x = v36;
    v151.fields.y = v37;
    v151.fields.z = v38;
    v151.fields.w = v39;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v151, 0);
    v152.fields.x = v40;
    v152.fields.y = v41;
    v48 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v152.fields.z = v42;
    v152.fields.w = v43;
  }
  else
  {
    v153.fields.x = 0.0;
    v153.fields.y = 0.0;
    v153.fields.z = 0.0;
    v153.fields.w = 0.0;
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16850/*"_FaceInfo"*/, v153, 0);
    v48 = (System_String_o *)StringLiteral_16860/*"_FaceTexOffset"*/;
    v152.fields.x = 0.0;
    v152.fields.y = 0.0;
    v152.fields.z = 0.0;
    v152.fields.w = 0.0;
  }
  UnityEngine_Material__SetVector(v18, v48, v152, 0);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_131;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_132;
  x = outFigure->fields.dispOffset.fields.x;
  v52 = v9->fields.dispOffset.fields.x;
  this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
  if ( !LODWORD(v19->max_length) )
    goto LABEL_131;
  v53 = (int)this;
  this = (UIStandFigureM_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_132;
  y = outFigure->fields.dispOffset.fields.y;
  v55 = v9->fields.dispOffset.fields.y;
  v56 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._6_get_canBeAnchored.methodPtr)(
          this,
          this->klass->vtable._6_get_canBeAnchored.method);
  v154.fields.w = 0.0;
  v154.fields.x = (float)(x - v52) / (float)v53;
  v154.fields.y = (float)(y - v55) / (float)v56;
  v154.fields.z = 0.0;
  UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_16962/*"_PositionOffset"*/, v154, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_132;
  this = (UIStandFigureM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_132;
  v147.fields.z = 0.0;
  v147.fields.y = outFigure->fields.dispOffset.fields.y;
  v147.fields.x = outFigure->fields.dispOffset.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v147, 0);
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
    if ( !LODWORD(v35->max_length) )
      goto LABEL_131;
    v57 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_132;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v57 < (int)this )
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
    if ( !LODWORD(v35->max_length) )
      goto LABEL_131;
    v58 = (int)this;
    this = (UIStandFigureM_o *)v35->m_Items[0];
    if ( !this )
      goto LABEL_132;
    this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_isAnchoredHorizontally.method);
    if ( v58 >= (int)this )
    {
      if ( !LODWORD(v35->max_length) )
        goto LABEL_131;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_132;
      this = (UIStandFigureM_o *)((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_isAnchoredHorizontally.method);
      if ( !LODWORD(v19->max_length) )
        goto LABEL_131;
      v63 = (int)this;
      this = (UIStandFigureM_o *)v19->m_Items[0];
      if ( !this )
        goto LABEL_132;
      v64 = ((__int64 (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
              this,
              this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v155.fields.z = 0.0;
      v155.fields.w = 1.0;
      v155.fields.y = (float)v63 / (float)v64;
      v155.fields.x = v155.fields.y * 0.5;
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
      if ( !LODWORD(v35->max_length) )
        goto LABEL_131;
      v59 = (int)this;
      this = (UIStandFigureM_o *)v35->m_Items[0];
      if ( !this )
        goto LABEL_132;
      v155.fields.w = (float)v59
                    / (float)((int (__fastcall *)(UIStandFigureM_o *, const MethodInfo *))this->klass->vtable._4_get_isAnchoredHorizontally.methodPtr)(
                               this,
                               this->klass->vtable._4_get_isAnchoredHorizontally.method);
      v155.fields.y = 1.0;
      v155.fields.z = v155.fields.w * 0.5;
      v155.fields.x = 0.0;
    }
    UnityEngine_Material__SetVector(v18, (System_String_o *)StringLiteral_17058/*"_UvRangeX"*/, v155, 0);
  }
  v65 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v65, 0);
  v66 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 12);
  LeftX = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( !v66 )
    goto LABEL_132;
  if ( !*(_DWORD *)(v66 + 24) )
    goto LABEL_131;
  *(_DWORD *)(v66 + 40) = 0;
  *(float *)(v66 + 32) = (float)LeftX;
  *(float *)(v66 + 36) = (float)(int)this;
  RightX = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_TopY((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v66 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  *(_DWORD *)(v66 + 52) = 0;
  *(float *)(v66 + 44) = (float)RightX;
  *(float *)(v66 + 48) = (float)(int)this;
  v69 = UIStandFigureRender__get_LeftX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v66 + 24) <= 2u )
    goto LABEL_131;
  *(_DWORD *)(v66 + 64) = 0;
  *(float *)(v66 + 56) = (float)v69;
  *(float *)(v66 + 60) = (float)(int)this;
  v70 = UIStandFigureRender__get_RightX((UIStandFigureRender_o *)v10, 0);
  this = (UIStandFigureM_o *)UIStandFigureRender__get_BottomY((UIStandFigureRender_o *)v10, 0);
  v71 = *(_DWORD *)(v66 + 24);
  if ( v71 <= 3 )
    goto LABEL_131;
  *(_DWORD *)(v66 + 76) = 0;
  *(float *)(v66 + 68) = (float)v70;
  *(float *)(v66 + 72) = (float)(int)this;
  if ( v71 == 4 )
    goto LABEL_131;
  v72 = v9->fields.facePositionRect.fields.m_Height + v9->fields.facePositionRect.fields.m_YMin;
  v73 = v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v66 + 88) = 0;
  *(float *)(v66 + 80) = v73;
  *(float *)(v66 + 84) = v72;
  if ( v71 <= 5 )
    goto LABEL_131;
  v74.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_Width;
  v75.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v66 + 100) = 0;
  *(float32x2_t *)(v66 + 92) = vadd_f32(v74, v75);
  if ( v71 == 6 )
    goto LABEL_131;
  v76 = *(_QWORD *)&v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v66 + 112) = 0;
  *(_QWORD *)(v66 + 104) = v76;
  if ( v71 <= 7 )
    goto LABEL_131;
  v77 = v9->fields.facePositionRect.fields.m_Width + v9->fields.facePositionRect.fields.m_XMin;
  v78 = v9->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v66 + 124) = 0;
  *(float *)(v66 + 116) = v77;
  *(float *)(v66 + 120) = v78;
  if ( v71 == 8 )
    goto LABEL_131;
  v79 = v9->fields.facePositionRect.fields.m_Height + v9->fields.facePositionRect.fields.m_YMin;
  v80 = v9->fields.facePositionRect.fields.m_XMin;
  *(_DWORD *)(v66 + 136) = 0;
  *(float *)(v66 + 128) = v80;
  *(float *)(v66 + 132) = v79;
  if ( v71 <= 9
    || (v81.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_Width,
        v82.n64_u64[0] = *(unsigned __int64 *)&v9->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v66 + 148) = 0,
        *(float32x2_t *)(v66 + 140) = vadd_f32(v81, v82),
        v71 == 10)
    || (v83 = *(_QWORD *)&v9->fields.facePositionRect.fields.m_XMin,
        *(_DWORD *)(v66 + 160) = 0,
        *(_QWORD *)(v66 + 152) = v83,
        v71 <= 0xB) )
  {
LABEL_131:
    sub_2213CE4(this);
  }
  v84 = v9->fields.facePositionRect.fields.m_Width + v9->fields.facePositionRect.fields.m_XMin;
  v85 = v9->fields.facePositionRect.fields.m_YMin;
  *(_DWORD *)(v66 + 172) = 0;
  *(float *)(v66 + 164) = v84;
  *(float *)(v66 + 168) = v85;
  this = (UIStandFigureM_o *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 12);
  v86 = this;
  if ( !byte_5969AE9 )
  {
    this = (UIStandFigureM_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v86 )
LABEL_132:
    sub_2213CDC(this, inFigure);
  m_CancellationTokenSource = (unsigned int)v86->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_131;
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v89 = -static_fields[10].n64_f32[0];
  v86->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(static_fields[9]).n64_u64[0];
  *(float *)&v86->fields.rightAnchor = v89;
  if ( (m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  v90 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v91 = -v90[10].n64_f32[0];
  *(float32x2_t *)((char *)&v86->fields.rightAnchor + 4) = vneg_f32(v90[9]);
  *((float *)&v86->fields.bottomAnchor + 1) = v91;
  if ( m_CancellationTokenSource <= 2 )
    goto LABEL_131;
  v92 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v93 = -v92[10].n64_f32[0];
  v86->fields.topAnchor = (struct UIRect_AnchorPoint_o *)vneg_f32(v92[9]).n64_u64[0];
  v86->fields.updateAnchors = v93;
  if ( (m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    goto LABEL_131;
  v94 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v95 = -v94[10].n64_f32[0];
  *(float32x2_t *)(&v86->fields.updateAnchors + 1) = vneg_f32(v94[9]);
  *((float *)&v86->fields.mGo + 1) = v95;
  if ( m_CancellationTokenSource <= 4 )
    goto LABEL_131;
  v96 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v97 = -v96[10].n64_f32[0];
  v86->fields.mTrans = (struct UnityEngine_Transform_o *)vneg_f32(v96[9]).n64_u64[0];
  *(float *)&v86->fields.mChildren = v97;
  if ( m_CancellationTokenSource == 5 )
    goto LABEL_131;
  v98 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v99 = -v98[10].n64_f32[0];
  *(float32x2_t *)((char *)&v86->fields.mChildren + 4) = vneg_f32(v98[9]);
  v86->fields.mUpdateFrame = v99;
  if ( m_CancellationTokenSource <= 6 )
    goto LABEL_131;
  v100 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v101 = -v100[10].n64_f32[0];
  *(float32x2_t *)&v86->fields.mAnchorsCached = vneg_f32(v100[9]);
  *(float *)&v86->fields.mRoot = v101;
  if ( (m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
    goto LABEL_131;
  v102 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v103 = -v102[10].n64_f32[0];
  *(float32x2_t *)((char *)&v86->fields.mRoot + 4) = vneg_f32(v102[9]);
  *((float *)&v86->fields.mParent + 1) = v103;
  if ( m_CancellationTokenSource <= 8 )
    goto LABEL_131;
  v104 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v105 = -v104[10].n64_f32[0];
  *(float32x2_t *)&v86->fields.mRootSet = vneg_f32(v104[9]);
  *(float *)&v86->fields.mCam = v105;
  if ( m_CancellationTokenSource == 9 )
    goto LABEL_131;
  v106 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v107 = -v106[10].n64_f32[0];
  *(float32x2_t *)((char *)&v86->fields.mCam + 4) = vneg_f32(v106[9]);
  v86->fields.mColor.fields.r = v107;
  if ( m_CancellationTokenSource <= 0xA )
    goto LABEL_131;
  v108 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v109 = -v108[10].n64_f32[0];
  *(float32x2_t *)&v86->fields.mColor.fields.g = vneg_f32(v108[9]);
  v86->fields.mColor.fields.a = v109;
  if ( m_CancellationTokenSource == 11 )
    goto LABEL_131;
  v110 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  *(float *)&v111 = -v110[10].n64_f32[0];
  *(float32x2_t *)&v86->fields.mPivot = vneg_f32(v110[9]);
  v86->fields.mHeight = v111;
  v112 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 12);
  BodyU = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyV = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v112 )
    goto LABEL_132;
  if ( !*(_DWORD *)(v112 + 24) )
    goto LABEL_131;
  *(float *)(v112 + 32) = BodyU;
  *(float *)(v112 + 36) = BodyV;
  v115 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  BodyW = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v117 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v112 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  *(float *)(v112 + 40) = v115 + BodyW;
  *(float *)(v112 + 44) = v117;
  v118 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v119 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  BodyH = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v112 + 24) <= 2u )
    goto LABEL_131;
  *(float *)(v112 + 48) = v118;
  *(float *)(v112 + 52) = v119 - BodyH;
  v121 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v122 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v123 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v124 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  v125 = *(_DWORD *)(v112 + 24);
  if ( v125 <= 3 )
    goto LABEL_131;
  *(float *)(v112 + 56) = v121 + v122;
  *(float *)(v112 + 60) = v123 - v124;
  if ( v125 == 4 )
    goto LABEL_131;
  v126 = v9->fields.faceTextureRect.fields.m_Height + v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v112 + 64) = v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v112 + 68) = v126;
  if ( v125 <= 5 )
    goto LABEL_131;
  *(float32x2_t *)(v112 + 72) = vadd_f32(
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_XMin);
  if ( v125 == 6 )
    goto LABEL_131;
  *(_QWORD *)(v112 + 80) = *(_QWORD *)&v9->fields.faceTextureRect.fields.m_XMin;
  if ( v125 <= 7 )
    goto LABEL_131;
  v127 = v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v112 + 88) = v9->fields.faceTextureRect.fields.m_Width + v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v112 + 92) = v127;
  if ( v125 == 8 )
    goto LABEL_131;
  *(_QWORD *)(v112 + 96) = 0;
  if ( v125 <= 9 )
    goto LABEL_131;
  *(_QWORD *)(v112 + 104) = 0;
  if ( v125 == 10 )
    goto LABEL_131;
  *(_QWORD *)(v112 + 112) = 0;
  if ( v125 <= 0xB )
    goto LABEL_131;
  *(_QWORD *)(v112 + 120) = 0;
  v128 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 12);
  v129 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v130 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( !v128 )
    goto LABEL_132;
  if ( !*(_DWORD *)(v128 + 24) )
    goto LABEL_131;
  *(float *)(v128 + 32) = v129;
  *(float *)(v128 + 36) = v130;
  v131 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v132 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v133 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  if ( (*(_DWORD *)(v128 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_131;
  *(float *)(v128 + 40) = v131 + v132;
  *(float *)(v128 + 44) = v133;
  v134 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v135 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v136 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  if ( *(_DWORD *)(v128 + 24) <= 2u )
    goto LABEL_131;
  *(float *)(v128 + 48) = v134;
  *(float *)(v128 + 52) = v135 - v136;
  v137 = UIStandFigureRender__get_BodyU((UIStandFigureRender_o *)v10, 0);
  v138 = UIStandFigureRender__get_BodyW((UIStandFigureRender_o *)v10, 0);
  v139 = UIStandFigureRender__get_BodyV((UIStandFigureRender_o *)v10, 0);
  v140 = UIStandFigureRender__get_BodyH((UIStandFigureRender_o *)v10, 0);
  v141 = *(_DWORD *)(v128 + 24);
  if ( v141 <= 3 )
    goto LABEL_131;
  *(float *)(v128 + 56) = v137 + v138;
  *(float *)(v128 + 60) = v139 - v140;
  if ( v141 == 4 )
    goto LABEL_131;
  v142 = v9->fields.faceTextureRect.fields.m_Height + v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v128 + 64) = v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v128 + 68) = v142;
  if ( v141 <= 5 )
    goto LABEL_131;
  *(float32x2_t *)(v128 + 72) = vadd_f32(
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_Width,
                                  *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_XMin);
  if ( v141 == 6 )
    goto LABEL_131;
  *(_QWORD *)(v128 + 80) = *(_QWORD *)&v9->fields.faceTextureRect.fields.m_XMin;
  if ( v141 <= 7 )
    goto LABEL_131;
  v143 = v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v128 + 88) = v9->fields.faceTextureRect.fields.m_Width + v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v128 + 92) = v143;
  if ( v141 == 8 )
    goto LABEL_131;
  v144 = v9->fields.faceTextureRect.fields.m_Height + v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v128 + 96) = v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v128 + 100) = v144;
  if ( v141 <= 9 )
    goto LABEL_131;
  *(float32x2_t *)(v128 + 104) = vadd_f32(
                                   *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_Width,
                                   *(float32x2_t *)&v9->fields.faceTextureRect.fields.m_XMin);
  if ( v141 == 10 )
    goto LABEL_131;
  *(_QWORD *)(v128 + 112) = *(_QWORD *)&v9->fields.faceTextureRect.fields.m_XMin;
  if ( v141 <= 0xB )
    goto LABEL_131;
  v145 = v9->fields.faceTextureRect.fields.m_YMin;
  *(float *)(v128 + 120) = v9->fields.faceTextureRect.fields.m_Width + v9->fields.faceTextureRect.fields.m_XMin;
  *(float *)(v128 + 124) = v145;
  if ( !v65 )
    goto LABEL_132;
  UnityEngine_Mesh__set_vertices(v65, (UnityEngine_Vector3_array *)v66, 0);
  UnityEngine_Mesh__set_normals(v65, (UnityEngine_Vector3_array *)v86, 0);
  UnityEngine_Mesh__set_uv(v65, (UnityEngine_Vector2_array *)v112, 0);
  UnityEngine_Mesh__set_uv2(v65, (UnityEngine_Vector2_array *)v128, 0);
  v146 = (System_Array_o *)sub_2213B20(int___TypeInfo, 30);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v146,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__069DF9CCFA1F4B655A076CAE43C0BECBCC82EE255C5C4E18D4A6AA1F8EF09131,
    0);
  UnityEngine_Mesh__set_triangles(v65, (System_Int32_array *)v146, 0);
  UnityEngine_Mesh__RecalculateNormals(v65, 0);
  UnityEngine_Mesh__RecalculateBounds(v65, 0);
  this = (UIStandFigureM_o *)v10->fields.bodyFilter;
  if ( !this )
    goto LABEL_132;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)this, v65, 0);
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