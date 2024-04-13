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
    sub_B5D560(v8, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    LODWORD(this->fields.equipGraphAssetList) = 0;
  }
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
LABEL_6:
    sub_B5D69C(cancelButton, v3);
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
      sub_B5D69C(searchInput, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FigureViewListViewManager_o *Item; // x0
  int32_t callbackIndex; // w1
  System_String_o *dragParentObject; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x21
  ScriptManager_CallbackFunc_o *v15; // x22

  if ( (byte_42EB843 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v5, v6, v7);
    sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42EB843 = 1;
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
      sub_B5D69C(Item, method);
    dragParentObject = (System_String_o *)Item->fields.dragParentObject;
    callbackFunc = this->fields.callbackFunc;
    v15 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__EquipGraphViewPlay(dragParentObject, (System_String_array *)callbackFunc, v15, 0LL);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnEndFigureView(
        EquipGraphViewListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FigureViewListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  UnityEngine_Behaviour_o *searchInput; // x0
  __int64 v11; // x1

  if ( (byte_42EB844 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu_OnClickItem__, v5, v6, v7);
    byte_42EB844 = 1;
  }
  if ( LODWORD(this->fields.equipGraphAssetList) == 3 )
  {
    LODWORD(this->fields.equipGraphAssetList) = 2;
    v8 = *(FigureViewListViewManager_o **)&this->fields.state;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !v8
      || (FigureViewListViewManager__SetMode_21652692(v8, 1, v9, 0LL),
          (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
    {
      sub_B5D69C(searchInput, v11);
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
    sub_B5D69C(0LL, method);
  FigureViewListViewManager__DestroyList(v3, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  LODWORD(this->fields.equipGraphAssetList) = 0;
  EquipGraphViewListViewMenu__Open(this, (EquipGraphViewListViewMenu_CallbackFunc_o *)this[1].klass, v10);
}


void __fastcall EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  __int64 v105; // x20
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  void *Instance; // x0
  __int64 v113; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v114; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_32498472; // x0
  System_Collections_Generic_List_int__o *v116; // x22
  EquipGraphViewListViewMenu___c_c *v117; // x8
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__12_0; // x23
  Il2CppObject *v120; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  EquipGraphViewListViewMenu___c_c *v128; // x8
  System_Collections_Generic_List_string__o *v129; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v130; // x9
  System_Converter_string__string__o *_9__12_1; // x23
  Il2CppObject *v132; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Collections_Generic_List_TOutput__o *v140; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v142; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v143; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v144; // x22
  struct EquipGraphViewListViewMenu___c_StaticFields *v145; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_2; // x23
  Il2CppObject *v147; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  _BOOL8 v155; // x0
  const MethodInfo *v156; // x2
  signed __int64 size; // x8
  unsigned __int64 v158; // x23
  int32_t v159; // w0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_String_array *v166; // x24
  System_Int32_array **v167; // x25
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x25
  System_String_o *v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_String_o **v182; // x21
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v189; // x23
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v190; // x0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  __int64 v197; // x0
  __int64 v198; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB841 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Comparison_string___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_string__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Converter_int__string___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Converter_string__string___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Converter_string__string__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Converter_int__string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Intersect_string___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v33, v34, v35);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAll__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Sort___68750000, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor___68749856, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__set_Item__, v63, v64, v65);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_System_Predicate_string___ctor__, v69, v70, v71);
    sub_B5D5C4(&System_Predicate_string__TypeInfo, v72, v73, v74);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v75, v76, v77);
    sub_B5D5C4(&string___TypeInfo, v78, v79, v80);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v81, v82, v83);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v84, v85, v86);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v87, v88, v89);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v90, v91, v92);
    sub_B5D5C4(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v93, v94, v95);
    sub_B5D5C4(&EquipGraphViewListViewMenu___c_TypeInfo, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_132/*" : "*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_3996/*"CharaGraph"*/, v102, v103, v104);
    byte_42EB841 = 1;
  }
  entity = 0LL;
  if ( !LODWORD(this->fields.equipGraphAssetList) )
  {
    v105 = sub_B5D694(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    EquipGraphViewListViewMenu___c__DisplayClass12_0___ctor(
      (EquipGraphViewListViewMenu___c__DisplayClass12_0_o *)v105,
      0LL);
    this[1].klass = (EquipGraphViewListViewMenu_c *)callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this[1],
      (System_Int32_array **)callback,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_65;
    v114 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    CollectionList_32498472 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_32498472(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_32498472,
                 (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v116 = (System_Collections_Generic_List_int__o *)Instance;
    v117 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v117 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    static_fields = v117->static_fields;
    _9__12_0 = static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( (BYTE3(v117->vtable._0_Equals.methodPtr) & 4) != 0 && !v117->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v117);
        static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v120 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Converter_int__string__o *)sub_B5D694(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__12_0,
        v120,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_0__,
        (const MethodInfo_23F69D4 *)Method_System_Converter_int__string___ctor__);
      v121 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v121->__9__12_0 = _9__12_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v121->__9__12_0,
        (System_Int32_array **)_9__12_0,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127);
    }
    if ( !v116 )
      goto LABEL_65;
    Instance = System_Collections_Generic_List_int___ConvertAll_string_(
                 v116,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_192DF90 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v128 = EquipGraphViewListViewMenu___c_TypeInfo;
    v129 = (System_Collections_Generic_List_string__o *)Instance;
    if ( (BYTE3(EquipGraphViewListViewMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v128 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v130 = v128->static_fields;
    _9__12_1 = v130->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( (BYTE3(v128->vtable._0_Equals.methodPtr) & 4) != 0 && !v128->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v128);
        v130 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v132 = (Il2CppObject *)v130->__9;
      _9__12_1 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_string__string__TypeInfo);
      System_Converter_string__string____ctor(
        _9__12_1,
        v132,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_1__,
        (const MethodInfo_23F738C *)Method_System_Converter_string__string___ctor__);
      v133 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v133->__9__12_1 = _9__12_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v133->__9__12_1,
        (System_Int32_array **)_9__12_1,
        v134,
        v135,
        v136,
        v137,
        v138,
        v139);
    }
    if ( !v129 )
      goto LABEL_65;
    v140 = System_Collections_Generic_List_string___ConvertAll_string_(
             v129,
             (System_Converter_T__TOutput__o *)_9__12_1,
             (const MethodInfo_192E1C0 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_3996/*"CharaGraph"*/,
                                                                        0LL);
    v142 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v142,
      AssetStorageList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_string___ctor___68749856);
    v143 = System_Linq_Enumerable__Intersect_string_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v142,
             (System_Collections_Generic_IEnumerable_TSource__o *)v140,
             (const MethodInfo_1CACDB8 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                 v143,
                 (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.cancelButton )
      goto LABEL_65;
    v144 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
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
    v145 = (struct EquipGraphViewListViewMenu___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v145->__9__12_2;
    if ( !_9__12_2 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        v145 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      }
      v147 = (Il2CppObject *)v145->__9;
      _9__12_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_string__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__12_2,
        v147,
        Method_EquipGraphViewListViewMenu___c__Open_b__12_2__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_string___ctor__);
      v148 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v148->__9__12_2 = (struct System_Comparison_string__o *)_9__12_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v148->__9__12_2,
        (System_Int32_array **)_9__12_2,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
    }
    if ( !v144 )
      goto LABEL_65;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v144,
      (System_Comparison_T__o *)_9__12_2,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_string__Sort___68750000);
    LODWORD(size) = v144->fields._size;
    if ( (int)size >= 1 )
    {
      v158 = 0LL;
      do
      {
        if ( v158 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v159 = EquipGraphViewListViewMenu__CardId(
                 (EquipGraphViewListViewMenu_o *)v155,
                 (System_String_o *)v144->fields._items->m_Items[v158],
                 v156);
        v155 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v114,
                 &entity,
                 v159,
                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
        if ( v155 )
        {
          Instance = (void *)sub_B5D5DC(string___TypeInfo, 2LL);
          v166 = (System_String_array *)Instance;
          if ( v158 >= (unsigned int)v144->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !Instance )
            goto LABEL_65;
          v167 = (System_Int32_array **)v144->fields._items->m_Items[v158];
          if ( v167 )
          {
            Instance = (void *)sub_B5D684(v167, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
            if ( !Instance )
            {
LABEL_67:
              v198 = sub_B5D6BC(Instance);
              sub_B5D668(v198, 0LL);
            }
          }
          if ( !v166->max_length )
            goto LABEL_66;
          v166->m_Items[0] = (System_String_o *)v167;
          sub_B5D560((BattleServantConfConponent_o *)v166->m_Items, v167, v160, v161, v162, v163, v164, v165);
          Instance = entity;
          if ( !entity )
            goto LABEL_65;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          v174 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (void *)sub_B5D684(Instance, v166->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_67;
          }
          if ( v166->max_length <= 1 )
          {
LABEL_66:
            v197 = sub_B5D6C8(Instance);
            sub_B5D668(v197, 0LL);
          }
          v166->m_Items[1] = (System_String_o *)v174;
          sub_B5D560((BattleServantConfConponent_o *)&v166->m_Items[1], v174, v168, v169, v170, v171, v172, v173);
          v175 = System_String__Join((System_String_o *)StringLiteral_132/*" : "*/, v166, 0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v144,
            v158,
            (WarBoardManager_TaskList_o *)v175,
            (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        size = v144->fields._size;
      }
      while ( (__int64)++v158 < size );
    }
    Instance = this->fields.listViewManager;
    if ( !Instance )
      goto LABEL_65;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v105 )
      goto LABEL_65;
    *(_QWORD *)(v105 + 16) = Instance;
    v182 = (System_String_o **)(v105 + 16);
    sub_B5D560(
      (BattleServantConfConponent_o *)(v105 + 16),
      (System_Int32_array **)Instance,
      v176,
      v177,
      v178,
      v179,
      v180,
      v181);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v105 + 16), 0LL) )
    {
      *v182 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)(v105 + 16), 0LL, v183, v184, v185, v186, v187, v188);
    }
    if ( *v182 )
    {
      v189 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v189,
        (Il2CppObject *)v105,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v144,
        (System_Predicate_T__o *)v189,
        (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v190 = (struct EquipGraphViewListViewMenu_CallbackFunc_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v144,
                                                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.callbackFunc = v190;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v190,
      v191,
      v192,
      v193,
      v194,
      v195,
      v196);
    Instance = *(void **)&this->fields.state;
    if ( !Instance )
LABEL_65:
      sub_B5D69C(Instance, v113);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      (System_String_array *)this->fields.callbackFunc,
      *v182,
      0LL);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FigureViewListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  UnityEngine_Behaviour_o *searchInput; // x0
  __int64 v11; // x1

  if ( (byte_42EB842 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu_OnClickItem__, v5, v6, v7);
    byte_42EB842 = 1;
  }
  LODWORD(this->fields.equipGraphAssetList) = 2;
  v8 = *(FigureViewListViewManager_o **)&this->fields.state;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !v8
    || (FigureViewListViewManager__SetMode_21652692(v8, 1, v9, 0LL),
        (searchInput = (UnityEngine_Behaviour_o *)this->fields.searchInput) == 0LL) )
  {
    sub_B5D69C(searchInput, v11);
  }
  UnityEngine_Behaviour__set_enabled(searchInput, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EquipGraphViewListViewMenu_CallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42EB840 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v5, v6, v7);
    byte_42EB840 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v8 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_B5D694(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
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
  __int64 v3; // x3
  EquipGraphViewListViewMenu_o *v6; // x20
  System_Delegate_o *v7; // x21
  EquipGraphViewListViewMenu_c *klass; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EquipGraphViewListViewMenu_o *v12; // x0
  EquipGraphViewListViewMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB83E & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB83E = 1;
  }
  klass = this[1].klass;
  v6 = this + 1;
  v7 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v9->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(v6, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  EquipGraphViewListViewMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall EquipGraphViewListViewMenu__remove_callbackFunc(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EquipGraphViewListViewMenu_o *v6; // x20
  System_Delegate_o *v7; // x21
  EquipGraphViewListViewMenu_c *klass; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EquipGraphViewListViewMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB83F & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB83F = 1;
  }
  klass = this[1].klass;
  v6 = this + 1;
  v7 = (System_Delegate_o *)klass;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v9->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(v6, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  EquipGraphViewListViewMenu__StartMenu(v12, v13);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E64E2 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E64E2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  EquipGraphViewListViewMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0

  if ( (byte_42E64E0 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphViewListViewMenu___c_TypeInfo, v1, v2, v3);
    byte_42E64E0 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_42E64E1 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3997/*"CharaGraph/"*/, v8, v9, v10);
    byte_42E64E1 = 1;
  }
  v11 = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v11 )
    sub_B5D69C(0LL, v12);
  v13 = (System_String_array *)v11;
  v14 = StringLiteral_3997/*"CharaGraph/"*/;
  if ( StringLiteral_3997/*"CharaGraph/"*/ )
  {
    v14 = sub_B5D684(StringLiteral_3997/*"CharaGraph/"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_14;
    v15 = StringLiteral_3997/*"CharaGraph/"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v13->max_length )
    goto LABEL_13;
  v13->m_Items[0] = (System_String_o *)v15;
  sub_B5D560(v13->m_Items);
  if ( x )
  {
    v14 = sub_B5D684(x, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_14:
      v18 = sub_B5D6BC();
      sub_B5D668(v18, 0LL);
    }
  }
  if ( v13->max_length <= 1 )
  {
LABEL_13:
    v17 = sub_B5D6C8(v14);
    sub_B5D668(v17, 0LL);
  }
  v13->m_Items[1] = x;
  sub_B5D560(&v13->m_Items[1]);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, v13, 0LL);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}