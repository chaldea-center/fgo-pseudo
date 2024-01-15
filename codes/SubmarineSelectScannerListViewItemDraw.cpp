void __fastcall SubmarineSelectScannerListViewItemDraw___ctor(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7CD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v6);
    byte_40F7CD6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw__Awake(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7CCF & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6189/*"EventUI/Prefabs/{0}"*/, v3);
    byte_40F7CCF = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6189/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40F7CD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    byte_40F7CD5 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
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
  const MethodInfo *v24; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  AssetLoader_LoadEndDataHandler_o *v30; // x21

  if ( (byte_40F7CD0 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__, v9);
    sub_B16FFC(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo, v10);
    byte_40F7CD0 = 1;
  }
  v11 = sub_B170CC(
          SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&eventId,
          callback,
          method,
          v4);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___ctor(
    (SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(eventId, v24);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v30, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
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
  struct System_Collections_Generic_List_UIAtlas__o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F7CD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23407/*"{0:D2}"*/, v9);
    sub_B16FFC(&StringLiteral_5361/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_40F7CD3 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v22 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23407/*"{0:D2}"*/, v15, 0LL);
      v21 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v18 = System_String__Format_43739268((System_String_o *)StringLiteral_5361/*"DownloadEventUIAtlas{0}{1}"*/, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v18,
                                                                 v19);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v14 = this->fields.atlasList;
      if ( !v14 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall SubmarineSelectScannerListViewItemDraw__OnDestroy(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  SubmarineSelectScannerListViewItemDraw__ReleaseEventUIAssetData(this, this->fields.eventId, v2);
  SubmarineSelectScannerListViewItemDraw__ReleaseLocalAtlas(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__ReleaseEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_40F7CD1 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F7CD1 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(
                             eventId,
                             *(const MethodInfo **)&eventId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


void __fastcall SubmarineSelectScannerListViewItemDraw__ReleaseLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_40F7CD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_40F7CD2 = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  Il2CppObject *current; // x21
  bool v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F7CD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_40F7CD4 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(spriteName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v17 = v16;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
      {
        v13 = 0;
        v14 = 8;
        goto LABEL_16;
      }
      current = v17.fields.current;
      if ( !v17.fields.current )
        sub_B170D4();
    }
    while ( !UIAtlas__GetSprite((UIAtlas_o *)v17.fields.current, spriteName, 0LL) );
    if ( !sprite )
      sub_B170D4();
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v13 = 1;
    v14 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v14 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B170D4();
    }
  }
  return v13;
}


void __fastcall SubmarineSelectScannerListViewItemDraw__UpdateUi(
        SubmarineSelectScannerListViewItemDraw_o *this,
        SubmarineSelectScannerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w21
  System_Action_o *v34; // x23
  const MethodInfo *v35; // x3
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventPanelScanMaster_o *v38; // x21
  EventPanelScanEntity_o *Entity; // x0
  bool IsSatisfyReleaseCondition; // w0
  bool v41; // w22
  UILabel_o *nameLabel; // x0
  UILabel_o *itemDescLabel; // x21
  __int64 *v44; // x8
  System_String_o *v45; // x0
  UnityEngine_Component_o *darkMask; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F7CCE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__, v11);
    sub_B16FFC(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_5711/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/, v13);
    sub_B16FFC(&StringLiteral_5714/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v14);
    byte_40F7CCE = 1;
  }
  v15 = sub_B170CC(SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo, item, method, v3, v4);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___ctor(
    (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = item;
  v22 = v15 + 24;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)item, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v15 + 24) )
    goto LABEL_25;
  this->fields.eventId = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 112LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_25;
  v33 = *(_DWORD *)(*(_QWORD *)v22 + 112LL);
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v15,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__,
    0LL);
  SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(this, v33, v34, v35);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !*(_QWORD *)v22 )
    goto LABEL_25;
  v38 = (EventPanelScanMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = (EventPanelScanEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       *(_DWORD *)(*(_QWORD *)v22 + 116LL),
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  IsSatisfyReleaseCondition = EventPanelScanMaster__IsSatisfyReleaseCondition(v38, Entity, 0LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_25;
  v41 = IsSatisfyReleaseCondition;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_25;
  UILabel__set_text(nameLabel, *(System_String_o **)(*(_QWORD *)v22 + 128LL), 0LL);
  itemDescLabel = this->fields.itemDescLabel;
  if ( v41 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = &StringLiteral_5711/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = &StringLiteral_5714/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/;
  }
  v45 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
  if ( !itemDescLabel
    || (UILabel__set_text(itemDescLabel, v45, 0LL), (darkMask = (UnityEngine_Component_o *)this->fields.darkMask) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(darkMask, 0LL), !*(_QWORD *)v22)
    || !gameObject )
  {
LABEL_25:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, *(_BYTE *)(*(_QWORD *)v22 + 144LL) == 0, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___ctor(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___UpdateUi_b__0(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SubmarineSelectScannerListViewItem_o *item; // x8
  SubmarineSelectScannerListViewItemDraw_o *_4__this; // x0
  struct SubmarineSelectScannerListViewItemDraw_o *v7; // x0
  struct SubmarineSelectScannerListViewItemDraw_o *v8; // x20
  struct SubmarineSelectScannerListViewItem_o *v9; // x8
  UISprite_o *icon; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t iconImageId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7A7D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21804/*"scan_icon_{0}"*/, v3);
    sub_B16FFC(&StringLiteral_19432/*"img_list_bg02"*/, v4);
    byte_40F7A7D = 1;
  }
  item = this->fields.item;
  if ( !item
    || (_4__this = this->fields.__4__this) == 0LL
    || (SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(_4__this, item->fields._eventId_k__BackingField, 0LL),
        (v7 = this->fields.__4__this) == 0LL)
    || (SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
          v7,
          v7->fields.baseSpirte,
          (System_String_o *)StringLiteral_19432/*"img_list_bg02"*/,
          0LL),
        (v8 = this->fields.__4__this) == 0LL)
    || (v9 = this->fields.item) == 0LL )
  {
    sub_B170D4();
  }
  icon = v8->fields.icon;
  iconImageId_k__BackingField = v9->fields._iconImageId_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId_k__BackingField);
  v12 = System_String__Format((System_String_o *)StringLiteral_21804/*"scan_icon_{0}"*/, v11, 0LL);
  SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(v8, icon, v12, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___ctor(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___LoadEventUIAssetData_b__0(
        SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SubmarineSelectScannerListViewItemDraw_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.eventAssetData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.eventAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}