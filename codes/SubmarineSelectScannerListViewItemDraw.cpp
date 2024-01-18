void __fastcall SubmarineSelectScannerListViewItemDraw___ctor(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_4185842 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    byte_4185842 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v4;
  sub_B2C2F8(&this->fields.atlasList, v4);
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

  if ( (byte_418583B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v3);
    byte_418583B = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4185841 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    byte_4185841 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_418583C & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__, v8);
    sub_B2C35C(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo, v9);
    byte_418583C = 1;
  }
  v10 = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *)sub_B2C42C(SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.callback = callback;
  sub_B2C2F8(&v10->fields.callback, callback);
  EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(eventId, v13);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v15, 1, 0LL) )
    ActionExtensions__Call(v10->fields.callback, 0LL);
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
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v20; // [xsp+8h] [xbp-58h] BYREF
  int v21; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418583F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23501/*"{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_418583F = 1;
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
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
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

  if ( (byte_418583D & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    byte_418583D = 1;
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

  if ( (byte_418583E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_418583E = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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

  if ( (byte_4185840 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4185840 = 1;
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


void __fastcall SubmarineSelectScannerListViewItemDraw__UpdateUi(
        SubmarineSelectScannerListViewItemDraw_o *this,
        SubmarineSelectScannerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *v13; // x22
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct SubmarineSelectScannerListViewItem_o **p_item; // x20
  int32_t eventId_k__BackingField; // w21
  System_Action_o *v18; // x23
  const MethodInfo *v19; // x3
  EventPanelScanMaster_o *v20; // x21
  EventPanelScanEntity_o *Entity; // x0
  char v22; // w22
  UILabel_o *itemDescLabel; // x21
  __int64 *v24; // x8

  if ( (byte_418583A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__, v9);
    sub_B2C35C(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_5729/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/, v11);
    sub_B2C35C(&StringLiteral_5732/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v12);
    byte_418583A = 1;
  }
  v13 = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)sub_B2C42C(SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_25;
  v13->fields.__4__this = this;
  sub_B2C2F8(&v13->fields, this);
  v13->fields.item = item;
  p_item = &v13->fields.item;
  sub_B2C2F8(&v13->fields.item, item);
  if ( !v13->fields.item )
    goto LABEL_25;
  this->fields.eventId = v13->fields.item->fields._eventId_k__BackingField;
  if ( !*p_item )
    goto LABEL_25;
  eventId_k__BackingField = (*p_item)->fields._eventId_k__BackingField;
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v13,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__,
    0LL);
  SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(this, eventId_k__BackingField, v18, v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !*p_item )
    goto LABEL_25;
  v20 = (EventPanelScanMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_25;
  Entity = (EventPanelScanEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       (*p_item)->fields._scanId_k__BackingField,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(v20, Entity, 0LL);
  if ( !*p_item )
    goto LABEL_25;
  v22 = (char)Instance;
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)Instance, (*p_item)->fields._name_k__BackingField, 0LL);
  itemDescLabel = this->fields.itemDescLabel;
  if ( (v22 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = &StringLiteral_5729/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = &StringLiteral_5732/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/;
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v24, 0LL);
  if ( !itemDescLabel
    || (UILabel__set_text(itemDescLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.darkMask) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        !*p_item)
    || !Instance )
  {
LABEL_25:
    sub_B2C434(Instance, v15);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)Instance,
    !(*p_item)->fields._enabled_k__BackingField,
    0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct SubmarineSelectScannerListViewItem_o *item; // x8
  SubmarineSelectScannerListViewItemDraw_o *_4__this; // x20
  struct SubmarineSelectScannerListViewItem_o *v7; // x8
  UISprite_o *icon; // x19
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t iconImageId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_41847AE & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_21896/*"scan_icon_{0}"*/, v3);
    this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)sub_B2C35C(&StringLiteral_19506/*"img_list_bg02"*/, v4);
    byte_41847AE = 1;
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
                                                                                   (System_String_o *)StringLiteral_19506/*"img_list_bg02"*/,
                                                                                   0LL),
        (_4__this = v2->fields.__4__this) == 0LL)
    || (v7 = v2->fields.item) == 0LL )
  {
    sub_B2C434(this, method);
  }
  icon = _4__this->fields.icon;
  iconImageId_k__BackingField = v7->fields._iconImageId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId_k__BackingField);
  v10 = System_String__Format((System_String_o *)StringLiteral_21896/*"scan_icon_{0}"*/, v9, 0LL);
  SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(_4__this, icon, v10, 0LL);
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
    sub_B2C434(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_B2C2F8(&_4__this->fields.eventAssetData, data);
  ActionExtensions__Call(this->fields.callback, 0LL);
}