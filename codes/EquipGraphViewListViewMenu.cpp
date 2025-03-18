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
    sub_1C3B708(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipGraphAssetList, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1C3B9C0(listViewManager, v3);
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
      sub_1C3B9C0(listViewManager, method);
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
  __int64 v5; // x1
  void *listViewManager; // x0
  int32_t v7; // w1
  System_String_o *v8; // x20
  System_String_array *equipGraphAssetList; // x21
  ScriptManager_CallbackFunc_o *v10; // x22

  if ( (byte_4C1F5D1 & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v4);
    sub_1C3B764(&ScriptManager_TypeInfo, v5);
    byte_4C1F5D1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    v7 = *((_DWORD *)listViewManager + 87);
    if ( (v7 & 0x80000000) != 0 )
      return;
    listViewManager = FigureViewListViewManager__GetItem((FigureViewListViewManager_o *)listViewManager, v7, v2);
    this->fields.state = 3;
    if ( !listViewManager )
LABEL_11:
      sub_1C3B9C0(listViewManager, method);
    v8 = (System_String_o *)*((_QWORD *)listViewManager + 14);
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v10 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__EquipGraphViewPlay(v8, equipGraphAssetList, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphViewListViewMenu__OnEndFigureView(
        EquipGraphViewListViewMenu_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v6; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4C1F5D2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isExit);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu_OnClickItem__, v4);
    byte_4C1F5D2 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_36152784(listViewManager, 1, v6, v9),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
    {
      sub_1C3B9C0(cancelButton, v8);
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
    sub_1C3B9C0(0LL, method);
  ListViewManager__DestroyList(listViewManager, 0LL);
  this->fields.equipGraphAssetList = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipGraphAssetList, 0LL, v4, v5, v6, v7, v8, v9);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  EquipGraphViewListViewMenu__Open(this, callbackFunc, v11);
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
  __int64 v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *Instance; // x0
  __int64 v42; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_41253832; // x0
  System_Collections_Generic_List_int__o *v45; // x22
  EquipGraphViewListViewMenu___c_c *v46; // x8
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v48; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  EquipGraphViewListViewMenu___c_c *v56; // x8
  System_Collections_Generic_List_object__o *v57; // x22
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v59; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_List_TOutput__o *v67; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_object__o *v69; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Collections_Generic_List_object__o *v71; // x22
  System_Comparison_T__o *v72; // x23
  Il2CppObject *v73; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int32_t v81; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v83; // x2
  int32_t v84; // w0
  __int64 v85; // x24
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  Il2CppObject *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_String_o **v105; // x21
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_Predicate_object__o *v112; // x23
  struct System_String_array *v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  const MethodInfo *v120; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C1F5CF & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, callback);
    sub_1C3B764(&System_Comparison_string__TypeInfo, v5);
    sub_1C3B764(&System_Converter_string__string__TypeInfo, v6);
    sub_1C3B764(&System_Converter_int__string__TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_Intersect_string___, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_int___, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_string___, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__RemoveAll__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Sort___77864296, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor___77864152, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__set_Item__, v21);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v22);
    sub_1C3B764(&System_Predicate_string__TypeInfo, v23);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C3B764(&string___TypeInfo, v25);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v26);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v27);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v28);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v29);
    sub_1C3B764(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v30);
    sub_1C3B764(&EquipGraphViewListViewMenu___c_TypeInfo, v31);
    sub_1C3B764(&StringLiteral_171/*" = "*/, v32);
    sub_1C3B764(&StringLiteral_4510/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/, v33);
    byte_4C1F5CF = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    v34 = sub_1C3B9B0(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    this->fields.callbackFunc = callback;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_41253832 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_41253832(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_41253832,
                 (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
    v45 = (System_Collections_Generic_List_int__o *)Instance;
    v46 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v46 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_0 = (System_Converter_TInput__TOutput__o *)v46->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v46->static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__12_0, v48, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0LL);
      static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
        (int64_t)_9__12_0,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    if ( !v45 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v45,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_2F1F7B8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v56 = EquipGraphViewListViewMenu___c_TypeInfo;
    v57 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v56 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v56->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v56->static_fields->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_string__string__TypeInfo);
      System_Converter_object__object____ctor(_9__12_1, v59, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0LL);
      v60 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v60->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_1C3B708((PartyOrganizationUtility_o *)&v60->__9__12_1, (int64_t)_9__12_1, v61, v62, v63, v64, v65, v66);
    }
    if ( !v57 )
      goto LABEL_50;
    v67 = System_Collections_Generic_List_object___ConvertAll_object_(
            v57,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_2F1F9D8 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4510/*"CombineHelpListPanel/BaseWindow/UpperCloseButton"*/,
                                                                        0LL);
    v69 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_57193824(
      v69,
      AssetStorageList,
      (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_string___ctor___77864152);
    v70 = System_Linq_Enumerable__Intersect_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v69,
            (System_Collections_Generic_IEnumerable_TSource__o *)v67,
            (const MethodInfo_30152F8 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v70,
                 (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v71 = (System_Collections_Generic_List_object__o *)Instance;
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
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      Instance = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    v72 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v72 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v73 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v72 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_string__TypeInfo);
      System_Comparison_object____ctor(v72, v73, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0LL);
      v74 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v74->__9__12_2 = (struct System_Comparison_string__o *)v72;
      sub_1C3B708((PartyOrganizationUtility_o *)&v74->__9__12_2, (int64_t)v72, v75, v76, v77, v78, v79, v80);
    }
    if ( !v71 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_57202480(
      v71,
      v72,
      (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_string__Sort___77864296);
    if ( v71->fields._size >= 1 )
    {
      v81 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v71,
                 v81,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
        v84 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v83);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v43,
               &entity,
               v84,
               (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v85 = sub_1C3B80C(string___TypeInfo, 2LL);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v71,
                       v81,
                       (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v85 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v85 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v85 + 32) = Instance;
          sub_1C3B708((PartyOrganizationUtility_o *)(v85 + 32), (int64_t)Instance, v86, v87, v88, v89, v90, v91);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0, 0LL);
          if ( *(_DWORD *)(v85 + 24) <= 1u )
LABEL_51:
            sub_1C3B9C8(Instance, v42);
          *(_QWORD *)(v85 + 40) = Instance;
          sub_1C3B708((PartyOrganizationUtility_o *)(v85 + 40), (int64_t)Instance, v92, v93, v94, v95, v96, v97);
          v98 = (Il2CppObject *)System_String__Join(
                                  (System_String_o *)StringLiteral_171/*" = "*/,
                                  (System_String_array *)v85,
                                  0LL);
          System_Collections_Generic_List_object___set_Item(
            v71,
            v81,
            v98,
            (const MethodInfo_368B9F0 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v81;
      }
      while ( v81 < v71->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v34 )
      goto LABEL_50;
    *(_QWORD *)(v34 + 16) = Instance;
    v105 = (System_String_o **)(v34 + 16);
    sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)Instance, v99, v100, v101, v102, v103, v104);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v34 + 16), 0LL) )
    {
      *v105 = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 16), 0LL, v106, v107, v108, v109, v110, v111);
    }
    if ( *v105 )
    {
      v112 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v112,
        (Il2CppObject *)v34,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0LL);
      System_Collections_Generic_List_object___RemoveAll(
        v71,
        (System_Predicate_T__o *)v112,
        (const MethodInfo_368D2C8 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v113 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                           v71,
                                           (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v113;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.equipGraphAssetList,
      (int64_t)v113,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_1C3B9C0(Instance, v42);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      this->fields.equipGraphAssetList,
      *v105,
      v120);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4C1F5D0 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu_OnClickItem__, v3);
    byte_4C1F5D0 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_36152784(listViewManager, 1, v5, v8),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
    sub_1C3B9C0(cancelButton, v7);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphViewListViewMenu_CallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4C1F5CE & 1) == 0 )
  {
    sub_1C3B764(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v3);
    byte_4C1F5CE = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v4 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1C3B9B0(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    v5);
  EquipGraphViewListViewMenu__Open(this, v4, v6);
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

  if ( (byte_4C1F5CC & 1) == 0 )
  {
    sub_1C3B764(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4C1F5CC = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
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

  if ( (byte_4C1F5CD & 1) == 0 )
  {
    sub_1C3B764(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4C1F5CD = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A79708;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A796C0;
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
  if ( (byte_4C1F5D3 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C1F5D3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1F5D4 & 1) == 0 )
  {
    sub_1C3B764(&EquipGraphViewListViewMenu___c_TypeInfo, v1);
    byte_4C1F5D4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x20
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C1F5D5 & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, x);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    sub_1C3B764(&StringLiteral_4511/*"CombineScene"*/, v5);
    byte_4C1F5D5 = 1;
  }
  v6 = sub_1C3B80C(string___TypeInfo, 2LL);
  if ( !v6 )
    sub_1C3B9C0(0LL, v7);
  v14 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v15 = StringLiteral_4511/*"CombineScene"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_4511/*"CombineScene"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 32), v15, v8, v9, v10, v11, v12, v13),
        *(_DWORD *)(v14 + 24) <= 1u) )
  {
    sub_1C3B9C8(v6, v7);
  }
  *(_QWORD *)(v14 + 40) = x;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 40), (int64_t)x, v16, v17, v18, v19, v20, v21);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v14, 0LL);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, 0LL);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}