void __fastcall SubmarineSelectScannerListViewItemDraw___ctor(
        SubmarineSelectScannerListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7BCE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5, v6, v7);
    byte_42E7BCE = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7BC7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v5, v6, v7);
    byte_42E7BC7 = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
}


UnityEngine_GameObject_o *__fastcall SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42E7BCD & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)name, (_DWORD)method, v3);
    byte_42E7BCD = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  return result;
}


void __fastcall SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(
        SubmarineSelectScannerListViewItemDraw_o *this,
        int32_t eventId,
        System_Action_o *callback,
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
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v33; // x21

  if ( (byte_42E7BC8 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(
      &Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo, v13, v14, v15);
    byte_42E7BC8 = 1;
  }
  v16 = sub_B5D694(SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_TypeInfo);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0___ctor(
    (SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0_o *)v16,
    0LL);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  EventUIAssetDataPath = SubmarineSelectScannerListViewItemDraw__GetEventUIAssetDataPath(eventId, v31);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v16,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass14_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v33, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v16 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E7BCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23812/*"{0:D2}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v21, v22, v23);
    byte_42E7BCB = 1;
  }
  if ( this->fields.eventAssetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B5D69C(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v28 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23812/*"{0:D2}"*/, v27, 0LL);
      v33 = eventId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
      v30 = System_String__Format_44573324((System_String_o *)StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v29, v28, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)SubmarineSelectScannerListViewItemDraw__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v30,
                                                                 v31);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  __int64 v3; // x3
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_42E7BC9 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E7BC9 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0

  if ( (byte_42E7BCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, (_DWORD)method, v2, v3);
    byte_42E7BCA = 1;
  }
  atlasList = this->fields.atlasList;
  if ( !atlasList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
        SubmarineSelectScannerListViewItemDraw_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v24; // x0
  __int64 v25; // x1
  bool v26; // w20
  int v27; // w21
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E7BCC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UIAtlas___, (_DWORD)sprite, (_DWORD)spriteName, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v16, v17, v18);
    byte_42E7BCC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v30 = v29;
    do
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v30,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v21 )
      {
        v26 = 0;
        v27 = 8;
        goto LABEL_16;
      }
      current = v30.fields.current;
      if ( !v30.fields.current )
        sub_B5D69C(v21, v22);
      v24 = UIAtlas__GetSprite((UIAtlas_o *)v30.fields.current, spriteName, 0LL);
    }
    while ( !v24 );
    if ( !sprite )
      sub_B5D69C(v24, v25);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v26 = 1;
    v27 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v30,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v27 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B5D69C(IsNullOrEmpty, v20);
    }
  }
  return v26;
}


void __fastcall SubmarineSelectScannerListViewItemDraw__UpdateUi(
        SubmarineSelectScannerListViewItemDraw_o *this,
        SubmarineSelectScannerListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x22
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t v46; // w21
  System_Action_o *v47; // x23
  const MethodInfo *v48; // x3
  EventPanelScanMaster_o *v49; // x21
  EventPanelScanEntity_o *Entity; // x0
  char v51; // w22
  UILabel_o *itemDescLabel; // x21
  __int64 *v53; // x8

  if ( (byte_42E7BC6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__, v18, v19, v20);
    sub_B5D5C4(&SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_5806/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_5809/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v27, v28, v29);
    byte_42E7BC6 = 1;
  }
  v30 = sub_B5D694(SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_TypeInfo);
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0___ctor(
    (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_25;
  *(_QWORD *)(v30 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 24) = item;
  v39 = v30 + 24;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 24), (System_Int32_array **)item, v40, v41, v42, v43, v44, v45);
  if ( !*(_QWORD *)(v30 + 24) )
    goto LABEL_25;
  this->fields.eventId = *(_DWORD *)(*(_QWORD *)(v30 + 24) + 112LL);
  if ( !*(_QWORD *)v39 )
    goto LABEL_25;
  v46 = *(_DWORD *)(*(_QWORD *)v39 + 112LL);
  v47 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v30,
    Method_SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0__UpdateUi_b__0__,
    0LL);
  SubmarineSelectScannerListViewItemDraw__LoadEventUIAssetData(this, v46, v47, v48);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !*(_QWORD *)v39 )
    goto LABEL_25;
  v49 = (EventPanelScanMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_25;
  Entity = (EventPanelScanEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       *(_DWORD *)(*(_QWORD *)v39 + 116LL),
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(v49, Entity, 0LL);
  if ( !*(_QWORD *)v39 )
    goto LABEL_25;
  v51 = (char)Instance;
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)(*(_QWORD *)v39 + 128LL), 0LL);
  itemDescLabel = this->fields.itemDescLabel;
  if ( (v51 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = &StringLiteral_5806/*"EVENT_SUBMARINE_SELECT_SCAN_METHOD_PREFIX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = &StringLiteral_5809/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/;
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v53, 0LL);
  if ( !itemDescLabel
    || (UILabel__set_text(itemDescLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.darkMask) == 0LL)
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        !*(_QWORD *)v39)
    || !Instance )
  {
LABEL_25:
    sub_B5D69C(Instance, v32);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, *(_BYTE *)(*(_QWORD *)v39 + 144LL) == 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct SubmarineSelectScannerListViewItem_o *item; // x8
  SubmarineSelectScannerListViewItemDraw_o *_4__this; // x20
  struct SubmarineSelectScannerListViewItem_o *v13; // x8
  UISprite_o *icon; // x19
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t iconImageId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E6464 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22195/*"scan_icon_{0}"*/, v5, v6, v7);
    this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)sub_B5D5C4(
                                                                               &StringLiteral_19753/*"img_list_bg02"*/,
                                                                               v8,
                                                                               v9,
                                                                               v10);
    byte_42E6464 = 1;
  }
  item = v4->fields.item;
  if ( !item
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v4->fields.__4__this) == 0LL
    || (SubmarineSelectScannerListViewItemDraw__LoadLocalAtlas(
          (SubmarineSelectScannerListViewItemDraw_o *)this,
          item->fields._eventId_k__BackingField,
          0LL),
        (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)v4->fields.__4__this) == 0LL)
    || (this = (SubmarineSelectScannerListViewItemDraw___c__DisplayClass11_0_o *)SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(
                                                                                   (SubmarineSelectScannerListViewItemDraw_o *)this,
                                                                                   (UISprite_o *)this->fields.item,
                                                                                   (System_String_o *)StringLiteral_19753/*"img_list_bg02"*/,
                                                                                   0LL),
        (_4__this = v4->fields.__4__this) == 0LL)
    || (v13 = v4->fields.item) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  icon = _4__this->fields.icon;
  iconImageId_k__BackingField = v13->fields._iconImageId_k__BackingField;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId_k__BackingField);
  v16 = System_String__Format((System_String_o *)StringLiteral_22195/*"scan_icon_{0}"*/, v15, 0LL);
  SubmarineSelectScannerListViewItemDraw__SetSpriteByLocalAtlas(_4__this, icon, v16, 0LL);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_B5D560(&_4__this->fields.eventAssetData);
  ActionExtensions__Call(this->fields.callback, 0LL);
}