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
    sub_B0D840(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B0D97C(this);
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
  struct UIButton_o *cancelButton; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( LODWORD(this->fields.equipGraphAssetList) )
  {
    cancelButton = *(struct UIButton_o **)&this->fields.state;
    if ( !cancelButton )
      goto LABEL_6;
    FigureViewListViewManager__DestroyList((FigureViewListViewManager_o *)cancelButton, 0LL);
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    LODWORD(this->fields.equipGraphAssetList) = 0;
  }
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
LABEL_6:
    sub_B0D97C(cancelButton);
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
      sub_B0D97C(searchInput);
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
  __int64 v3; // x1
  __int64 v4; // x1
  FigureViewListViewManager_o *Item; // x0
  int32_t callbackIndex; // w1
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *dragParentObject; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x21
  ScriptManager_CallbackFunc_o *v11; // x22

  if ( (byte_4216DFD & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v3);
    sub_B0D8A4(&ScriptManager_TypeInfo, v4);
    byte_4216DFD = 1;
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
      sub_B0D97C(Item);
    dragParentObject = (System_String_o *)Item->fields.dragParentObject;
    callbackFunc = this->fields.callbackFunc;
    v11 = (ScriptManager_CallbackFunc_o *)sub_B0D974(ScriptManager_CallbackFunc_TypeInfo, v7, v8);
    ScriptManager_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__EquipGraphViewPlay(dragParentObject, (System_String_array *)callbackFunc, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu__OnEndFigureView(
        EquipGraphViewListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FigureViewListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  UnityEngine_Behaviour_o *searchInput; // x0

  if ( (byte_4216DFE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isExit);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu_OnClickItem__, v4);
    byte_4216DFE = 1;
  }
  if ( LODWORD(this->fields.equipGraphAssetList) == 3 )
  {
    LODWORD(this->fields.equipGraphAssetList) = 2;
    v5 = *(FigureViewListViewManager_o **)&this->fields.state;
    v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isExit, method);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !v5
      || (FigureViewListViewManager__SetMode_21870180(v5, 1, v6, 0LL),
          (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
    {
      sub_B0D97C(searchInput);
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
    sub_B0D97C(0LL);
  FigureViewListViewManager__DestroyList(v3, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  LODWORD(this->fields.equipGraphAssetList) = 0;
  EquipGraphViewListViewMenu__Open(this, (EquipGraphViewListViewMenu_CallbackFunc_o *)this[1].klass, v10);
}


void __fastcall EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_31252124; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_int__o *v50; // x22
  EquipGraphViewListViewMenu___c_c *v51; // x8
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__12_0; // x23
  Il2CppObject *v54; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  EquipGraphViewListViewMenu___c_c *v64; // x8
  System_Collections_Generic_List_string__o *v65; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v66; // x9
  System_Converter_string__string__o *_9__12_1; // x23
  Il2CppObject *v68; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_TOutput__o *v76; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v80; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v82; // x22
  __int64 v83; // x1
  __int64 v84; // x2
  struct EquipGraphViewListViewMenu___c_StaticFields *v85; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_2; // x23
  Il2CppObject *v87; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  _BOOL8 v95; // x0
  const MethodInfo *v96; // x2
  signed __int64 size; // x8
  unsigned __int64 v98; // x23
  int32_t v99; // w0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array *v106; // x24
  System_Int32_array **v107; // x25
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x25
  System_String_o *v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_o **v122; // x21
  __int64 v123; // x1
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v130; // x23
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  __int64 v138; // x0
  __int64 v139; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4216DFB & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&Method_System_Comparison_string___ctor__, v5);
    sub_B0D8A4(&System_Comparison_string__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Converter_int__string___ctor__, v7);
    sub_B0D8A4(&Method_System_Converter_string__string___ctor__, v8);
    sub_B0D8A4(&System_Converter_string__string__TypeInfo, v9);
    sub_B0D8A4(&System_Converter_int__string__TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Intersect_string___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v14);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAll__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Sort___67894712, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor___67894584, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__set_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v25);
    sub_B0D8A4(&Method_System_Predicate_string___ctor__, v26);
    sub_B0D8A4(&System_Predicate_string__TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&string___TypeInfo, v29);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v30);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v31);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v32);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v33);
    sub_B0D8A4(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v34);
    sub_B0D8A4(&EquipGraphViewListViewMenu___c_TypeInfo, v35);
    sub_B0D8A4(&StringLiteral_132/*" : "*/, v36);
    sub_B0D8A4(&StringLiteral_3942/*"CharaGraph"*/, v37);
    byte_4216DFB = 1;
  }
  entity = 0LL;
  if ( !LODWORD(this->fields.equipGraphAssetList) )
  {
    v38 = sub_B0D974(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, callback, method);
    EquipGraphViewListViewMenu___c__DisplayClass12_0___ctor(
      (EquipGraphViewListViewMenu___c__DisplayClass12_0_o *)v38,
      0LL);
    this[1].klass = (EquipGraphViewListViewMenu_c *)callback;
    sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v39, v40, v41, v42, v43, v44);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_65;
    v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    CollectionList_31252124 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_31252124(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_31252124,
                 (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
    v50 = (System_Collections_Generic_List_int__o *)Instance;
    v51 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v51 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__12_0 = static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Converter_int__string__o *)sub_B0D974(System_Converter_int__string__TypeInfo, v48, v49);
      System_Converter_int__string____ctor(
        _9__12_0,
        v54,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_0__,
        (const MethodInfo_2665798 *)Method_System_Converter_int__string___ctor__);
      v55 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v55->__9__12_0 = _9__12_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v55->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( !v50 )
      goto LABEL_65;
    Instance = System_Collections_Generic_List_int___ConvertAll_string_(
                 v50,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_189F648 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v64 = EquipGraphViewListViewMenu___c_TypeInfo;
    v65 = (System_Collections_Generic_List_string__o *)Instance;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v64 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v66 = v64->static_fields;
    _9__12_1 = v66->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v66 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v68 = (Il2CppObject *)v66->__9;
      _9__12_1 = (System_Converter_string__string__o *)sub_B0D974(System_Converter_string__string__TypeInfo, v62, v63);
      System_Converter_string__string____ctor(
        _9__12_1,
        v68,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_1__,
        (const MethodInfo_2666150 *)Method_System_Converter_string__string___ctor__);
      v69 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v69->__9__12_1 = _9__12_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v69->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    if ( !v65 )
      goto LABEL_65;
    v76 = System_Collections_Generic_List_string___ConvertAll_string_(
            v65,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_189F878 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_3942/*"CharaGraph"*/,
                                                                        0LL);
    v80 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_string__TypeInfo,
                                                                            v78,
                                                                            v79);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v80,
      AssetStorageList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_string___ctor___67894584);
    v81 = System_Linq_Enumerable__Intersect_string_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v80,
            (System_Collections_Generic_IEnumerable_TSource__o *)v76,
            (const MethodInfo_1B4C970 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                 v81,
                 (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.cancelButton )
      goto LABEL_65;
    v82 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
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
    v85 = (struct EquipGraphViewListViewMenu___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v85->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v85 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v87 = (Il2CppObject *)v85->__9;
      _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_string__TypeInfo,
                                                                             v83,
                                                                             v84);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_2,
        v87,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_2__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_string___ctor__);
      v88 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v88->__9__12_2 = (struct System_Comparison_string__o *)_9__12_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v88->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
    }
    if ( !v82 )
      goto LABEL_65;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v82,
      (System_Comparison_T__o *)_9__12_2,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_string__Sort___67894712);
    LODWORD(size) = v82->fields._size;
    if ( (int)size >= 1 )
    {
      v98 = 0LL;
      do
      {
        if ( v98 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v99 = EquipGraphViewListViewMenu__CardId(
                (EquipGraphViewListViewMenu_o *)v95,
                (System_String_o *)v82->fields._items->m_Items[v98],
                v96);
        v95 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v46,
                &entity,
                v99,
                (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( v95 )
        {
          Instance = (void *)sub_B0D8BC(string___TypeInfo, 2LL);
          v106 = (System_String_array *)Instance;
          if ( v98 >= (unsigned int)v82->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !Instance )
            goto LABEL_65;
          v107 = (System_Int32_array **)v82->fields._items->m_Items[v98];
          if ( v107 )
          {
            Instance = (void *)sub_B0D964(v107, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
            if ( !Instance )
            {
LABEL_67:
              v139 = sub_B0D99C(Instance);
              sub_B0D948(v139, 0LL);
            }
          }
          if ( !v106->max_length )
            goto LABEL_66;
          v106->m_Items[0] = (System_String_o *)v107;
          sub_B0D840((BattleServantConfConponent_o *)v106->m_Items, v107, v100, v101, v102, v103, v104, v105);
          Instance = entity;
          if ( !entity )
            goto LABEL_65;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          v114 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (void *)sub_B0D964(Instance, v106->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_67;
          }
          if ( v106->max_length <= 1 )
          {
LABEL_66:
            v138 = sub_B0D9A8(Instance);
            sub_B0D948(v138, 0LL);
          }
          v106->m_Items[1] = (System_String_o *)v114;
          sub_B0D840((BattleServantConfConponent_o *)&v106->m_Items[1], v114, v108, v109, v110, v111, v112, v113);
          v115 = System_String__Join((System_String_o *)StringLiteral_132/*" : "*/, v106, 0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v82,
            v98,
            (WarBoardManager_TaskList_o *)v115,
            (const MethodInfo_2FC5440 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        size = v82->fields._size;
      }
      while ( (__int64)++v98 < size );
    }
    Instance = this->fields.listViewManager;
    if ( !Instance )
      goto LABEL_65;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v38 )
      goto LABEL_65;
    *(_QWORD *)(v38 + 16) = Instance;
    v122 = (System_String_o **)(v38 + 16);
    sub_B0D840(
      (BattleServantConfConponent_o *)(v38 + 16),
      (System_Int32_array **)Instance,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v38 + 16), 0LL) )
    {
      *v122 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)(v38 + 16), 0LL, v124, v125, v126, v127, v128, v129);
    }
    if ( *v122 )
    {
      v130 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                        System_Predicate_string__TypeInfo,
                                                                        v123,
                                                                        v124);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v130,
        (Il2CppObject *)v38,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_string___ctor__);
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v82,
        (System_Predicate_T__o *)v130,
        (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v131 = (struct EquipGraphViewListViewMenu_CallbackFunc_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v82,
                                                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.callbackFunc = v131;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v131,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    Instance = *(void **)&this->fields.state;
    if ( !Instance )
LABEL_65:
      sub_B0D97C(Instance);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      (System_String_array *)this->fields.callbackFunc,
      *v122,
      0LL);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FigureViewListViewManager_o *v5; // x20
  System_Action_o *v6; // x21
  UnityEngine_Behaviour_o *searchInput; // x0

  if ( (byte_4216DFC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu_OnClickItem__, v4);
    byte_4216DFC = 1;
  }
  LODWORD(this->fields.equipGraphAssetList) = 2;
  v5 = *(FigureViewListViewManager_o **)&this->fields.state;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !v5
    || (FigureViewListViewManager__SetMode_21870180(v5, 1, v6, 0LL),
        (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
  {
    sub_B0D97C(searchInput);
  }
  UnityEngine_Behaviour__set_enabled(searchInput, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  EquipGraphViewListViewMenu_CallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4216DFA & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v3);
    byte_4216DFA = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v6 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_B0D974(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, v4, v5);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    0LL);
  EquipGraphViewListViewMenu__Open(this, v6, v7);
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

  if ( (byte_4216DF8 & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4216DF8 = 1;
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
    v9 = sub_B022BC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_4216DF9 & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4216DF9 = 1;
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
    v9 = sub_B022BC(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211B0E & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4211B0E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu_CallbackFunc__Invoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  EquipGraphViewListViewMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  EquipGraphViewListViewMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EquipGraphViewListViewMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}


void __fastcall EquipGraphViewListViewMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0

  if ( (byte_4211B0C & 1) == 0 )
  {
    sub_B0D8A4(&EquipGraphViewListViewMenu___c_TypeInfo, v1);
    byte_4211B0C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EquipGraphViewListViewMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  System_String_array *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4211B0D & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, x);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    sub_B0D8A4(&StringLiteral_3943/*"CharaGraph/"*/, v5);
    byte_4211B0D = 1;
  }
  v6 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v6 )
    sub_B0D97C(0LL);
  v7 = (System_String_array *)v6;
  v8 = StringLiteral_3943/*"CharaGraph/"*/;
  if ( StringLiteral_3943/*"CharaGraph/"*/ )
  {
    v8 = sub_B0D964(StringLiteral_3943/*"CharaGraph/"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_14;
    v9 = StringLiteral_3943/*"CharaGraph/"*/;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v7->max_length )
    goto LABEL_13;
  v7->m_Items[0] = (System_String_o *)v9;
  sub_B0D840(v7->m_Items, v9);
  if ( x )
  {
    v8 = sub_B0D964(x, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_14:
      v12 = sub_B0D99C();
      sub_B0D948(v12, 0LL);
    }
  }
  if ( v7->max_length <= 1 )
  {
LABEL_13:
    v11 = sub_B0D9A8(v8);
    sub_B0D948(v11, 0LL);
  }
  v7->m_Items[1] = x;
  sub_B0D840(&v7->m_Items[1], x);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, v7, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}