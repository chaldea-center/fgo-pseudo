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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.arrangementPich = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.arrangementPich, 0LL, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *tokenInfoDialogPrefab; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A212 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418A212 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !tokenInfoDialogPrefab )
    goto LABEL_12;
  v8 = tokenInfoDialogPrefab;
  transform = UnityEngine_GameObject__get_transform(tokenInfoDialogPrefab, 0LL);
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !tokenInfoDialogPrefab )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)tokenInfoDialogPrefab, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !tokenInfoDialogPrefab
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)tokenInfoDialogPrefab,
                                           0LL),
        (tokenInfoDialogPrefab = this->fields.tokenInfoDialogPrefab) == 0LL)
    || (v16 = v13,
        v17 = v14,
        v18 = v15,
        tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                              tokenInfoDialogPrefab,
                                                              0LL),
        !transform) )
  {
LABEL_12:
    sub_B2C434(tokenInfoDialogPrefab, v7);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)tokenInfoDialogPrefab, 0LL);
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v21, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v22.fields.x = v16;
  v22.fields.y = v17;
  v22.fields.z = v18;
  UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  return v8;
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

  if ( (byte_418A216 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v6);
    this = (EventBoardGameTokenManager_o *)sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_418A216 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_17204F8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      this = (EventBoardGameTokenManager_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               assetData,
                                               name,
                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      if ( this )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B2C434(this, assetData);
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
  EventBoardGameTokenItem_o *v9; // x0
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UISprite_o *v17; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_418A213 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A213 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v8 = *(UnityEngine_Object_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8 * v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = (EventBoardGameTokenItem_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        v17 = *p_bgImage;
        if ( !*p_bgImage )
          goto LABEL_18;
        if ( v7 >= LODWORD(v17->fields.leftAnchor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v9 = *(EventBoardGameTokenItem_o **)(*(_QWORD *)&v17->fields.m_CachedPtr + 8 * v6);
        if ( !v9 )
LABEL_18:
          sub_B2C434(v9, v10);
        EventBoardGameTokenItem__DestroyItem(v9, v10);
      }
      if ( v7 > 0x32 )
        break;
      bgImage = *p_bgImage;
      ++v6;
      if ( !*p_bgImage )
        goto LABEL_18;
    }
    this->fields.bgImage = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bgImage, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x3

  if ( (byte_418A20E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, v5);
    sub_B2C35C(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, v6);
    byte_418A20E = 1;
  }
  v7 = sub_B2C42C(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  EventBoardGameTokenManager___c__DisplayClass18_0___ctor((EventBoardGameTokenManager___c__DisplayClass18_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v16, 1, v17);
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
  AssetLoader_LoadEndDataHandler_o *v19; // x21
  const MethodInfo *v20; // x2
  EventBoardGameTokenManager_o *v21; // x0
  int32_t v22; // w1
  const MethodInfo *v23; // x2

  if ( (byte_418A214 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AssetManager_TypeInfo, v7);
    sub_B2C35C(&Method_EventBoardGameTokenManager_LoadEventUIEnd__, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6203/*"EventUI/Prefabs/80285"*/, v10);
    byte_418A214 = 1;
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
      sub_B2C728(v12);
      EventBoardGameTokenManager__SetArrangement(v21, v22, v23);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v12;
      sub_B2C2F8(
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
        v19 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v19,
          (Il2CppObject *)this,
          Method_EventBoardGameTokenManager_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6203/*"EventUI/Prefabs/80285"*/, v19, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v20);
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

  if ( (byte_418A215 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5378/*"DownloadEventUIAtlas8028500"*/, assetData);
    byte_418A215 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B2C2F8(
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
                                                    (System_String_o *)StringLiteral_5378/*"DownloadEventUIAtlas8028500"*/,
                                                    v11);
    this->fields.arrangementPich = (struct UnityEngine_Vector2_o)UIAtlasFromAssetData;
    sub_B2C2F8(
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
    sub_B2C2F8(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  if ( (byte_418A217 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6203/*"EventUI/Prefabs/80285"*/, v9);
    byte_418A217 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6203/*"EventUI/Prefabs/80285"*/, 0LL);
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
      AssetManager__releaseAsset_30152684(eventUIDownloadAtlas, 0LL);
    }
  }
  this->fields.arrangementPich = 0LL;
  p_arrangementPich = &this->fields.arrangementPich;
  sub_B2C2F8((BattleServantConfConponent_o *)p_arrangementPich, 0LL, v2, v3, v4, v5, v6, v7);
  p_arrangementPich[-1] = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v13, v14, v15, v16, v17, v18);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v16; // x1
  EventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int v25; // w8
  int v26; // w10
  int v27; // w12
  unsigned int v28; // w27
  int v29; // w21
  struct UnityEngine_GameObject_o *parentObject; // x22
  int v31; // w19
  int v32; // w12
  int v33; // w28
  int v34; // w8
  float v35; // s10
  UnityEngine_GameObject_o *v36; // x22
  DataManager_o *v37; // x23
  const MethodInfo *v38; // x4
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UserEventBoardGameTokenMaster_o *v45; // x0
  bool IsHavingToken; // w24
  System_Int32_array **arrangementPich; // x1
  EventBoardGameTokenEntity_o *v48; // x25
  System_Action_int__o *v49; // x26
  const MethodInfo *v50; // x5
  UnityEngine_Transform_o *v51; // x23
  UnityEngine_Transform_o *transform; // x22
  int v53; // s0
  EventBoardGameTokenMaster_o *v56; // [xsp+0h] [xbp-90h]
  int v58; // [xsp+10h] [xbp-80h]
  int v59; // [xsp+14h] [xbp-7Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A20F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Action_int__TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, v6);
    sub_B2C35C(&Method_EventBoardGameTokenManager_checkTokenInfo__, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418A20F = 1;
  }
  item = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_32:
    sub_B2C434(Instance, v16);
  MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.bgImage = (struct UISprite_o *)v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgImage,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = 0;
  v26 = 11;
  v27 = 1;
  v28 = -1;
  v29 = 1;
  v56 = MasterData_WarQuestSelectionMaster;
  do
  {
    parentObject = this->fields.parentObject;
    v31 = v25 != 0 && v25 % v26 == 0;
    v32 = v27 ^ v31;
    if ( v25 == 0 || v25 % v26 != 0 )
      v33 = v25;
    else
      v33 = 0;
    if ( (v32 & 1) != 0 )
      v34 = 10;
    else
      v34 = 11;
    if ( (v32 & 1) != 0 )
      v35 = 22.0;
    else
      v35 = 0.0;
    v58 = v34;
    v59 = v32;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)parentObject,
                                  (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_32;
    v36 = (UnityEngine_GameObject_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_32;
    v37 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v16);
    entity = 0LL;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    if ( !EventBoardGameTokenMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, eventId, v28 + 2, v38) )
      goto LABEL_24;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    v45 = (UserEventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v45 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken(v45, v28 + 2, 0LL);
    else
LABEL_24:
      IsHavingToken = 0;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    v37->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)arrangementPich;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v37->fields.masterCheckName,
      arrangementPich,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v48 = entity;
    v49 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v49,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_checkTokenInfo__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v37, &item, v48, IsHavingToken, v49, v50);
    Instance = (DataManager_o *)this->fields.bgImage;
    if ( !Instance )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
    if ( !this->fields.tokenInfoDialogPrefab )
      goto LABEL_32;
    v51 = (UnityEngine_Transform_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.tokenInfoDialogPrefab, 0LL);
    MasterData_WarQuestSelectionMaster = v56;
    if ( !v51 )
      goto LABEL_32;
    UnityEngine_Transform__set_parent(v51, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
    if ( !Instance )
      goto LABEL_32;
    v29 += v31;
    v62.fields.y = -(float)(*((float *)&this->fields.tokenInfoDialog + 1) * (float)v29);
    v62.fields.x = v35 + (float)(*(float *)&this->fields.tokenInfoDialog * (float)v33);
    v62.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v62, 0LL);
    transform = UnityEngine_GameObject__get_transform(v36, 0LL);
    *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_32;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v53, 0LL);
    v26 = v58;
    v27 = v59;
    ++v28;
    v25 = v33 + 1;
  }
  while ( v28 < 0x33 );
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

  if ( (byte_418A218 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_418A218 = 1;
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
    sub_B2C434(IsNullOrEmpty, v8);
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
  void *Menu; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **arrangementPich; // x1
  struct UISprite_o *bgImage; // x21
  EventBoardGameTokenInfoDialog_o *v26; // x20
  int v27; // w19

  if ( (byte_418A210 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___, *(_QWORD *)&tokenId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A210 = 1;
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
    Menu = EventBoardGameTokenManager__CreateMenu(this, (UnityEngine_GameObject_o *)this[1].klass, v10);
    if ( !Menu )
      goto LABEL_15;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Menu,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.tokenList,
      (System_Int32_array **)Component_srcLineSprite,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    Menu = this->fields.tokenList;
    if ( !Menu )
      goto LABEL_15;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    *((_QWORD *)Menu + 15) = arrangementPich;
    sub_B2C2F8((BattleServantConfConponent_o *)((char *)Menu + 120), arrangementPich, v18, v19, v20, v21, v22, v23);
  }
  bgImage = this->fields.bgImage;
  if ( !bgImage )
    goto LABEL_15;
  v26 = (EventBoardGameTokenInfoDialog_o *)this->fields.tokenList;
  v27 = tokenId - 1;
  if ( LODWORD(bgImage->fields.leftAnchor) <= v27 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !v26 )
LABEL_15:
    sub_B2C434(Menu, v9);
  EventBoardGameTokenInfoDialog__OpenInfo(
    v26,
    *(EventBoardGameTokenItem_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8LL * v27 + 32),
    v10);
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

  if ( (byte_418A211 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A211 = 1;
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
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenList, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_tokenList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_tokenList, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4184AB7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22721/*"token_bg"*/, method);
    byte_4184AB7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          (UISprite_o *)_4__this->fields.tokenPrefab,
          (System_String_o *)StringLiteral_22721/*"token_bg"*/,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  if ( !_4__this->fields.bgImage )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, 0LL);
}