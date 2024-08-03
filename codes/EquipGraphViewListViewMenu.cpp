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
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
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
    sub_1B64324(this);
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
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  EquipGraphViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.equipGraphAssetList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1B64324(listViewManager);
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
      sub_1B64324(listViewManager);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x20
  System_String_array *equipGraphAssetList; // x21
  ScriptManager_CallbackFunc_o *v12; // x22

  if ( (byte_49F9B94 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu_OnEndFigureView__, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49F9B94 = 1;
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
      sub_1B64324(listViewManager);
    v10 = (System_String_o *)*((_QWORD *)listViewManager + 14);
    equipGraphAssetList = this->fields.equipGraphAssetList;
    v12 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v8, v9);
    ScriptManager_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EquipGraphViewListViewMenu_OnEndFigureView__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__EquipGraphViewPlay(v10, equipGraphAssetList, v12, 0LL);
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
  const MethodInfo *v8; // x3

  if ( (byte_49F9B95 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isExit);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu_OnClickItem__, v4);
    byte_49F9B95 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isExit, method);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
    if ( !listViewManager
      || (FigureViewListViewManager__SetMode_34499808(listViewManager, 1, v6, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
    {
      sub_1B64324(cancelButton);
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
    sub_1B64324(0LL);
  ListViewManager__DestroyList(listViewManager, 0LL);
  this->fields.equipGraphAssetList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipGraphAssetList, 0, v4, v5);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList_39376492; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_int__o *v42; // x22
  EquipGraphViewListViewMenu___c_c *v43; // x8
  System_Converter_TInput__TOutput__o *_9__12_0; // x23
  Il2CppObject *v45; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  EquipGraphViewListViewMenu___c_c *v51; // x8
  System_Collections_Generic_List_object__o *v52; // x22
  System_Converter_TInput__TOutput__o *_9__12_1; // x23
  Il2CppObject *v54; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_Collections_Generic_List_TOutput__o *v58; // x22
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x23
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_object__o *v62; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_List_object__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  System_Comparison_T__o *v67; // x23
  Il2CppObject *v68; // x24
  struct EquipGraphViewListViewMenu___c_StaticFields *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v74; // x2
  int32_t v75; // w0
  __int64 v76; // x24
  __int64 v77; // x1
  int32_t v78; // w2
  int32_t v79; // w3
  int32_t v80; // w2
  int32_t v81; // w3
  Il2CppObject *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o **v85; // x21
  __int64 v86; // x1
  __int64 v87; // x2
  int32_t v88; // w3
  System_Predicate_object__o *v89; // x23
  struct System_String_array *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  const MethodInfo *v93; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F9B92 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callback);
    sub_1B640C8(&System_Comparison_string__TypeInfo, v5);
    sub_1B640C8(&System_Converter_string__string__TypeInfo, v6);
    sub_1B640C8(&System_Converter_int__string__TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Intersect_string___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ConvertAll_string___, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAll__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Sort___75668288, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor___75668144, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__set_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v22);
    sub_1B640C8(&System_Predicate_string__TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&string___TypeInfo, v25);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, v26);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, v27);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, v28);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__, v29);
    sub_1B640C8(&EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, v30);
    sub_1B640C8(&EquipGraphViewListViewMenu___c_TypeInfo, v31);
    sub_1B640C8(&StringLiteral_175/*" : "*/, v32);
    sub_1B640C8(&StringLiteral_4406/*"CharaGraph"*/, v33);
    byte_49F9B92 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    v34 = sub_1B64314(EquipGraphViewListViewMenu___c__DisplayClass12_0_TypeInfo, callback, method);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    this->fields.callbackFunc = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v35, v36);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    CollectionList_39376492 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList_39376492(
                                                                                     (ServantMaster_o *)Instance,
                                                                                     1,
                                                                                     0LL);
    Instance = System_Linq_Enumerable__ToList_int_(
                 CollectionList_39376492,
                 (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    v42 = (System_Collections_Generic_List_int__o *)Instance;
    v43 = EquipGraphViewListViewMenu___c_TypeInfo;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v43 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_0 = (System_Converter_TInput__TOutput__o *)v43->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v43->static_fields->__9;
      _9__12_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_int__string__TypeInfo, v40, v41);
      System_Converter_int__object____ctor(_9__12_0, v45, Method_EquipGraphViewListViewMenu___c__Open_b__12_0__, 0LL);
      static_fields = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Converter_int__string__o *)_9__12_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v47, v48);
    }
    if ( !v42 )
      goto LABEL_50;
    Instance = System_Collections_Generic_List_int___ConvertAll_object_(
                 v42,
                 (System_Converter_T__TOutput__o *)_9__12_0,
                 (const MethodInfo_2D6F084 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    v51 = EquipGraphViewListViewMenu___c_TypeInfo;
    v52 = (System_Collections_Generic_List_object__o *)Instance;
    if ( !EquipGraphViewListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EquipGraphViewListViewMenu___c_TypeInfo);
      v51 = EquipGraphViewListViewMenu___c_TypeInfo;
    }
    _9__12_1 = (System_Converter_TInput__TOutput__o *)v51->static_fields->__9__12_1;
    if ( !_9__12_1 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__12_1 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_string__string__TypeInfo, v49, v50);
      System_Converter_object__object____ctor(_9__12_1, v54, Method_EquipGraphViewListViewMenu___c__Open_b__12_1__, 0LL);
      v55 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v55->__9__12_1 = (struct System_Converter_string__string__o *)_9__12_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->__9__12_1, (int32_t)_9__12_1, v56, v57);
    }
    if ( !v52 )
      goto LABEL_50;
    v58 = System_Collections_Generic_List_object___ConvertAll_object_(
            v52,
            (System_Converter_T__TOutput__o *)_9__12_1,
            (const MethodInfo_2D6F2A4 *)Method_System_Collections_Generic_List_string__ConvertAll_string___);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_4406/*"CharaGraph"*/,
                                                                        0LL);
    v62 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v60,
                                                         v61);
    System_Collections_Generic_List_object____ctor_55234504(
      v62,
      AssetStorageList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_string___ctor___75668144);
    v63 = System_Linq_Enumerable__Intersect_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v62,
            (System_Collections_Generic_IEnumerable_TSource__o *)v58,
            (const MethodInfo_2E5E4D0 *)Method_System_Linq_Enumerable_Intersect_string___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v63,
                 (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this->fields.rootObject )
      goto LABEL_50;
    v64 = (System_Collections_Generic_List_object__o *)Instance;
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
    v67 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
    if ( !v67 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = EquipGraphViewListViewMenu___c_TypeInfo;
      }
      v68 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v67 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_string__TypeInfo, v65, v66);
      System_Comparison_object____ctor(v67, v68, Method_EquipGraphViewListViewMenu___c__Open_b__12_2__, 0LL);
      v69 = EquipGraphViewListViewMenu___c_TypeInfo->static_fields;
      v69->__9__12_2 = (struct System_Comparison_string__o *)v67;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v69->__9__12_2, (int32_t)v67, v70, v71);
    }
    if ( !v64 )
      goto LABEL_50;
    System_Collections_Generic_List_object___Sort_55243320(
      v64,
      v67,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_string__Sort___75668288);
    if ( v64->fields._size >= 1 )
    {
      v72 = 0;
      do
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v64,
                 v72,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
        v75 = EquipGraphViewListViewMenu__CardId((EquipGraphViewListViewMenu_o *)Item, (System_String_o *)Item, v74);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v38,
               &entity,
               v75,
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        {
          v76 = sub_1B64170(string___TypeInfo, 2LL);
          Instance = System_Collections_Generic_List_object___get_Item(
                       v64,
                       v72,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !v76 )
            goto LABEL_50;
          if ( !*(_DWORD *)(v76 + 24) )
            goto LABEL_51;
          *(_QWORD *)(v76 + 32) = Instance;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 32), (int32_t)Instance, v78, v79);
          Instance = entity;
          if ( !entity )
            goto LABEL_50;
          Instance = ServantEntity__getName((ServantEntity_o *)entity, 0, -1, 0LL);
          if ( *(_DWORD *)(v76 + 24) <= 1u )
LABEL_51:
            sub_1B6432C(Instance, v77);
          *(_QWORD *)(v76 + 40) = Instance;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 40), (int32_t)Instance, v80, v81);
          v82 = (Il2CppObject *)System_String__Join(
                                  (System_String_o *)StringLiteral_175/*" : "*/,
                                  (System_String_array *)v76,
                                  0LL);
          System_Collections_Generic_List_object___set_Item(
            v64,
            v72,
            v82,
            (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_string__set_Item__);
        }
        ++v72;
      }
      while ( v72 < v64->fields._size );
    }
    Instance = this->fields.searchInput;
    if ( !Instance )
      goto LABEL_50;
    Instance = UILineInput__GetText((UILineInput_o *)Instance, 0LL);
    if ( !v34 )
      goto LABEL_50;
    *(_QWORD *)(v34 + 16) = Instance;
    v85 = (System_String_o **)(v34 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 16), (int32_t)Instance, v83, v84);
    if ( System_String__IsNullOrEmpty(*(System_String_o **)(v34 + 16), 0LL) )
    {
      *v85 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 16), 0, v87, v88);
    }
    if ( *v85 )
    {
      v89 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v86, v87);
      System_Predicate_object____ctor(
        v89,
        (Il2CppObject *)v34,
        Method_EquipGraphViewListViewMenu___c__DisplayClass12_0__Open_b__3__,
        0LL);
      System_Collections_Generic_List_object___RemoveAll(
        v64,
        (System_Predicate_T__o *)v89,
        (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_string__RemoveAll__);
    }
    v90 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v64,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.equipGraphAssetList = v90;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipGraphAssetList, (int32_t)v90, v91, v92);
    Instance = this->fields.listViewManager;
    if ( !Instance )
LABEL_50:
      sub_1B64324(Instance);
    FigureViewListViewManager__CreateList(
      (FigureViewListViewManager_o *)Instance,
      this->fields.equipGraphAssetList,
      *v85,
      v93);
  }
  EquipGraphViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void __fastcall EquipGraphViewListViewMenu__StartInput(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FigureViewListViewManager_o *listViewManager; // x20
  System_Action_o *v6; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49F9B93 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu_OnClickItem__, v4);
    byte_49F9B93 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EquipGraphViewListViewMenu_OnClickItem__, 0LL);
  if ( !listViewManager
    || (FigureViewListViewManager__SetMode_34499808(listViewManager, 1, v6, v8),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
    sub_1B64324(cancelButton);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0LL);
}


void __fastcall EquipGraphViewListViewMenu__StartMenu(EquipGraphViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  EquipGraphViewListViewMenu_CallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_49F9B91 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__, v3);
    byte_49F9B91 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v6 = (EquipGraphViewListViewMenu_CallbackFunc_o *)sub_1B64314(
                                                      EquipGraphViewListViewMenu_CallbackFunc_TypeInfo,
                                                      v4,
                                                      v5);
  EquipGraphViewListViewMenu_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EquipGraphViewListViewMenu__StartMenu_b__11_0__,
    v7);
  EquipGraphViewListViewMenu__Open(this, v6, v8);
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

  if ( (byte_49F9B8F & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_49F9B8F = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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

  if ( (byte_49F9B90 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphViewListViewMenu_CallbackFunc_TypeInfo, value);
    byte_49F9B90 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A9060;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A9018;
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
  if ( (byte_49F9B96 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    byte_49F9B96 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall EquipGraphViewListViewMenu_CallbackFunc__EndInvoke(
        EquipGraphViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9B97 & 1) == 0 )
  {
    sub_1B640C8(&EquipGraphViewListViewMenu___c_TypeInfo, v1);
    byte_49F9B97 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EquipGraphViewListViewMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EquipGraphViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphViewListViewMenu___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EquipGraphViewListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49F9B98 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, x);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    sub_1B640C8(&StringLiteral_4407/*"CharaGraph/"*/, v5);
    byte_49F9B98 = 1;
  }
  v6 = sub_1B64170(string___TypeInfo, 2LL);
  if ( !v6 )
    sub_1B64324(0LL);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v11 = StringLiteral_4407/*"CharaGraph/"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_4407/*"CharaGraph/"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 32), v11, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u) )
  {
    sub_1B6432C(v6, v7);
  }
  *(_QWORD *)(v10 + 40) = x;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)x, v12, v13);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return !System_String__Contains(X, this->fields.searchStr, 0LL);
}