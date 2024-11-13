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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v9; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
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

  if ( !path )
    sub_1BCAA3C(this, 0LL);
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
  ListViewManager_o *listViewManager; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.equipGraphAssetList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipGraphAssetList, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1BCAA3C(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__EndInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.cancelButton) == 0LL) )
    {
      sub_1BCAA3C(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnClickCancel(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    EquipGraphViewListViewMenu__EndInput(this, method);
    this->fields.state = 4;
    EquipGraphViewListViewMenu__Callback(this, 0, v3);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnClickItem(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *listViewManager; // x0
  int32_t v9; // w1
  __int64 v10; // x2
  __int64 v11; // x3
  System_String_o *v12; // x20
  System_String_array *equipGraphAssetList; // x21
  ScriptManager_CallbackFunc_o *v14; // x22
  __int64 v15; // x1

  if ( (byte_4B138DE & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v4, v5);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v6, v7);
    byte_4B138DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    v9 = *((_DWORD *)listViewManager + 87);
    if ( (v9 & 0x80000000) != 0 )
      return;
    listViewManager = FigureViewListViewManager__GetItem((FigureViewListViewManager_o *)listViewManager, v9, v2);
    this->fields.state = 3;
    if ( !listViewManager )
LABEL_11:
      sub_1BCAA3C(listViewManager, method);
    v12 = (System_String_o *)*((_QWORD *)listViewManager + 14);
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v14 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v10, v11);
    ScriptManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v15);
    ScriptManager__EquipGraphViewPlay(v12, equipGraphAssetList, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu__OnEndFigureView(
        EquipGraphViewListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v8; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B138DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isExit, method);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu_OnClickItem__, v5, v6);
    byte_4B138DF = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isExit, method, v3);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_35493284(listViewManager, 1, v8, v11),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
    {
      sub_1BCAA3C(cancelButton, v10);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0LL);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnSearchLabelChange(
        EquipGraphViewListViewMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v11; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1BCAA3C(0LL, method);
  ListViewManager__DestroyList(listViewManager, 0LL);
  this->fields.equipGraphAssetList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipGraphAssetList, 0LL, v4, v5, v6, v7, v8, v9);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  EquipGraphViewListViewMenu__Open(this, callbackFunc, v11);
}


void __fastcall EquipGraphViewListViewMenu__Open(
        EquipGraphViewListViewMenu_o *this,
        EquipGraphViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  void *Instance; // x0
  __int64 v72; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_40519096; // x0
  __int64 v75; // x2
  __int64 v76; // x3
  System_Collections_Generic_List_int__o *v77; // x22
  EquipGraphViewListViewMenu___c_c *v78; // x8
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v80; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x2
  __int64 v89; // x3
  EquipGraphViewListViewMenu___c_c *v90; // x8
  System_Collections_Generic_List_object__o *v91; // x22
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v93; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x1
  System_Collections_Generic_List_TOutput__o *v102; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  System_Collections_Generic_List_object__o *v107; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x0
  System_Collections_Generic_List_object__o *v109; // x22
  __int64 v110; // x2
  __int64 v111; // x3
  System_Comparison_T__o *v112; // x23
  Il2CppObject *v113; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int32_t v121; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v123; // x2
  int32_t v124; // w0
  __int64 v125; // x24
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  Il2CppObject *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  System_String_o **v145; // x21
  __int64 v146; // x1
  int64_t v147; // x2
  __int64 v148; // x3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  System_Predicate_object__o *v153; // x23
  struct System_String_array *v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  const MethodInfo *v161; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B138DC & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&System_Comparison_string__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Converter_string__string__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Converter_int__string__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_string___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAll__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Sort___76798600, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor___76798456, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__set_Item__, v38, v39);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Predicate_string__TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45);
    sub_1BCA7E0(&string___TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v48, v49);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v50, v51);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v52, v53);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v54, v55);
    sub_1BCA7E0(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v56, v57);
    sub_1BCA7E0(&EquipGraphViewListViewMenu___c_TypeInfo, v58, v59);
    sub_1BCA7E0(&StringLiteral_174/*" : "*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_4496/*"CharaGraph"*/, v62, v63);
    byte_4B138DC = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    v64 = sub_1BCAA2C(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, callback, method, v3);
    System_Object___ctor((Il2CppObject *)v64, 0LL);
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_40519096 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_40519096(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_40519096,
                 (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v77 = (System_Collections_Generic_List_int__o *)Instance;
    v78 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo, v72);
      v78 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_0 = (System_Converter_TInput__TOutput__o *)v78->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78, v72);
        v78 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v80 = (Il2CppObject *)v78->static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_int__string__TypeInfo,
                                                          v72,
                                                          v75,
                                                          v76);
      System_Converter_int__object____ctor(_9__12_0, v80, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0LL);
      static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
        (int64_t)_9__12_0,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    if ( !v77 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v77,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_2E42A40 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v90 = EquipGraphViewListViewMenu___c_TypeInfo;
    v91 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo, v72);
      v90 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v90->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v90->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v90, v72);
        v90 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v93 = (Il2CppObject *)v90->static_fields->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_string__string__TypeInfo,
                                                          v72,
                                                          v88,
                                                          v89);
      System_Converter_object__object____ctor(_9__12_1, v93, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0LL);
      v94 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v94->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v94->__9__12_1, (int64_t)_9__12_1, v95, v96, v97, v98, v99, v100);
    }
    if ( !v91 )
      goto LABEL_50;
    v102 = System_Collections_Generic_List_object___ConvertAll_object_(
             v91,
             (System_Converter_T__TOutput__o *)_9__12_1,
             (const MethodInfo_2E42C60 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v101);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4496/*"CharaGraph"*/,
                                                                        0LL);
    v107 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_string__TypeInfo,
                                                          v104,
                                                          v105,
                                                          v106);
    System_Collections_Generic_List_object____ctor_56235344(
      v107,
      AssetStorageList,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_string___ctor___76798456);
    v108 = System_Linq_Enumerable__Intersect_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v107,
             (System_Collections_Generic_IEnumerable_TSource__o *)v102,
             (const MethodInfo_2F367A4 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v108,
                 (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v109 = (System_Collections_Generic_List_object__o *)Instance;
    UnityEngine_GameObject__SetActive(this->fields.rootObject, 1, 0LL);
    Instance = this->fields.listViewManager;
    if ( !Instance )
      goto LABEL_50;
    ListViewManager__set_IsInput((ListViewManager_o *)Instance, 0, 0LL);
    Instance = this->fields.cancelButton;
    if ( !Instance )
      goto LABEL_50;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo, v72);
      Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v112 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v112 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v72);
        Instance = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v113 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v112 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_string__TypeInfo, v72, v110, v111);
      System_Comparison_object____ctor(v112, v113, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0LL);
      v114 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v114->__9__12_2 = (struct System_Comparison_string__o *)v112;
      sub_1BCA784((PartyOrganizationUtility_o *)&v114->__9__12_2, (int64_t)v112, v115, v116, v117, v118, v119, v120);
    }
    if ( !v109 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_56244000(
      v109,
      v112,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_string__Sort___76798600);
    if ( v109->fields._size >= 1 )
    {
      v121 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v109,
                 v121,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        v124 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v123);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v73,
               &entity,
               v124,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v125 = sub_1BCA888(string___TypeInfo, 2LL);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v109,
                       v121,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v125 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v125 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v125 + 32) = Instance;
          sub_1BCA784((PartyOrganizationUtility_o *)(v125 + 32), (int64_t)Instance, v126, v127, v128, v129, v130, v131);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          if ( *(_DWORD *)(v125 + 24) <= 1u )
LABEL_51:
            sub_1BCAA44(Instance, v72);
          *(_QWORD *)(v125 + 40) = Instance;
          sub_1BCA784((PartyOrganizationUtility_o *)(v125 + 40), (int64_t)Instance, v132, v133, v134, v135, v136, v137);
          v138 = (Il2CppObject *)System_String__Join(
                                   (System_String_o *)StringLiteral_174/*" : "*/,
                                   (System_String_array *)v125,
                                   0LL);
          System_Collections_Generic_List_object___set_Item(
            v109,
            v121,
            v138,
            (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v121;
      }
      while ( v121 < v109->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v64 )
      goto LABEL_50;
    *(_QWORD *)(v64 + 16) = Instance;
    v145 = (System_String_o **)(v64 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 16), (int64_t)Instance, v139, v140, v141, v142, v143, v144);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v64 + 16), 0LL) )
    {
      *v145 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 16), 0LL, v147, v148, v149, v150, v151, v152);
    }
    if ( *v145 )
    {
      v153 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v146, v147, v148);
      System_Predicate_object____ctor(
        v153,
        (Il2CppObject *)v64,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0LL);
      System_Collections_Generic_List_object___RemoveAll(
        v109,
        (System_Predicate_T__o *)v153,
        (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v154 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                           v109,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v154;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.equipGraphAssetList,
      (int64_t)v154,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_1BCAA3C(Instance, v72);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      this->fields.equipGraphAssetList,
      *v145,
      v161);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v8; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B138DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu_OnClickItem__, v5, v6);
    byte_4B138DD = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_35493284(listViewManager, 1, v8, v11),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
    sub_1BCAA3C(cancelButton, v10);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  EquipGraphViewListViewMenu_CallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B138DB & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v4, v5);
    byte_4B138DB = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v9 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      EquipGraphViewListViewMenu_CallbackFunc_TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    v10);
  EquipGraphViewListViewMenu__Open(this, v9, v11);
}


void __fastcall EquipGraphViewListViewMenu__add_callbackFunc(
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

  if ( (byte_4B138D9 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B138D9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v8->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EquipGraphViewListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphViewListViewMenu__remove_callbackFunc(
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

  if ( (byte_4B138DA & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B138DA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphViewListViewMenu_CallbackFunc_c *)v8->klass != EquipGraphViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EquipGraphViewListViewMenu__StartMenu(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu_CallbackFunc___ctor(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A09DBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09D74;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipGraphViewListViewMenu_CallbackFunc__BeginInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B138E0 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B138E0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__Invoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EquipGraphViewListViewMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B138E1 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphViewListViewMenu___c_TypeInfo, v1, v2);
    byte_4B138E1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EquipGraphViewListViewMenu___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x20
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B138E2 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, x, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_4497/*"CharaGraph/"*/, v6, v7);
    byte_4B138E2 = 1;
  }
  v8 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v8 )
    sub_1BCAA3C(0LL, v9);
  v16 = v8;
  if ( !*(_DWORD *)(v8 + 24)
    || (v17 = StringLiteral_4497/*"CharaGraph/"*/,
        *(_QWORD *)(v8 + 32) = StringLiteral_4497/*"CharaGraph/"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), v17, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v16 + 24) <= 1u) )
  {
    sub_1BCAA44(v8, v9);
  }
  *(_QWORD *)(v16 + 40) = x;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 40), (int64_t)x, v18, v19, v20, v21, v22, v23);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v16, 0LL);
}


int32_t __fastcall EquipGraphViewListViewMenu___c___Open_b__12_2(
        EquipGraphViewListViewMenu___c_o *this,
        System_String_o *a,
        System_String_o *b,
        const MethodInfo *method)
{
  int32_t stringLength; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1BCAA3C(this, a);
  stringLength = a->fields._stringLength;
  v5 = b->fields._stringLength;
  result = stringLength - v5;
  if ( stringLength == v5 )
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
    sub_1BCAA3C(this, 0LL);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}