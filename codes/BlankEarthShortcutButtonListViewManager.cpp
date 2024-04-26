void __fastcall BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4351639 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4351639 = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.spotEffectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewManager__CreateList(
        BlankEarthShortcutButtonListViewManager_o *this,
        BlankEarth_o *blankEarth,
        UIAtlas_o *commonUIAtlas,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v17; // x26
  const MethodInfo_21C049C **v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x23
  int32_t v20; // w24
  __int64 v21; // x25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BlankEarthSpotNavimenuEntity_o *v28; // x20
  const MethodInfo_21C049C **v29; // x19
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v30; // x21
  BlankEarthShortcutButtonListViewManager_o *v31; // x27
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_String_o *name; // x28
  System_Action_o *v34; // x20
  BlankEarthShortcutButtonListViewItem_o *v35; // x25
  const MethodInfo *v36; // x7
  __int64 v37; // x0
  srcLineSprite_o *Component_srcLineSprite; // [xsp+10h] [xbp-60h]
  int32_t iconId; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4351630 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BlankEarthShortcutButtonListViewItem_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__);
    sub_B70694(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo);
    sub_B70694(&StringLiteral_9052/*"MapShortcut/DownloadMapShortcut"*/);
    sub_B70694(&StringLiteral_5472/*"DownloadMapShortcutAtlas"*/);
    byte_4351630 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.blankEarth = blankEarth;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.blankEarth,
    (System_Int32_array **)blankEarth,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BlankEarthShortcutButtonListViewManager__SetTouchEnable(this, 0, v12);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_32;
  scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_9052/*"MapShortcut/DownloadMapShortcut"*/, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             (AssetData_o *)scrollBar,
                                                             (System_String_o *)StringLiteral_5472/*"DownloadMapShortcutAtlas"*/,
                                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  v13),
        scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_B7076C(scrollBar, v13);
  }
  if ( (int)EnableShortcutButtons->max_length >= 1 )
  {
    v17 = &BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo;
    v18 = (const MethodInfo_21C049C **)&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__;
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)scrollBar;
    v20 = 0;
    do
    {
      v21 = sub_B70764(*v17);
      BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___ctor(
        (BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *)v21,
        0LL);
      if ( !v21 )
        goto LABEL_32;
      *(_QWORD *)(v21 + 32) = this;
      sub_B70630((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
      if ( v20 >= EnableShortcutButtons->max_length )
      {
        v37 = sub_B70798(scrollBar);
        sub_B70738(v37, 0LL);
      }
      v28 = EnableShortcutButtons->m_Items[v20];
      *(_DWORD *)(v21 + 16) = v20;
      if ( !v28 || !v19 )
        goto LABEL_32;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v19,
             (WarEntity_o **)(v21 + 24),
             v28->fields.blankEarthSpotId,
             *v18) )
      {
        v29 = v18;
        v30 = v17;
        v31 = this;
        iconId = v28->fields.iconId;
        itemList = this->fields.itemList;
        name = v28->fields.name;
        v34 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v34,
          (Il2CppObject *)v21,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0LL);
        v35 = (BlankEarthShortcutButtonListViewItem_o *)sub_B70764(BlankEarthShortcutButtonListViewItem_TypeInfo);
        BlankEarthShortcutButtonListViewItem___ctor(
          v35,
          v20,
          iconId,
          name,
          commonUIAtlas,
          (UIAtlas_o *)Component_srcLineSprite,
          v34,
          v36);
        if ( !itemList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v17 = v30;
        v18 = v29;
        this = v31;
      }
    }
    while ( ++v20 < (signed int)EnableShortcutButtons->max_length );
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *spotEffectList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4351633 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351633 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  spotEffectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      spotEffectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v7.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v6 = this->fields.spotEffectList;
    if ( !v6 )
      sub_B7076C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameIn(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_IEnumerable_T__o *ObjectList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v5; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x19
  UnityEngine_Object_o *TransformServantInfo; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Action_o *v14; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v16; // x21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4351634 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__);
    sub_B70694(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___69154912);
    sub_B70694(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351634 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v16 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0LL);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v16, 0LL);
      return;
    }
LABEL_20:
    sub_B7076C(v7, v8);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v3);
  v5 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v5,
    ObjectList,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___69154912);
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, 0LL);
  if ( !v5 )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v17.fields.current;
    TransformServantInfo = (UnityEngine_Object_o *)System_Linq_Enumerable__Last_TransformServantInfo_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                     (const MethodInfo_1CBDD60 *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, TransformServantInfo, 0LL);
    if ( !current )
      sub_B7076C(v11, v12);
    if ( v11 )
      v14 = v6;
    else
      v14 = 0LL;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v14, v13);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__FrameOut(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351635 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4351635 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v3);
    if ( !ObjectList )
      sub_B7076C(0LL, v5);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields.current )
        sub_B7076C(0LL, v6);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields.current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__OnClickButton(
        BlankEarthShortcutButtonListViewManager_o *this,
        int32_t index,
        BlankEarthSpotEntity_o *bSpotEnt,
        const MethodInfo *method)
{
  __int64 v7; // x20
  TitleInfoControl_o *genericContainerHandle; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t id; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  UISprite_c *klass; // x8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x22
  float moveDefaultTime; // s8
  float moveDistanceMultipleValue; // s9
  BlankEarth_RotateEarthTimeCalculateParam_o *v25; // x23
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x22
  const MethodInfo *v29; // x2
  BlankEarthShortcutButtonListViewObject_o *v30; // x21
  const MethodInfo *v31; // x1
  TerminalPramsManager_c *v32; // x0

  if ( (byte_4351631 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
    sub_B70694(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    sub_B70694(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
    sub_B70694(&Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__);
    sub_B70694(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_B70694(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__);
    sub_B70694(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
    byte_4351631 = 1;
  }
  v7 = sub_B70764(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___ctor(
    (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_39;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 28) = index;
  if ( !this->fields.itemList )
    return;
  if ( !bSpotEnt )
    goto LABEL_39;
  id = bSpotEnt->fields.id;
  *(_DWORD *)(v7 + 24) = id;
  if ( id == this->fields.goalSpotId )
  {
    v17 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
    if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 75) & 2) != 0 )
      v17 = (_QWORD *)sub_B7069C(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v18 = (System_Reflection_MethodBase_o *)sub_B70678(v17, v17[3]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
    return;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
  v20 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 75) & 2) != 0 )
    v20 = (_QWORD *)sub_B7069C(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v21 = (System_Reflection_MethodBase_o *)sub_B70678(v20, v20[3]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
  genericContainerHandle = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !genericContainerHandle )
    goto LABEL_39;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)genericContainerHandle, bSpotEnt, 0LL);
  moveDefaultTime = this->fields.moveDefaultTime;
  moveDistanceMultipleValue = this->fields.moveDistanceMultipleValue;
  v25 = (BlankEarth_RotateEarthTimeCalculateParam_o *)sub_B70764(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
  BlankEarth_RotateEarthTimeCalculateParam___ctor(v25, moveDefaultTime, moveDistanceMultipleValue, 0LL);
  genericContainerHandle = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !genericContainerHandle )
    goto LABEL_39;
  BlankEarth__RotateEarthTowardsSpot(
    (BlankEarth_o *)genericContainerHandle,
    bSpotEnt,
    this->fields.spotMoveTime,
    this->fields.spotMoveEasingType,
    1,
    (System_Action_BlankEarth_QAARotateEarthResponse__o *)v22,
    v25,
    0LL);
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v26);
  v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v28,
    (Il2CppObject *)v7,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__);
  if ( !ObjectList )
    goto LABEL_39;
  genericContainerHandle = (TitleInfoControl_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ObjectList,
                                                   (System_Predicate_T__o *)v28,
                                                   (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v30 = (BlankEarthShortcutButtonListViewObject_o *)genericContainerHandle;
  if ( !genericContainerHandle )
  {
    v30 = (BlankEarthShortcutButtonListViewObject_o *)sub_B70764(BlankEarthShortcutButtonListViewObject_TypeInfo);
    BlankEarthShortcutButtonListViewObject___ctor(v30, v31);
  }
  if ( !v30 || (genericContainerHandle = (TitleInfoControl_o *)v30->fields.itemDraw) == 0LL )
LABEL_39:
    sub_B7076C(genericContainerHandle, v9);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)genericContainerHandle,
    0,
    v29);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434EDC9 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EDC9 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
  this->fields.goalSpotId = *(_DWORD *)(v7 + 24);
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
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351636 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4351636 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v3);
    if ( !ObjectList )
      sub_B7076C(0LL, v5);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v7.fields.current )
        sub_B7076C(0LL, v6);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v7.fields.current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
  }
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351637 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    byte_4351637 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  this->fields.goalSpotId = 0;
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v9.fields.current )
      sub_B7076C(v5, v6);
    klass = v9.fields.current[10].klass;
    if ( !klass )
      sub_B7076C(0LL, v6);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
      (BlankEarthShortcutButtonListViewItemDraw_o *)klass,
      1,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_4351632 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_B70694(&BlankEarthShortcutButtonListViewObject_TypeInfo);
    byte_4351632 = 1;
  }
  if ( !obj
    || (v5 = *(&BlankEarthShortcutButtonListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  BlankEarthShortcutButtonListViewObject__SetupDisp(
    (BlankEarthShortcutButtonListViewObject_o *)obj,
    (const MethodInfo *)obj);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetTouchEnable(
        BlankEarthShortcutButtonListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *blockMask; // x21
  BattleServantConfConponent_o *p_blockMask; // x20
  UnityEngine_Object_o *klass; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *blockMaskPrefab; // x21
  struct UnityEngine_GameObject_o *v15; // x21
  struct UnityEngine_GameObject_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *v23; // x20
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351638 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351638 = 1;
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
      UnityEngine_Object__DestroyImmediate_36067420(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B70630(p_blockMask, 0LL, v8, v9, v10, v11, v12, v13);
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
        v15 = this->fields.blockMaskPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v16 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v15,
                                                   (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v16;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.blockMask,
          (System_Int32_array **)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        GameObjectExtensions__SafeSetParent(
          this->fields.blockMask,
          (UnityEngine_Component_o *)this->fields.blockMaskPanel,
          0LL);
        v23 = this->fields.blockMask;
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v23, zero, 0LL);
        v25 = this->fields.blockMask;
        if ( !v25 )
          sub_B7076C(0LL, v24);
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
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435163A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__);
    byte_435163A = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, 0LL);
  if ( !blankEarth )
    sub_B7076C(v5, v6);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v4, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_435162F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435162F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v3;
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
    sub_B7076C(0LL, method);
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
  ScrTerminalListTop_o *blankEarth; // x0
  __int64 v6; // x8
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *EarthPoint; // x20
  __int64 v9; // x8
  struct BlankEarthShortcutButtonListViewManager_o *v10; // x8
  UnityEngine_Object_o *v11; // x20
  struct BlankEarth_o *v12; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *shortcutSpotEffect; // x20
  struct BlankEarthShortcutButtonListViewManager_o *v14; // x8
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Component_o *v16; // x0
  struct BlankEarthShortcutButtonListViewManager_o *v17; // x8
  System_Action_o *_9__2; // x22
  UnityEngine_MonoBehaviour_o *v19; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434ED31 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__);
    byte_434ED31 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = **(_QWORD **)&blankEarth->fields.boardGameTokenEffectId;
  if ( !v6 )
    goto LABEL_61;
  blankEarth = *(ScrTerminalListTop_o **)(v6 + 248);
  if ( !blankEarth )
    goto LABEL_61;
  ScrTerminalListTop__SetAllBlankEarthShortcutButtonsClickable(blankEarth, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434EDC9 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EDC9 = 1;
  }
  blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    blankEarth = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  *(_BYTE *)(*(_QWORD *)&blankEarth->fields.boardGameTokenEffectId + 524LL) = 0;
  if ( !response )
    goto LABEL_61;
  if ( response->fields._IsInterrupted_k__BackingField )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_61;
  blankEarth = (ScrTerminalListTop_o *)_4__this->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_61;
  EarthPoint = (UnityEngine_Object_o *)BlankEarth__GetEarthPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
  if ( ((unsigned __int8)blankEarth & 1) != 0 )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      blankEarth = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v9 = **(_QWORD **)&blankEarth->fields.boardGameTokenEffectId;
    if ( v9 )
    {
      blankEarth = *(ScrTerminalListTop_o **)(v9 + 232);
      if ( blankEarth )
      {
        TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)blankEarth, 1, 0LL);
        return;
      }
    }
LABEL_61:
    sub_B7076C(blankEarth, response);
  }
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_61;
  blankEarth = (ScrTerminalListTop_o *)v10->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_61;
  if ( SLODWORD(blankEarth->fields.mTargetFsm) >= 2 )
  {
    v11 = *(UnityEngine_Object_o **)(*(_QWORD *)&blankEarth->fields.m_CachedPtr + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)blankEarth,
      0,
      (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v11, 0LL);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_61;
  }
  v12 = v10->fields.blankEarth;
  if ( !v12 )
    goto LABEL_61;
  shortcutSpotEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)v12->fields.shortcutSpotEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         shortcutSpotEffect,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_61;
  v15 = (UnityEngine_GameObject_o *)blankEarth;
  blankEarth = (ScrTerminalListTop_o *)v14->fields.blankEarth;
  if ( !blankEarth )
    goto LABEL_61;
  v16 = (UnityEngine_Component_o *)BlankEarth__GetEarthPoint((BlankEarth_o *)blankEarth, this->fields.spotId, 0LL);
  GameObjectExtensions__SetParent(v15, v16, 0LL);
  GameObjectExtensions__ResetTransform(v15, 0LL);
  if ( !v15 )
    goto LABEL_61;
  blankEarth = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !blankEarth )
    goto LABEL_61;
  v20.fields.x = -90.0;
  v20.fields.y = 0.0;
  v20.fields.z = 0.0;
  UnityEngine_Transform__Rotate_36189384((UnityEngine_Transform_o *)blankEarth, v20, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_61;
  blankEarth = (ScrTerminalListTop_o *)v17->fields.spotEffectList;
  if ( !blankEarth )
    goto LABEL_61;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)blankEarth,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
  _9__2 = this->fields.__9__2;
  v19 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B70630(&this->fields.__9__2);
  }
  blankEarth = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 0LL);
  if ( !v19 )
    goto LABEL_61;
  UnityEngine_MonoBehaviour__StartCoroutine_36062060(v19, (System_Collections_IEnumerator_o *)blankEarth, 0LL);
}


bool __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return ListViewObject__get_Index((ListViewObject_o *)n, 0LL) == this->fields.index;
}


void __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__2(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *v2; // x19
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  __int64 v4; // x8

  v2 = this;
  if ( (byte_434ED32 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434ED32 = 1;
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
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = **(_QWORD **)&this[4].fields.spotId;
  if ( !v4 || (this = *(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o **)(v4 + 232)) == 0LL )
LABEL_17:
    sub_B7076C(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0LL);
}