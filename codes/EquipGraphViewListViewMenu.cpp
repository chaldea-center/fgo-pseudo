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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct EquipGraphViewListViewMenu_CallbackFunc_o *v5; // x20
  struct EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B8FFB4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
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
    sub_1B9026C(this, 0LL);
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
  int32_t v5; // w2
  int32_t v6; // w3

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.equipGraphAssetList = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipGraphAssetList, 0, v5, v6);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1B9026C(listViewManager, v3);
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
      sub_1B9026C(listViewManager, method);
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

  if ( (byte_4A6D687 & 1) == 0 )
  {
    sub_1B90010(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v4);
    sub_1B90010(&ScriptManager_TypeInfo, v5);
    byte_4A6D687 = 1;
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
      sub_1B9026C(listViewManager, method);
    v8 = (System_String_o *)*((_QWORD *)listViewManager + 14);
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v10 = (ScriptManager_CallbackFunc_o *)sub_1B9025C(ScriptManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4A6D688 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, isExit);
    sub_1B90010(&Method_EquipGraphViewListViewMenu_OnClickItem__, v4);
    byte_4A6D688 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v6 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_34933844(listViewManager, 1, v6, v9),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
    {
      sub_1B9026C(cancelButton, v8);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0LL);
  }
}


void __fastcall EquipGraphViewListViewMenu__OnSearchLabelChange(
        EquipGraphViewListViewMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  EquipGraphViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v7; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1B9026C(0LL, method);
  ListViewManager__DestroyList(listViewManager, 0LL);
  this->fields.equipGraphAssetList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  EquipGraphViewListViewMenu__Open(this, callbackFunc, v7);
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
  int32_t v35; // w2
  int32_t v36; // w3
  void *Instance; // x0
  __int64 v38; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_39759244; // x0
  System_Collections_Generic_List_int__o *v41; // x22
  EquipGraphViewListViewMenu___c_c *v42; // x8
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v44; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  EquipGraphViewListViewMenu___c_c *v48; // x8
  System_Collections_Generic_List_object__o *v49; // x22
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v51; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_List_TOutput__o *v55; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  System_Collections_Generic_List_object__o *v57; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_List_object__o *v59; // x22
  System_Comparison_T__o *v60; // x23
  Il2CppObject *v61; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v67; // x2
  int32_t v68; // w0
  __int64 v69; // x24
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w2
  int32_t v73; // w3
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o **v77; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  System_Predicate_object__o *v80; // x23
  struct System_String_array *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  const MethodInfo *v84; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6D685 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, callback);
    sub_1B90010(&System_Comparison_string__TypeInfo, v5);
    sub_1B90010(&System_Converter_string__string__TypeInfo, v6);
    sub_1B90010(&System_Converter_int__string__TypeInfo, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Intersect_string___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_int___, v11);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_string___, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_string__RemoveAll__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_string__Sort___76131792, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_string__ToArray__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_string___ctor___76131648, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_string__get_Count__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_string__get_Item__, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_string__set_Item__, v21);
    sub_1B90010(&System_Collections_Generic_List_string__TypeInfo, v22);
    sub_1B90010(&System_Predicate_string__TypeInfo, v23);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B90010(&string___TypeInfo, v25);
    sub_1B90010(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v26);
    sub_1B90010(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v27);
    sub_1B90010(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v28);
    sub_1B90010(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v29);
    sub_1B90010(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v30);
    sub_1B90010(&EquipGraphViewListViewMenu___c_TypeInfo, v31);
    sub_1B90010(&StringLiteral_175/*" : "*/, v32);
    sub_1B90010(&StringLiteral_4429/*"CharaGraph"*/, v33);
    byte_4A6D685 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    v34 = sub_1B9025C(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    this->fields.callbackFunc = callback;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v35, v36);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_39759244 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_39759244(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_39759244,
                 (const MethodInfo_2ECA640 *)Method_System_Linq_Enumerable_ToList_int___);
    v41 = (System_Collections_Generic_List_int__o *)Instance;
    v42 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v42 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_0 = (System_Converter_TInput__TOutput__o *)v42->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_1B9025C(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__12_0, v44, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0LL);
      static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v46, v47);
    }
    if ( !v41 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v41,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_2DC0DD8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v48 = EquipGraphViewListViewMenu___c_TypeInfo;
    v49 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v48 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v48->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v48->static_fields->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_1B9025C(System_Converter_string__string__TypeInfo);
      System_Converter_object__object____ctor(_9__12_1, v51, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0LL);
      v52 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v52->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v52->__9__12_1, (int32_t)_9__12_1, v53, v54);
    }
    if ( !v49 )
      goto LABEL_50;
    v55 = System_Collections_Generic_List_object___ConvertAll_object_(
            v49,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_2DC0FF8 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4429/*"CharaGraph"*/,
                                                                        0LL);
    v57 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_55640756(
      v57,
      AssetStorageList,
      (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_string___ctor___76131648);
    v58 = System_Linq_Enumerable__Intersect_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v57,
            (System_Collections_Generic_IEnumerable_TSource__o *)v55,
            (const MethodInfo_2EB3B50 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v58,
                 (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v59 = (System_Collections_Generic_List_object__o *)Instance;
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
    v60 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v60 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v61 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v60 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_string__TypeInfo);
      System_Comparison_object____ctor(v60, v61, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0LL);
      v62 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v62->__9__12_2 = (struct System_Comparison_string__o *)v60;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v62->__9__12_2, (int32_t)v60, v63, v64);
    }
    if ( !v59 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_55649412(
      v59,
      v60,
      (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_string__Sort___76131792);
    if ( v59->fields._size >= 1 )
    {
      v65 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v59,
                 v65,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_string__get_Item__);
        v68 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v67);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v39,
               &entity,
               v68,
               (const MethodInfo_312C5FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v69 = sub_1B900B8(string___TypeInfo, 2LL);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v59,
                       v65,
                       (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v69 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v69 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v69 + 32) = Instance;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v69 + 32), (int32_t)Instance, v70, v71);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          if ( *(_DWORD *)(v69 + 24) <= 1u )
LABEL_51:
            sub_1B90274(Instance, v38);
          *(_QWORD *)(v69 + 40) = Instance;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v69 + 40), (int32_t)Instance, v72, v73);
          v74 = (Il2CppObject *)System_String__Join(
                                  (System_String_o *)StringLiteral_175/*" : "*/,
                                  (System_String_array *)v69,
                                  0LL);
          System_Collections_Generic_List_object___set_Item(
            v59,
            v65,
            v74,
            (const MethodInfo_3510744 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v65;
      }
      while ( v65 < v59->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v34 )
      goto LABEL_50;
    *(_QWORD *)(v34 + 16) = Instance;
    v77 = (System_String_o **)(v34 + 16);
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v34 + 16), (int32_t)Instance, v75, v76);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v34 + 16), 0LL) )
    {
      *v77 = 0LL;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v34 + 16), 0, v78, v79);
    }
    if ( *v77 )
    {
      v80 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(
        v80,
        (Il2CppObject *)v34,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0LL);
      System_Collections_Generic_List_object___RemoveAll(
        v59,
        (System_Predicate_T__o *)v80,
        (const MethodInfo_351201C *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v81 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v59,
                                          (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v81;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipGraphAssetList, (int32_t)v81, v82, v83);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_1B9026C(Instance, v38);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      this->fields.equipGraphAssetList,
      *v77,
      v84);
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

  if ( (byte_4A6D686 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_EquipGraphViewListViewMenu_OnClickItem__, v3);
    byte_4A6D686 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_34933844(listViewManager, 1, v5, v8),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
    sub_1B9026C(cancelButton, v7);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphViewListViewMenu_CallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4A6D684 & 1) == 0 )
  {
    sub_1B90010(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v3);
    byte_4A6D684 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v4 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1B9025C(EquipGraphViewListViewMenu_CallbackFunc_TypeInfo);
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

  if ( (byte_4A6D682 & 1) == 0 )
  {
    sub_1B90010(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4A6D682 = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B9052C(v8);
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

  if ( (byte_4A6D683 & 1) == 0 )
  {
    sub_1B90010(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_4A6D683 = 1;
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
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B9052C(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D2E84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2E3C;
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
  if ( (byte_4A6D689 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, result);
    byte_4A6D689 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6D68A & 1) == 0 )
  {
    sub_1B90010(&EquipGraphViewListViewMenu___c_TypeInfo, v1);
    byte_4A6D68A = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(EquipGraphViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x20
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A6D68B & 1) == 0 )
  {
    sub_1B90010(&string___TypeInfo, x);
    sub_1B90010(&StringLiteral_1/*""*/, v4);
    sub_1B90010(&StringLiteral_4430/*"CharaGraph/"*/, v5);
    byte_4A6D68B = 1;
  }
  v6 = sub_1B900B8(string___TypeInfo, 2LL);
  if ( !v6 )
    sub_1B9026C(0LL, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v11 = StringLiteral_4430/*"CharaGraph/"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_4430/*"CharaGraph/"*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 32), v11, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u) )
  {
    sub_1B90274(v6, v7);
  }
  *(_QWORD *)(v10 + 40) = x;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)x, v12, v13);
  return System_String__Join((System_String_o *)StringLiteral_1/*""*/, (System_String_array *)v10, 0LL);
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
    sub_1B9026C(this, a);
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
    sub_1B9026C(this, 0LL);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}