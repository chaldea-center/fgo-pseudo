void __fastcall BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
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

  if ( (byte_40F90F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F90F6 = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spotEffectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  UnityEngine_GameObject_o *gameObject; // x0
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x22
  BlankEarthSpotNavimenuMaster_o *Master_WarQuestSelectionMaster; // x0
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  WarQuestSelectionMaster_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v38; // x26
  const MethodInfo_266F3E4 **v39; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x23
  int32_t v41; // w24
  __int64 v42; // x25
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  BlankEarthSpotNavimenuEntity_o *v52; // x20
  const MethodInfo_266F3E4 **v53; // x19
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v54; // x21
  BlankEarthShortcutButtonListViewManager_o *v55; // x27
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_String_o *name; // x28
  System_Action_o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  BlankEarthShortcutButtonListViewItem_o *v63; // x25
  const MethodInfo *v64; // x7
  UIScrollView_o *scrollView; // x0
  srcLineSprite_o *Component_srcLineSprite; // [xsp+10h] [xbp-60h]
  int32_t iconId; // [xsp+1Ch] [xbp-54h]

  if ( (byte_40F90ED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, blankEarth);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v6);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&BlankEarthShortcutButtonListViewItem_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__, v16);
    sub_B16FFC(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_8914/*"MapShortcut/DownloadMapShortcut"*/, v18);
    sub_B16FFC(&StringLiteral_5366/*"DownloadMapShortcutAtlas"*/, v19);
    byte_40F90ED = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.blankEarth = blankEarth;
  sub_B16F98(
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
  gameObject = UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_8914/*"MapShortcut/DownloadMapShortcut"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_32;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 (System_String_o *)StringLiteral_5366/*"DownloadMapShortcutAtlas"*/,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      goto LABEL_32;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BlankEarthSpotNavimenuMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  Master_WarQuestSelectionMaster,
                                  0LL),
        v33 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_B170D4();
  }
  if ( (int)EnableShortcutButtons->max_length >= 1 )
  {
    v38 = &BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo;
    v39 = (const MethodInfo_266F3E4 **)&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__;
    v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)v33;
    v41 = 0;
    do
    {
      v42 = sub_B170CC(*v38, v34, v35, v36, v37);
      BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___ctor(
        (BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *)v42,
        0LL);
      if ( !v42 )
        goto LABEL_32;
      *(_QWORD *)(v42 + 32) = this;
      sub_B16F98((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)this, v43, v44, v45, v46, v47, v48);
      if ( v41 >= EnableShortcutButtons->max_length )
      {
        sub_B17100(v49, v50, v51);
        sub_B170A0();
      }
      v52 = EnableShortcutButtons->m_Items[v41];
      *(_DWORD *)(v42 + 16) = v41;
      if ( !v52 || !v40 )
        goto LABEL_32;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v40,
             (WarEntity_o **)(v42 + 24),
             v52->fields.blankEarthSpotId,
             *v39) )
      {
        v53 = v39;
        v54 = v38;
        v55 = this;
        iconId = v52->fields.iconId;
        itemList = this->fields.itemList;
        name = v52->fields.name;
        v58 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
        System_Action___ctor(
          v58,
          (Il2CppObject *)v42,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0LL);
        v63 = (BlankEarthShortcutButtonListViewItem_o *)sub_B170CC(
                                                          BlankEarthShortcutButtonListViewItem_TypeInfo,
                                                          v59,
                                                          v60,
                                                          v61,
                                                          v62);
        BlankEarthShortcutButtonListViewItem___ctor(
          v63,
          v41,
          iconId,
          name,
          commonUIAtlas,
          (UIAtlas_o *)Component_srcLineSprite,
          v58,
          v64);
        if ( !itemList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v38 = v54;
        v39 = v53;
        this = v55;
      }
    }
    while ( ++v41 < (signed int)EnableShortcutButtons->max_length );
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_32;
  UIScrollView__ResetPosition(scrollView, 0LL);
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

  if ( (byte_40F90F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F90F0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  spotEffectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      spotEffectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v11 = this->fields.spotEffectList;
    if ( !v11 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_T__o *ObjectList; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x21
  Il2CppObject *current; // x19
  System_String_o *string; // x22
  bool v30; // w0
  System_Action_o *v31; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x2
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F90F1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__, v3);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___66727216, v10);
    sub_B16FFC(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40F90F1 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(
      v33,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0LL);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v33, v34);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v13);
  v22 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                                          v18,
                                                                          v19,
                                                                          v20,
                                                                          v21);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v22,
    ObjectList,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___66727216);
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__,
    0LL);
  if ( !v22 )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v35.fields.current;
    string = System_Linq_Enumerable__Last_string_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v22,
               (const MethodInfo_18D901C *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v30 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)string, 0LL);
    if ( !current )
      sub_B170D4();
    if ( v30 )
      v31 = v27;
    else
      v31 = 0LL;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v31, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F90F2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_40F90F2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v6);
    if ( !ObjectList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B170D4();
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v8.fields.current,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewManager__OnClickButton(
        BlankEarthShortcutButtonListViewManager_o *this,
        int32_t index,
        BlankEarthSpotEntity_o *bSpotEnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v20; // x20
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
  TerminalSceneComponent_c *v31; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x22
  const MethodInfo *v41; // x2
  BlankEarth_o *blankEarth; // x0
  float moveDefaultTime; // s8
  float moveDistanceMultipleValue; // s9
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  BlankEarth_RotateEarthTimeCalculateParam_o *v49; // x23
  const MethodInfo *v50; // x6
  BlankEarth_o *v51; // x0
  const MethodInfo *v52; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  peRenderTexture_ChangeLayerObject_o *v63; // x21
  __int64 v64; // x1
  TerminalPramsManager_c *v65; // x0

  if ( (byte_40F90EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__, *(_QWORD *)&index);
    sub_B16FFC(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v8);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__, v9);
    sub_B16FFC(&BlankEarthShortcutButtonListViewObject_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__, v11);
    sub_B16FFC(&Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__, v12);
    sub_B16FFC(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo, v13);
    sub_B16FFC(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo, v14);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v16);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__, v17);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__, v18);
    sub_B16FFC(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo, v19);
    byte_40F90EE = 1;
  }
  v20 = sub_B170CC(
          BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&index,
          bSpotEnt,
          method,
          v4);
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___ctor(
    (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_38;
  *(_QWORD *)(v20 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v20 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_38;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v20 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v29 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 75) & 2) != 0 )
      v29 = (_QWORD *)sub_B17004(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v30 = (System_Reflection_MethodBase_o *)sub_B16FE0(v29, v29[3]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0LL);
    return;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v27);
    byte_40F6042 = 1;
  }
  v31 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v31 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v31->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_38;
  mTitleInfo = mInstance->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_38;
  TitleInfoControl__SetTouchEnable(mTitleInfo, 0, 0LL);
  v34 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 75) & 2) != 0 )
    v34 = (_QWORD *)sub_B17004(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v35 = (System_Reflection_MethodBase_o *)sub_B16FE0(v34, v34[3]);
  OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                                                               v36,
                                                                               v37,
                                                                               v38,
                                                                               v39);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v40,
    (Il2CppObject *)v20,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
  blankEarth = this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_38;
  BlankEarth__SaveSpotRotation(blankEarth, bSpotEnt, v41);
  moveDefaultTime = this->fields.moveDefaultTime;
  moveDistanceMultipleValue = this->fields.moveDistanceMultipleValue;
  v49 = (BlankEarth_RotateEarthTimeCalculateParam_o *)sub_B170CC(
                                                        BlankEarth_RotateEarthTimeCalculateParam_TypeInfo,
                                                        v45,
                                                        v46,
                                                        v47,
                                                        v48);
  BlankEarth_RotateEarthTimeCalculateParam___ctor(v49, moveDefaultTime, moveDistanceMultipleValue, 0LL);
  v51 = this->fields.blankEarth;
  if ( !v51 )
    goto LABEL_38;
  BlankEarth__RotateEarthTowardsSpot(
    v51,
    bSpotEnt,
    this->fields.spotMoveTime,
    this->fields.spotMoveEasingType,
    1,
    (System_Action_BlankEarth_QAARotateEarthResponse__o *)v40,
    v49,
    v50);
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v52);
  v58 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                                   v54,
                                                                   v55,
                                                                   v56,
                                                                   v57);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v58,
    (Il2CppObject *)v20,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__);
  if ( !ObjectList )
    goto LABEL_38;
  v63 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ObjectList,
          (System_Predicate_T__o *)v58,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  if ( !v63 )
  {
    v63 = (peRenderTexture_ChangeLayerObject_o *)sub_B170CC(
                                                   BlankEarthShortcutButtonListViewObject_TypeInfo,
                                                   v59,
                                                   v60,
                                                   v61,
                                                   v62);
    BlankEarthShortcutButtonListViewObject___ctor((BlankEarthShortcutButtonListViewObject_o *)v63, 0LL);
  }
  if ( !v63 )
LABEL_38:
    sub_B170D4();
  BlankEarthShortcutButtonListViewObject__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewObject_o *)v63,
    0,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F7165 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v64);
    byte_40F7165 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  v65->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v20 + 24);
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F90F3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_40F90F3 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v6);
    if ( !ObjectList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B170D4();
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v8.fields.current,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F90F4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_40F90F4 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  this->fields.goalSpotId = 0;
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    if ( !v7.fields.current )
      sub_B170D4();
    BlankEarthShortcutButtonListViewObject__SetShortcutButtonEnable(
      (BlankEarthShortcutButtonListViewObject_o *)v7.fields.current,
      1,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_40F90EF & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthShortcutButtonListViewObject_TypeInfo, obj);
    byte_40F90EF = 1;
  }
  if ( !obj
    || (v5 = *(&BlankEarthShortcutButtonListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  BlankEarthShortcutButtonListViewObject__SetupDisp((BlankEarthShortcutButtonListViewObject_o *)obj, 0LL);
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

  if ( (byte_40F90F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F90F5 = 1;
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
      UnityEngine_Object__DestroyImmediate_34809676(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B16F98(p_blockMask, 0LL, v9, v10, v11, v12, v13, v14);
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
                                                   (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v17;
        sub_B16F98(
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
          sub_B170D4();
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
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_40F90F7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, v3);
    byte_40F90F7 = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, 0LL);
  if ( !blankEarth )
    sub_B170D4();
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v9, v10);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F90EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F90EC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v14;
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
    sub_B170D4();
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
  TerminalSceneComponent_c *v14; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v17; // x1
  TerminalPramsManager_c *v18; // x0
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *spotEffectList; // x0
  UnityEngine_Object_o *v21; // x20
  struct BlankEarth_o *blankEarth; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *shortcutSpotEffect; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v24; // x0
  struct BlankEarthShortcutButtonListViewManager_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x20
  BlankEarth_o *v27; // x0
  UnityEngine_Component_o *EarthPoint; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BlankEarthShortcutButtonListViewManager_o *v30; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *_9__2; // x22
  UnityEngine_MonoBehaviour_o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_IEnumerator_o *v44; // x0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7087 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, response);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v12);
    sub_B16FFC(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__, v13);
    byte_40F7087 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, response);
    byte_40F6042 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v14->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_44;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_44;
  ScrTerminalListTop__SetAllBlankEarthShortcutButtonsClickable(mTerminalList, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F7165 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
    byte_40F7165 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 0;
  if ( !response )
    goto LABEL_44;
  if ( response->fields._IsInterrupted_k__BackingField )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  spotEffectList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.spotEffectList;
  if ( !spotEffectList )
    goto LABEL_44;
  if ( spotEffectList->fields._size >= 2 )
  {
    v21 = (UnityEngine_Object_o *)spotEffectList->fields._items->m_Items[0];
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      spotEffectList,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v21, 0LL);
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
  v24 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
          shortcutSpotEffect,
          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_44;
  v26 = (UnityEngine_GameObject_o *)v24;
  v27 = v25->fields.blankEarth;
  if ( !v27 )
    goto LABEL_44;
  EarthPoint = (UnityEngine_Component_o *)BlankEarth__GetEarthPoint(v27, this->fields.spotId, 0LL);
  GameObjectExtensions__SetParent(v26, EarthPoint, 0LL);
  GameObjectExtensions__ResetTransform(v26, 0LL);
  if ( !v26 )
    goto LABEL_44;
  transform = UnityEngine_GameObject__get_transform(v26, 0LL);
  if ( !transform )
    goto LABEL_44;
  v45.fields.x = -90.0;
  v45.fields.y = 0.0;
  v45.fields.z = 0.0;
  UnityEngine_Transform__Rotate_34931420(transform, v45, 0LL);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_44;
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->fields.spotEffectList;
  if ( !v31 )
    goto LABEL_44;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v31,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  _9__2 = this->fields.__9__2;
  v37 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = BasicHelper__DelayCall(0.01, _9__2, 0LL);
  if ( !v37 )
LABEL_44:
    sub_B170D4();
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(v37, v44, 0LL);
}


bool __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return ListViewObject__get_Index((ListViewObject_o *)n, 0LL) == this->fields.index;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  BlankEarth_o *blankEarth; // x0
  BlankEarthPoint_o *EarthPoint; // x0
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0

  if ( (byte_40F7088 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F7088 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  blankEarth = _4__this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_17;
  EarthPoint = BlankEarth__GetEarthPoint(blankEarth, this->fields.spotId, 0LL);
  if ( !EarthPoint )
    goto LABEL_17;
  BlankEarthPoint__OpenQuestList(EarthPoint, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
    byte_40F6042 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v7->static_fields->mInstance;
  if ( !mInstance || (mTitleInfo = mInstance->fields.mTitleInfo) == 0LL )
LABEL_17:
    sub_B170D4();
  TitleInfoControl__SetTouchEnable(mTitleInfo, 1, 0LL);
}