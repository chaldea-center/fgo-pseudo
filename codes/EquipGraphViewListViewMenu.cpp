void __fastcall EquipGraphViewListViewMenu___ctor(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
}


void __fastcall EquipGraphViewListViewMenu__Callback(
        EquipGraphViewListViewMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v8; // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v9; // x19
  EquipGraphViewListViewMenu_c *klass; // t1

  klass = this[1].klass;
  v8 = (BattleServantConfConponent_o *)&this[1];
  v9 = (EquipGraphViewListViewMenu_CallbackFunc_o *)klass;
  if ( klass )
  {
    v8->klass = 0LL;
    sub_B70630(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EquipGraphViewListViewMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


int32_t __fastcall EquipGraphViewListViewMenu__CardId(
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
    sub_B7076C(this, 0LL);
  IndexOf = System_String__LastIndexOf(path, 0x2Fu, 0LL);
  v5 = -10;
  result = -10;
  if ( (IndexOf & 0x80000000) == 0 )
  {
    v6 = System_String__Substring(path, IndexOf + 1, 0LL);
    if ( System_Int32__TryParse(v6, &result, 0LL) )
      return result;
    else
      return -10;
  }
  return v5;
}


void __fastcall EquipGraphViewListViewMenu__Close(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIButton_o *cancelButton; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( LODWORD(this->fields.equipGraphAssetList) )
  {
    cancelButton = *(struct UIButton_o **)&this->fields.state;
    if ( !cancelButton )
      goto LABEL_6;
    FigureViewListViewManager__DestroyList((FigureViewListViewManager_o *)cancelButton, 0LL);
    this->fields.callbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    LODWORD(this->fields.equipGraphAssetList) = 0;
  }
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
LABEL_6:
    sub_B7076C(cancelButton, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelButton, 0, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__EndInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *searchInput; // x0

  if ( LODWORD(this->fields.equipGraphAssetList) )
  {
    searchInput = *(ListViewManager_o **)&this->fields.state;
    if ( !searchInput
      || (ListViewManager__set_IsInput(searchInput, 0, 0LL),
          (searchInput = (ListViewManager_o *)this->fields.searchInput) == 0LL) )
    {
      sub_B7076C(searchInput, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)searchInput, 0, 0LL);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnClickCancel(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( LODWORD(this->fields.equipGraphAssetList) == 2 )
  {
    EquipGraphViewListViewMenu__EndInput(this, method);
    LODWORD(this->fields.equipGraphAssetList) = 4;
    EquipGraphViewListViewMenu__Callback(this, 0, v3);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnClickItem(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  FigureViewListViewManager_o *Item; // x0
  int32_t callbackIndex; // w1
  System_String_o *dragParentObject; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x21
  ScriptManager_CallbackFunc_o *v7; // x22

  if ( (byte_4355068 & 1) == 0 )
  {
    sub_B70694(&ScriptManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_EquipGraphViewListViewMenu_OnEndFigureView__);
    sub_B70694(&ScriptManager_TypeInfo);
    byte_4355068 = 1;
  }
  if ( LODWORD(this->fields.equipGraphAssetList) == 2 )
  {
    Item = *(FigureViewListViewManager_o **)&this->fields.state;
    if ( !Item )
      goto LABEL_12;
    callbackIndex = Item->fields.callbackIndex;
    if ( callbackIndex < 0 )
      return;
    Item = (FigureViewListViewManager_o *)FigureViewListViewManager__GetItem(Item, callbackIndex, 0LL);
    LODWORD(this->fields.equipGraphAssetList) = 3;
    if ( !Item )
LABEL_12:
      sub_B7076C(Item, method);
    dragParentObject = (System_String_o *)Item->fields.dragParentObject;
    callbackFunc = this->fields.callbackFunc;
    v7 = (ScriptManager_CallbackFunc_o *)sub_B70764(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__EquipGraphViewPlay(dragParentObject, (System_String_array *)callbackFunc, v7, 0LL);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnEndFigureView(
        EquipGraphViewListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  FigureViewListViewManager_o *v4; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *searchInput; // x0
  __int64 v7; // x1

  if ( (byte_4355069 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4355069 = 1;
  }
  if ( LODWORD(this->fields.equipGraphAssetList) == 3 )
  {
    LODWORD(this->fields.equipGraphAssetList) = 2;
    v4 = *(FigureViewListViewManager_o **)&this->fields.state;
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !v4
      || (FigureViewListViewManager__SetMode_22021352(v4, 1, v5, 0LL),
          (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
    {
      sub_B7076C(searchInput, v7);
    }
    UnityEngine_Behaviour__set_enabled(searchInput, 1, 0LL);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnSearchLabelChange(
        EquipGraphViewListViewMenu_o *this,
        const MethodInfo *method)
{
  FigureViewListViewManager_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x2

  v3 = *(FigureViewListViewManager_o **)&this->fields.state;
  if ( !v3 )
    sub_B7076C(0LL, method);
  FigureViewListViewManager__DestroyList(v3, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  LODWORD(this->fields.equipGraphAssetList) = 0;
  EquipGraphViewListViewMenu__Open(this, (EquipGraphViewListViewMenu_CallbackFunc_o *)this[1].klass, v10);
}


void __fastcall EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  void *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_32647760; // x0
  System_Collections_Generic_List_int__o *v16; // x22
  EquipGraphViewListViewMenu___c_c *v17; // x8
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__12_0; // x23
  Il2CppObject *v20; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  EquipGraphViewListViewMenu___c_c *v28; // x8
  System_Collections_Generic_List_string__o *v29; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v30; // x9
  System_Converter_string__string__o *_9__12_1; // x23
  Il2CppObject *v32; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_TOutput__o *v40; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v42; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v44; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v45; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_2; // x23
  Il2CppObject *v47; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x2
  signed __int64 size; // x8
  unsigned __int64 v58; // x23
  int32_t v59; // w0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array *v66; // x24
  System_Int32_array **v67; // x25
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x25
  System_String_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_o **v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v89; // x23
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4355066 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Comparison_string___ctor__);
    sub_B70694(&System_Comparison_string__TypeInfo);
    sub_B70694(&Method_System_Converter_int__string___ctor__);
    sub_B70694(&Method_System_Converter_string__string___ctor__);
    sub_B70694(&System_Converter_string__string__TypeInfo);
    sub_B70694(&System_Converter_int__string__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Intersect_string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B70694(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_B70694(&Method_System_Collections_Generic_List_string__ConvertAll_string___);
    sub_B70694(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Sort___69174776);
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor___69174624);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&Method_System_Predicate_string___ctor__);
    sub_B70694(&System_Predicate_string__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__);
    sub_B70694(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__);
    sub_B70694(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__);
    sub_B70694(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__);
    sub_B70694(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    sub_B70694(&EquipGraphViewListViewMenu___c_TypeInfo);
    sub_B70694(&StringLiteral_133/*" : "*/);
    sub_B70694(&StringLiteral_4005/*"CharaGraph"*/);
    byte_4355066 = 1;
  }
  entity = 0LL;
  if ( !LODWORD(this->fields.equipGraphAssetList) )
  {
    v5 = sub_B70764(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    EquipGraphViewListViewMenu___c__DisplayClass12_0___ctor(
      (EquipGraphViewListViewMenu___c__DisplayClass12_0_o *)v5,
      0LL);
    this[1].klass = (EquipGraphViewListViewMenu_c *)callback;
    sub_B70630((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v6, v7, v8, v9, v10, v11);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_65;
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    CollectionList_32647760 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_32647760(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_32647760,
                 (const MethodInfo_1CCB4A0 *)Method_System_Linq_Enumerable_ToList_int___);
    v16 = (System_Collections_Generic_List_int__o *)Instance;
    v17 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v17 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__12_0 = static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Converter_int__string__o *)sub_B70764(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__12_0,
        v20,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_0__,
        (const MethodInfo_21BC004 *)Method_System_Converter_int__string___ctor__);
      v21 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v21->__9__12_0 = _9__12_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v21->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( !v16 )
      goto LABEL_65;
    Instance = System_Collections_Generic_List_int___ConvertAll_string_(
                 v16,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_1957318 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v28 = EquipGraphViewListViewMenu___c_TypeInfo;
    v29 = (System_Collections_Generic_List_string__o *)Instance;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v28 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v30 = v28->static_fields;
    _9__12_1 = v30->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v30 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)v30->__9;
      _9__12_1 = (System_Converter_string__string__o *)sub_B70764(System_Converter_string__string__TypeInfo);
      System_Converter_string__string____ctor(
        _9__12_1,
        v32,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_1__,
        (const MethodInfo_21BC9BC *)Method_System_Converter_string__string___ctor__);
      v33 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v33->__9__12_1 = _9__12_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v33->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    if ( !v29 )
      goto LABEL_65;
    v40 = System_Collections_Generic_List_string___ConvertAll_string_(
            v29,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_1957548 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4005/*"CharaGraph"*/,
                                                                        0LL);
    v42 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v42,
      AssetStorageList,
      (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_string___ctor___69174624);
    v43 = System_Linq_Enumerable__Intersect_string_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v42,
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (const MethodInfo_1CBD6FC *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                 v43,
                 (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.cancelButton )
      goto LABEL_65;
    v44 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this->fields.cancelButton, 1, 0LL);
    Instance = *(void **)&this->fields.state;
    if ( !Instance )
      goto LABEL_65;
    ListViewManager__set_IsInput((ListViewManager_o *)Instance, 0, 0LL);
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_65;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v45 = (struct EquipGraphViewListViewMenu___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v45->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v45 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)v45->__9;
      _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_string__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_2,
        v47,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_2__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_string___ctor__);
      v48 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v48->__9__12_2 = (struct System_Comparison_string__o *)_9__12_2;
      sub_B70630(
        (BattleServantConfConponent_o *)&v48->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    if ( !v44 )
      goto LABEL_65;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v44,
      (System_Comparison_T__o *)_9__12_2,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_string__Sort___69174776);
    LODWORD(size) = v44->fields._size;
    if ( (int)size >= 1 )
    {
      v58 = 0LL;
      do
      {
        if ( v58 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v59 = EquipGraphViewListViewMenu__CardId(
                (EquipGraphViewListViewMenu_o *)v55,
                (System_String_o *)v44->fields._items->m_Items[v58],
                v56);
        v55 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v14,
                &entity,
                v59,
                (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( v55 )
        {
          Instance = (void *)sub_B706AC(string___TypeInfo, 2LL);
          v66 = (System_String_array *)Instance;
          if ( v58 >= (unsigned int)v44->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( !Instance )
            goto LABEL_65;
          v67 = (System_Int32_array **)v44->fields._items->m_Items[v58];
          if ( v67 )
          {
            Instance = (void *)sub_B70754(v67, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
            if ( !Instance )
            {
LABEL_67:
              v98 = sub_B7078C(Instance);
              sub_B70738(v98, 0LL);
            }
          }
          if ( !v66->max_length )
            goto LABEL_66;
          v66->m_Items[0] = (System_String_o *)v67;
          sub_B70630((BattleServantConfConponent_o *)v66->m_Items, v67, v60, v61, v62, v63, v64, v65);
          Instance = entity;
          if ( !entity )
            goto LABEL_65;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          v74 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (void *)sub_B70754(Instance, v66->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_67;
          }
          if ( v66->max_length <= 1 )
          {
LABEL_66:
            v97 = sub_B70798(Instance);
            sub_B70738(v97, 0LL);
          }
          v66->m_Items[1] = (System_String_o *)v74;
          sub_B70630((BattleServantConfConponent_o *)&v66->m_Items[1], v74, v68, v69, v70, v71, v72, v73);
          v75 = System_String__Join((System_String_o *)StringLiteral_133/*" : "*/, v66, 0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v44,
            v58,
            (WarBoardManager_TaskList_o *)v75,
            (const MethodInfo_30253E0 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        size = v44->fields._size;
      }
      while ( (__int64)++v58 < size );
    }
    Instance = this->fields.listViewManager;
    if ( !Instance )
      goto LABEL_65;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v5 )
      goto LABEL_65;
    *(_QWORD *)(v5 + 16) = Instance;
    v82 = (System_String_o **)(v5 + 16);
    sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)Instance, v76, v77, v78, v79, v80, v81);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0LL) )
    {
      *v82 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)(v5 + 16), 0LL, v83, v84, v85, v86, v87, v88);
    }
    if ( *v82 )
    {
      v89 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_string__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v89,
        (Il2CppObject *)v5,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_string___ctor__);
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v44,
        (System_Predicate_T__o *)v89,
        (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v90 = (struct EquipGraphViewListViewMenu_CallbackFunc_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                                                (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.callbackFunc = v90;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v90,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
    Instance = *(void **)&this->fields.state;
    if ( !Instance )
LABEL_65:
      sub_B7076C(Instance, v13);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      (System_String_array *)this->fields.callbackFunc,
      *v82,
      0LL);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  FigureViewListViewManager_o *v3; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *searchInput; // x0
  __int64 v6; // x1

  if ( (byte_4355067 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EquipGraphViewListViewMenu_OnClickItem__);
    byte_4355067 = 1;
  }
  LODWORD(this->fields.equipGraphAssetList) = 2;
  v3 = *(FigureViewListViewManager_o **)&this->fields.state;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !v3
    || (FigureViewListViewManager__SetMode_22021352(v3, 1, v4, 0LL),
        (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
  {
    sub_B7076C(searchInput, v6);
  }
  UnityEngine_Behaviour__set_enabled(searchInput, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  EquipGraphViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4355065 & 1) == 0 )
  {
    sub_B70694(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__);
    byte_4355065 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v3 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_B70764(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    0LL);
  EquipGraphViewListViewMenu__Open(this, v3, v4);
}


void __fastcall EquipGraphViewListViewMenu__add_callbackFunc(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *v5; // x20
  System_Delegate_o *v6; // x21
  EquipGraphViewListViewMenu_c *klass; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphViewListViewMenu_o *v11; // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4355063 & 1) == 0 )
  {
    sub_B70694(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4355063 = 1;
  }
  klass = this[1].klass;
  v5 = this + 1;
  v6 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v8->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  EquipGraphViewListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphViewListViewMenu__remove_callbackFunc(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  EquipGraphViewListViewMenu_o *v5; // x20
  System_Delegate_o *v6; // x21
  EquipGraphViewListViewMenu_c *klass; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphViewListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4355064 & 1) == 0 )
  {
    sub_B70694(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4355064 = 1;
  }
  klass = this[1].klass;
  v5 = this + 1;
  v6 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v8->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  EquipGraphViewListViewMenu__StartMenu(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu_CallbackFunc___ctor(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall EquipGraphViewListViewMenu_CallbackFunc__BeginInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_434F02E & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F02E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu_CallbackFunc__Invoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EquipGraphViewListViewMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  EquipGraphViewListViewMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (EquipGraphViewListViewMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}


void __fastcall EquipGraphViewListViewMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0

  if ( (byte_434F02C & 1) == 0 )
  {
    sub_B70694(&EquipGraphViewListViewMenu___c_TypeInfo);
    byte_434F02C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EquipGraphViewListViewMenu___c___ctor(EquipGraphViewListViewMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall EquipGraphViewListViewMenu___c___Open_b__12_0(
        EquipGraphViewListViewMenu___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall EquipGraphViewListViewMenu___c___Open_b__12_1(
        EquipGraphViewListViewMenu___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_434F02D & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_4006/*"CharaGraph/"*/);
    byte_434F02D = 1;
  }
  v4 = sub_B706AC(string___TypeInfo, 2LL);
  if ( !v4 )
    sub_B7076C(0LL, v5);
  v6 = (System_String_array *)v4;
  v7 = StringLiteral_4006/*"CharaGraph/"*/;
  if ( StringLiteral_4006/*"CharaGraph/"*/ )
  {
    v7 = sub_B70754(StringLiteral_4006/*"CharaGraph/"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_14;
    v8 = StringLiteral_4006/*"CharaGraph/"*/;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v6->max_length )
    goto LABEL_13;
  v6->m_Items[0] = (System_String_o *)v8;
  sub_B70630(v6->m_Items);
  if ( x )
  {
    v7 = sub_B70754(x, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_14:
      v11 = sub_B7078C();
      sub_B70738(v11, 0LL);
    }
  }
  if ( v6->max_length <= 1 )
  {
LABEL_13:
    v10 = sub_B70798(v7);
    sub_B70738(v10, 0LL);
  }
  v6->m_Items[1] = x;
  sub_B70630(&v6->m_Items[1]);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, v6, 0LL);
}


int32_t __fastcall EquipGraphViewListViewMenu___c___Open_b__12_2(
        EquipGraphViewListViewMenu___c_o *this,
        System_String_o *a,
        System_String_o *b,
        const MethodInfo *method)
{
  int32_t m_stringLength; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_B7076C(this, a);
  m_stringLength = a->fields.m_stringLength;
  v5 = b->fields.m_stringLength;
  result = m_stringLength - v5;
  if ( m_stringLength == v5 )
    return System_String__Compare(a, b, 0LL);
  return result;
}


void __fastcall EquipGraphViewListViewMenu___c__DisplayClass12_0___ctor(
        EquipGraphViewListViewMenu___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EquipGraphViewListViewMenu___c__DisplayClass12_0___Open_b__3(
        EquipGraphViewListViewMenu___c__DisplayClass12_0_o *this,
        System_String_o *X,
        const MethodInfo *method)
{
  if ( !X )
    sub_B7076C(this, 0LL);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}