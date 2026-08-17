void EquipGraphViewListViewMenu___ctor(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void EquipGraphViewListViewMenu__Callback(EquipGraphViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v9; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  result = 0;
  if ( !path )
    sub_2213CDC(this, 0);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.equipGraphAssetList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipGraphAssetList, 0, v5, v6, v7, v8, v9, v10);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_2213CDC(listViewManager, v3);
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
      sub_2213CDC(listViewManager, method);
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
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_596DC3D & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphViewListViewMenu_OnEndFigureView__);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DC3D = 1;
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
      sub_2213CDC(listViewManager, method);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnEndFigureView__, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v9, v10);
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

  if ( (byte_596DC3E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_596DC3E = 1;
  }
  if ( this->fields.state == 3 )
  {
    listViewManager = this->fields.listViewManager;
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_44285232(listViewManager, 1, v5, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_2213CDC(cancelButton, v7);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void EquipGraphViewListViewMenu__OnSearchLabelChange(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v11; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_2213CDC(0, method);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.equipGraphAssetList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5, v6, v7, v8, v9);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  EquipGraphViewListViewMenu__Open(this, callbackFunc, v11);
}


void EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  __int64 v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  void *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_49746676; // x0
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x22
  EquipGraphViewListViewMenu___c_c *v19; // x8
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x9
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v22; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x2
  EquipGraphViewListViewMenu___c_c *v31; // x8
  System_Collections_Generic_List_object__o *v32; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v33; // x9
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v35; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_TOutput__o *v45; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_object__o *v47; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_object__o *v49; // x22
  __int64 v50; // x2
  struct EquipGraphViewListViewMenu___c_StaticFields *v51; // x8
  System_Comparison_T__o *_9__12_2; // x23
  Il2CppObject *v53; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v63; // x2
  int32_t v64; // w0
  __int64 v65; // x24
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  Il2CppObject *v78; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_String_o **v85; // x21
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_Predicate_object__o *v92; // x23
  struct System_String_array *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  const MethodInfo *v100; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596DC3B & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&System_Comparison_string__TypeInfo);
    sub_2213A60(&System_Converter_string__string__TypeInfo);
    sub_2213A60(&System_Converter_int__string__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Intersect_string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ConvertAll_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Sort___91665632);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor___91665488);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&System_Predicate_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__);
    sub_2213A60(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__);
    sub_2213A60(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__);
    sub_2213A60(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__);
    sub_2213A60(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&EquipGraphViewListViewMenu___c_TypeInfo);
    sub_2213A60(&StringLiteral_165/*" : "*/);
    sub_2213A60(&StringLiteral_4555/*"CharaGraph"*/);
    byte_596DC3B = 1;
  }
  state = this->fields.state;
  entity = 0;
  if ( !state )
  {
    v6 = sub_2213CCC(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_49746676 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_49746676(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_49746676,
                 (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)Instance;
    v19 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !*(&EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo, v14, v17);
      v19 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__12_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !*(&v19->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v19, v14, v17);
        static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__12_0, v22, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0);
      v23 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v23->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__12_0, (int32_t)_9__12_0, v24, v25, v26, v27, v28, v29);
    }
    if ( !v18 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v18,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_36D759C *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v31 = EquipGraphViewListViewMenu___c_TypeInfo;
    v32 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !*(&EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo, v14, v30);
      v31 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v33 = v31->static_fields;
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v33->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !*(&v31->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v31, v14, v30);
        v33 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v33->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_string__string__TypeInfo);
      System_Converter_object__object____ctor(_9__12_1, v35, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0);
      v36 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v36->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->__9__12_1, (int32_t)_9__12_1, v37, v38, v39, v40, v41, v42);
    }
    if ( !v32 )
      goto LABEL_50;
    v45 = System_Collections_Generic_List_object___ConvertAll_object_(
            v32,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_36D77D0 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43, v44);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4555/*"CharaGraph"*/,
                                                                        0);
    v47 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v47,
      AssetStorageList,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_string___ctor___91665488);
    v48 = System_Linq_Enumerable__Intersect_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v47,
            (System_Collections_Generic_IEnumerable_TSource__o *)v45,
            (const MethodInfo_3883538 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v48,
                 (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v49 = (System_Collections_Generic_List_object__o *)Instance;
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
    if ( !*(&EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo, v14, v50);
      Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v51 = (struct EquipGraphViewListViewMenu___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__12_2 = (System_Comparison_T__o *)v51->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v14, v50);
        v51 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v53 = (Il2CppObject *)v51->__9;
      _9__12_2 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_string__TypeInfo);
      System_Comparison_object____ctor(_9__12_2, v53, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0);
      v54 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v54->__9__12_2 = (struct System_Comparison_string__o *)_9__12_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v54->__9__12_2, (int32_t)_9__12_2, v55, v56, v57, v58, v59, v60);
    }
    if ( !v49 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_71849708(
      v49,
      _9__12_2,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_string__Sort___91665632);
    if ( v49->fields._size >= 1 )
    {
      v61 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v49,
                 v61,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        v64 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v63);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v15,
               &entity,
               v64,
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v65 = sub_2213B20(string___TypeInfo, 2);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v49,
                       v61,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v65 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v65 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v65 + 32) = Instance;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 32), (int32_t)Instance, v66, v67, v68, v69, v70, v71);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0, 0, 0);
          if ( (*(_DWORD *)(v65 + 24) & 0xFFFFFFFE) == 0 )
LABEL_51:
            sub_2213CE4(Instance);
          *(_QWORD *)(v65 + 40) = Instance;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 40), (int32_t)Instance, v72, v73, v74, v75, v76, v77);
          v78 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_165/*" : "*/, (System_String_array *)v65, 0);
          System_Collections_Generic_List_object___set_Item(
            v49,
            v61,
            v78,
            (const MethodInfo_44839E8 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v61;
      }
      while ( v61 < v49->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0);
    if ( !v6 )
      goto LABEL_50;
    *(_QWORD *)(v6 + 16) = Instance;
    v85 = (System_String_o **)(v6 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)Instance, v79, v80, v81, v82, v83, v84);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v6 + 16), 0) )
    {
      *v85 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), 0, v86, v87, v88, v89, v90, v91);
    }
    if ( *v85 )
    {
      v92 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v92,
        (Il2CppObject *)v6,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0);
      System_Collections_Generic_List_object___RemoveAll(
        v49,
        (System_Predicate_T__o *)v92,
        (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v93 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v49,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v93;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.equipGraphAssetList,
      (int32_t)v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_2213CDC(Instance, v14);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      this->fields.equipGraphAssetList,
      *v85,
      v100);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_596DC3C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_596DC3C = 1;
  }
  v3 = System_Action_TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_44285232(listViewManager, 1, v5, v8),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_2213CDC(cancelButton, v7);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
}


void EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_596DC3A & 1) == 0 )
  {
    sub_2213A60(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__);
    byte_596DC3A = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_2213CCC(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EquipGraphViewListViewMenu_o *v13; // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DC38 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_596DC38 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  EquipGraphViewListViewMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EquipGraphViewListViewMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596DC39 & 1) == 0 )
  {
    sub_2213A60(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_596DC39 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  EquipGraphViewListViewMenu__StartMenu(v13, v14);
}


void EquipGraphViewListViewMenu_CallbackFunc___ctor(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2008284;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200823C;
}


System_IAsyncResult_o *EquipGraphViewListViewMenu_CallbackFunc__BeginInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DC3F & 1) == 0 )
  {
    sub_2213A60(&EquipGraphViewListViewMenu___c_TypeInfo);
    byte_596DC3F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields,
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x20
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596DC40 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_4556/*"CharaGraph/"*/);
    byte_596DC40 = 1;
  }
  v4 = sub_2213B20(string___TypeInfo, 2);
  if ( !v4 )
    sub_2213CDC(0, v5);
  v12 = v4;
  if ( !*(_DWORD *)(v4 + 24)
    || (v13 = StringLiteral_4556/*"CharaGraph/"*/,
        *(_QWORD *)(v4 + 32) = StringLiteral_4556/*"CharaGraph/"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11),
        (*(_DWORD *)(v12 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_2213CE4(v4);
  }
  *(_QWORD *)(v12 + 40) = x;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 40), (int32_t)x, v14, v15, v16, v17, v18, v19);
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, 0);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}