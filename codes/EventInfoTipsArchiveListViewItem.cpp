void EventInfoTipsArchiveListViewItem___ctor(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        UnityEngine_GameObject_o *parameterBasePrefab,
        EventInfoTipsArchiveDialog_ObjectData_array *objectDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Collections_Generic_List_int__array *v18; // x24
  System_Collections_Generic_List_int__o *v19; // x25
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  System_Collections_Generic_List_int__o *v29; // x25
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_int__o *v36; // x25
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  TipsArchiveStateManager_o *v67; // x20
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v75; // x1
  __int64 v76; // x0

  if ( (byte_593AD20 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_List_int____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_21FFC50(&TipsArchiveStateManager_TypeInfo);
    byte_593AD20 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct System_Collections_Generic_List_int__array *)sub_21FFD10(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3);
  v19 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v18 )
LABEL_16:
    sub_21FFECC(v20, v21);
  if ( v19 )
  {
    v20 = (System_String_o *)sub_21FFDA4(v19, v18->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_17;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_15;
  v18->m_Items[0] = v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v18->m_Items, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  v29 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v29 )
  {
    v20 = (System_String_o *)sub_21FFDA4(v29, v18->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_17;
  }
  if ( (v18->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v18->m_Items[1] = v29;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->m_Items[1], (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v36 )
  {
    v20 = (System_String_o *)sub_21FFDA4(v36, v18->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_17:
      v76 = sub_21FFEF0(v20, v28);
      sub_21FFD90(v76, 0);
    }
  }
  if ( LODWORD(v18->max_length) <= 2 )
LABEL_15:
    sub_21FFED4(v20);
  v18->m_Items[2] = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->m_Items[2], (int32_t)v36, v37, v38, v39, v40, v41, v42);
  this->fields.idCacheList = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.idCacheList, (int32_t)v18, v43, v44, v45, v46, v47, v48);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.atlasList,
    (int32_t)atlasList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.parameterBasePrefab,
    (int32_t)parameterBasePrefab,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.objectDataList = objectDataList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.objectDataList,
    (int32_t)objectDataList,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (TipsArchiveStateManager_o *)sub_21FFEBC(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager___ctor(v67, 0);
  this->fields.tipsArchiveStateManager = v67;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tipsArchiveStateManager,
    (int32_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v20 = System_Int32__ToString((int)this + 24, 0);
  if ( !tipsArchiveStateManager )
    goto LABEL_16;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v20, 0);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v75);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *EventInfoTipsArchiveListViewItem__CreateStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        int32_t index,
        bool isNew,
        const MethodInfo *method)
{
  __int64 v8; // x22
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *result; // x0

  if ( (byte_593AD23 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    byte_593AD23 = 1;
  }
  v8 = sub_21FFEBC(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = id;
  *(_DWORD *)(v8 + 20) = index;
  result = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)v8;
  *(_DWORD *)(v8 + 24) = isNew;
  return result;
}


int32_t EventInfoTipsArchiveListViewItem__GetCurrentIndex(
        EventInfoTipsArchiveListViewItem_o *this,
        EventInfoTipsArchiveDialog_IndexData_array *indexDataList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x21
  unsigned int v5; // w23
  Il2CppClass **v6; // x24
  Il2CppClass *v7; // x8
  char *v8; // x24
  Il2CppClass *v9; // t1
  int32_t name_high; // w20

  if ( (byte_593AD22 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_593AD22 = 1;
  }
  if ( !indexDataList )
    goto LABEL_15;
  max_length = indexDataList->max_length;
  v5 = max_length - 1;
  while ( 1 )
  {
    LODWORD(max_length) = max_length - 1;
    if ( (max_length & 0x80000000) != 0LL )
      return 0;
    if ( (unsigned int)max_length >= LODWORD(indexDataList->max_length) )
      goto LABEL_16;
    v6 = &indexDataList->obj.klass + v5;
    v9 = v6[4];
    v8 = (char *)(v6 + 4);
    v7 = v9;
    if ( !v9 )
      goto LABEL_15;
    name_high = HIDWORD(v7->_1.name);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, indexDataList);
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0, 0, 0, 0);
    --v5;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (unsigned int)max_length >= LODWORD(indexDataList->max_length) )
LABEL_16:
        sub_21FFED4(this);
      if ( *(_QWORD *)v8 )
        return *(_DWORD *)(*(_QWORD *)v8 + 16LL);
LABEL_15:
      sub_21FFECC(this, indexDataList);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *EventInfoTipsArchiveListViewItem__GetIdList(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *idCacheList; // x8

  idCacheList = this->fields.idCacheList;
  if ( !idCacheList )
    sub_21FFECC(this, *(_QWORD *)&tab);
  if ( LODWORD(idCacheList->max_length) <= tab )
    sub_21FFED4(this);
  return idCacheList->m_Items[tab];
}


int32_t EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_593AD25 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_21FFC50(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__);
    sub_21FFC50(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
    byte_593AD25 = 1;
  }
  v5 = sub_21FFEBC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_21FFECC(IdList, v8);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)IdList, v9, v10, v11, v12, v13, v14);
  stateDataList = this->fields.stateDataList;
  v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__59013780(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_593AD24 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
    sub_21FFC50(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__);
    sub_21FFC50(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
    byte_593AD24 = 1;
  }
  v5 = sub_21FFEBC(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (stateDataList = this->fields.stateDataList,
        *(_DWORD *)(v5 + 16) = id,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          0),
        !stateDataList) )
  {
    sub_21FFECC(v6, v7);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_object___Find(
                                                                      (System_Collections_Generic_List_object__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v9,
                                                                      (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


bool EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_T__o *stateDataList; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_593AD26 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_21FFC50(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__);
    sub_21FFC50(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
    byte_593AD26 = 1;
  }
  v5 = sub_21FFEBC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_21FFECC(IdList, v8);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)IdList, v9, v10, v11, v12, v13, v14);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    0);
  return BasicHelper__Any_object_(
           stateDataList,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void EventInfoTipsArchiveListViewItem__LoadData(EventInfoTipsArchiveListViewItem_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  int32_t size; // w2
  int v6; // w9
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v14; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v17; // w26
  EventInfoTipsArchiveDialog_ObjectData_o *v18; // x8
  int32_t Id; // w23
  int CurrentIndex; // w22
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x4
  int32_t eventUiId; // w8
  System_Collections_Generic_List_object__o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  EventInfoTipsArchiveListViewItem_o *v34; // x1
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_object__o *v36; // x19
  void *atlasList; // x8
  System_Comparison_T__o *v38; // x20
  Il2CppObject *v39; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  v2 = this;
  if ( (byte_593AD21 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
    sub_21FFC50(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_21FFC50(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_593AD21 = 1;
  }
  p_fields = &v2->fields;
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_35;
  size = stateDataList->fields._size;
  v6 = stateDataList->fields._version + 1;
  stateDataList->fields._size = 0;
  stateDataList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stateDataList->fields._items, 0, size, 0);
  this = (EventInfoTipsArchiveListViewItem_o *)v2->fields.tipsArchiveStateManager;
  if ( !this )
    goto LABEL_35;
  this = (EventInfoTipsArchiveListViewItem_o *)TipsArchiveStateManager__ReadData((TipsArchiveStateManager_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    tipsArchiveStateManager = v2->fields.tipsArchiveStateManager;
    if ( !tipsArchiveStateManager )
      goto LABEL_35;
    v14 = tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = v14;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields, (int32_t)v14, v7, v8, v9, v10, v11, v12);
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
LABEL_35:
    sub_21FFECC(this, method);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= max_length )
        sub_21FFED4(this);
      v18 = objectDataList->m_Items[v17];
      if ( !v18 )
        goto LABEL_35;
      Id = v18->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(
                       this,
                       v18->fields.IndexDataList,
                       (const MethodInfo *)v7);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__GetStateData(v2, Id, v21);
      if ( this )
      {
        eventUiId = this->fields.eventUiId;
        if ( (eventUiId & 1) == 0 )
          this->fields.eventUiId = eventUiId | (HIDWORD(this->fields.stateDataList) != CurrentIndex);
        HIDWORD(this->fields.stateDataList) = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v24 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
        this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__CreateStateData(
                                                       0,
                                                       Id,
                                                       CurrentIndex,
                                                       CurrentIndex == 1,
                                                       v22);
        if ( !v24 )
          goto LABEL_35;
        items = v24->fields._items;
        v32 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++v24->fields._version;
        if ( !items )
          goto LABEL_35;
        v33 = v24->fields._size;
        v34 = this;
        if ( (unsigned int)v33 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)this,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + v33;
          v24->fields._size = v33 + 1;
          v35[4] = (Il2CppClass *)v34;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v34, v25, v26, v27, v28, v29, v30);
        }
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v17 < max_length );
  }
  v36 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
  this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  if ( !*(&EventInfoTipsArchiveListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItem___c_TypeInfo, method);
    this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  }
  atlasList = this[2].fields.atlasList;
  v38 = (System_Comparison_T__o *)*((_QWORD *)atlasList + 1);
  if ( !v38 )
  {
    if ( !HIDWORD(this[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      atlasList = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    }
    v39 = *(Il2CppObject **)atlasList;
    v38 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    System_Comparison_object____ctor(v38, v39, Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, 0);
    static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v38;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__16_0,
      (int32_t)v38,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v36 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_71636404(
    v36,
    v38,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
}


void EventInfoTipsArchiveListViewItem__SaveData(EventInfoTipsArchiveListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x1

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager
    || (stateDataList = this->fields.stateDataList,
        tipsArchiveStateManager->fields.stateDataList = stateDataList,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&tipsArchiveStateManager->fields.stateDataList,
          (int32_t)stateDataList,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (tipsArchiveStateManager = this->fields.tipsArchiveStateManager) == 0) )
  {
    sub_21FFECC(tipsArchiveStateManager, method);
  }
  TipsArchiveStateManager__WriteData(tipsArchiveStateManager, 0);
}


bool EventInfoTipsArchiveListViewItem__SetSprite(
        EventInfoTipsArchiveListViewItem_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_593AD28 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_593AD28 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0, 0);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_21FFECC(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_21FFECC(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_21FFECC(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v5; // w22
  EventInfoTipsArchiveDialog_ObjectData_o *v6; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x9
  _QWORD *v10; // x8
  __int64 eventUiId; // x10
  struct System_Collections_Generic_List_int__array *v12; // x8
  il2cpp_array_size_t v13; // x20
  __int64 v14; // x22
  struct System_Collections_Generic_List_int__array *v15; // x8

  v2 = this;
  if ( (byte_593AD27 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Sort__);
    byte_593AD27 = 1;
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_24;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
LABEL_25:
        sub_21FFED4(this);
      v6 = objectDataList->m_Items[v5];
      if ( !v6 )
        break;
      idCacheList = v2->fields.idCacheList;
      if ( !idCacheList )
        break;
      TabKind = v6->fields.TabKind;
      if ( (unsigned int)TabKind >= LODWORD(idCacheList->max_length) )
        goto LABEL_25;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        break;
      stateDataList = this->fields.stateDataList;
      method = (const MethodInfo *)(unsigned int)v6->fields.Id;
      v10 = Method_System_Collections_Generic_List_int__Add__;
      ++*(&this->fields.eventUiId + 1);
      if ( !stateDataList )
        break;
      eventUiId = this->fields.eventUiId;
      if ( (unsigned int)eventUiId >= stateDataList->fields._size )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          (int32_t)method,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        this->fields.eventUiId = eventUiId + 1;
        *((_DWORD *)&stateDataList->fields._syncRoot + eventUiId) = (_DWORD)method;
      }
      max_length = objectDataList->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_16;
    }
LABEL_24:
    sub_21FFECC(this, method);
  }
LABEL_16:
  v12 = v2->fields.idCacheList;
  if ( !v12 )
    goto LABEL_24;
  v13 = v12->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v2->fields.idCacheList;
      if ( !v15 )
        goto LABEL_24;
      if ( (unsigned int)v14 >= LODWORD(v15->max_length) )
        goto LABEL_25;
      this = (EventInfoTipsArchiveListViewItem_o *)v15->m_Items[v14];
      if ( !this )
        goto LABEL_24;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_4434A40 *)Method_System_Collections_Generic_List_int__Sort__);
      if ( (_DWORD)v13 == (_DWORD)++v14 )
        return;
    }
  }
}


int32_t EventInfoTipsArchiveListViewItem__get_EventUiId(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUiId;
}


bool EventInfoTipsArchiveListViewItem__get_IsModfiy(EventInfoTipsArchiveListViewItem_o *this, const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_21FFECC(this, method);
  return tipsArchiveStateManager->fields.isModfiy;
}


UnityEngine_GameObject_o *EventInfoTipsArchiveListViewItem__get_ParameterBasePrefab(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.parameterBasePrefab;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewItem__set_IsModfiy(
        EventInfoTipsArchiveListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_21FFECC(this, value);
  tipsArchiveStateManager->fields.isModfiy = value;
}


void EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        int32_t id,
        int32_t index,
        int32_t state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.id = id;
  this->fields.index = index;
  this->fields.state = state;
}


bool EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.state & 1;
}


void EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        bool isActive,
        const MethodInfo *method)
{
  this->fields.state = this->fields.state & 0xFFFFFFFE | isActive;
}


int32_t EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Id(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Index(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}


int32_t EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_State(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.state;
}


void EventInfoTipsArchiveListViewItem_TipsArchiveStateData__set_Index(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.index = value;
}


void EventInfoTipsArchiveListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AD29 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_593AD29 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoTipsArchiveListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoTipsArchiveListViewItem___c___ctor(
        EventInfoTipsArchiveListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoTipsArchiveListViewItem___c___LoadData_b__16_0(
        EventInfoTipsArchiveListViewItem___c_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.id - b->fields.id;
}


void EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___GetStateData_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.id == this->fields.id;
}


void EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___GetNewDispCountByTab_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        const MethodInfo *method)
{
  __int64 v5; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v16; // x20

  if ( (byte_593AD2A & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__);
    sub_21FFC50(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
    byte_593AD2A = 1;
  }
  v5 = sub_21FFEBC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = a;
  v14 = v5 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)a, v8, v9, v10, v11, v12, v13);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v16 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    0);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_37DC704 *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( *(_QWORD *)v14 )
      return *(_BYTE *)(*(_QWORD *)v14 + 24LL) & 1;
LABEL_8:
    sub_21FFECC(v6, v7);
  }
  return 0;
}


void EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___GetNewDispCountByTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_21FFECC(this, *(_QWORD *)&b);
  return a->fields.id == b;
}


void EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___IsNewDispTab_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        const MethodInfo *method)
{
  __int64 v5; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v16; // x20

  if ( (byte_593AD2B & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__);
    sub_21FFC50(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
    byte_593AD2B = 1;
  }
  v5 = sub_21FFEBC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = a;
  v14 = v5 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)a, v8, v9, v10, v11, v12, v13);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v16 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    0);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_37DC704 *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( *(_QWORD *)v14 )
      return *(_BYTE *)(*(_QWORD *)v14 + 24LL) & 1;
LABEL_8:
    sub_21FFECC(v6, v7);
  }
  return 0;
}


void EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___IsNewDispTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_21FFECC(this, *(_QWORD *)&b);
  return a->fields.id == b;
}