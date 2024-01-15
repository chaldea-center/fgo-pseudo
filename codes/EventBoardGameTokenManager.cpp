void __fastcall EventBoardGameTokenManager___ctor(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  this->fields.tokenInfoDialog = (struct EventBoardGameTokenInfoDialog_o *)0x4260000042400000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventBoardGameTokenManager__Awake(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
  this->fields.eventUIAssetData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.arrangementPich = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.arrangementPich, 0LL, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v9; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Transform_o *v13; // x0
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_GameObject_o *tokenInfoDialogPrefab; // x0
  float v18; // s8
  float v19; // s9
  float v20; // s10
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC543 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC543 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6 )
    goto LABEL_12;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform(v6, 0LL);
  v9 = UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !v9 )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition(v9, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v13 = UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !v13
    || (*(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localScale(v13, 0LL),
        (tokenInfoDialogPrefab = this->fields.tokenInfoDialogPrefab) == 0LL)
    || (v18 = v14,
        v19 = v15,
        v20 = v16,
        v21 = UnityEngine_GameObject__get_transform(tokenInfoDialogPrefab, 0LL),
        !transform) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Transform__set_parent(transform, v21, 0LL);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v25.fields.x = v18;
  v25.fields.y = v19;
  v25.fields.z = v20;
  UnityEngine_Transform__set_localScale(transform, v25, 0LL);
  return v7;
}


UIAtlas_o *__fastcall EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UIAtlas_o *result; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_40FC547 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_40FC547 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_18AFE14 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     assetData,
                                                                     name,
                                                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( Object_WarBoardWaitTimeSetting )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              Object_WarBoardWaitTimeSetting,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B170D4();
    }
    return 0LL;
  }
  return result;
}


void __fastcall EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UISprite_o **p_bgImage; // x20
  struct UISprite_o *bgImage; // x21
  __int64 v6; // x22
  unsigned __int64 v7; // x24
  UnityEngine_Object_o *v8; // x21
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UISprite_o *v16; // x21
  EventBoardGameTokenItem_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_40FC544 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC544 = 1;
  }
  p_bgImage = &this->fields.bgImage;
  bgImage = this->fields.bgImage;
  if ( bgImage )
  {
    v6 = 4LL;
    while ( 1 )
    {
      v7 = v6 - 4;
      if ( v6 - 4 >= (unsigned __int64)LODWORD(bgImage->fields.leftAnchor) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v8 = *(UnityEngine_Object_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8 * v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
      {
        v16 = *p_bgImage;
        if ( !*p_bgImage )
          goto LABEL_18;
        if ( v7 >= LODWORD(v16->fields.leftAnchor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v17 = *(EventBoardGameTokenItem_o **)(*(_QWORD *)&v16->fields.m_CachedPtr + 8 * v6);
        if ( !v17 )
LABEL_18:
          sub_B170D4();
        EventBoardGameTokenItem__DestroyItem(v17, v9);
      }
      if ( v7 > 0x32 )
        break;
      bgImage = *p_bgImage;
      ++v6;
      if ( !*p_bgImage )
        goto LABEL_18;
    }
    this->fields.bgImage = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.bgImage, 0LL, v10, v11, v12, v13, v14, v15);
    EventBoardGameTokenManager__closeTokenInfo(this, v18);
    EventBoardGameTokenManager__ReleaseEventUI(this, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__Init(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_40FC53F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, v7);
    sub_B16FFC(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, v8);
    byte_40FC53F = 1;
  }
  v9 = sub_B170CC(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&eventId, method, v3, v4);
  EventBoardGameTokenManager___c__DisplayClass18_0___ctor((EventBoardGameTokenManager___c__DisplayClass18_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 24) = eventId;
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v20, 1, v21);
}


void __fastcall EventBoardGameTokenManager__LoadEventUI(
        EventBoardGameTokenManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *eventUIDownloadAtlas; // x0
  System_Delegate_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  const MethodInfo *v24; // x2
  EventBoardGameTokenManager_o *v25; // x0
  int32_t v26; // w1
  const MethodInfo *v27; // x2

  if ( (byte_40FC545 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&Method_EventBoardGameTokenManager_LoadEventUIEnd__, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6185/*"EventUI/Prefabs/80285"*/, v10);
    byte_40FC545 = 1;
  }
  eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
  if ( eventUIDownloadAtlas && !AssetData__get_IsEmpty(eventUIDownloadAtlas, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v12 = System_Delegate__Combine(
            (System_Delegate_o *)this->fields.eventUIAssetData,
            (System_Delegate_o *)callback,
            0LL);
    if ( v12 && (System_Action_c *)v12->klass != System_Action_TypeInfo )
    {
      sub_B173C8(v12);
      EventBoardGameTokenManager__SetArrangement(v25, v26, v27);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v12;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      if ( !LOBYTE(this->fields.eventUILoadCallbackFunc) )
      {
        LOBYTE(this->fields.eventUILoadCallbackFunc) = 1;
        v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                    AssetLoader_LoadEndDataHandler_TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
        AssetLoader_LoadEndDataHandler___ctor(
          v23,
          (Il2CppObject *)this,
          Method_EventBoardGameTokenManager_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6185/*"EventUI/Prefabs/80285"*/, v23, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v24);
        }
      }
    }
  }
}


void __fastcall EventBoardGameTokenManager__LoadEventUIEnd(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventBoardGameTokenManager_o *v10; // x0
  const MethodInfo *v11; // x3
  System_Int32_array **UIAtlasFromAssetData; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_eventUIAssetData; // x19
  System_Action_o *v20; // x20
  struct AssetData_o *eventUIAssetData; // t1

  if ( (byte_40FC546 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5359/*"DownloadEventUIAtlas8028500"*/, assetData);
    byte_40FC546 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = (System_Int32_array **)EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
                                                    v10,
                                                    assetData,
                                                    (System_String_o *)StringLiteral_5359/*"DownloadEventUIAtlas8028500"*/,
                                                    v11);
    this->fields.arrangementPich = (struct UnityEngine_Vector2_o)UIAtlasFromAssetData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.arrangementPich,
      UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  p_eventUIAssetData = (BattleServantConfConponent_o *)&this->fields.eventUIAssetData;
  v20 = (System_Action_o *)eventUIAssetData;
  if ( eventUIAssetData )
  {
    p_eventUIAssetData->klass = 0LL;
    sub_B16F98(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v20, 0LL);
  }
}


void __fastcall EventBoardGameTokenManager__ReleaseEventUI(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x20
  AssetData_o *eventUIDownloadAtlas; // x21
  struct UnityEngine_Vector2_o *p_arrangementPich; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FC548 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6185/*"EventUI/Prefabs/80285"*/, v9);
    byte_40FC548 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6185/*"EventUI/Prefabs/80285"*/, 0LL);
    p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
  }
  else
  {
    p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
    eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
    if ( eventUIDownloadAtlas )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_29947376(eventUIDownloadAtlas, 0LL);
    }
  }
  this->fields.arrangementPich = 0LL;
  p_arrangementPich = &this->fields.arrangementPich;
  sub_B16F98((BattleServantConfConponent_o *)p_arrangementPich, 0LL, v2, v3, v4, v5, v6, v7);
  p_arrangementPich[-1] = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v13, v14, v15, v16, v17, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  EventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x25
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w8
  int v29; // w10
  int v30; // w12
  unsigned int v31; // w27
  int v32; // w21
  struct UnityEngine_GameObject_o *parentObject; // x22
  int v34; // w19
  int v35; // w12
  int v36; // w28
  int v37; // w8
  float v38; // s10
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x22
  EventBoardGameTokenItem_o *Component_srcLineSprite; // x0
  const MethodInfo *v42; // x1
  EventBoardGameTokenItem_o *v43; // x23
  const MethodInfo *v44; // x4
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  WebViewManager_o *v51; // x0
  UserEventBoardGameTokenMaster_o *v52; // x0
  bool IsHavingToken; // w24
  System_Int32_array **arrangementPich; // x1
  EventBoardGameTokenEntity_o *v55; // x25
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_int__o *v60; // x26
  const MethodInfo *v61; // x5
  struct UISprite_o *bgImage; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v64; // x23
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_Transform_o *v66; // x0
  UnityEngine_Transform_o *v67; // x22
  int v68; // s0
  EventBoardGameTokenMaster_o *v71; // [xsp+0h] [xbp-90h]
  int v73; // [xsp+10h] [xbp-80h]
  int v74; // [xsp+14h] [xbp-7Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC540 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Action_int__TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, v6);
    sub_B16FFC(&Method_EventBoardGameTokenManager_checkTokenInfo__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FC540 = 1;
  }
  item = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_32:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.bgImage = (struct UISprite_o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgImage,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = 0;
  v29 = 11;
  v30 = 1;
  v31 = -1;
  v32 = 1;
  v71 = MasterData_WarQuestSelectionMaster;
  do
  {
    parentObject = this->fields.parentObject;
    v34 = v28 != 0 && v28 % v29 == 0;
    v35 = v30 ^ v34;
    if ( v28 == 0 || v28 % v29 != 0 )
      v36 = v28;
    else
      v36 = 0;
    if ( (v35 & 1) != 0 )
      v37 = 10;
    else
      v37 = 11;
    if ( (v35 & 1) != 0 )
      v38 = 22.0;
    else
      v38 = 0.0;
    v73 = v37;
    v74 = v35;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)parentObject,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v39 )
      goto LABEL_32;
    v40 = v39;
    Component_srcLineSprite = (EventBoardGameTokenItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v39,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      goto LABEL_32;
    v43 = Component_srcLineSprite;
    EventBoardGameTokenItem__Init(Component_srcLineSprite, v42);
    entity = 0LL;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    if ( !EventBoardGameTokenMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, eventId, v31 + 2, v44) )
      goto LABEL_24;
    v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v51 )
      goto LABEL_32;
    v52 = (UserEventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v51,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v52 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken(v52, v31 + 2, 0LL);
    else
LABEL_24:
      IsHavingToken = 0;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    v43->fields.eventAtlas = (struct UIAtlas_o *)arrangementPich;
    sub_B16F98((BattleServantConfConponent_o *)&v43->fields.eventAtlas, arrangementPich, v45, v46, v47, v48, v49, v50);
    v55 = entity;
    v60 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v56, v57, v58, v59);
    System_Action_int____ctor(
      v60,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_checkTokenInfo__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    EventBoardGameTokenItem__SetItem(v43, &item, v55, IsHavingToken, v60, v61);
    bgImage = this->fields.bgImage;
    if ( !bgImage )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgImage,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    transform = UnityEngine_GameObject__get_transform(v40, 0LL);
    if ( !this->fields.tokenInfoDialogPrefab )
      goto LABEL_32;
    v64 = transform;
    v65 = UnityEngine_GameObject__get_transform(this->fields.tokenInfoDialogPrefab, 0LL);
    MasterData_WarQuestSelectionMaster = v71;
    if ( !v64 )
      goto LABEL_32;
    UnityEngine_Transform__set_parent(v64, v65, 0LL);
    v66 = UnityEngine_GameObject__get_transform(v40, 0LL);
    if ( !v66 )
      goto LABEL_32;
    v32 += v34;
    v77.fields.y = -(float)(*((float *)&this->fields.tokenInfoDialog + 1) * (float)v32);
    v77.fields.x = v38 + (float)(*(float *)&this->fields.tokenInfoDialog * (float)v36);
    v77.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v66, v77, 0LL);
    v67 = UnityEngine_GameObject__get_transform(v40, 0LL);
    *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_one(0LL);
    if ( !v67 )
      goto LABEL_32;
    UnityEngine_Transform__set_localScale(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
    v29 = v73;
    v30 = v74;
    ++v31;
    v28 = v36 + 1;
  }
  while ( v31 < 0x33 );
}


bool __fastcall EventBoardGameTokenManager__SetEventUI(
        EventBoardGameTokenManager_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *arrangementPich; // x22
  UISprite_o *v8; // x0
  System_String_o *v9; // x1
  UIAtlas_o *v11; // x0

  if ( (byte_40FC549 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FC549 = 1;
  }
  if ( System_String__IsNullOrEmpty(spriteName, 0LL) )
    goto LABEL_8;
  arrangementPich = (UnityEngine_Object_o *)this->fields.arrangementPich;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(arrangementPich, 0LL, 0LL) )
  {
LABEL_8:
    if ( sprite )
    {
      v8 = sprite;
      v9 = 0LL;
LABEL_10:
      UISprite__set_spriteName(v8, v9, 0LL);
      return 1;
    }
    goto LABEL_17;
  }
  v11 = (UIAtlas_o *)this->fields.arrangementPich;
  if ( !v11 )
    goto LABEL_17;
  if ( UIAtlas__GetSprite(v11, spriteName, 0LL) )
  {
    if ( sprite )
    {
      UISprite__set_atlas(sprite, *(UIAtlas_o **)&this->fields.arrangementPich, 0LL);
      v8 = sprite;
      v9 = spriteName;
      goto LABEL_10;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__checkTokenInfo(
        EventBoardGameTokenManager_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *tokenList; // x22
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *Menu; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o *v23; // x0
  System_Int32_array **arrangementPich; // x1
  struct UISprite_o *bgImage; // x21
  EventBoardGameTokenInfoDialog_o *v26; // x20
  int v27; // w19

  if ( (byte_40FC541 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___, *(_QWORD *)&tokenId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FC541 = 1;
  }
  tokenList = (UnityEngine_Object_o *)this->fields.tokenList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(tokenList, 0LL, 0LL) )
  {
    Menu = EventBoardGameTokenManager__CreateMenu(this, (UnityEngine_GameObject_o *)this[1].klass, v8);
    if ( !Menu )
      goto LABEL_15;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                Menu,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.tokenList,
      (System_Int32_array **)Component_srcLineSprite,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v23 = this->fields.tokenList;
    if ( !v23 )
      goto LABEL_15;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    v23[3].klass = (System_Collections_Generic_List_EventBoardGameTokenItem__c *)arrangementPich;
    sub_B16F98((BattleServantConfConponent_o *)&v23[3], arrangementPich, v17, v18, v19, v20, v21, v22);
  }
  bgImage = this->fields.bgImage;
  if ( !bgImage )
    goto LABEL_15;
  v26 = (EventBoardGameTokenInfoDialog_o *)this->fields.tokenList;
  v27 = tokenId - 1;
  if ( LODWORD(bgImage->fields.leftAnchor) <= v27 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !v26 )
LABEL_15:
    sub_B170D4();
  EventBoardGameTokenInfoDialog__OpenInfo(
    v26,
    *(EventBoardGameTokenItem_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8LL * v27 + 32),
    v8);
}


void __fastcall EventBoardGameTokenManager__closeTokenInfo(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o **p_tokenList; // x19
  UnityEngine_Object_o *v4; // x20
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o *tokenList; // t1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC542 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC542 = 1;
  }
  tokenList = this->fields.tokenList;
  p_tokenList = (UnityEngine_Component_o **)&this->fields.tokenList;
  v4 = (UnityEngine_Object_o *)tokenList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_tokenList )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenList, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_tokenList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_tokenList, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall EventBoardGameTokenManager___c__DisplayClass18_0___ctor(
        EventBoardGameTokenManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBoardGameTokenManager___c__DisplayClass18_0___Init_b__0(
        EventBoardGameTokenManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  struct EventBoardGameTokenManager_o *_4__this; // x0
  struct EventBoardGameTokenManager_o *v4; // x0

  if ( (byte_40F8B92 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22628/*"token_bg"*/, method);
    byte_40F8B92 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          (UISprite_o *)_4__this->fields.tokenPrefab,
          (System_String_o *)StringLiteral_22628/*"token_bg"*/,
          0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  if ( !v4->fields.bgImage )
    EventBoardGameTokenManager__SetArrangement(v4, this->fields.eventId, 0LL);
}