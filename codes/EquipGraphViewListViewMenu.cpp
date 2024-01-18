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
    sub_B2C2F8(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    LODWORD(this->fields.equipGraphAssetList) = 0;
  }
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
LABEL_6:
    sub_B2C434(cancelButton, v3);
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
      sub_B2C434(searchInput, method);
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
  System_String_o *dragParentObject; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x21
  ScriptManager_CallbackFunc_o *v9; // x22

  if ( (byte_418A1B7 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v3);
    sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_418A1B7 = 1;
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
      sub_B2C434(Item, method);
    dragParentObject = (System_String_o *)Item->fields.dragParentObject;
    callbackFunc = this->fields.callbackFunc;
    v9 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__EquipGraphViewPlay(dragParentObject, (System_String_array *)callbackFunc, v9, 0LL);
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
  __int64 v8; // x1

  if ( (byte_418A1B8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isExit);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu_OnClickItem__, v4);
    byte_418A1B8 = 1;
  }
  if ( LODWORD(this->fields.equipGraphAssetList) == 3 )
  {
    LODWORD(this->fields.equipGraphAssetList) = 2;
    v5 = *(FigureViewListViewManager_o **)&this->fields.state;
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !v5
      || (FigureViewListViewManager__SetMode_23118160(v5, 1, v6, 0LL),
          (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
    {
      sub_B2C434(searchInput, v8);
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
    sub_B2C434(0LL, method);
  FigureViewListViewManager__DestroyList(v3, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  __int64 v46; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_31570700; // x0
  System_Collections_Generic_List_int__o *v49; // x22
  EquipGraphViewListViewMenu___c_c *v50; // x8
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__12_0; // x23
  Il2CppObject *v53; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  EquipGraphViewListViewMenu___c_c *v61; // x8
  System_Collections_Generic_List_string__o *v62; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v63; // x9
  System_Converter_string__string__o *_9__12_1; // x23
  Il2CppObject *v65; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_TOutput__o *v73; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v75; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v77; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v78; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_2; // x23
  Il2CppObject *v80; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  _BOOL8 v88; // x0
  const MethodInfo *v89; // x2
  signed __int64 size; // x8
  unsigned __int64 v91; // x23
  int32_t v92; // w0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array *v99; // x24
  System_Int32_array **v100; // x25
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x25
  System_String_o *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_o **v115; // x21
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v122; // x23
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  __int64 v130; // x0
  __int64 v131; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418A1B5 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callback);
    sub_B2C35C(&Method_System_Comparison_string___ctor__, v5);
    sub_B2C35C(&System_Comparison_string__TypeInfo, v6);
    sub_B2C35C(&Method_System_Converter_int__string___ctor__, v7);
    sub_B2C35C(&Method_System_Converter_string__string___ctor__, v8);
    sub_B2C35C(&System_Converter_string__string__TypeInfo, v9);
    sub_B2C35C(&System_Converter_int__string__TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Intersect_string___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v14);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAll__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Sort___67321104, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__set_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v25);
    sub_B2C35C(&Method_System_Predicate_string___ctor__, v26);
    sub_B2C35C(&System_Predicate_string__TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&string___TypeInfo, v29);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v30);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v31);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v32);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v33);
    sub_B2C35C(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v34);
    sub_B2C35C(&EquipGraphViewListViewMenu___c_TypeInfo, v35);
    sub_B2C35C(&StringLiteral_132/*" : "*/, v36);
    sub_B2C35C(&StringLiteral_3929/*"CharaGraph"*/, v37);
    byte_418A1B5 = 1;
  }
  entity = 0LL;
  if ( !LODWORD(this->fields.equipGraphAssetList) )
  {
    v38 = sub_B2C42C(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    EquipGraphViewListViewMenu___c__DisplayClass12_0___ctor(
      (EquipGraphViewListViewMenu___c__DisplayClass12_0_o *)v38,
      0LL);
    this[1].klass = (EquipGraphViewListViewMenu_c *)callback;
    sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v39, v40, v41, v42, v43, v44);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_65;
    v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    CollectionList_31570700 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_31570700(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_31570700,
                 (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
    v49 = (System_Collections_Generic_List_int__o *)Instance;
    v50 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v50 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    static_fields = v50->static_fields;
    _9__12_0 = static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v53 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Converter_int__string__o *)sub_B2C42C(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__12_0,
        v53,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_0__,
        (const MethodInfo_24DFC94 *)Method_System_Converter_int__string___ctor__);
      v54 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v54->__9__12_0 = _9__12_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v54->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    if ( !v49 )
      goto LABEL_65;
    Instance = System_Collections_Generic_List_int___ConvertAll_string_(
                 v49,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_18F3B04 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v61 = EquipGraphViewListViewMenu___c_TypeInfo;
    v62 = (System_Collections_Generic_List_string__o *)Instance;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v61 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v63 = v61->static_fields;
    _9__12_1 = v63->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        v63 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)v63->__9;
      _9__12_1 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_string__string__TypeInfo);
      System_Converter_string__string____ctor(
        _9__12_1,
        v65,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_1__,
        (const MethodInfo_24E064C *)Method_System_Converter_string__string___ctor__);
      v66 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v66->__9__12_1 = _9__12_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v66->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    if ( !v62 )
      goto LABEL_65;
    v73 = System_Collections_Generic_List_string___ConvertAll_string_(
            v62,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_18F3D34 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_3929/*"CharaGraph"*/,
                                                                        0LL);
    v75 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v75,
      AssetStorageList,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_string___ctor__);
    v76 = System_Linq_Enumerable__Intersect_string_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v75,
            (System_Collections_Generic_IEnumerable_TSource__o *)v73,
            (const MethodInfo_1A916A4 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                 v76,
                 (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.cancelButton )
      goto LABEL_65;
    v77 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
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
    v78 = (struct EquipGraphViewListViewMenu___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v78->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v78 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v80 = (Il2CppObject *)v78->__9;
      _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_string__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_2,
        v80,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_2__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_string___ctor__);
      v81 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v81->__9__12_2 = (struct System_Comparison_string__o *)_9__12_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v81->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    if ( !v77 )
      goto LABEL_65;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v77,
      (System_Comparison_T__o *)_9__12_2,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_string__Sort___67321104);
    LODWORD(size) = v77->fields._size;
    if ( (int)size >= 1 )
    {
      v91 = 0LL;
      do
      {
        if ( v91 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v92 = EquipGraphViewListViewMenu__CardId(
                (EquipGraphViewListViewMenu_o *)v88,
                (System_String_o *)v77->fields._items->m_Items[v91],
                v89);
        v88 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v47,
                &entity,
                v92,
                (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( v88 )
        {
          Instance = (void *)sub_B2C374(string___TypeInfo, 2LL);
          v99 = (System_String_array *)Instance;
          if ( v91 >= (unsigned int)v77->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !Instance )
            goto LABEL_65;
          v100 = (System_Int32_array **)v77->fields._items->m_Items[v91];
          if ( v100 )
          {
            Instance = (void *)sub_B2C41C(v100, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
            if ( !Instance )
            {
LABEL_67:
              v131 = sub_B2C454(Instance);
              sub_B2C400(v131, 0LL);
            }
          }
          if ( !v99->max_length )
            goto LABEL_66;
          v99->m_Items[0] = (System_String_o *)v100;
          sub_B2C2F8((BattleServantConfConponent_o *)v99->m_Items, v100, v93, v94, v95, v96, v97, v98);
          Instance = entity;
          if ( !entity )
            goto LABEL_65;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          v107 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (void *)sub_B2C41C(Instance, v99->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_67;
          }
          if ( v99->max_length <= 1 )
          {
LABEL_66:
            v130 = sub_B2C460(Instance);
            sub_B2C400(v130, 0LL);
          }
          v99->m_Items[1] = (System_String_o *)v107;
          sub_B2C2F8((BattleServantConfConponent_o *)&v99->m_Items[1], v107, v101, v102, v103, v104, v105, v106);
          v108 = System_String__Join((System_String_o *)StringLiteral_132/*" : "*/, v99, 0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v77,
            v91,
            (WarBoardManager_TaskList_o *)v108,
            (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        size = v77->fields._size;
      }
      while ( (__int64)++v91 < size );
    }
    Instance = this->fields.listViewManager;
    if ( !Instance )
      goto LABEL_65;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v38 )
      goto LABEL_65;
    *(_QWORD *)(v38 + 16) = Instance;
    v115 = (System_String_o **)(v38 + 16);
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v38 + 16),
      (System_Int32_array **)Instance,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v38 + 16), 0LL) )
    {
      *v115 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)(v38 + 16), 0LL, v116, v117, v118, v119, v120, v121);
    }
    if ( *v115 )
    {
      v122 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_string__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v122,
        (Il2CppObject *)v38,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_string___ctor__);
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v77,
        (System_Predicate_T__o *)v122,
        (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v123 = (struct EquipGraphViewListViewMenu_CallbackFunc_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v77,
                                                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.callbackFunc = v123;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v123,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
    Instance = *(void **)&this->fields.state;
    if ( !Instance )
LABEL_65:
      sub_B2C434(Instance, v46);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      (System_String_array *)this->fields.callbackFunc,
      *v115,
      0LL);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FigureViewListViewManager_o *v4; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *searchInput; // x0
  __int64 v7; // x1

  if ( (byte_418A1B6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu_OnClickItem__, v3);
    byte_418A1B6 = 1;
  }
  LODWORD(this->fields.equipGraphAssetList) = 2;
  v4 = *(FigureViewListViewManager_o **)&this->fields.state;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !v4
    || (FigureViewListViewManager__SetMode_23118160(v4, 1, v5, 0LL),
        (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
  {
    sub_B2C434(searchInput, v7);
  }
  UnityEngine_Behaviour__set_enabled(searchInput, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphViewListViewMenu_CallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_418A1B4 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v3);
    byte_418A1B4 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v4 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_B2C42C(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    0LL);
  EquipGraphViewListViewMenu__Open(this, v4, v5);
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

  if ( (byte_418A1B2 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_418A1B2 = 1;
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
    v9 = sub_B20D74(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A1B3 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_418A1B3 = 1;
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
    v9 = sub_B20D74(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184AAF & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4184AAF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  EquipGraphViewListViewMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}


void __fastcall EquipGraphViewListViewMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0

  if ( (byte_4184AAD & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphViewListViewMenu___c_TypeInfo, v1);
    byte_4184AAD = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v7; // x1
  System_String_array *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_4184AAE & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, x);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    sub_B2C35C(&StringLiteral_3930/*"CharaGraph/"*/, v5);
    byte_4184AAE = 1;
  }
  v6 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v6 )
    sub_B2C434(0LL, v7);
  v8 = (System_String_array *)v6;
  v9 = StringLiteral_3930/*"CharaGraph/"*/;
  if ( StringLiteral_3930/*"CharaGraph/"*/ )
  {
    v9 = sub_B2C41C(StringLiteral_3930/*"CharaGraph/"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_14;
    v10 = StringLiteral_3930/*"CharaGraph/"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v8->max_length )
    goto LABEL_13;
  v8->m_Items[0] = (System_String_o *)v10;
  sub_B2C2F8(v8->m_Items, v10);
  if ( x )
  {
    v9 = sub_B2C41C(x, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_14:
      v13 = sub_B2C454();
      sub_B2C400(v13, 0LL);
    }
  }
  if ( v8->max_length <= 1 )
  {
LABEL_13:
    v12 = sub_B2C460(v9);
    sub_B2C400(v12, 0LL);
  }
  v8->m_Items[1] = x;
  sub_B2C2F8(&v8->m_Items[1], x);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, v8, 0LL);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, 0LL);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}