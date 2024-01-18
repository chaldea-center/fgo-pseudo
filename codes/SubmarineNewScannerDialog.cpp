void __fastcall SubmarineNewScannerDialog___ctor(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_4185810 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v4);
    byte_4185810 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v5;
  sub_B2C2F8(&this->fields.atlasList, v5);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall SubmarineNewScannerDialog__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4185809 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v3);
    byte_4185809 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_418580F & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    byte_418580F = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  return result;
}


void __fastcall SubmarineNewScannerDialog__Init(SubmarineNewScannerDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *upperMessageLabel; // x0
  UILabel_o *closeLabel; // x20

  if ( (byte_4185805 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4185805 = 1;
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
  upperMessageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B2C434(upperMessageLabel, v5);
  UILabel__set_text(closeLabel, (System_String_o *)upperMessageLabel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__LoadEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SubmarineNewScannerDialog___c__DisplayClass16_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_418580A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__, v8);
    sub_B2C35C(&SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo, v9);
    byte_418580A = 1;
  }
  v10 = (SubmarineNewScannerDialog___c__DisplayClass16_0_o *)sub_B2C42C(SubmarineNewScannerDialog___c__DisplayClass16_0_TypeInfo);
  SubmarineNewScannerDialog___c__DisplayClass16_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.callback = callback;
  sub_B2C2F8(&v10->fields.callback, callback);
  EventUIAssetDataPath = SubmarineNewScannerDialog__GetEventUIAssetDataPath(eventId, v13);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_SubmarineNewScannerDialog___c__DisplayClass16_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v15, 1, 0LL) )
    ActionExtensions__Call(v10->fields.callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__LoadLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v20; // [xsp+8h] [xbp-58h] BYREF
  int v21; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418580D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23501/*"{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_418580D = 1;
  }
  if ( this->fields.eventAssetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B2C434(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v21 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23501/*"{0:D2}"*/, v14, 0LL);
      v20 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v17 = System_String__Format_44301068((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v15, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineNewScannerDialog__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v17,
                                                                 v18);
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
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall SubmarineNewScannerDialog__OnClickCloseButton(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185807 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185807 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__Open(
        SubmarineNewScannerDialog_o *this,
        int32_t scanId,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x23
  UILabel_o *upperMessageLabel; // x22
  UILabel_o *lowerMessageLabel; // x22
  int32_t v23; // w20
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3
  System_Action_o *v26; // x20

  if ( (byte_4185806 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__, v11);
    sub_B2C35C(&Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__, v12);
    sub_B2C35C(&SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_5722/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_UPPER"*/, v14);
    sub_B2C35C(&StringLiteral_5721/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_LOWER"*/, v15);
    byte_4185806 = 1;
  }
  v16 = sub_B2C42C(SubmarineNewScannerDialog___c__DisplayClass10_0_TypeInfo);
  SubmarineNewScannerDialog___c__DisplayClass10_0___ctor((SubmarineNewScannerDialog___c__DisplayClass10_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8(v16 + 16, this);
  SubmarineNewScannerDialog__Init(this, v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_16;
  v20 = v16 + 24;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         (WarEntity_o **)(v16 + 24),
         scanId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__TryGetEntity__) )
  {
    upperMessageLabel = this->fields.upperMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5722/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_UPPER"*/, 0LL);
    if ( *(_QWORD *)v20 )
    {
      Instance = (DataManager_o *)System_String__Format(
                                    (System_String_o *)Instance,
                                    *(Il2CppObject **)(*(_QWORD *)v20 + 24LL),
                                    0LL);
      if ( upperMessageLabel )
      {
        UILabel__set_text(upperMessageLabel, (System_String_o *)Instance, 0LL);
        lowerMessageLabel = this->fields.lowerMessageLabel;
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5721/*"EVENT_SUBMARINE_NEW_SCAN_ADDED_MESSAGE_LOWER"*/, 0LL);
        if ( lowerMessageLabel )
        {
          UILabel__set_text(lowerMessageLabel, (System_String_o *)Instance, 0LL);
          this->fields.closedAction = closedAction;
          sub_B2C2F8(&this->fields.closedAction, closedAction);
          if ( *(_QWORD *)v20 )
          {
            v23 = *(_DWORD *)(*(_QWORD *)v20 + 20LL);
            v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v24,
              (Il2CppObject *)v16,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__0__,
              0LL);
            SubmarineNewScannerDialog__LoadEventUIAssetData(this, v23, v24, v25);
            v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v26,
              (Il2CppObject *)v16,
              Method_SubmarineNewScannerDialog___c__DisplayClass10_0__Open_b__1__,
              0LL);
            BaseDialog__Open((BaseDialog_o *)this, v26, 2, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B2C434(Instance, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineNewScannerDialog__ReleaseEventUIAssetData(
        SubmarineNewScannerDialog_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_418580B & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_418580B = 1;
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

  if ( (byte_418580C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_418580C = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall SubmarineNewScannerDialog__SetSpriteByLocalAtlas(
        SubmarineNewScannerDialog_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  bool v18; // w20
  int v19; // w21
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418580E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_418580E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v22 = v21;
    do
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v13 )
      {
        v18 = 0;
        v19 = 8;
        goto LABEL_16;
      }
      current = v22.fields.current;
      if ( !v22.fields.current )
        sub_B2C434(v13, v14);
      v16 = UIAtlas__GetSprite((UIAtlas_o *)v22.fields.current, spriteName, 0LL);
    }
    while ( !v16 );
    if ( !sprite )
      sub_B2C434(v16, v17);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v18 = 1;
    v19 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v19 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B2C434(IsNullOrEmpty, v12);
    }
  }
  return v18;
}


UnityEngine_GameObject_o *__fastcall SubmarineNewScannerDialog__get_closeBtnObject(
        SubmarineNewScannerDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4185808 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185808 = 1;
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
    sub_B2C434(0LL, v4);
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
  __int64 v3; // x1
  struct EventPanelScanEntity_o *scanEntity; // x8
  SubmarineNewScannerDialog_o *_4__this; // x20
  struct EventPanelScanEntity_o *v6; // x8
  UISprite_o *iconSprite; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t iconImageId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_41847AB & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    this = (SubmarineNewScannerDialog___c__DisplayClass10_0_o *)sub_B2C35C(&StringLiteral_21896/*"scan_icon_{0}"*/, v3);
    byte_41847AB = 1;
  }
  scanEntity = v2->fields.scanEntity;
  if ( !scanEntity
    || (this = (SubmarineNewScannerDialog___c__DisplayClass10_0_o *)v2->fields.__4__this) == 0LL
    || (SubmarineNewScannerDialog__LoadLocalAtlas((SubmarineNewScannerDialog_o *)this, scanEntity->fields.eventId, 0LL),
        (_4__this = v2->fields.__4__this) == 0LL)
    || (v6 = v2->fields.scanEntity) == 0LL )
  {
    sub_B2C434(this, method);
  }
  iconSprite = _4__this->fields.iconSprite;
  iconImageId = v6->fields.iconImageId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
  v9 = System_String__Format((System_String_o *)StringLiteral_21896/*"scan_icon_{0}"*/, v8, 0LL);
  SubmarineNewScannerDialog__SetSpriteByLocalAtlas(_4__this, iconSprite, v9, 0LL);
}


void __fastcall SubmarineNewScannerDialog___c__DisplayClass10_0___Open_b__1(
        SubmarineNewScannerDialog___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  BaseDialog_o *_4__this; // x0

  _4__this = (BaseDialog_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_B2C2F8(&_4__this->fields.eventAssetData, data);
  ActionExtensions__Call(this->fields.callback, 0LL);
}