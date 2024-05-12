void __fastcall SubmarineSelectScannerListViewItemDraw___ctor(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438A653 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_438A653 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.atlasList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438A64C & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/);
    byte_438A64C = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, v2);
  return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_438A652 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    byte_438A652 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  return result;
}


void __fastcall SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
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

  if ( (byte_438A64D & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__);
    sub_B775C4(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo);
    byte_438A64D = 1;
  }
  v7 = sub_B77694(SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___ctor(
    (SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v24, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  __int64 v6; // x2
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v16; // [xsp+8h] [xbp-58h] BYREF
  int v17; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438A650 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_23987/*"{0:D2}"*/);
    sub_B775C4(&StringLiteral_5520/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_438A650 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B7769C(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v17 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v6);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23987/*"{0:D2}"*/, v9, 0LL);
      v16 = eventId;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11);
      v13 = System_String__Format_44897472((System_String_o *)StringLiteral_5520/*"DownloadEventUIAtlas{0}{1}"*/, v12, v10, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v13,
                                                                 v14);
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
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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

  if ( (byte_438A64E & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A64E = 1;
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

  if ( (byte_438A64F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_438A64F = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
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

  if ( (byte_438A651 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_438A651 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v18 = v17;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v18,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v9 )
      {
        v14 = 0;
        v15 = 8;
        goto LABEL_16;
      }
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B7769C(v9, v10);
      v12 = UIAtlas__GetSprite((UIAtlas_o *)v18.fields.current, spriteName, 0LL);
    }
    while ( !v12 );
    if ( !sprite )
      sub_B7769C(v12, v13);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v14 = 1;
    v15 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v15 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B7769C(IsNullOrEmpty, v8);
    }
  }
  return v14;
}


void __fastcall SubmarineSelectScannerListViewItemDraw__UpdateUi(
        SubmarineSelectScannerListViewItemDraw_o *this,
        SubmarineSelectScannerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x22
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t v21; // w21
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  EventPanelScanMaster_o *v24; // x21
  EventPanelScanEntity_o *Entity; // x0
  char v26; // w22
  UILabel_o *itemDescLabel; // x21
  __int64 *v28; // x8

  if ( (byte_438A64B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_B775C4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__);
    sub_B775C4(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo);
    sub_B775C4(&StringLiteral_5873/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/);
    sub_B775C4(&StringLiteral_5876/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
    byte_438A64B = 1;
  }
  v5 = sub_B77694(SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___ctor(
    (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  v14 = v5 + 24;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)item, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_25;
  this->fields.eventId = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 112LL);
  if ( !*(_QWORD *)v14 )
    goto LABEL_25;
  v21 = *(_DWORD *)(*(_QWORD *)v14 + 112LL);
  v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__,
    0LL);
  SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(this, v21, v22, v23);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !*(_QWORD *)v14 )
    goto LABEL_25;
  v24 = (EventPanelScanMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_25;
  Entity = (EventPanelScanEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       *(_DWORD *)(*(_QWORD *)v14 + 116LL),
                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(v24, Entity, 0LL);
  if ( !*(_QWORD *)v14 )
    goto LABEL_25;
  v26 = (char)Instance;
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)(*(_QWORD *)v14 + 128LL), 0LL);
  itemDescLabel = this->fields.itemDescLabel;
  if ( (v26 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_5873/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_5876/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/;
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v28, 0LL);
  if ( !itemDescLabel
    || (UILabel__set_text(itemDescLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.darkMask) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        !*(_QWORD *)v14)
    || !Instance )
  {
LABEL_25:
    sub_B7769C(Instance, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(*(_QWORD *)v14 + 144LL) == 0, 0LL);
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
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *v2; // x19
  struct SubmarineSelectScannerListViewItem_o *item; // x8
  __int64 v4; // x2
  SubmarineSelectScannerListViewItemDraw_o *_4__this; // x20
  struct SubmarineSelectScannerListViewItem_o *v6; // x8
  UISprite_o *icon; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t iconImageId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_43886B3 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_22364/*"scan_icon_{0}"*/);
    this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)sub_B775C4(&StringLiteral_19902/*"img_list_bg02"*/);
    byte_43886B3 = 1;
  }
  item = v2->fields.item;
  if ( !item
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0LL
    || (SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
          (SubmarineSelectScannerListViewItemDraw_o *)this,
          item->fields._eventId_k__BackingField,
          0LL),
        (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0LL)
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
                                                                                   (SubmarineSelectScannerListViewItemDraw_o *)this,
                                                                                   (UISprite_o *)this->fields.item,
                                                                                   (System_String_o *)StringLiteral_19902/*"img_list_bg02"*/,
                                                                                   0LL),
        (_4__this = v2->fields.__4__this) == 0LL)
    || (v6 = v2->fields.item) == 0LL )
  {
    sub_B7769C(this, method);
  }
  icon = _4__this->fields.icon;
  iconImageId_k__BackingField = v6->fields._iconImageId_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId_k__BackingField, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_22364/*"scan_icon_{0}"*/, v8, 0LL);
  SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(_4__this, icon, v9, 0LL);
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
  struct SubmarineSelectScannerListViewItemDraw_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_B77560(&_4__this->fields.eventAssetData);
  ActionExtensions__Call(this->fields.callback, 0LL);
}