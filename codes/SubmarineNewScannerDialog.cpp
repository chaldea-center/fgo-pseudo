void __fastcall SubmarineNewScannerDialog___ctor(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AEE75 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_42AEE75 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.atlasList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall SubmarineNewScannerDialog__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AEE6E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_6250/*"EventUI/Prefabs/{0}"*/);
    byte_42AEE6E = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6250/*"EventUI/Prefabs/{0}"*/, v3, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42AEE74 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    byte_42AEE74 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  return result;
}


void __fastcall SubmarineNewScannerDialog__Init(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *upperMessageLabel; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_42AEE6A & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEE6A = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  upperMessageLabel = this->fields.upperMessageLabel;
  if ( !upperMessageLabel )
    goto LABEL_10;
  UILabel__set_text(upperMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  upperMessageLabel = this->fields.lowerMessageLabel;
  if ( !upperMessageLabel )
    goto LABEL_10;
  UILabel__set_text(upperMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  upperMessageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B52A5C(upperMessageLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)upperMessageLabel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
}


void __fastcall SubmarineNewScannerDialog__LoadEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
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
  const MethodInfo *v22; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x21

  if ( (byte_42AEE6F & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__);
    sub_B52984(&SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo);
    byte_42AEE6F = 1;
  }
  v7 = sub_B52A54(SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo);
  SubmarineNewScannerDialog___c__DisplayClass16_0___ctor((SubmarineNewScannerDialog___c__DisplayClass16_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  EventUIAssetDataPath = SubmarineNewScannerDialog__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v24, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__LoadLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v14; // [xsp+8h] [xbp-58h] BYREF
  int v15; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42AEE72 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23694/*"{0:D2}"*/);
    sub_B52984(&StringLiteral_5421/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_42AEE72 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B52A5C(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v15 = i;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v9 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23694/*"{0:D2}"*/, v8, 0LL);
      v14 = eventId;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
      v11 = System_String__Format_44563852((System_String_o *)StringLiteral_5421/*"DownloadEventUIAtlas{0}{1}"*/, v10, v9, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v11,
                                                                 v12);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)atlasList & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      atlasList = this->fields.atlasList;
      if ( !atlasList )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)atlasList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall SubmarineNewScannerDialog__OnClickCloseButton(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEE6C & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEE6C = 1;
  }
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, this->fields.closedAction, 0LL);
}


void __fastcall SubmarineNewScannerDialog__OnDestroy(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  SubmarineNewScannerDialog__ReleaseEventUIAssetData(this, this->fields.eventId, v2);
  SubmarineNewScannerDialog__ReleaseLocalAtlas(this, v4);
}


void __fastcall SubmarineNewScannerDialog__Open(
        SubmarineNewScannerDialog_o *this,
        int32_t scanId,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  __int64 v17; // x23
  UILabel_o *upperMessageLabel; // x22
  UILabel_o *lowerMessageLabel; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // w20
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x20

  if ( (byte_42AEE6B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_B52984(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__);
    sub_B52984(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__);
    sub_B52984(&SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo);
    sub_B52984(&StringLiteral_5764/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_UPPER"*/);
    sub_B52984(&StringLiteral_5763/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_LOWER"*/);
    byte_42AEE6B = 1;
  }
  v7 = sub_B52A54(SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo);
  SubmarineNewScannerDialog___c__DisplayClass10_0___ctor((SubmarineNewScannerDialog___c__DisplayClass10_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  SubmarineNewScannerDialog__Init(this, v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_16;
  v17 = v7 + 24;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         (WarEntity_o **)(v7 + 24),
         scanId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__) )
  {
    upperMessageLabel = this->fields.upperMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_UPPER"*/, 0LL);
    if ( *(_QWORD *)v17 )
    {
      Instance = (DataManager_o *)System_String__Format(
                                    (System_String_o *)Instance,
                                    *(Il2CppObject **)(*(_QWORD *)v17 + 24LL),
                                    0LL);
      if ( upperMessageLabel )
      {
        UILabel__set_text(upperMessageLabel, (System_String_o *)Instance, 0LL);
        lowerMessageLabel = this->fields.lowerMessageLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_LOWER"*/, 0LL);
        if ( lowerMessageLabel )
        {
          UILabel__set_text(lowerMessageLabel, (System_String_o *)Instance, 0LL);
          this->fields.closedAction = closedAction;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.closedAction,
            (System_Int32_array **)closedAction,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          if ( *(_QWORD *)v17 )
          {
            v26 = *(_DWORD *)(*(_QWORD *)v17 + 20LL);
            v27 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              v27,
              (Il2CppObject *)v7,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__,
              0LL);
            SubmarineNewScannerDialog__LoadEventUIAssetData(this, v26, v27, v28);
            v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              v29,
              (Il2CppObject *)v7,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v29, 2, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B52A5C(Instance, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__ReleaseEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_42AEE70 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42AEE70 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    EventUIAssetDataPath = SubmarineNewScannerDialog__GetEventUIAssetDataPath(eventId, *(const MethodInfo **)&eventId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


void __fastcall SubmarineNewScannerDialog__ReleaseLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_42AEE71 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_42AEE71 = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall SubmarineNewScannerDialog__SetSpriteByLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  bool v14; // w20
  int v15; // w21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42AEE73 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_42AEE73 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    IsNullOrEmpty = this->fields.atlasList;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v18 = v17;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v18,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v9 )
      {
        v14 = 0;
        v15 = 8;
        goto LABEL_16;
      }
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B52A5C(v9, v10);
      v12 = UIAtlas__GetSprite((UIAtlas_o *)v18.fields.current, spriteName, 0LL);
    }
    while ( !v12 );
    if ( !sprite )
      sub_B52A5C(v12, v13);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v14 = 1;
    v15 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v15 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B52A5C(IsNullOrEmpty, v8);
    }
  }
  return v14;
}


UnityEngine_GameObject_o *__fastcall SubmarineNewScannerDialog__get_closeBtnObject(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42AEE6D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEE6D = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass10_0___ctor(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass10_0___Open_b__0(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  SubmarineNewScannerDialog___c__DisplayClass10_0_o *v2; // x19
  struct EventPanelScanEntity_o *scanEntity; // x8
  SubmarineNewScannerDialog_o *_4__this; // x20
  struct EventPanelScanEntity_o *v5; // x8
  UISprite_o *iconSprite; // x19
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t iconImageId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42ADD87 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    this = (SubmarineNewScannerDialog___c__DisplayClass10_0_o *)sub_B52984(&StringLiteral_22081/*"scan_icon_{0}"*/);
    byte_42ADD87 = 1;
  }
  scanEntity = v2->fields.scanEntity;
  if ( !scanEntity
    || (this = (SubmarineNewScannerDialog___c__DisplayClass10_0_o *)v2->fields.__4__this) == 0LL
    || (SubmarineNewScannerDialog__LoadLocalAtlas((SubmarineNewScannerDialog_o *)this, scanEntity->fields.eventId, 0LL),
        (_4__this = v2->fields.__4__this) == 0LL)
    || (v5 = v2->fields.scanEntity) == 0LL )
  {
    sub_B52A5C(this, method);
  }
  iconSprite = _4__this->fields.iconSprite;
  iconImageId = v5->fields.iconImageId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
  v8 = System_String__Format((System_String_o *)StringLiteral_22081/*"scan_icon_{0}"*/, v7, 0LL);
  SubmarineNewScannerDialog__SetSpriteByLocalAtlas(_4__this, iconSprite, v8, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass10_0___Open_b__1(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  BaseDialog_o *_4__this; // x0

  _4__this = (BaseDialog_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  BaseDialog__SetMaskTouchCloseEnabled(_4__this, 1, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass16_0___ctor(
        SubmarineNewScannerDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass16_0___LoadEventUIAssetData_b__0(
        SubmarineNewScannerDialog___c__DisplayClass16_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct SubmarineNewScannerDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_B52920(&_4__this->fields.eventAssetData);
  ActionExtensions__Call(this->fields.callback, 0LL);
}