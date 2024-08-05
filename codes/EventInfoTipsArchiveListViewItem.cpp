// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewItem___ctor(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        UnityEngine_GameObject_o *parameterBasePrefab,
        EventInfoTipsArchiveDialog_ObjectData_array *objectDataList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Collections_Generic_List_int__array *v19; // x24
  System_Collections_Generic_List_int__o *v20; // x25
  System_String_o *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_int__o *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_int__o *v28; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  TipsArchiveStateManager_o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v43; // x1
  __int64 v44; // x0

  if ( (byte_49FFD56 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_List_int____TypeInfo, *(_QWORD *)&eventUiId);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      v12);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B64870(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v14);
    sub_1B64870(&TipsArchiveStateManager_TypeInfo, v15);
    byte_49FFD56 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v16, v17, v18);
  v19 = (struct System_Collections_Generic_List_int__array *)sub_1B64918(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
LABEL_17:
    sub_1B64ACC(v21, v22);
  if ( v20 )
  {
    v21 = (System_String_o *)sub_1B649AC(v20, v19->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_16;
  }
  if ( !v19->max_length )
    goto LABEL_15;
  v19->m_Items[0] = v20;
  sub_1B64814((ServantStatusBattleListViewItem_o *)v19->m_Items, (int32_t)v20, v23, v24);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v25 )
  {
    v21 = (System_String_o *)sub_1B649AC(v25, v19->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_16;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_15;
  v19->m_Items[1] = v25;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v19->m_Items[1], (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v28 )
  {
    v21 = (System_String_o *)sub_1B649AC(v28, v19->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_16:
      v44 = sub_1B64AF0(v21);
      sub_1B64998(v44, 0LL);
    }
  }
  if ( v19->max_length <= 2 )
LABEL_15:
    sub_1B64AD4(v21, v22);
  v19->m_Items[2] = v28;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v19->m_Items[2], (int32_t)v28, v29, v30);
  this->fields.idCacheList = v19;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.idCacheList, (int32_t)v19, v31, v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)atlasList, v33, v34);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.parameterBasePrefab,
    (int32_t)parameterBasePrefab,
    v35,
    v36);
  this->fields.objectDataList = objectDataList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.objectDataList, (int32_t)objectDataList, v37, v38);
  v39 = (TipsArchiveStateManager_o *)sub_1B64ABC(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager___ctor(v39, 0LL);
  this->fields.tipsArchiveStateManager = v39;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.tipsArchiveStateManager, (int32_t)v39, v40, v41);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v21 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v21, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v43);
}


// local variable allocation has failed, the output may be wrong!
EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__CreateStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        int32_t index,
        bool isNew,
        const MethodInfo *method)
{
  __int64 v8; // x22

  if ( (byte_49FFD59 & 1) == 0 )
  {
    sub_1B64870(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, *(_QWORD *)&id);
    byte_49FFD59 = 1;
  }
  v8 = sub_1B64ABC(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = id;
  *(_DWORD *)(v8 + 20) = index;
  *(_DWORD *)(v8 + 24) = isNew;
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)v8;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__GetCurrentIndex(
        EventInfoTipsArchiveListViewItem_o *this,
        EventInfoTipsArchiveDialog_IndexData_array *indexDataList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // w21
  Il2CppClass **v5; // x23
  Il2CppClass *v6; // x8
  char *v7; // x23
  Il2CppClass *v8; // t1
  int32_t name_high; // w20

  if ( (byte_49FFD58 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B64870(&CondType_TypeInfo, indexDataList);
    byte_49FFD58 = 1;
  }
  if ( !indexDataList )
    goto LABEL_16;
  max_length = indexDataList->max_length;
  while ( (--max_length & 0x80000000) == 0 )
  {
    if ( max_length >= indexDataList->max_length )
      goto LABEL_15;
    v5 = &indexDataList->obj.klass + max_length;
    v8 = v5[4];
    v7 = (char *)(v5 + 4);
    v6 = v8;
    if ( !v8 )
      goto LABEL_16;
    name_high = HIDWORD(v6->_1.name);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0LL, 0, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( max_length >= indexDataList->max_length )
LABEL_15:
        sub_1B64AD4(this, indexDataList);
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_16:
      sub_1B64ACC(this, indexDataList);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventInfoTipsArchiveListViewItem__GetIdList(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *idCacheList; // x8

  idCacheList = this->fields.idCacheList;
  if ( !idCacheList )
    sub_1B64ACC(this, tab);
  if ( idCacheList->max_length <= tab )
    sub_1B64AD4(this, *(_QWORD *)&tab);
  return idCacheList->m_Items[tab];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_49FFD5B & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      *(_QWORD *)&tab);
    sub_1B64870(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v5);
    sub_1B64870(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__, v6);
    sub_1B64870(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, v7);
    byte_49FFD5B = 1;
  }
  v8 = sub_1B64ABC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v9);
  if ( !v8 )
    sub_1B64ACC(IdList, v11);
  *(_QWORD *)(v8 + 16) = IdList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)IdList, v12, v13);
  stateDataList = this->fields.stateDataList;
  v15 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__48600328(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2E59508 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


// local variable allocation has failed, the output may be wrong!
EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_49FFD5A & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__,
      *(_QWORD *)&id);
    sub_1B64870(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v5);
    sub_1B64870(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__, v6);
    sub_1B64870(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, v7);
    byte_49FFD5A = 1;
  }
  v8 = sub_1B64ABC(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        stateDataList = this->fields.stateDataList,
        v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          0LL),
        !stateDataList) )
  {
    sub_1B64ACC(v9, v10);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_object___Find(
                                                                      (System_Collections_Generic_List_object__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v12,
                                                                      (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_T__o *stateDataList; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_49FFD5C & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___, *(_QWORD *)&tab);
    sub_1B64870(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v5);
    sub_1B64870(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__, v6);
    sub_1B64870(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, v7);
    byte_49FFD5C = 1;
  }
  v8 = sub_1B64ABC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v9);
  if ( !v8 )
    sub_1B64ACC(IdList, v11);
  *(_QWORD *)(v8 + 16) = IdList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)IdList, v12, v13);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v15 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           stateDataList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_2E26B4C *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void __fastcall EventInfoTipsArchiveListViewItem__LoadData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  int32_t size; // w2
  int v11; // w9
  const MethodInfo *v12; // x2
  int32_t v13; // w3
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v15; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v18; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v19; // x8
  int32_t Id; // w23
  int CurrentIndex; // w22
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x4
  int32_t eventUiId; // w8
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  EventInfoTipsArchiveListViewItem_o *v31; // x1
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_object__o *v33; // x19
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  v2 = this;
  if ( (byte_49FFD57 & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, method);
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      v4);
    sub_1B64870(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__,
      v5);
    sub_1B64870(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, v6);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B64870(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v7);
    byte_49FFD57 = 1;
  }
  p_fields = &v2->fields;
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_35;
  size = stateDataList->fields._size;
  v11 = stateDataList->fields._version + 1;
  stateDataList->fields._size = 0;
  stateDataList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stateDataList->fields._items, 0, size, 0LL);
  this = (EventInfoTipsArchiveListViewItem_o *)v2->fields.tipsArchiveStateManager;
  if ( !this )
    goto LABEL_35;
  this = (EventInfoTipsArchiveListViewItem_o *)TipsArchiveStateManager__ReadData((TipsArchiveStateManager_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    tipsArchiveStateManager = v2->fields.tipsArchiveStateManager;
    if ( !tipsArchiveStateManager )
      goto LABEL_35;
    v15 = tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = v15;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields, (int32_t)v15, (int32_t)v12, v13);
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
LABEL_35:
    sub_1B64ACC(this, method);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    do
    {
      if ( v18 >= max_length )
        sub_1B64AD4(this, method);
      v19 = objectDataList->m_Items[v18];
      if ( !v19 )
        goto LABEL_35;
      Id = v19->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(this, v19->fields.IndexDataList, v12);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__GetStateData(v2, Id, v22);
      if ( this )
      {
        eventUiId = this->fields.eventUiId;
        if ( (eventUiId & 1) == 0 )
          this->fields.eventUiId = eventUiId & 0xFFFFFFFE | (HIDWORD(this->fields.stateDataList) != CurrentIndex);
        HIDWORD(this->fields.stateDataList) = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v25 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
        this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__CreateStateData(
                                                       0LL,
                                                       Id,
                                                       CurrentIndex,
                                                       CurrentIndex == 1,
                                                       v23);
        if ( !v25 )
          goto LABEL_35;
        items = v25->fields._items;
        v29 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_35;
        v30 = v25->fields._size;
        v31 = this;
        if ( (unsigned int)v30 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)this,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + v30;
          v25->fields._size = v30 + 1;
          v32[4] = (Il2CppClass *)v31;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
        }
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v18 < max_length );
  }
  v33 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
  this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  if ( !EventInfoTipsArchiveListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItem___c_TypeInfo);
    this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[2].fields.atlasList->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[2].fields.atlasList->klass;
    monitor = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      0LL);
    static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)monitor;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)monitor, v37, v38);
  }
  if ( !v33 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_55252244(
    v33,
    monitor,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
}


void __fastcall EventInfoTipsArchiveListViewItem__SaveData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x1

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager
    || (stateDataList = this->fields.stateDataList,
        tipsArchiveStateManager->fields.stateDataList = stateDataList,
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&tipsArchiveStateManager->fields.stateDataList,
          (int32_t)stateDataList,
          v2,
          v3),
        (tipsArchiveStateManager = this->fields.tipsArchiveStateManager) == 0LL) )
  {
    sub_1B64ACC(tipsArchiveStateManager, method);
  }
  TipsArchiveStateManager__WriteData(tipsArchiveStateManager, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem__SetSprite(
        EventInfoTipsArchiveListViewItem_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFD5E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_49FFD5E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0LL, 0LL);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B64ACC(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B64ACC(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1B64ACC(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  __int64 v3; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v6; // w21
  EventInfoTipsArchiveDialog_ObjectData_o *v7; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  _QWORD *v11; // x9
  __int64 eventUiId; // x10
  struct System_Collections_Generic_List_int__array *v13; // x8
  int v14; // w20
  il2cpp_array_size_t v15; // w21

  v2 = this;
  if ( (byte_49FFD5D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B64870(&Method_System_Collections_Generic_List_int__Sort__, v3);
    byte_49FFD5D = 1;
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_23;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < max_length )
    {
      v7 = objectDataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_23;
      idCacheList = v2->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_23;
      TabKind = v7->fields.TabKind;
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_23;
      method = (const MethodInfo *)(unsigned int)v7->fields.Id;
      stateDataList = this->fields.stateDataList;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++*(&this->fields.eventUiId + 1);
      if ( !stateDataList )
        goto LABEL_23;
      eventUiId = this->fields.eventUiId;
      if ( (unsigned int)eventUiId >= stateDataList->fields._size )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          (int32_t)method,
          *(const MethodInfo_34921B8 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        this->fields.eventUiId = eventUiId + 1;
        *((_DWORD *)&stateDataList->fields._syncRoot + eventUiId) = (_DWORD)method;
      }
      max_length = objectDataList->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
LABEL_25:
    sub_1B64AD4(this, method);
  }
LABEL_16:
  v13 = v2->fields.idCacheList;
  if ( !v13 )
LABEL_23:
    sub_1B64ACC(this, method);
  v14 = v13->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13->max_length )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v13->m_Items[v15];
      if ( !this )
        goto LABEL_23;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3493B9C *)Method_System_Collections_Generic_List_int__Sort__);
      if ( v14 == ++v15 )
        return;
      v13 = v2->fields.idCacheList;
      if ( !v13 )
        goto LABEL_23;
    }
    goto LABEL_25;
  }
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__get_EventUiId(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUiId;
}


bool __fastcall EventInfoTipsArchiveListViewItem__get_IsModfiy(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_1B64ACC(this, method);
  return tipsArchiveStateManager->fields.isModfiy;
}


UnityEngine_GameObject_o *__fastcall EventInfoTipsArchiveListViewItem__get_ParameterBasePrefab(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.parameterBasePrefab;
}


void __fastcall EventInfoTipsArchiveListViewItem__set_IsModfiy(
        EventInfoTipsArchiveListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_1B64ACC(this, value);
  tipsArchiveStateManager->fields.isModfiy = value;
}


void __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        int32_t id,
        int32_t index,
        int32_t state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.id = id;
  this->fields.index = index;
  this->fields.state = state;
}


bool __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.state & 1;
}


void __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        bool isActive,
        const MethodInfo *method)
{
  this->fields.state = this->fields.state & 0xFFFFFFFE | isActive;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Id(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Index(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_State(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.state;
}


void __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__set_Index(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.index = value;
}


void __fastcall EventInfoTipsArchiveListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FFD5F & 1) == 0 )
  {
    sub_1B64870(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v1);
    byte_49FFD5F = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(EventInfoTipsArchiveListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventInfoTipsArchiveListViewItem___c___ctor(
        EventInfoTipsArchiveListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoTipsArchiveListViewItem___c___LoadData_b__16_0(
        EventInfoTipsArchiveListViewItem___c_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64ACC(this, a);
  return a->fields.id - b->fields.id;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___GetStateData_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64ACC(this, 0LL);
  return n->fields.id == this->fields.id;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___GetNewDispCountByTab_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_49FFD60 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int___, a);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v5);
    sub_1B64870(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__, v6);
    sub_1B64870(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, v7);
    byte_49FFD60 = 1;
  }
  v8 = sub_1B64ABC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = a;
  v13 = v8 + 16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)a, v11, v12);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v15 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    0LL);
  v9 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v15,
         (const MethodInfo_2E26820 *)Method_BasicHelper_Any_int___);
  if ( v9 )
  {
    if ( *(_QWORD *)v13 )
      return *(_BYTE *)(*(_QWORD *)v13 + 24LL) & 1;
LABEL_8:
    sub_1B64ACC(v9, v10);
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___GetNewDispCountByTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_1B64ACC(this, b);
  return a->fields.id == b;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___IsNewDispTab_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_49FFD61 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int___, a);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v5);
    sub_1B64870(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__, v6);
    sub_1B64870(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, v7);
    byte_49FFD61 = 1;
  }
  v8 = sub_1B64ABC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = a;
  v13 = v8 + 16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)a, v11, v12);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v15 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    0LL);
  v9 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v15,
         (const MethodInfo_2E26820 *)Method_BasicHelper_Any_int___);
  if ( v9 )
  {
    if ( *(_QWORD *)v13 )
      return *(_BYTE *)(*(_QWORD *)v13 + 24LL) & 1;
LABEL_8:
    sub_1B64ACC(v9, v10);
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___IsNewDispTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_1B64ACC(this, b);
  return a->fields.id == b;
}