void __fastcall BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4214B8A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4214B8A = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.spotEffectList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  const MethodInfo *v29; // x1
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v33; // x26
  const MethodInfo_2669C30 **v34; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x23
  int32_t v36; // w24
  __int64 v37; // x25
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BlankEarthSpotNavimenuEntity_o *v44; // x20
  const MethodInfo_2669C30 **v45; // x19
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v46; // x21
  BlankEarthShortcutButtonListViewManager_o *v47; // x27
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_String_o *name; // x28
  System_Action_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  BlankEarthShortcutButtonListViewItem_o *v53; // x25
  __int64 v54; // x0
  srcLineSprite_o *Component_srcLineSprite; // [xsp+10h] [xbp-60h]
  int32_t iconId; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4214B81 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, blankEarth);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v6);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&BlankEarthShortcutButtonListViewItem_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__, v16);
    sub_B0D8A4(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_8967/*"MapShortcut/DownloadMapShortcut"*/, v18);
    sub_B0D8A4(&StringLiteral_5401/*"DownloadMapShortcutAtlas"*/, v19);
    byte_4214B81 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.blankEarth = blankEarth;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.blankEarth,
    (System_Int32_array **)blankEarth,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v26);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_32;
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_8967/*"MapShortcut/DownloadMapShortcut"*/, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             (AssetData_o *)scrollBar,
                                                             (System_String_o *)StringLiteral_5401/*"DownloadMapShortcutAtlas"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  Component_srcLineSprite = 0LL;
  if ( ((unsigned __int8)scrollBar & 1) != 0 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      goto LABEL_32;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  v29),
        scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_B0D97C(scrollBar);
  }
  if ( (int)EnableShortcutButtons->max_length >= 1 )
  {
    v33 = &BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo;
    v34 = (const MethodInfo_2669C30 **)&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__;
    v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)scrollBar;
    v36 = 0;
    do
    {
      v37 = sub_B0D974(*v33, v31, v32);
      BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___ctor(
        (BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *)v37,
        0LL);
      if ( !v37 )
        goto LABEL_32;
      *(_QWORD *)(v37 + 32) = this;
      sub_B0D840((BattleServantConfConponent_o *)(v37 + 32), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
      if ( v36 >= EnableShortcutButtons->max_length )
      {
        v54 = sub_B0D9A8(scrollBar);
        sub_B0D948(v54, 0LL);
      }
      v44 = EnableShortcutButtons->m_Items[v36];
      *(_DWORD *)(v37 + 16) = v36;
      if ( !v44 || !v35 )
        goto LABEL_32;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v35,
             (WarEntity_o **)(v37 + 24),
             v44->fields.blankEarthSpotId,
             *v34) )
      {
        v45 = v34;
        v46 = v33;
        v47 = this;
        iconId = v44->fields.iconId;
        itemList = this->fields.itemList;
        name = v44->fields.name;
        v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
        System_Action___ctor(
          v50,
          (Il2CppObject *)v37,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0LL);
        v53 = (BlankEarthShortcutButtonListViewItem_o *)sub_B0D974(
                                                          BlankEarthShortcutButtonListViewItem_TypeInfo,
                                                          v51,
                                                          v52);
        BlankEarthShortcutButtonListViewItem___ctor(
          v53,
          v36,
          iconId,
          name,
          commonUIAtlas,
          (UIAtlas_o *)Component_srcLineSprite,
          v50,
          0LL);
        if ( !itemList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v33 = v46;
        v34 = v45;
        this = v47;
      }
    }
    while ( ++v36 < (signed int)EnableShortcutButtons->max_length );
  }
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_32;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager__DestroyList(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  BlankEarthShortcutButtonListViewManager__DestroyShortcutButtonSpotEffect(this, v3);
}


void __fastcall BlankEarthShortcutButtonListViewManager__DestroyShortcutButtonSpotEffect(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *spotEffectList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214B84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4214B84 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  spotEffectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      spotEffectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v11 = this->fields.spotEffectList;
    if ( !v11 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameIn(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_T__o *ObjectList; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  __int64 v22; // x0
  Il2CppObject *current; // x19
  System_String_o *string; // x22
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x2
  System_Action_o *v27; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v29; // x21
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4214B85 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__, v3);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___67874936, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4214B85 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(
      v29,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0LL);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v29, 0LL);
      return;
    }
LABEL_20:
    sub_B0D97C(v22);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v13);
  v18 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                                          v16,
                                                                          v17);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v18,
    ObjectList,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___67874936);
  v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__,
    0LL);
  if ( !v18 )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v30.fields.current;
    string = System_Linq_Enumerable__Last_string_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
               (const MethodInfo_1B4CFD4 *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)string, 0LL);
    if ( !current )
      sub_B0D97C(v25);
    if ( v25 )
      v27 = v21;
    else
      v27 = 0LL;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v27, v26);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214B86 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_4214B86 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v6);
    if ( !ObjectList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B0D97C(0LL);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v9.fields.current,
        v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewManager__OnClickButton(
        BlankEarthShortcutButtonListViewManager_o *this,
        int32_t index,
        BlankEarthSpotEntity_o *bSpotEnt,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x20
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  int32_t id; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  UISprite_c *klass; // x8
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x22
  float moveDefaultTime; // s8
  float moveDistanceMultipleValue; // s9
  __int64 v39; // x1
  __int64 v40; // x2
  BlankEarth_RotateEarthTimeCalculateParam_o *v41; // x23
  const MethodInfo *v42; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  BlankEarthShortcutButtonListViewObject_o *v49; // x21
  const MethodInfo *v50; // x1
  __int64 v51; // x1
  TerminalPramsManager_c *v52; // x0

  if ( (byte_4214B82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__, *(_QWORD *)&index);
    sub_B0D8A4(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v7);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__, v8);
    sub_B0D8A4(&BlankEarthShortcutButtonListViewObject_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__, v10);
    sub_B0D8A4(&Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__, v11);
    sub_B0D8A4(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo, v12);
    sub_B0D8A4(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo, v13);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v14);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v15);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__, v16);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__, v17);
    sub_B0D8A4(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo, v18);
    byte_4214B82 = 1;
  }
  v19 = sub_B0D974(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&index, bSpotEnt);
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___ctor(
    (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_39;
  *(_QWORD *)(v19 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v19 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_39;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v19 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v29 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 75) & 2) != 0 )
      v29 = (_QWORD *)sub_B0D8AC(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v30 = (System_Reflection_MethodBase_o *)sub_B0D888(v29, v29[3]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0LL);
    return;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v27);
    byte_421083D = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !klass )
    goto LABEL_39;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_39;
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0LL);
  v32 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 75) & 2) != 0 )
    v32 = (_QWORD *)sub_B0D8AC(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v33 = (System_Reflection_MethodBase_o *)sub_B0D888(v32, v32[3]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
  v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                                                               v34,
                                                                               v35);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v36,
    (Il2CppObject *)v19,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
  genericContainerHandle = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !genericContainerHandle )
    goto LABEL_39;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)genericContainerHandle, bSpotEnt, 0LL);
  moveDefaultTime = this->fields.moveDefaultTime;
  moveDistanceMultipleValue = this->fields.moveDistanceMultipleValue;
  v41 = (BlankEarth_RotateEarthTimeCalculateParam_o *)sub_B0D974(
                                                        BlankEarth_RotateEarthTimeCalculateParam_TypeInfo,
                                                        v39,
                                                        v40);
  BlankEarth_RotateEarthTimeCalculateParam___ctor(v41, moveDefaultTime, moveDistanceMultipleValue, 0LL);
  genericContainerHandle = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !genericContainerHandle )
    goto LABEL_39;
  BlankEarth__RotateEarthTowardsSpot(
    (BlankEarth_o *)genericContainerHandle,
    bSpotEnt,
    this->fields.spotMoveTime,
    this->fields.spotMoveEasingType,
    1,
    (System_Action_BlankEarth_QAARotateEarthResponse__o *)v36,
    v41,
    0LL);
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v42);
  v46 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                                   v44,
                                                                   v45);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v46,
    (Il2CppObject *)v19,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__);
  if ( !ObjectList )
    goto LABEL_39;
  genericContainerHandle = (TitleInfoControl_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ObjectList,
                                                   (System_Predicate_T__o *)v46,
                                                   (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v49 = (BlankEarthShortcutButtonListViewObject_o *)genericContainerHandle;
  if ( !genericContainerHandle )
  {
    v49 = (BlankEarthShortcutButtonListViewObject_o *)sub_B0D974(
                                                        BlankEarthShortcutButtonListViewObject_TypeInfo,
                                                        v47,
                                                        v48);
    BlankEarthShortcutButtonListViewObject___ctor(v49, v50);
  }
  if ( !v49 || (genericContainerHandle = (TitleInfoControl_o *)v49->fields.itemDraw) == 0LL )
LABEL_39:
    sub_B0D97C(genericContainerHandle);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)genericContainerHandle,
    0,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211E94 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v51);
    byte_4211E94 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  v52->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v19 + 24);
}


void __fastcall BlankEarthShortcutButtonListViewManager__OnClickListView(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthShortcutButtonListViewManager__QuickFrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214B87 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_4214B87 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v6);
    if ( !ObjectList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B0D97C(0LL);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v9.fields.current,
        v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x0
  _BOOL8 v7; // x0
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214B88 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_4214B88 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.goalSpotId = 0;
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v7 )
      break;
    if ( !v9.fields.current )
      sub_B0D97C(v7);
    klass = v9.fields.current[10].klass;
    if ( !klass )
      sub_B0D97C(0LL);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
      (BlankEarthShortcutButtonListViewItemDraw_o *)klass,
      1,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_4214B83 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_B0D8A4(
                                                          &BlankEarthShortcutButtonListViewObject_TypeInfo,
                                                          obj);
    byte_4214B83 = 1;
  }
  if ( !obj
    || (v5 = *(&BlankEarthShortcutButtonListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  BlankEarthShortcutButtonListViewObject__SetupDisp(
    (BlankEarthShortcutButtonListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewManager__SetTouchEnable(
        BlankEarthShortcutButtonListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *blockMask; // x21
  BattleServantConfConponent_o *p_blockMask; // x20
  UnityEngine_Object_o *klass; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  struct UnityEngine_GameObject_o *v16; // x21
  struct UnityEngine_GameObject_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214B89 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4214B89 = 1;
  }
  blockMask = (UnityEngine_Object_o *)this->fields.blockMask;
  p_blockMask = (BattleServantConfConponent_o *)&this->fields.blockMask;
  if ( isEnable )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(blockMask, 0LL, 0LL) )
    {
      klass = (UnityEngine_Object_o *)p_blockMask->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B0D840(p_blockMask, 0LL, v9, v10, v11, v12, v13, v14);
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(blockMask, 0LL, 0LL) )
    {
      blockMaskPrefab = (UnityEngine_Object_o *)this->fields.blockMaskPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(blockMaskPrefab, 0LL, 0LL) )
      {
        v16 = this->fields.blockMaskPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v17 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v16,
                                                   (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v17;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.blockMask,
          (System_Int32_array **)v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        GameObjectExtensions__SafeSetParent(
          this->fields.blockMask,
          (UnityEngine_Component_o *)this->fields.blockMaskPanel,
          0LL);
        v24 = this->fields.blockMask;
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v24, zero, 0LL);
        v25 = this->fields.blockMask;
        if ( !v25 )
          sub_B0D97C(0LL);
        UnityEngine_GameObject__SetActive(v25, 1, 0LL);
      }
    }
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager___FrameIn_b__18_0(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 1, v2);
}


void __fastcall BlankEarthShortcutButtonListViewManager___FrameIn_b__18_1(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BlankEarth_o *blankEarth; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4214B8B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, v3);
    byte_4214B8B = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, 0LL);
  if ( !blankEarth )
    sub_B0D97C(v8);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v7, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager___FrameIn_b__18_2(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 1, v2);
}


System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *__fastcall BlankEarthShortcutButtonListViewManager__get_ObjectList(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4214B80 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4214B80 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v12;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___CreateList_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  BlankEarthShortcutButtonListViewManager__OnClickButton(_4__this, this->fields.itemIndex, this->fields.bSpotEnt, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___ctor(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__0(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *response,
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
  __int64 v13; // x1
  ScrTerminalListTop_o *spotEffectList; // x0
  __int64 v15; // x8
  __int64 v16; // x1
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *v18; // x20
  struct BlankEarth_o *blankEarth; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *shortcutSpotEffect; // x20
  struct BlankEarthShortcutButtonListViewManager_o *v21; // x8
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_Component_o *EarthPoint; // x0
  struct BlankEarthShortcutButtonListViewManager_o *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *_9__2; // x22
  UnityEngine_MonoBehaviour_o *v28; // x20
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211DBE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, response);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v12);
    sub_B0D8A4(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__, v13);
    byte_4211DBE = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, response);
    byte_421083D = 1;
  }
  spotEffectList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    spotEffectList = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v15 = **(_QWORD **)&spotEffectList->fields.boardGameTokenEffectId;
  if ( !v15 )
    goto LABEL_44;
  spotEffectList = *(ScrTerminalListTop_o **)(v15 + 248);
  if ( !spotEffectList )
    goto LABEL_44;
  ScrTerminalListTop__SetAllBlankEarthShortcutButtonsClickable(spotEffectList, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211E94 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
    byte_4211E94 = 1;
  }
  spotEffectList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    spotEffectList = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  *(_BYTE *)(*(_QWORD *)&spotEffectList->fields.boardGameTokenEffectId + 508LL) = 0;
  if ( !response )
    goto LABEL_44;
  if ( response->fields._IsInterrupted_k__BackingField )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  spotEffectList = (ScrTerminalListTop_o *)_4__this->fields.spotEffectList;
  if ( !spotEffectList )
    goto LABEL_44;
  if ( SLODWORD(spotEffectList->fields.mTargetFsm) >= 2 )
  {
    v18 = *(UnityEngine_Object_o **)(*(_QWORD *)&spotEffectList->fields.m_CachedPtr + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)spotEffectList,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v18, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_44;
  }
  blankEarth = _4__this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_44;
  shortcutSpotEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)blankEarth->fields.shortcutSpotEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  spotEffectList = (ScrTerminalListTop_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             shortcutSpotEffect,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_44;
  v22 = (UnityEngine_GameObject_o *)spotEffectList;
  spotEffectList = (ScrTerminalListTop_o *)v21->fields.blankEarth;
  if ( !spotEffectList )
    goto LABEL_44;
  EarthPoint = (UnityEngine_Component_o *)BlankEarth__GetEarthPoint(
                                            (BlankEarth_o *)spotEffectList,
                                            this->fields.spotId,
                                            0LL);
  GameObjectExtensions__SetParent(v22, EarthPoint, 0LL);
  GameObjectExtensions__ResetTransform(v22, 0LL);
  if ( !v22 )
    goto LABEL_44;
  spotEffectList = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !spotEffectList )
    goto LABEL_44;
  v29.fields.x = -90.0;
  v29.fields.y = 0.0;
  v29.fields.z = 0.0;
  UnityEngine_Transform__Rotate_35057284((UnityEngine_Transform_o *)spotEffectList, v29, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_44;
  spotEffectList = (ScrTerminalListTop_o *)v24->fields.spotEffectList;
  if ( !spotEffectList )
    goto LABEL_44;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotEffectList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  _9__2 = this->fields.__9__2;
  v28 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  spotEffectList = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 0LL);
  if ( !v28 )
LABEL_44:
    sub_B0D97C(spotEffectList);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(v28, (System_Collections_IEnumerator_o *)spotEffectList, 0LL);
}


bool __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B0D97C(this);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0LL) == this->fields.index;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *v2; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v4; // x1
  __int64 v5; // x8

  v2 = this;
  if ( (byte_4211DBF & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)sub_B0D8A4(
                                                                                &TerminalSceneComponent_TypeInfo,
                                                                                method);
    byte_4211DBF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)_4__this->fields.blankEarth;
  if ( !this )
    goto LABEL_17;
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)BlankEarth__GetEarthPoint(
                                                                              (BlankEarth_o *)this,
                                                                              v2->fields.spotId,
                                                                              0LL);
  if ( !this )
    goto LABEL_17;
  BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)this, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v4);
    byte_421083D = 1;
  }
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = **(_QWORD **)&this[4].fields.spotId;
  if ( !v5 || (this = *(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o **)(v5 + 232)) == 0LL )
LABEL_17:
    sub_B0D97C(this);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0LL);
}