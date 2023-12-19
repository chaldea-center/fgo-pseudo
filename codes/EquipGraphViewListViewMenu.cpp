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
    sub_B16F98(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B170D4();
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
  FigureViewListViewManager_o *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_GameObject_o *cancelButton; // x0

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( LODWORD(this->fields.equipGraphAssetList) )
  {
    v3 = *(FigureViewListViewManager_o **)&this->fields.state;
    if ( !v3 )
      goto LABEL_6;
    FigureViewListViewManager__DestroyList(v3, 0LL);
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    LODWORD(this->fields.equipGraphAssetList) = 0;
  }
  cancelButton = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !cancelButton )
LABEL_6:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(cancelButton, 0, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__EndInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *v3; // x0
  UnityEngine_Behaviour_o *searchInput; // x0

  if ( LODWORD(this->fields.equipGraphAssetList) )
  {
    v3 = *(ListViewManager_o **)&this->fields.state;
    if ( !v3
      || (ListViewManager__set_IsInput(v3, 0, 0LL),
          (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Behaviour__set_enabled(searchInput, 0, 0LL);
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
  FigureViewListViewManager_o *v5; // x0
  int32_t callbackIndex; // w1
  FigureViewListViewItem_o *Item; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_String_o *path; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x21
  ScriptManager_CallbackFunc_o *v14; // x22

  if ( (byte_40FC4E8 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v3);
    sub_B16FFC(&ScriptManager_TypeInfo, v4);
    byte_40FC4E8 = 1;
  }
  if ( LODWORD(this->fields.equipGraphAssetList) == 2 )
  {
    v5 = *(FigureViewListViewManager_o **)&this->fields.state;
    if ( !v5 )
      goto LABEL_12;
    callbackIndex = v5->fields.callbackIndex;
    if ( callbackIndex < 0 )
      return;
    Item = FigureViewListViewManager__GetItem(v5, callbackIndex, 0LL);
    LODWORD(this->fields.equipGraphAssetList) = 3;
    if ( !Item )
LABEL_12:
      sub_B170D4();
    path = Item->fields.path;
    callbackFunc = this->fields.callbackFunc;
    v14 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v8, v9, v10, v11);
    ScriptManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__EquipGraphViewPlay(path, (System_String_array *)callbackFunc, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu__OnEndFigureView(
        EquipGraphViewListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FigureViewListViewManager_o *v7; // x20
  System_Action_o *v8; // x21
  UnityEngine_Behaviour_o *searchInput; // x0

  if ( (byte_40FC4E9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isExit);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu_OnClickItem__, v6);
    byte_40FC4E9 = 1;
  }
  if ( LODWORD(this->fields.equipGraphAssetList) == 3 )
  {
    LODWORD(this->fields.equipGraphAssetList) = 2;
    v7 = *(FigureViewListViewManager_o **)&this->fields.state;
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isExit, method, v3, v4);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !v7
      || (FigureViewListViewManager__SetMode_23201452(v7, 1, v8, 0LL),
          (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
    {
      sub_B170D4();
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
    sub_B170D4();
  FigureViewListViewManager__DestroyList(v3, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  LODWORD(this->fields.equipGraphAssetList) = 0;
  EquipGraphViewListViewMenu__Open(this, (EquipGraphViewListViewMenu_CallbackFunc_o *)this[1].klass, v10);
}


void __fastcall EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_31591300; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_List_int__o *v55; // x22
  EquipGraphViewListViewMenu___c_c *v56; // x8
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__12_0; // x23
  Il2CppObject *v59; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_List_TOutput__o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  EquipGraphViewListViewMenu___c_c *v72; // x8
  System_Collections_Generic_List_string__o *v73; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v74; // x9
  System_Converter_string__string__o *_9__12_1; // x23
  Il2CppObject *v76; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_List_TOutput__o *v84; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v90; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_Collections_Generic_List_TSource__o *v92; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v93; // x22
  ListViewManager_o *v94; // x0
  UnityEngine_Behaviour_o *searchInput; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  EquipGraphViewListViewMenu___c_c *v100; // x0
  struct EquipGraphViewListViewMenu___c_StaticFields *v101; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_2; // x23
  Il2CppObject *v103; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  _BOOL8 v111; // x0
  const MethodInfo *v112; // x2
  signed __int64 size; // x8
  unsigned __int64 v114; // x23
  int32_t v115; // w0
  System_String_o *Name; // x0
  __int64 v117; // x1
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array *v124; // x24
  System_Int32_array **v125; // x25
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x25
  System_String_o *v132; // x0
  UILineInput_o *listViewManager; // x0
  System_Int32_array **Text; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_o **v141; // x21
  __int64 v142; // x1
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v149; // x23
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v150; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  FigureViewListViewManager_o *v157; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC4E6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&Method_System_Comparison_string___ctor__, v7);
    sub_B16FFC(&System_Comparison_string__TypeInfo, v8);
    sub_B16FFC(&Method_System_Converter_int__string___ctor__, v9);
    sub_B16FFC(&Method_System_Converter_string__string___ctor__, v10);
    sub_B16FFC(&System_Converter_string__string__TypeInfo, v11);
    sub_B16FFC(&System_Converter_int__string__TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_string___, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAll__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Sort___66746872, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor___66746720, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__set_Item__, v26);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v27);
    sub_B16FFC(&Method_System_Predicate_string___ctor__, v28);
    sub_B16FFC(&System_Predicate_string__TypeInfo, v29);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_B16FFC(&string___TypeInfo, v31);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v32);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v33);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v34);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v35);
    sub_B16FFC(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v36);
    sub_B16FFC(&EquipGraphViewListViewMenu___c_TypeInfo, v37);
    sub_B16FFC(&StringLiteral_132, v38);
    sub_B16FFC(&StringLiteral_3914, v39);
    byte_40FC4E6 = 1;
  }
  entity = 0LL;
  if ( !LODWORD(this->fields.equipGraphAssetList) )
  {
    v40 = sub_B170CC(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, callback, method, v3, v4);
    EquipGraphViewListViewMenu___c__DisplayClass12_0___ctor(
      (EquipGraphViewListViewMenu___c__DisplayClass12_0_o *)v40,
      0LL);
    this[1].klass = (EquipGraphViewListViewMenu_c *)callback;
    sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v41, v42, v43, v44, v45, v46);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_65;
    v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    CollectionList_31591300 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_31591300(
                                                                                     MasterData_WarQuestSelectionMaster,
                                                                                     1,
                                                                                     0LL);
    v55 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      CollectionList_31591300,
                                                      (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
    v56 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v56 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    static_fields = v56->static_fields;
    _9__12_0 = static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Converter_int__string__o *)sub_B170CC(
                                                      System_Converter_int__string__TypeInfo,
                                                      v51,
                                                      v52,
                                                      v53,
                                                      v54);
      System_Converter_int__string____ctor(
        _9__12_0,
        v59,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_0__,
        (const MethodInfo_266AF4C *)Method_System_Converter_int__string___ctor__);
      v60 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v60->__9__12_0 = _9__12_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v60->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    if ( !v55 )
      goto LABEL_65;
    v67 = System_Collections_Generic_List_int___ConvertAll_string_(
            v55,
            (System_Converter_T__TOutput__o *)_9__12_0,
            (const MethodInfo_18FDBA8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v72 = EquipGraphViewListViewMenu___c_TypeInfo;
    v73 = (System_Collections_Generic_List_string__o *)v67;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v72 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v74 = v72->static_fields;
    _9__12_1 = v74->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v72);
        v74 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v76 = (Il2CppObject *)v74->__9;
      _9__12_1 = (System_Converter_string__string__o *)sub_B170CC(
                                                         System_Converter_string__string__TypeInfo,
                                                         v68,
                                                         v69,
                                                         v70,
                                                         v71);
      System_Converter_string__string____ctor(
        _9__12_1,
        v76,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_1__,
        (const MethodInfo_266B904 *)Method_System_Converter_string__string___ctor__);
      v77 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v77->__9__12_1 = _9__12_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v77->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
    }
    if ( !v73 )
      goto LABEL_65;
    v84 = System_Collections_Generic_List_string___ConvertAll_string_(
            v73,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_18FDDD8 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_3914,
                                                                        0LL);
    v90 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_string__TypeInfo,
                                                                            v86,
                                                                            v87,
                                                                            v88,
                                                                            v89);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v90,
      AssetStorageList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_string___ctor___66746720);
    v91 = System_Linq_Enumerable__Intersect_string_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v90,
            (System_Collections_Generic_IEnumerable_TSource__o *)v84,
            (const MethodInfo_18D89B8 *)Method_System_Linq_Enumerable_Intersect_string___);
    v92 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v91,
            (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.cancelButton )
      goto LABEL_65;
    v93 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this->fields.cancelButton, 1, 0LL);
    v94 = *(ListViewManager_o **)&this->fields.state;
    if ( !v94 )
      goto LABEL_65;
    ListViewManager__set_IsInput(v94, 0, 0LL);
    searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput;
    if ( !searchInput )
      goto LABEL_65;
    UnityEngine_Behaviour__set_enabled(searchInput, 0, 0LL);
    v100 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v100 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v101 = v100->static_fields;
    _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v101->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100);
        v101 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v103 = (Il2CppObject *)v101->__9;
      _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_string__TypeInfo,
                                                                             v96,
                                                                             v97,
                                                                             v98,
                                                                             v99);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_2,
        v103,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_2__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_string___ctor__);
      v104 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v104->__9__12_2 = (struct System_Comparison_string__o *)_9__12_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v104->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110);
    }
    if ( !v93 )
      goto LABEL_65;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v93,
      (System_Comparison_T__o *)_9__12_2,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_string__Sort___66746872);
    LODWORD(size) = v93->fields._size;
    if ( (int)size >= 1 )
    {
      v114 = 0LL;
      do
      {
        if ( v114 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v115 = EquipGraphViewListViewMenu__CardId(
                 (EquipGraphViewListViewMenu_o *)v111,
                 (System_String_o *)v93->fields._items->m_Items[v114],
                 v112);
        v111 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v49,
                 &entity,
                 v115,
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( v111 )
        {
          Name = (System_String_o *)sub_B17014(string___TypeInfo, 2LL, v112);
          v124 = (System_String_array *)Name;
          if ( v114 >= (unsigned int)v93->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !Name )
            goto LABEL_65;
          v125 = (System_Int32_array **)v93->fields._items->m_Items[v114];
          if ( v125 )
          {
            Name = (System_String_o *)sub_B170BC(v125, Name->klass->_1.element_class);
            if ( !Name )
            {
LABEL_67:
              sub_B170F4(Name);
              sub_B170A0();
            }
          }
          if ( !v124->max_length )
            goto LABEL_66;
          v124->m_Items[0] = (System_String_o *)v125;
          sub_B16F98((BattleServantConfConponent_o *)v124->m_Items, v125, v118, v119, v120, v121, v122, v123);
          if ( !entity )
            goto LABEL_65;
          Name = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          v131 = (System_Int32_array **)Name;
          if ( Name )
          {
            Name = (System_String_o *)sub_B170BC(Name, v124->obj.klass->_1.element_class);
            if ( !Name )
              goto LABEL_67;
          }
          if ( v124->max_length <= 1 )
          {
LABEL_66:
            sub_B17100(Name, v117, v118);
            sub_B170A0();
          }
          v124->m_Items[1] = (System_String_o *)v131;
          sub_B16F98((BattleServantConfConponent_o *)&v124->m_Items[1], v131, v118, v126, v127, v128, v129, v130);
          v132 = System_String__Join((System_String_o *)StringLiteral_132, v124, 0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v93,
            v114,
            (WarBoardManager_TaskList_o *)v132,
            (const MethodInfo_2F25A30 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        size = v93->fields._size;
      }
      while ( (__int64)++v114 < size );
    }
    listViewManager = (UILineInput_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_65;
    Text = (System_Int32_array **)UILineInput__GetText(listViewManager, 0LL);
    if ( !v40 )
      goto LABEL_65;
    *(_QWORD *)(v40 + 16) = Text;
    v141 = (System_String_o **)(v40 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v40 + 16), Text, v135, v136, v137, v138, v139, v140);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v40 + 16), 0LL) )
    {
      *v141 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)(v40 + 16), 0LL, v143, v144, v145, v146, v147, v148);
    }
    if ( *v141 )
    {
      v149 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                        System_Predicate_string__TypeInfo,
                                                                        v142,
                                                                        v143,
                                                                        v144,
                                                                        v145);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v149,
        (Il2CppObject *)v40,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_string___ctor__);
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v93,
        (System_Predicate_T__o *)v149,
        (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v150 = (struct EquipGraphViewListViewMenu_CallbackFunc_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v93,
                                                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.callbackFunc = v150;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v150,
      v151,
      v152,
      v153,
      v154,
      v155,
      v156);
    v157 = *(FigureViewListViewManager_o **)&this->fields.state;
    if ( !v157 )
LABEL_65:
      sub_B170D4();
    FigureViewListViewManager__CreateList(v157, (System_String_array *)this->fields.callbackFunc, *v141, 0LL);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FigureViewListViewManager_o *v7; // x20
  System_Action_o *v8; // x21
  UnityEngine_Behaviour_o *searchInput; // x0

  if ( (byte_40FC4E7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu_OnClickItem__, v6);
    byte_40FC4E7 = 1;
  }
  LODWORD(this->fields.equipGraphAssetList) = 2;
  v7 = *(FigureViewListViewManager_o **)&this->fields.state;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !v7
    || (FigureViewListViewManager__SetMode_23201452(v7, 1, v8, 0LL),
        (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(searchInput, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  EquipGraphViewListViewMenu_CallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_40FC4E5 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v3);
    byte_40FC4E5 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v8 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_B170CC(
                                                      EquipGraphViewListViewMenu_CallbackFunc_TypeInfo,
                                                      v4,
                                                      v5,
                                                      v6,
                                                      v7);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    0LL);
  EquipGraphViewListViewMenu__Open(this, v8, v9);
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

  if ( (byte_40FC4E3 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_40FC4E3 = 1;
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
    v9 = sub_B0BA14(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FC4E4 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_40FC4E4 = 1;
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
    v9 = sub_B0BA14(v5, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  EquipGraphViewListViewMenu__StartMenu(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu_CallbackFunc___ctor(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F8B8A & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8B8A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B88 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphViewListViewMenu___c_TypeInfo, v1);
    byte_40F8B88 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EquipGraphViewListViewMenu___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array *v13; // x20
  __int64 v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F8B89 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, x);
    sub_B16FFC(&StringLiteral_1, v4);
    sub_B16FFC(&StringLiteral_3915, v5);
    byte_40F8B89 = 1;
  }
  v6 = sub_B17014(string___TypeInfo, 2LL, method);
  if ( !v6 )
    sub_B170D4();
  v13 = (System_String_array *)v6;
  v14 = StringLiteral_3915;
  if ( StringLiteral_3915 )
  {
    v14 = sub_B170BC(StringLiteral_3915, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_14;
    v15 = (System_Int32_array **)StringLiteral_3915;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v13->max_length )
    goto LABEL_13;
  v13->m_Items[0] = (System_String_o *)v15;
  sub_B16F98((BattleServantConfConponent_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
  if ( x )
  {
    v14 = sub_B170BC(x, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_14:
      sub_B170F4(v14);
      sub_B170A0();
    }
  }
  if ( v13->max_length <= 1 )
  {
LABEL_13:
    sub_B17100(v14, v15, v7);
    sub_B170A0();
  }
  v13->m_Items[1] = x;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[1], (System_Int32_array **)x, v7, v16, v17, v18, v19, v20);
  return System_String__Join((System_String_o *)StringLiteral_1, v13, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}