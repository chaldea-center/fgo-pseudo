void EquipGraphViewListViewMenu___ctor(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void EquipGraphViewListViewMenu__Callback(EquipGraphViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v9; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


int32_t EquipGraphViewListViewMenu__CardId(
        EquipGraphViewListViewMenu_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t IndexOf; // w0
  int32_t v5; // w19
  System_String_o *v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( !path )
    sub_1C93D2C(this, 0);
  IndexOf = System_String__LastIndexOf(path, 0x2Fu, 0);
  v5 = -10;
  result = -10;
  if ( (IndexOf & 0x80000000) == 0 )
  {
    v6 = System_String__Substring(path, IndexOf + 1, 0);
    if ( System_Int32__TryParse(v6, &result, 0) )
      return result;
    else
      return -10;
  }
  return v5;
}


void EquipGraphViewListViewMenu__Close(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.equipGraphAssetList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipGraphAssetList, 0, v5, v6, v7, v8, v9, v10);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C93D2C(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void EquipGraphViewListViewMenu__EndInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C93D2C(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0);
  }
}


void EquipGraphViewListViewMenu__OnClickCancel(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    EquipGraphViewListViewMenu__EndInput(this, method);
    this->fields.state = 4;
    EquipGraphViewListViewMenu__Callback(this, 0, v3);
  }
}


void EquipGraphViewListViewMenu__OnClickItem(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FigureViewListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  System_String_o *dragParentObject; // x20
  System_String_array *equipGraphAssetList; // x21
  ScriptManager_CallbackFunc_o *v8; // x22

  if ( (byte_4D2DED8 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu_OnEndFigureView__);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    byte_4D2DED8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    callbackIndex = listViewManager->fields.callbackIndex;
    if ( callbackIndex < 0 )
      return;
    listViewManager = (FigureViewListViewManager_o *)FigureViewListViewManager__GetItem(
                                                       listViewManager,
                                                       callbackIndex,
                                                       v2);
    this->fields.state = 3;
    if ( !listViewManager )
LABEL_11:
      sub_1C93D2C(listViewManager, method);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_1C93D20(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnEndFigureView__, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__EquipGraphViewPlay(dragParentObject, equipGraphAssetList, v8, 0);
  }
}


void EquipGraphViewListViewMenu__OnEndFigureView(
        EquipGraphViewListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D2DED9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4D2DED9 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_38075100(listViewManager, 1, v5, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C93D2C(cancelButton, v7);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void EquipGraphViewListViewMenu__OnSearchLabelChange(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v11; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C93D2C(0, method);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.equipGraphAssetList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5, v6, v7, v8, v9);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  EquipGraphViewListViewMenu__Open(this, callbackFunc, v11);
}


void EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  void *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_43436508; // x0
  System_Collections_Generic_List_int__o *v16; // x22
  EquipGraphViewListViewMenu___c_c *v17; // x8
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v19; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  EquipGraphViewListViewMenu___c_c *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x22
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v30; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_TOutput__o *v38; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_object__o *v40; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_List_object__o *v42; // x22
  System_Comparison_T__o *v43; // x23
  Il2CppObject *v44; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v54; // x2
  int32_t v55; // w0
  __int64 v56; // x24
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_String_o **v76; // x21
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  System_Predicate_object__o *v83; // x23
  struct System_String_array *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  const MethodInfo *v91; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2DED6 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&System_Comparison_string__TypeInfo);
    sub_1C93AD4(&System_Converter_string__string__TypeInfo);
    sub_1C93AD4(&System_Converter_int__string__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Intersect_string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ConvertAll_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Sort___79020312);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor___79020168);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&System_Predicate_string__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__);
    sub_1C93AD4(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    sub_1C93AD4(&EquipGraphViewListViewMenu___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_166/*" : "*/);
    sub_1C93AD4(&StringLiteral_4404/*"CharaGraph"*/);
    byte_4D2DED6 = 1;
  }
  entity = 0;
  if ( !this->fields.state )
  {
    v5 = sub_1C93D20(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    this->fields.callbackFunc = callback;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7, v8, v9, v10, v11);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_43436508 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_43436508(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_43436508,
                 (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
    v16 = (System_Collections_Generic_List_int__o *)Instance;
    v17 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v17 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_0 = (System_Converter_TInput__TOutput__o *)v17->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_1C93D20(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__12_0, v19, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0);
      static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
        (int32_t)_9__12_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( !v16 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v16,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_30C8378 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v27 = EquipGraphViewListViewMenu___c_TypeInfo;
    v28 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v27 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v27->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_1C93D20(System_Converter_string__string__TypeInfo);
      System_Converter_object__object____ctor(_9__12_1, v30, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0);
      v31 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v31->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v31->__9__12_1, (int32_t)_9__12_1, v32, v33, v34, v35, v36, v37);
    }
    if ( !v28 )
      goto LABEL_50;
    v38 = System_Collections_Generic_List_object___ConvertAll_object_(
            v28,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_30C8598 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4404/*"CharaGraph"*/,
                                                                        0);
    v40 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_59216528(
      v40,
      AssetStorageList,
      (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_string___ctor___79020168);
    v41 = System_Linq_Enumerable__Intersect_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (System_Collections_Generic_IEnumerable_TSource__o *)v38,
            (const MethodInfo_31CE398 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v41,
                 (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v42 = (System_Collections_Generic_List_object__o *)Instance;
    UnityEngine_GameObject__SetActive(this->fields.rootObject, 1, 0);
    Instance = this->fields.listViewManager;
    if ( !Instance )
      goto LABEL_50;
    ListViewManager__set_IsInput((ListViewManager_o *)Instance, 0, 0);
    Instance = this->fields.cancelButton;
    if ( !Instance )
      goto LABEL_50;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
    Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v43 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v43 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v44 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v43 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_string__TypeInfo);
      System_Comparison_object____ctor(v43, v44, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0);
      v45 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v45->__9__12_2 = (struct System_Comparison_string__o *)v43;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v45->__9__12_2, (int32_t)v43, v46, v47, v48, v49, v50, v51);
    }
    if ( !v42 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_59225184(
      v42,
      v43,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_string__Sort___79020312);
    if ( v42->fields._size >= 1 )
    {
      v52 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v42,
                 v52,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
        v55 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v54);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v14,
               &entity,
               v55,
               (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v56 = sub_1C93B7C(string___TypeInfo, 2);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v42,
                       v52,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v56 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v56 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v56 + 32) = Instance;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v56 + 32), (int32_t)Instance, v57, v58, v59, v60, v61, v62);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0, 0);
          if ( *(_DWORD *)(v56 + 24) <= 1u )
LABEL_51:
            sub_1C93D34(Instance);
          *(_QWORD *)(v56 + 40) = Instance;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v56 + 40), (int32_t)Instance, v63, v64, v65, v66, v67, v68);
          v69 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_166/*" : "*/, (System_String_array *)v56, 0);
          System_Collections_Generic_List_object___set_Item(
            v42,
            v52,
            v69,
            (const MethodInfo_3879720 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v52;
      }
      while ( v52 < v42->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0);
    if ( !v5 )
      goto LABEL_50;
    *(_QWORD *)(v5 + 16) = Instance;
    v76 = (System_String_o **)(v5 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Instance, v70, v71, v72, v73, v74, v75);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0) )
    {
      *v76 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), 0, v77, v78, v79, v80, v81, v82);
    }
    if ( *v76 )
    {
      v83 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v83,
        (Il2CppObject *)v5,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0);
      System_Collections_Generic_List_object___RemoveAll(
        v42,
        (System_Predicate_T__o *)v83,
        (const MethodInfo_387AFF8 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v84 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v42,
                                          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v84;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.equipGraphAssetList,
      (int32_t)v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_1C93D2C(Instance, v13);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      this->fields.equipGraphAssetList,
      *v76,
      v91);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2DED7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4D2DED7 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_38075100(listViewManager, 1, v4, v7),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_1C93D2C(cancelButton, v6);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
}


void EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4D2DED5 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__);
    byte_4D2DED5 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1C93D20(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    v4);
  EquipGraphViewListViewMenu__Open(this, v3, v5);
}


void EquipGraphViewListViewMenu__add_callbackFunc(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphViewListViewMenu_o *v11; // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2DED3 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4D2DED3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v8->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  EquipGraphViewListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void EquipGraphViewListViewMenu__remove_callbackFunc(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphViewListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2DED4 & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4D2DED4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v8->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  EquipGraphViewListViewMenu__StartMenu(v11, v12);
}


void EquipGraphViewListViewMenu_CallbackFunc___ctor(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC5988;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC5940;
}


System_IAsyncResult_o *EquipGraphViewListViewMenu_CallbackFunc__BeginInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D2DEDA & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2DEDA = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void EquipGraphViewListViewMenu_CallbackFunc__Invoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void EquipGraphViewListViewMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2DEDB & 1) == 0 )
  {
    sub_1C93AD4(&EquipGraphViewListViewMenu___c_TypeInfo);
    byte_4D2DEDB = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EquipGraphViewListViewMenu___c___ctor(EquipGraphViewListViewMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *EquipGraphViewListViewMenu___c___Open_b__12_0(
        EquipGraphViewListViewMenu___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *EquipGraphViewListViewMenu___c___Open_b__12_1(
        EquipGraphViewListViewMenu___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x20
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2DEDC & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_4405/*"CharaGraph/"*/);
    byte_4D2DEDC = 1;
  }
  v4 = sub_1C93B7C(string___TypeInfo, 2);
  if ( !v4 )
    sub_1C93D2C(0, v5);
  v12 = v4;
  if ( !*(_DWORD *)(v4 + 24)
    || (v13 = StringLiteral_4405/*"CharaGraph/"*/,
        *(_QWORD *)(v4 + 32) = StringLiteral_4405/*"CharaGraph/"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11),
        *(_DWORD *)(v12 + 24) <= 1u) )
  {
    sub_1C93D34(v4);
  }
  *(_QWORD *)(v12 + 40) = x;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 40), (int32_t)x, v14, v15, v16, v17, v18, v19);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v12, 0);
}


int32_t EquipGraphViewListViewMenu___c___Open_b__12_2(
        EquipGraphViewListViewMenu___c_o *this,
        System_String_o *a,
        System_String_o *b,
        const MethodInfo *method)
{
  int32_t stringLength; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C93D2C(this, a);
  stringLength = a->fields._stringLength;
  v5 = b->fields._stringLength;
  result = stringLength - v5;
  if ( stringLength == v5 )
    return System_String__Compare(a, b, 0);
  return result;
}


void EquipGraphViewListViewMenu___c__DisplayClass12_0___ctor(
        EquipGraphViewListViewMenu___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EquipGraphViewListViewMenu___c__DisplayClass12_0___Open_b__3(
        EquipGraphViewListViewMenu___c__DisplayClass12_0_o *this,
        System_String_o *X,
        const MethodInfo *method)
{
  if ( !X )
    sub_1C93D2C(this, 0);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}