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
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1C2D6EC(this, 0);
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
  const MethodInfo *v6; // x3

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.equipGraphAssetList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGraphAssetList, 0, v5, v6);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C2D6EC(listViewManager, v3);
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
      sub_1C2D6EC(listViewManager, method);
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

  if ( (byte_4C2481B & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu_OnEndFigureView__);
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2481B = 1;
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
      sub_1C2D6EC(listViewManager, method);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4C2481C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4C2481C = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_37175016(listViewManager, 1, v5, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_1C2D6EC(cancelButton, v7);
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
    sub_1C2D6EC(0, method);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.equipGraphAssetList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5);
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
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_42491100; // x0
  System_Collections_Generic_List_int__o *v12; // x22
  EquipGraphViewListViewMenu___c_c *v13; // x8
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v15; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  EquipGraphViewListViewMenu___c_c *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x22
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v22; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_TOutput__o *v26; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_object__o *v28; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x22
  System_Comparison_T__o *v31; // x23
  Il2CppObject *v32; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v38; // x2
  int32_t v39; // w0
  __int64 v40; // x24
  __int64 v41; // x2
  const MethodInfo *v42; // x3
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

  if ( (byte_4C24819 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&System_Comparison_string__TypeInfo);
    sub_1C2D490(&System_Converter_string__string__TypeInfo);
    sub_1C2D490(&System_Converter_int__string__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ConvertAll_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Sort___77956664);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor___77956528);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&System_Predicate_string__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__);
    sub_1C2D490(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    sub_1C2D490(&EquipGraphViewListViewMenu___c_TypeInfo);
    sub_1C2D490(&StringLiteral_166/*" : "*/);
    sub_1C2D490(&StringLiteral_4377/*"CharaGraph"*/);
    byte_4C24819 = 1;
  }
  entity = 0;
  if ( !this->fields.state )
  {
    v5 = sub_1C2D6DC(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    this->fields.callbackFunc = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_42491100 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_42491100(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_42491100,
                 (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
    v12 = (System_Collections_Generic_List_int__o *)Instance;
    v13 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v13 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_0 = (System_Converter_TInput__TOutput__o *)v13->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__12_0, v15, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0);
      static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v17, v18);
    }
    if ( !v12 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v12,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_2FF5D50 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v19 = EquipGraphViewListViewMenu___c_TypeInfo;
    v20 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v19 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v19->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_string__string__TypeInfo);
      System_Converter_object__object____ctor(_9__12_1, v22, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0);
      v23 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v23->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v23->__9__12_1, (int32_t)_9__12_1, v24, v25);
    }
    if ( !v20 )
      goto LABEL_50;
    v26 = System_Collections_Generic_List_object___ConvertAll_object_(
            v20,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_2FF5F70 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4377/*"CharaGraph"*/,
                                                                        0);
    v28 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233976(
      v28,
      AssetStorageList,
      (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_string___ctor___77956528);
    v29 = System_Linq_Enumerable__Intersect_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v28,
            (System_Collections_Generic_IEnumerable_TSource__o *)v26,
            (const MethodInfo_30F9074 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v29,
                 (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v30 = (System_Collections_Generic_List_object__o *)Instance;
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
    v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v31 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v31 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_string__TypeInfo);
      System_Comparison_object____ctor(v31, v32, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0);
      v33 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v33->__9__12_2 = (struct System_Comparison_string__o *)v31;
      sub_1C2D434((CGThumbnailListItem_o *)&v33->__9__12_2, (int32_t)v31, v34, v35);
    }
    if ( !v30 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_58242632(
      v30,
      v31,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_string__Sort___77956664);
    if ( v30->fields._size >= 1 )
    {
      v36 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v30,
                 v36,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
        v39 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v38);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v10,
               &entity,
               v39,
               (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v40 = sub_1C2D538(string___TypeInfo, 2);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v30,
                       v36,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v40 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v40 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v40 + 32) = Instance;
          sub_1C2D434((CGThumbnailListItem_o *)(v40 + 32), (int32_t)Instance, v41, v42);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0, 0);
          if ( *(_DWORD *)(v40 + 24) <= 1u )
LABEL_51:
            sub_1C2D6F4(Instance, v9, v41);
          *(_QWORD *)(v40 + 40) = Instance;
          sub_1C2D434((CGThumbnailListItem_o *)(v40 + 40), (int32_t)Instance, v41, v43);
          v44 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_166/*" : "*/, (System_String_array *)v40, 0);
          System_Collections_Generic_List_object___set_Item(
            v30,
            v36,
            v44,
            (const MethodInfo_3789908 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v36;
      }
      while ( v36 < v30->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0);
    if ( !v5 )
      goto LABEL_50;
    *(_QWORD *)(v5 + 16) = Instance;
    v47 = (System_String_o **)(v5 + 16);
    sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Instance, v45, v46);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0) )
    {
      *v47 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), 0, v48, v49);
    }
    if ( *v47 )
    {
      v50 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v50,
        (Il2CppObject *)v5,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0);
      System_Collections_Generic_List_object___RemoveAll(
        v30,
        (System_Predicate_T__o *)v50,
        (const MethodInfo_378B1E0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v51 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v30,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v51;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGraphAssetList, (int32_t)v51, v52, v53);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_1C2D6EC(Instance, v9);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4C2481A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4C2481A = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_37175016(listViewManager, 1, v4, v7),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_1C2D6EC(cancelButton, v6);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
}


void EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4C24818 & 1) == 0 )
  {
    sub_1C2D490(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__);
    byte_4C24818 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1C2D6DC(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
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

  if ( (byte_4C24816 & 1) == 0 )
  {
    sub_1C2D490(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4C24816 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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

  if ( (byte_4C24817 & 1) == 0 )
  {
    sub_1C2D490(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4C24817 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6EDF8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6EDB0;
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
  if ( (byte_4C2481D & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2481D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  if ( (byte_4C2481E & 1) == 0 )
  {
    sub_1C2D490(&EquipGraphViewListViewMenu___c_TypeInfo);
    byte_4C2481E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  int32_t v9; // w1
  const MethodInfo *v10; // x3

  if ( (byte_4C2481F & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_4378/*"CharaGraph/"*/);
    byte_4C2481F = 1;
  }
  v4 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v4 )
    sub_1C2D6EC(0, v5);
  v8 = v4;
  if ( !*(_DWORD *)(v4 + 24)
    || (v9 = StringLiteral_4378/*"CharaGraph/"*/,
        *(_QWORD *)(v4 + 32) = StringLiteral_4378/*"CharaGraph/"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), v9, v6, v7),
        *(_DWORD *)(v8 + 24) <= 1u) )
  {
    sub_1C2D6F4(v4, v5, v6);
  }
  *(_QWORD *)(v8 + 40) = x;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 40), (int32_t)x, v6, v10);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v8, 0);
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
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, 0);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}