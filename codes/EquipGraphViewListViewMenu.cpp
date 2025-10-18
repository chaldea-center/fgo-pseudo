void EquipGraphViewListViewMenu___ctor(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void EquipGraphViewListViewMenu__Callback(EquipGraphViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v5; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
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
    sub_1C372B4(this);
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
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.equipGraphAssetList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C372B4(listViewManager);
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
      sub_1C372B4(listViewManager);
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

  if ( (byte_4C404DA & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_EquipGraphViewListViewMenu_OnEndFigureView__);
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C404DA = 1;
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
      sub_1C372B4(listViewManager);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_1C372A4(ScriptManager_CallbackFunc_TypeInfo);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C404DB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4C404DB = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_37389136(listViewManager, 1, v5, v7),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C372B4(cancelButton);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void EquipGraphViewListViewMenu__OnSearchLabelChange(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v7; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C372B4(0);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.equipGraphAssetList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  EquipGraphViewListViewMenu__Open(this, callbackFunc, v7);
}


void EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  void *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_42724892; // x0
  System_Collections_Generic_List_int__o *v11; // x22
  EquipGraphViewListViewMenu___c_c *v12; // x8
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v14; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  EquipGraphViewListViewMenu___c_c *v18; // x8
  System_Collections_Generic_List_object__o *v19; // x22
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v21; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_TOutput__o *v25; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_object__o *v27; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_object__o *v29; // x22
  System_Comparison_T__o *v30; // x23
  Il2CppObject *v31; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v37; // x2
  int32_t v38; // w0
  __int64 v39; // x24
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_String_o **v47; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Predicate_object__o *v50; // x23
  struct System_String_array *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C404D8 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&System_Comparison_string__TypeInfo);
    sub_1C37058(&System_Converter_string__string__TypeInfo);
    sub_1C37058(&System_Converter_int__string__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Intersect_string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ConvertAll_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Sort___78067704);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor___78067568);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&System_Predicate_string__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__);
    sub_1C37058(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__);
    sub_1C37058(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__);
    sub_1C37058(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__);
    sub_1C37058(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    sub_1C37058(&EquipGraphViewListViewMenu___c_TypeInfo);
    sub_1C37058(&StringLiteral_166/*" : "*/);
    sub_1C37058(&StringLiteral_4384/*"CharaGraph"*/);
    byte_4C404D8 = 1;
  }
  entity = 0;
  if ( !this->fields.state )
  {
    v5 = sub_1C372A4(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    this->fields.callbackFunc = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_42724892 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_42724892(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_42724892,
                 (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
    v11 = (System_Collections_Generic_List_int__o *)Instance;
    v12 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v12 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_0 = (System_Converter_TInput__TOutput__o *)v12->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_1C372A4(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__12_0, v14, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0);
      static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v16, v17);
    }
    if ( !v11 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v11,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_300F058 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v18 = EquipGraphViewListViewMenu___c_TypeInfo;
    v19 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v18 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v18->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_1C372A4(System_Converter_string__string__TypeInfo);
      System_Converter_object__object____ctor(_9__12_1, v21, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0);
      v22 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v22->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v22->__9__12_1, (int32_t)_9__12_1, v23, v24);
    }
    if ( !v19 )
      goto LABEL_50;
    v25 = System_Collections_Generic_List_object___ConvertAll_object_(
            v19,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_300F278 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4384/*"CharaGraph"*/,
                                                                        0);
    v27 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v27,
      AssetStorageList,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_string___ctor___78067568);
    v28 = System_Linq_Enumerable__Intersect_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v27,
            (System_Collections_Generic_IEnumerable_TSource__o *)v25,
            (const MethodInfo_311237C *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v28,
                 (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v29 = (System_Collections_Generic_List_object__o *)Instance;
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
    v30 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v30 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v30 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_string__TypeInfo);
      System_Comparison_object____ctor(v30, v31, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0);
      v32 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v32->__9__12_2 = (struct System_Comparison_string__o *)v30;
      sub_1C36FFC((CGThumbnailListItem_o *)&v32->__9__12_2, (int32_t)v30, v33, v34);
    }
    if ( !v29 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_58346216(
      v29,
      v30,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_string__Sort___78067704);
    if ( v29->fields._size >= 1 )
    {
      v35 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v29,
                 v35,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
        v38 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v37);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v9,
               &entity,
               v38,
               (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v39 = sub_1C37100(string___TypeInfo, 2);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v29,
                       v35,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v39 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v39 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v39 + 32) = Instance;
          sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 32), (int32_t)Instance, v40, v41);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0, 0);
          if ( *(_DWORD *)(v39 + 24) <= 1u )
LABEL_51:
            sub_1C372BC(Instance);
          *(_QWORD *)(v39 + 40) = Instance;
          sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 40), (int32_t)Instance, v42, v43);
          v44 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_166/*" : "*/, (System_String_array *)v39, 0);
          System_Collections_Generic_List_object___set_Item(
            v29,
            v35,
            v44,
            (const MethodInfo_37A2DA8 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v35;
      }
      while ( v35 < v29->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0);
    if ( !v5 )
      goto LABEL_50;
    *(_QWORD *)(v5 + 16) = Instance;
    v47 = (System_String_o **)(v5 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Instance, v45, v46);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0) )
    {
      *v47 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), 0, v48, v49);
    }
    if ( *v47 )
    {
      v50 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v50,
        (Il2CppObject *)v5,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0);
      System_Collections_Generic_List_object___RemoveAll(
        v29,
        (System_Predicate_T__o *)v50,
        (const MethodInfo_37A4680 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v51 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v29,
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v51;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipGraphAssetList, (int32_t)v51, v52, v53);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_1C372B4(Instance);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      this->fields.equipGraphAssetList,
      *v47,
      v54);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C404D9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4C404D9 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_37389136(listViewManager, 1, v4, v6),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_1C372B4(cancelButton);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
}


void EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4C404D7 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__);
    byte_4C404D7 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1C372A4(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
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

  if ( (byte_4C404D5 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4C404D5 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
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

  if ( (byte_4C404D6 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4C404D6 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  EquipGraphViewListViewMenu__StartMenu(v11, v12);
}


void EquipGraphViewListViewMenu_CallbackFunc___ctor(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A78850;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A78808;
}


System_IAsyncResult_o *EquipGraphViewListViewMenu_CallbackFunc__BeginInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C404DC & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C404DC = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C404DD & 1) == 0 )
  {
    sub_1C37058(&EquipGraphViewListViewMenu___c_TypeInfo);
    byte_4C404DD = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C404DE & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C404DE = 1;
  }
  v4 = sub_1C37100(string___TypeInfo, 2);
  if ( !v4 )
    sub_1C372B4(0);
  v7 = v4;
  if ( !*(_DWORD *)(v4 + 24)
    || (v8 = StringLiteral_4385/*"CharaGraph/"*/,
        *(_QWORD *)(v4 + 32) = StringLiteral_4385/*"CharaGraph/"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), v8, v5, v6),
        *(_DWORD *)(v7 + 24) <= 1u) )
  {
    sub_1C372BC(v4);
  }
  *(_QWORD *)(v7 + 40) = x;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)x, v9, v10);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v7, 0);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}