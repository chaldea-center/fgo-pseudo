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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.arrangementPich = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.arrangementPich, 0LL, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tokenInfoDialogPrefab; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *transform; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43550C4 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43550C4 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !tokenInfoDialogPrefab )
    goto LABEL_12;
  v7 = tokenInfoDialogPrefab;
  transform = UnityEngine_GameObject__get_transform(tokenInfoDialogPrefab, 0LL);
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !tokenInfoDialogPrefab )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)tokenInfoDialogPrefab, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !tokenInfoDialogPrefab
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)tokenInfoDialogPrefab,
                                           0LL),
        (tokenInfoDialogPrefab = this->fields.tokenInfoDialogPrefab) == 0LL)
    || (v15 = v12,
        v16 = v13,
        v17 = v14,
        tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                              tokenInfoDialogPrefab,
                                                              0LL),
        !transform) )
  {
LABEL_12:
    sub_B7076C(tokenInfoDialogPrefab, v6);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)tokenInfoDialogPrefab, 0LL);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v20, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v21.fields.x = v15;
  v21.fields.y = v16;
  v21.fields.z = v17;
  UnityEngine_Transform__set_localScale(transform, v21, 0LL);
  return v7;
}


UIAtlas_o *__fastcall EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  UIAtlas_o *result; // x0

  if ( (byte_43550C8 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObjectList_GameObject___);
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    this = (EventBoardGameTokenManager_o *)sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_43550C8 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_1BD68D4 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      this = (EventBoardGameTokenManager_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               assetData,
                                               name,
                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      if ( this )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B7076C(this, assetData);
    }
    return 0LL;
  }
  return result;
}


void __fastcall EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  struct UISprite_o **p_bgImage; // x20
  struct UISprite_o *bgImage; // x21
  __int64 v5; // x22
  unsigned __int64 v6; // x24
  UnityEngine_Object_o *v7; // x21
  EventBoardGameTokenItem_o *v8; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UISprite_o *v16; // x21
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_43550C5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43550C5 = 1;
  }
  p_bgImage = &this->fields.bgImage;
  bgImage = this->fields.bgImage;
  if ( bgImage )
  {
    v5 = 4LL;
    while ( 1 )
    {
      v6 = v5 - 4;
      if ( v5 - 4 >= (unsigned __int64)LODWORD(bgImage->fields.leftAnchor) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v7 = *(UnityEngine_Object_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8 * v5);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (EventBoardGameTokenItem_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        v16 = *p_bgImage;
        if ( !*p_bgImage )
          goto LABEL_18;
        if ( v6 >= LODWORD(v16->fields.leftAnchor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v8 = *(EventBoardGameTokenItem_o **)(*(_QWORD *)&v16->fields.m_CachedPtr + 8 * v5);
        if ( !v8 )
LABEL_18:
          sub_B7076C(v8, v9);
        EventBoardGameTokenItem__DestroyItem(v8, v9);
      }
      if ( v6 > 0x32 )
        break;
      bgImage = *p_bgImage;
      ++v5;
      if ( !*p_bgImage )
        goto LABEL_18;
    }
    this->fields.bgImage = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.bgImage, 0LL, v10, v11, v12, v13, v14, v15);
    EventBoardGameTokenManager__closeTokenInfo(this, v17);
    EventBoardGameTokenManager__ReleaseEventUI(this, v18);
  }
}


void __fastcall EventBoardGameTokenManager__Init(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3

  if ( (byte_43550C0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__);
    sub_B70694(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
    byte_43550C0 = 1;
  }
  v5 = sub_B70764(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  EventBoardGameTokenManager___c__DisplayClass18_0___ctor((EventBoardGameTokenManager___c__DisplayClass18_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v14, 1, v15);
}


void __fastcall EventBoardGameTokenManager__LoadEventUI(
        EventBoardGameTokenManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *eventUIDownloadAtlas; // x0
  System_Delegate_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  const MethodInfo *v16; // x2
  EventBoardGameTokenManager_o *v17; // x0
  int32_t v18; // w1
  const MethodInfo *v19; // x2

  if ( (byte_43550C6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_EventBoardGameTokenManager_LoadEventUIEnd__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&StringLiteral_6295/*"EventUI/Prefabs/80285"*/);
    byte_43550C6 = 1;
  }
  eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
  if ( eventUIDownloadAtlas && !AssetData__get_IsEmpty(eventUIDownloadAtlas, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v8 = System_Delegate__Combine(
           (System_Delegate_o *)this->fields.eventUIAssetData,
           (System_Delegate_o *)callback,
           0LL);
    if ( v8 && (System_Action_c *)v8->klass != System_Action_TypeInfo )
    {
      sub_B70A60(v8);
      EventBoardGameTokenManager__SetArrangement(v17, v18, v19);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v8;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      if ( !LOBYTE(this->fields.eventUILoadCallbackFunc) )
      {
        LOBYTE(this->fields.eventUILoadCallbackFunc) = 1;
        v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v15,
          (Il2CppObject *)this,
          Method_EventBoardGameTokenManager_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6295/*"EventUI/Prefabs/80285"*/, v15, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v16);
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

  if ( (byte_43550C7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5465/*"DownloadEventUIAtlas8028500"*/);
    byte_43550C7 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B70630(
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
                                                    (System_String_o *)StringLiteral_5465/*"DownloadEventUIAtlas8028500"*/,
                                                    v11);
    this->fields.arrangementPich = (struct UnityEngine_Vector2_o)UIAtlasFromAssetData;
    sub_B70630(
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
    sub_B70630(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x20
  AssetData_o *eventUIDownloadAtlas; // x21
  struct UnityEngine_Vector2_o *p_arrangementPich; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_43550C9 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&StringLiteral_6295/*"EventUI/Prefabs/80285"*/);
    byte_43550C9 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6295/*"EventUI/Prefabs/80285"*/, 0LL);
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
      AssetManager__releaseAsset_31197044(eventUIDownloadAtlas, 0LL);
    }
  }
  this->fields.arrangementPich = 0LL;
  p_arrangementPich = &this->fields.arrangementPich;
  sub_B70630((BattleServantConfConponent_o *)p_arrangementPich, 0LL, v2, v3, v4, v5, v6, v7);
  p_arrangementPich[-1] = 0LL;
  sub_B70630((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  EventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int v14; // w8
  int v15; // w10
  int v16; // w12
  unsigned int v17; // w27
  int v18; // w21
  struct UnityEngine_GameObject_o *parentObject; // x22
  int v20; // w19
  int v21; // w12
  int v22; // w28
  int v23; // w8
  float v24; // s10
  UnityEngine_GameObject_o *v25; // x22
  DataManager_o *v26; // x23
  const MethodInfo *v27; // x4
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UserEventBoardGameTokenMaster_o *v34; // x0
  bool IsHavingToken; // w24
  System_Int32_array **arrangementPich; // x1
  EventBoardGameTokenEntity_o *v37; // x25
  System_Action_int__o *v38; // x26
  const MethodInfo *v39; // x5
  UnityEngine_Transform_o *v40; // x23
  UnityEngine_Transform_o *transform; // x22
  int v42; // s0
  EventBoardGameTokenMaster_o *v45; // [xsp+0h] [xbp-90h]
  int v47; // [xsp+10h] [xbp-80h]
  int v48; // [xsp+14h] [xbp-7Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43550C1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_B70694(&Method_EventBoardGameTokenManager_checkTokenInfo__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    sub_B70694(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43550C1 = 1;
  }
  item = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_32:
    sub_B7076C(Instance, v5);
  MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.bgImage = (struct UISprite_o *)v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgImage,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = 0;
  v15 = 11;
  v16 = 1;
  v17 = -1;
  v18 = 1;
  v45 = MasterData_WarQuestSelectionMaster;
  do
  {
    parentObject = this->fields.parentObject;
    v20 = v14 != 0 && v14 % v15 == 0;
    v21 = v16 ^ v20;
    if ( v14 == 0 || v14 % v15 != 0 )
      v22 = v14;
    else
      v22 = 0;
    if ( (v21 & 1) != 0 )
      v23 = 10;
    else
      v23 = 11;
    if ( (v21 & 1) != 0 )
      v24 = 22.0;
    else
      v24 = 0.0;
    v47 = v23;
    v48 = v21;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)parentObject,
                                  (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_32;
    v25 = (UnityEngine_GameObject_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_32;
    v26 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v5);
    entity = 0LL;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    if ( !EventBoardGameTokenMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, eventId, v17 + 2, v27) )
      goto LABEL_24;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    v34 = (UserEventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v34 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken(v34, v17 + 2, 0LL);
    else
LABEL_24:
      IsHavingToken = 0;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    v26->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)arrangementPich;
    sub_B70630(
      (BattleServantConfConponent_o *)&v26->fields.masterCheckName,
      arrangementPich,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v37 = entity;
    v38 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v38,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_checkTokenInfo__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v26, &item, v37, IsHavingToken, v38, v39);
    Instance = (DataManager_o *)this->fields.bgImage;
    if ( !Instance )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
    if ( !this->fields.tokenInfoDialogPrefab )
      goto LABEL_32;
    v40 = (UnityEngine_Transform_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.tokenInfoDialogPrefab, 0LL);
    MasterData_WarQuestSelectionMaster = v45;
    if ( !v40 )
      goto LABEL_32;
    UnityEngine_Transform__set_parent(v40, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
    if ( !Instance )
      goto LABEL_32;
    v18 += v20;
    v51.fields.y = -(float)(*((float *)&this->fields.tokenInfoDialog + 1) * (float)v18);
    v51.fields.x = v24 + (float)(*(float *)&this->fields.tokenInfoDialog * (float)v22);
    v51.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v51, 0LL);
    transform = UnityEngine_GameObject__get_transform(v25, 0LL);
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_32;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
    v15 = v47;
    v16 = v48;
    ++v17;
    v14 = v22 + 1;
  }
  while ( v17 < 0x33 );
}


bool __fastcall EventBoardGameTokenManager__SetEventUI(
        EventBoardGameTokenManager_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *arrangementPich; // x22
  UISprite_o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_43550CA & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43550CA = 1;
  }
  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_8;
  arrangementPich = (UnityEngine_Object_o *)this->fields.arrangementPich;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsNullOrEmpty = (UISpriteData_o *)UnityEngine_Object__op_Equality(arrangementPich, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
LABEL_8:
    if ( sprite )
    {
      v10 = sprite;
      v11 = 0LL;
LABEL_10:
      UISprite__set_spriteName(v10, v11, 0LL);
      return 1;
    }
    goto LABEL_17;
  }
  IsNullOrEmpty = (UISpriteData_o *)this->fields.arrangementPich;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  IsNullOrEmpty = UIAtlas__GetSprite((UIAtlas_o *)IsNullOrEmpty, spriteName, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( sprite )
    {
      UISprite__set_atlas(sprite, *(UIAtlas_o **)&this->fields.arrangementPich, 0LL);
      v10 = sprite;
      v11 = spriteName;
      goto LABEL_10;
    }
LABEL_17:
    sub_B7076C(IsNullOrEmpty, v8);
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


void __fastcall EventBoardGameTokenManager__checkTokenInfo(
        EventBoardGameTokenManager_o *this,
        int32_t tokenId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tokenList; // x22
  void *Menu; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **arrangementPich; // x1
  struct UISprite_o *bgImage; // x21
  EventBoardGameTokenInfoDialog_o *v24; // x20
  int v25; // w19

  if ( (byte_43550C2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    sub_B70694(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43550C2 = 1;
  }
  tokenList = (UnityEngine_Object_o *)this->fields.tokenList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Menu = (void *)UnityEngine_Object__op_Equality(tokenList, 0LL, 0LL);
  if ( ((unsigned __int8)Menu & 1) != 0 )
  {
    Menu = EventBoardGameTokenManager__CreateMenu(this, (UnityEngine_GameObject_o *)this[1].klass, v8);
    if ( !Menu )
      goto LABEL_15;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Menu,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.tokenList,
      (System_Int32_array **)Component_srcLineSprite,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    Menu = this->fields.tokenList;
    if ( !Menu )
      goto LABEL_15;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    *((_QWORD *)Menu + 15) = arrangementPich;
    sub_B70630((BattleServantConfConponent_o *)((char *)Menu + 120), arrangementPich, v16, v17, v18, v19, v20, v21);
  }
  bgImage = this->fields.bgImage;
  if ( !bgImage )
    goto LABEL_15;
  v24 = (EventBoardGameTokenInfoDialog_o *)this->fields.tokenList;
  v25 = tokenId - 1;
  if ( LODWORD(bgImage->fields.leftAnchor) <= v25 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  if ( !v24 )
LABEL_15:
    sub_B7076C(Menu, v7);
  EventBoardGameTokenInfoDialog__OpenInfo(
    v24,
    *(EventBoardGameTokenItem_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8LL * v25 + 32),
    v8);
}


void __fastcall EventBoardGameTokenManager__closeTokenInfo(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o **p_tokenList; // x19
  UnityEngine_Object_o *v4; // x20
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o *tokenList; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_43550C3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43550C3 = 1;
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
      sub_B7076C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenList, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    *p_tokenList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_tokenList, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_434F036 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_23098/*"token_bg"*/);
    byte_434F036 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          (UISprite_o *)_4__this->fields.tokenPrefab,
          (System_String_o *)StringLiteral_23098/*"token_bg"*/,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(_4__this, method);
  }
  if ( !_4__this->fields.bgImage )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, 0LL);
}