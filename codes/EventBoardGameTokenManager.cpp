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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventUIAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.arrangementPich = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.arrangementPich, 0LL, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventBoardGameTokenManager__CreateMenu(
        EventBoardGameTokenManager_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *tokenInfoDialogPrefab; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Transform_o *transform; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EB89F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)prefab, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB89F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !tokenInfoDialogPrefab )
    goto LABEL_12;
  v11 = tokenInfoDialogPrefab;
  transform = UnityEngine_GameObject__get_transform(tokenInfoDialogPrefab, 0LL);
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !tokenInfoDialogPrefab )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)tokenInfoDialogPrefab, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !tokenInfoDialogPrefab
    || (*(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localScale(
                                           (UnityEngine_Transform_o *)tokenInfoDialogPrefab,
                                           0LL),
        (tokenInfoDialogPrefab = this->fields.tokenInfoDialogPrefab) == 0LL)
    || (v19 = v16,
        v20 = v17,
        v21 = v18,
        tokenInfoDialogPrefab = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                              tokenInfoDialogPrefab,
                                                              0LL),
        !transform) )
  {
LABEL_12:
    sub_B5D69C(tokenInfoDialogPrefab, v10);
  }
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)tokenInfoDialogPrefab, 0LL);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v25.fields.x = v19;
  v25.fields.y = v20;
  v25.fields.z = v21;
  UnityEngine_Transform__set_localScale(transform, v25, 0LL);
  return v11;
}


UIAtlas_o *__fastcall EventBoardGameTokenManager__CreateUIAtlasFromAssetData(
        EventBoardGameTokenManager_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UIAtlas_o *result; // x0

  if ( (byte_42EB8A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObjectList_GameObject___, (_DWORD)assetData, (_DWORD)name, method);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    this = (EventBoardGameTokenManager_o *)sub_B5D5C4(
                                             &Method_UnityEngine_GameObject_GetComponent_UIAtlas___,
                                             v9,
                                             v10,
                                             v11);
    byte_42EB8A3 = 1;
  }
  if ( !assetData )
    goto LABEL_10;
  result = (UIAtlas_o *)AssetData__GetObjectList_Texture2D_(
                          assetData,
                          (const MethodInfo_1AD0B80 *)Method_AssetData_GetObjectList_GameObject___);
  if ( result )
  {
    if ( result->fields.material )
    {
      this = (EventBoardGameTokenManager_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               assetData,
                                               name,
                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( this )
        return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_10:
      sub_B5D69C(this, assetData);
    }
    return 0LL;
  }
  return result;
}


void __fastcall EventBoardGameTokenManager__DestoryList(EventBoardGameTokenManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UISprite_o **p_bgImage; // x20
  struct UISprite_o *bgImage; // x21
  __int64 v10; // x22
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x21
  EventBoardGameTokenItem_o *v13; // x0
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UISprite_o *v21; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_42EB8A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB8A0 = 1;
  }
  p_bgImage = &this->fields.bgImage;
  bgImage = this->fields.bgImage;
  if ( bgImage )
  {
    v10 = 4LL;
    while ( 1 )
    {
      v11 = v10 - 4;
      if ( v10 - 4 >= (unsigned __int64)LODWORD(bgImage->fields.leftAnchor) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v12 = *(UnityEngine_Object_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8 * v10);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (EventBoardGameTokenItem_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)v13 & 1) != 0 )
      {
        v21 = *p_bgImage;
        if ( !*p_bgImage )
          goto LABEL_18;
        if ( v11 >= LODWORD(v21->fields.leftAnchor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v13 = *(EventBoardGameTokenItem_o **)(*(_QWORD *)&v21->fields.m_CachedPtr + 8 * v10);
        if ( !v13 )
LABEL_18:
          sub_B5D69C(v13, v14);
        EventBoardGameTokenItem__DestroyItem(v13, v14);
      }
      if ( v11 > 0x32 )
        break;
      bgImage = *p_bgImage;
      ++v10;
      if ( !*p_bgImage )
        goto LABEL_18;
    }
    this->fields.bgImage = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.bgImage, 0LL, v15, v16, v17, v18, v19, v20);
    EventBoardGameTokenManager__closeTokenInfo(this, v22);
    EventBoardGameTokenManager__ReleaseEventUI(this, v23);
  }
}


void __fastcall EventBoardGameTokenManager__Init(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x3

  if ( (byte_42EB89B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__, v6, v7, v8);
    sub_B5D5C4(&EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo, v9, v10, v11);
    byte_42EB89B = 1;
  }
  v12 = sub_B5D694(EventBoardGameTokenManager___c__DisplayClass18_0_TypeInfo);
  EventBoardGameTokenManager___c__DisplayClass18_0___ctor(
    (EventBoardGameTokenManager___c__DisplayClass18_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = eventId;
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_EventBoardGameTokenManager___c__DisplayClass18_0__Init_b__0__,
    0LL);
  EventBoardGameTokenManager__LoadEventUI(this, v21, 1, v22);
}


void __fastcall EventBoardGameTokenManager__LoadEventUI(
        EventBoardGameTokenManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  AssetData_o *eventUIDownloadAtlas; // x0
  System_Delegate_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  const MethodInfo *v28; // x2
  EventBoardGameTokenManager_o *v29; // x0
  int32_t v30; // w1
  const MethodInfo *v31; // x2

  if ( (byte_42EB8A1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, loadParallelMax, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_EventBoardGameTokenManager_LoadEventUIEnd__, v10, v11, v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6282/*"EventUI/Prefabs/80285"*/, v16, v17, v18);
    byte_42EB8A1 = 1;
  }
  eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
  if ( eventUIDownloadAtlas && !AssetData__get_IsEmpty(eventUIDownloadAtlas, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v20 = System_Delegate__Combine(
            (System_Delegate_o *)this->fields.eventUIAssetData,
            (System_Delegate_o *)callback,
            0LL);
    if ( v20 && (System_Action_c *)v20->klass != System_Action_TypeInfo )
    {
      sub_B5D990(v20);
      EventBoardGameTokenManager__SetArrangement(v29, v30, v31);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v20;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
        (System_Int32_array **)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( !LOBYTE(this->fields.eventUILoadCallbackFunc) )
      {
        LOBYTE(this->fields.eventUILoadCallbackFunc) = 1;
        v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v27,
          (Il2CppObject *)this,
          Method_EventBoardGameTokenManager_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6282/*"EventUI/Prefabs/80285"*/, v27, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          EventBoardGameTokenManager__LoadEventUIEnd(this, 0LL, v28);
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

  if ( (byte_42EB8A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5454/*"DownloadEventUIAtlas8028500"*/, (_DWORD)assetData, (_DWORD)method, v3);
    byte_42EB8A2 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B5D560(
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
                                                    (System_String_o *)StringLiteral_5454/*"DownloadEventUIAtlas8028500"*/,
                                                    v11);
    this->fields.arrangementPich = (struct UnityEngine_Vector2_o)UIAtlasFromAssetData;
    sub_B5D560(
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
    sub_B5D560(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x20
  AssetData_o *eventUIDownloadAtlas; // x21
  struct UnityEngine_Vector2_o *p_arrangementPich; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EB8A4 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6282/*"EventUI/Prefabs/80285"*/, v9, v10, v11);
    byte_42EB8A4 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6282/*"EventUI/Prefabs/80285"*/, 0LL);
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
      AssetManager__releaseAsset_30657564(eventUIDownloadAtlas, 0LL);
    }
  }
  this->fields.arrangementPich = 0LL;
  p_arrangementPich = &this->fields.arrangementPich;
  sub_B5D560((BattleServantConfConponent_o *)p_arrangementPich, 0LL, v2, v3, v4, v5, v6, v7);
  p_arrangementPich[-1] = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBoardGameTokenManager__SetArrangement(
        EventBoardGameTokenManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v39; // x1
  EventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // w8
  int v49; // w10
  int v50; // w12
  unsigned int v51; // w27
  int v52; // w21
  struct UnityEngine_GameObject_o *parentObject; // x22
  int v54; // w19
  int v55; // w12
  int v56; // w28
  int v57; // w8
  float v58; // s10
  UnityEngine_GameObject_o *v59; // x22
  DataManager_o *v60; // x23
  const MethodInfo *v61; // x4
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UserEventBoardGameTokenMaster_o *v68; // x0
  bool IsHavingToken; // w24
  System_Int32_array **arrangementPich; // x1
  EventBoardGameTokenEntity_o *v71; // x25
  System_Action_int__o *v72; // x26
  const MethodInfo *v73; // x5
  UnityEngine_Transform_o *v74; // x23
  UnityEngine_Transform_o *transform; // x22
  int v76; // s0
  EventBoardGameTokenMaster_o *v79; // [xsp+0h] [xbp-90h]
  int v81; // [xsp+10h] [xbp-80h]
  int v82; // [xsp+14h] [xbp-7Ch]
  EventBoardGameTokenEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  EventBoardGameTokenItem_o *item; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB89C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBoardGameTokenMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_EventBoardGameTokenManager_checkTokenInfo__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    byte_42EB89C = 1;
  }
  item = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_32:
    sub_B5D69C(Instance, v39);
  MasterData_WarQuestSelectionMaster = (EventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBoardGameTokenMaster___);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventBoardGameTokenItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventBoardGameTokenItem___ctor__);
  this->fields.bgImage = (struct UISprite_o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgImage,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = 0;
  v49 = 11;
  v50 = 1;
  v51 = -1;
  v52 = 1;
  v79 = MasterData_WarQuestSelectionMaster;
  do
  {
    parentObject = this->fields.parentObject;
    v54 = v48 != 0 && v48 % v49 == 0;
    v55 = v50 ^ v54;
    if ( v48 == 0 || v48 % v49 != 0 )
      v56 = v48;
    else
      v56 = 0;
    if ( (v55 & 1) != 0 )
      v57 = 10;
    else
      v57 = 11;
    if ( (v55 & 1) != 0 )
      v58 = 22.0;
    else
      v58 = 0.0;
    v81 = v57;
    v82 = v55;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)parentObject,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_32;
    v59 = (UnityEngine_GameObject_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenItem___);
    item = (EventBoardGameTokenItem_o *)Instance;
    if ( !Instance )
      goto LABEL_32;
    v60 = Instance;
    EventBoardGameTokenItem__Init((EventBoardGameTokenItem_o *)Instance, v39);
    entity = 0LL;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    if ( !EventBoardGameTokenMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, eventId, v51 + 2, v61) )
      goto LABEL_24;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    v68 = (UserEventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    if ( v68 )
      IsHavingToken = UserEventBoardGameTokenMaster__IsHavingToken(v68, v51 + 2, 0LL);
    else
LABEL_24:
      IsHavingToken = 0;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    v60->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)arrangementPich;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v60->fields.masterCheckName,
      arrangementPich,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v71 = entity;
    v72 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v72,
      (Il2CppObject *)this,
      Method_EventBoardGameTokenManager_checkTokenInfo__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    EventBoardGameTokenItem__SetItem((EventBoardGameTokenItem_o *)v60, &item, v71, IsHavingToken, v72, v73);
    Instance = (DataManager_o *)this->fields.bgImage;
    if ( !Instance )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventBoardGameTokenItem__Add__);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v59, 0LL);
    if ( !this->fields.tokenInfoDialogPrefab )
      goto LABEL_32;
    v74 = (UnityEngine_Transform_o *)Instance;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.tokenInfoDialogPrefab, 0LL);
    MasterData_WarQuestSelectionMaster = v79;
    if ( !v74 )
      goto LABEL_32;
    UnityEngine_Transform__set_parent(v74, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v59, 0LL);
    if ( !Instance )
      goto LABEL_32;
    v52 += v54;
    v85.fields.y = -(float)(*((float *)&this->fields.tokenInfoDialog + 1) * (float)v52);
    v85.fields.x = v58 + (float)(*(float *)&this->fields.tokenInfoDialog * (float)v56);
    v85.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v85, 0LL);
    transform = UnityEngine_GameObject__get_transform(v59, 0LL);
    *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_32;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v76, 0LL);
    v49 = v81;
    v50 = v82;
    ++v51;
    v48 = v56 + 1;
  }
  while ( v51 < 0x33 );
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

  if ( (byte_42EB8A5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, (_DWORD)spriteName, method);
    byte_42EB8A5 = 1;
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
    sub_B5D69C(IsNullOrEmpty, v8);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *tokenList; // x22
  void *Menu; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **arrangementPich; // x1
  struct UISprite_o *bgImage; // x21
  EventBoardGameTokenInfoDialog_o *v31; // x20
  int v32; // w19

  if ( (byte_42EB89D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___,
      tokenId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBoardGameTokenItem__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EB89D = 1;
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
    Menu = EventBoardGameTokenManager__CreateMenu(this, (UnityEngine_GameObject_o *)this[1].klass, v15);
    if ( !Menu )
      goto LABEL_15;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Menu,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventBoardGameTokenInfoDialog___);
    this->fields.tokenList = (struct System_Collections_Generic_List_EventBoardGameTokenItem__o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.tokenList,
      (System_Int32_array **)Component_srcLineSprite,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    Menu = this->fields.tokenList;
    if ( !Menu )
      goto LABEL_15;
    arrangementPich = (System_Int32_array **)this->fields.arrangementPich;
    *((_QWORD *)Menu + 15) = arrangementPich;
    sub_B5D560((BattleServantConfConponent_o *)((char *)Menu + 120), arrangementPich, v23, v24, v25, v26, v27, v28);
  }
  bgImage = this->fields.bgImage;
  if ( !bgImage )
    goto LABEL_15;
  v31 = (EventBoardGameTokenInfoDialog_o *)this->fields.tokenList;
  v32 = tokenId - 1;
  if ( LODWORD(bgImage->fields.leftAnchor) <= v32 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !v31 )
LABEL_15:
    sub_B5D69C(Menu, v14);
  EventBoardGameTokenInfoDialog__OpenInfo(
    v31,
    *(EventBoardGameTokenItem_o **)(*(_QWORD *)&bgImage->fields.m_CachedPtr + 8LL * v32 + 32),
    v15);
}


void __fastcall EventBoardGameTokenManager__closeTokenInfo(
        EventBoardGameTokenManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_tokenList; // x19
  UnityEngine_Object_o *v6; // x20
  struct System_Collections_Generic_List_EventBoardGameTokenItem__o *tokenList; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EB89E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB89E = 1;
  }
  tokenList = this->fields.tokenList;
  p_tokenList = (UnityEngine_Component_o **)&this->fields.tokenList;
  v6 = (UnityEngine_Object_o *)tokenList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_tokenList )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_tokenList, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_tokenList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_tokenList, 0LL, v10, v11, v12, v13, v14, v15);
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
  int v2; // w2
  __int64 v3; // x3
  struct EventBoardGameTokenManager_o *_4__this; // x0

  if ( (byte_42E64EA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23026/*"token_bg"*/, (_DWORD)method, v2, v3);
    byte_42E64EA = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBoardGameTokenManager__SetEventUI(
          _4__this,
          (UISprite_o *)_4__this->fields.tokenPrefab,
          (System_String_o *)StringLiteral_23026/*"token_bg"*/,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  if ( !_4__this->fields.bgImage )
    EventBoardGameTokenManager__SetArrangement(_4__this, this->fields.eventId, 0LL);
}