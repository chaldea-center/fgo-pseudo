void __fastcall BlankEarthShortcutButtonListViewManager___ctor(
        BlankEarthShortcutButtonListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187D6C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4187D6C = 1;
  }
  this->fields.spotMoveEasingType = 15;
  *(_QWORD *)&this->fields.spotMoveTime = 0x3D23D70A3FC00000LL;
  this->fields.moveDistanceMultipleValue = 0.18;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.spotEffectList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.spotEffectList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  const MethodInfo *v27; // x1
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  BlankEarthSpotNavimenuEntity_array *EnableShortcutButtons; // x22
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v31; // x26
  const MethodInfo_24E412C **v32; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x23
  int32_t v34; // w24
  __int64 v35; // x25
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BlankEarthSpotNavimenuEntity_o *v42; // x20
  const MethodInfo_24E412C **v43; // x19
  BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_c **v44; // x21
  BlankEarthShortcutButtonListViewManager_o *v45; // x27
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x26
  System_String_o *name; // x28
  System_Action_o *v48; // x20
  BlankEarthShortcutButtonListViewItem_o *v49; // x25
  __int64 v50; // x0
  srcLineSprite_o *Component_srcLineSprite; // [xsp+10h] [xbp-60h]
  int32_t iconId; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4187D63 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, blankEarth);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v6);
    sub_B2C35C(&AssetManager_TypeInfo, v7);
    sub_B2C35C(&BlankEarthShortcutButtonListViewItem_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__, v16);
    sub_B2C35C(&BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_8944/*"MapShortcut/DownloadMapShortcut"*/, v18);
    sub_B2C35C(&StringLiteral_5385/*"DownloadMapShortcutAtlas"*/, v19);
    byte_4187D63 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.blankEarth = blankEarth;
  sub_B2C2F8(
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
  scrollBar = (UnityEngine_Component_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_8944/*"MapShortcut/DownloadMapShortcut"*/, 0LL);
  if ( !scrollBar )
    goto LABEL_32;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             (AssetData_o *)scrollBar,
                                                             (System_String_o *)StringLiteral_5385/*"DownloadMapShortcutAtlas"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotNavimenuMaster___);
  if ( !scrollBar
    || (EnableShortcutButtons = BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
                                  (BlankEarthSpotNavimenuMaster_o *)scrollBar,
                                  v27),
        scrollBar = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___),
        !EnableShortcutButtons) )
  {
LABEL_32:
    sub_B2C434(scrollBar, v27);
  }
  if ( (int)EnableShortcutButtons->max_length >= 1 )
  {
    v31 = &BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_TypeInfo;
    v32 = (const MethodInfo_24E412C **)&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__;
    v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)scrollBar;
    v34 = 0;
    do
    {
      v35 = sub_B2C42C(*v31);
      BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0___ctor(
        (BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0_o *)v35,
        0LL);
      if ( !v35 )
        goto LABEL_32;
      *(_QWORD *)(v35 + 32) = this;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 32), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
      if ( v34 >= EnableShortcutButtons->max_length )
      {
        v50 = sub_B2C460(scrollBar);
        sub_B2C400(v50, 0LL);
      }
      v42 = EnableShortcutButtons->m_Items[v34];
      *(_DWORD *)(v35 + 16) = v34;
      if ( !v42 || !v33 )
        goto LABEL_32;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v33,
             (WarEntity_o **)(v35 + 24),
             v42->fields.blankEarthSpotId,
             *v32) )
      {
        v43 = v32;
        v44 = v31;
        v45 = this;
        iconId = v42->fields.iconId;
        itemList = this->fields.itemList;
        name = v42->fields.name;
        v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v48,
          (Il2CppObject *)v35,
          Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass13_0__CreateList_b__0__,
          0LL);
        v49 = (BlankEarthShortcutButtonListViewItem_o *)sub_B2C42C(BlankEarthShortcutButtonListViewItem_TypeInfo);
        BlankEarthShortcutButtonListViewItem___ctor(
          v49,
          v34,
          iconId,
          name,
          commonUIAtlas,
          (UIAtlas_o *)Component_srcLineSprite,
          v48,
          0LL);
        if ( !itemList )
          goto LABEL_32;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        v31 = v44;
        v32 = v43;
        this = v45;
      }
    }
    while ( ++v34 < (signed int)EnableShortcutButtons->max_length );
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
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187D66 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4187D66 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  spotEffectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.spotEffectList;
  if ( spotEffectList && spotEffectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      spotEffectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v13.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v12 = this->fields.spotEffectList;
    if ( !v12 )
      sub_B2C434(0LL, v11);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  System_Collections_Generic_IEnumerable_T__o *ObjectList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x20
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x19
  System_String_o *string; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x1
  BlankEarth_o *blankEarth; // x20
  System_Action_o *v26; // x21
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4187D67 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__, v3);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___67301376, v10);
    sub_B2C35C(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4187D67 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) <= 0 )
  {
    blankEarth = this->fields.blankEarth;
    v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_0__,
      0LL);
    if ( blankEarth )
    {
      BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v26, 0LL);
      return;
    }
LABEL_20:
    sub_B2C434(v17, v18);
  }
  ObjectList = (System_Collections_Generic_IEnumerable_T__o *)BlankEarthShortcutButtonListViewManager__get_ObjectList(
                                                                this,
                                                                v13);
  v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v15,
    ObjectList,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor___67301376);
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_1__,
    0LL);
  if ( !v15 )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
  {
    current = v27.fields.current;
    string = System_Linq_Enumerable__Last_string_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
               (const MethodInfo_1A91D08 *)Method_System_Linq_Enumerable_Last_BlankEarthShortcutButtonListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, (UnityEngine_Object_o *)string, 0LL);
    if ( !current )
      sub_B2C434(v21, v22);
    if ( v21 )
      v24 = v16;
    else
      v24 = 0LL;
    BlankEarthShortcutButtonListViewObject__SetEntryAnim((BlankEarthShortcutButtonListViewObject_o *)current, v24, v23);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187D68 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_4187D68 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v6);
    if ( !ObjectList )
      sub_B2C434(0LL, v8);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v10.fields.current )
        sub_B2C434(0LL, v9);
      BlankEarthShortcutButtonListViewObject__FrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v10.fields.current,
        v9);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t id; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  UISprite_c *klass; // x8
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x22
  float moveDefaultTime; // s8
  float moveDistanceMultipleValue; // s9
  BlankEarth_RotateEarthTimeCalculateParam_o *v37; // x23
  const MethodInfo *v38; // x1
  System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *ObjectList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x22
  BlankEarthShortcutButtonListViewObject_o *v41; // x21
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  TerminalPramsManager_c *v44; // x0

  if ( (byte_4187D64 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__, *(_QWORD *)&index);
    sub_B2C35C(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v7);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager_OnClickButton__, v8);
    sub_B2C35C(&BlankEarthShortcutButtonListViewObject_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__, v10);
    sub_B2C35C(&Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__, v11);
    sub_B2C35C(&System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo, v12);
    sub_B2C35C(&BlankEarth_RotateEarthTimeCalculateParam_TypeInfo, v13);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v15);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__, v16);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__, v17);
    sub_B2C35C(&BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo, v18);
    byte_4187D64 = 1;
  }
  v19 = sub_B2C42C(BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_TypeInfo);
  BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___ctor(
    (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_39;
  *(_QWORD *)(v19 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
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
      v29 = (_QWORD *)sub_B2C364(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
    v30 = (System_Reflection_MethodBase_o *)sub_B2C340(v29, v29[3]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0LL);
    return;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v21);
    byte_4183C65 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.replaceEventRewardBtnLogo->klass;
  if ( !klass )
    goto LABEL_39;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_39;
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0LL);
  v32 = Method_BlankEarthShortcutButtonListViewManager_OnClickButton__;
  if ( (*((_BYTE *)Method_BlankEarthShortcutButtonListViewManager_OnClickButton__ + 75) & 2) != 0 )
    v32 = (_QWORD *)sub_B2C364(Method_BlankEarthShortcutButtonListViewManager_OnClickButton__);
  v33 = (System_Reflection_MethodBase_o *)sub_B2C340(v32, v32[3]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
  v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v34,
    (Il2CppObject *)v19,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
  genericContainerHandle = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !genericContainerHandle )
    goto LABEL_39;
  BlankEarth__SaveSpotRotation((BlankEarth_o *)genericContainerHandle, bSpotEnt, 0LL);
  moveDefaultTime = this->fields.moveDefaultTime;
  moveDistanceMultipleValue = this->fields.moveDistanceMultipleValue;
  v37 = (BlankEarth_RotateEarthTimeCalculateParam_o *)sub_B2C42C(BlankEarth_RotateEarthTimeCalculateParam_TypeInfo);
  BlankEarth_RotateEarthTimeCalculateParam___ctor(v37, moveDefaultTime, moveDistanceMultipleValue, 0LL);
  genericContainerHandle = (TitleInfoControl_o *)this->fields.blankEarth;
  if ( !genericContainerHandle )
    goto LABEL_39;
  BlankEarth__RotateEarthTowardsSpot(
    (BlankEarth_o *)genericContainerHandle,
    bSpotEnt,
    this->fields.spotMoveTime,
    this->fields.spotMoveEasingType,
    1,
    (System_Action_BlankEarth_QAARotateEarthResponse__o *)v34,
    v37,
    0LL);
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v38);
  v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v40,
    (Il2CppObject *)v19,
    Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__1__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_BlankEarthShortcutButtonListViewObject___ctor__);
  if ( !ObjectList )
    goto LABEL_39;
  genericContainerHandle = (TitleInfoControl_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ObjectList,
                                                   (System_Predicate_T__o *)v40,
                                                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Find__);
  v41 = (BlankEarthShortcutButtonListViewObject_o *)genericContainerHandle;
  if ( !genericContainerHandle )
  {
    v41 = (BlankEarthShortcutButtonListViewObject_o *)sub_B2C42C(BlankEarthShortcutButtonListViewObject_TypeInfo);
    BlankEarthShortcutButtonListViewObject___ctor(v41, v42);
  }
  if ( !v41 || (genericContainerHandle = (TitleInfoControl_o *)v41->fields.itemDraw) == 0LL )
LABEL_39:
    sub_B2C434(genericContainerHandle, v21);
  BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
    (BlankEarthShortcutButtonListViewItemDraw_o *)genericContainerHandle,
    0,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184F5E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v43);
    byte_4184F5E = 1;
  }
  v44 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  v44->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = 1;
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
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187D69 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_4187D69 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL) >= 1 )
  {
    ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, v6);
    if ( !ObjectList )
      sub_B2C434(0LL, v8);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__) )
    {
      if ( !v10.fields.current )
        sub_B2C434(0LL, v9);
      BlankEarthShortcutButtonListViewObject__QuickFrameOut(
        (BlankEarthShortcutButtonListViewObject_o *)v10.fields.current,
        v9);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
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
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187D6A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__, v5);
    byte_4187D6A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  this->fields.goalSpotId = 0;
  ObjectList = BlankEarthShortcutButtonListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_B2C434(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B2C434(v8, v9);
    klass = v11.fields.current[10].klass;
    if ( !klass )
      sub_B2C434(0LL, v9);
    BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
      (BlankEarthShortcutButtonListViewItemDraw_o *)klass,
      1,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BlankEarthShortcutButtonListViewObject__Dispose__);
}


void __fastcall BlankEarthShortcutButtonListViewManager__SetObjectItem(
        BlankEarthShortcutButtonListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_4187D65 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager_o *)sub_B2C35C(
                                                          &BlankEarthShortcutButtonListViewObject_TypeInfo,
                                                          obj);
    byte_4187D65 = 1;
  }
  if ( !obj
    || (v5 = *(&BlankEarthShortcutButtonListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (BlankEarthShortcutButtonListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != BlankEarthShortcutButtonListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187D6B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, isEnable);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187D6B = 1;
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
      UnityEngine_Object__DestroyImmediate_35315108(klass, 0LL);
      p_blockMask->klass = 0LL;
      sub_B2C2F8(p_blockMask, 0LL, v9, v10, v11, v12, v13, v14);
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
                                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        this->fields.blockMask = v17;
        sub_B2C2F8(
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
        v26 = this->fields.blockMask;
        if ( !v26 )
          sub_B2C434(0LL, v25);
        UnityEngine_GameObject__SetActive(v26, 1, 0LL);
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
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4187D6D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, v3);
    byte_4187D6D = 1;
  }
  BlankEarthShortcutButtonListViewManager__SetAllButtonsClickable(this, method);
  blankEarth = this->fields.blankEarth;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BlankEarthShortcutButtonListViewManager__FrameIn_b__18_2__, 0LL);
  if ( !blankEarth )
    sub_B2C434(v6, v7);
  BlankEarth__ExecuteAfterStartUpScaling(blankEarth, v5, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187D62 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187D62 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BlankEarthShortcutButtonListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BlankEarthShortcutButtonListViewObject__o *)v11;
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
    sub_B2C434(0LL, method);
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
  struct BlankEarthShortcutButtonListViewManager_o *_4__this; // x8
  UnityEngine_Object_o *v17; // x20
  struct BlankEarth_o *blankEarth; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *shortcutSpotEffect; // x20
  struct BlankEarthShortcutButtonListViewManager_o *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_Component_o *EarthPoint; // x0
  struct BlankEarthShortcutButtonListViewManager_o *v23; // x8
  System_Action_o *_9__2; // x22
  UnityEngine_MonoBehaviour_o *v25; // x20
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4184E8F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, response);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__RemoveAt__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v12);
    sub_B2C35C(&Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__, v13);
    byte_4184E8F = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, response);
    byte_4183C65 = 1;
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
  if ( !byte_4184F5E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, response);
    byte_4184F5E = 1;
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
    v17 = *(UnityEngine_Object_o **)(*(_QWORD *)&spotEffectList->fields.m_CachedPtr + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)spotEffectList,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v17, 0LL);
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
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_44;
  v21 = (UnityEngine_GameObject_o *)spotEffectList;
  spotEffectList = (ScrTerminalListTop_o *)v20->fields.blankEarth;
  if ( !spotEffectList )
    goto LABEL_44;
  EarthPoint = (UnityEngine_Component_o *)BlankEarth__GetEarthPoint(
                                            (BlankEarth_o *)spotEffectList,
                                            this->fields.spotId,
                                            0LL);
  GameObjectExtensions__SetParent(v21, EarthPoint, 0LL);
  GameObjectExtensions__ResetTransform(v21, 0LL);
  if ( !v21 )
    goto LABEL_44;
  spotEffectList = (ScrTerminalListTop_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  if ( !spotEffectList )
    goto LABEL_44;
  v26.fields.x = -90.0;
  v26.fields.y = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__Rotate_35436904((UnityEngine_Transform_o *)spotEffectList, v26, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_44;
  spotEffectList = (ScrTerminalListTop_o *)v23->fields.spotEffectList;
  if ( !spotEffectList )
    goto LABEL_44;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotEffectList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  _9__2 = this->fields.__9__2;
  v25 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0__OnClickButton_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  spotEffectList = (ScrTerminalListTop_o *)BasicHelper__DelayCall(0.01, _9__2, 0LL);
  if ( !v25 )
LABEL_44:
    sub_B2C434(spotEffectList, response);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748(v25, (System_Collections_IEnumerator_o *)spotEffectList, 0LL);
}


bool __fastcall BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0___OnClickButton_b__1(
        BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *this,
        BlankEarthShortcutButtonListViewObject_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
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
  if ( (byte_4184E90 & 1) == 0 )
  {
    this = (BlankEarthShortcutButtonListViewManager___c__DisplayClass14_0_o *)sub_B2C35C(
                                                                                &TerminalSceneComponent_TypeInfo,
                                                                                method);
    byte_4184E90 = 1;
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(this, method);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0LL);
}