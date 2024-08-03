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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x25
  System_String_o *v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_int__o *v34; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  TipsArchiveStateManager_o *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v51; // x1
  __int64 v52; // x0

  if ( (byte_49FDC5B & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_List_int____TypeInfo, *(_QWORD *)&eventUiId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v14);
    sub_1B640C8(&TipsArchiveStateManager_TypeInfo, v15);
    byte_49FDC5B = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                       *(_QWORD *)&eventUiId,
                                                       atlasList);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v16, v17, v18);
  v19 = (struct System_Collections_Generic_List_int__array *)sub_1B64170(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
LABEL_17:
    sub_1B64324(v23);
  if ( v22 )
  {
    v23 = (System_String_o *)sub_1B64204(v22, v19->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_16;
  }
  if ( !v19->max_length )
    goto LABEL_15;
  v19->m_Items[0] = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v19->m_Items, (int32_t)v22, v25, v26);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v29 )
  {
    v23 = (System_String_o *)sub_1B64204(v29, v19->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_16;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_15;
  v19->m_Items[1] = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[1], (int32_t)v29, v30, v31);
  v34 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v32, v33);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v34 )
  {
    v23 = (System_String_o *)sub_1B64204(v34, v19->obj.klass->_1.element_class);
    if ( !v23 )
    {
LABEL_16:
      v52 = sub_1B64348(v23);
      sub_1B641F0(v52, 0LL);
    }
  }
  if ( v19->max_length <= 2 )
LABEL_15:
    sub_1B6432C(v23, v24);
  v19->m_Items[2] = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[2], (int32_t)v34, v35, v36);
  this->fields.idCacheList = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.idCacheList, (int32_t)v19, v37, v38);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)atlasList, v39, v40);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.parameterBasePrefab,
    (int32_t)parameterBasePrefab,
    v41,
    v42);
  this->fields.objectDataList = objectDataList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectDataList, (int32_t)objectDataList, v43, v44);
  v47 = (TipsArchiveStateManager_o *)sub_1B64314(TipsArchiveStateManager_TypeInfo, v45, v46);
  TipsArchiveStateManager___ctor(v47, 0LL);
  this->fields.tipsArchiveStateManager = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tipsArchiveStateManager, (int32_t)v47, v48, v49);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v23 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v23, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v51);
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

  if ( (byte_49FDC5E & 1) == 0 )
  {
    sub_1B640C8(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, *(_QWORD *)&id);
    byte_49FDC5E = 1;
  }
  v8 = sub_1B64314(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&index);
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

  if ( (byte_49FDC5D & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B640C8(&CondType_TypeInfo, indexDataList);
    byte_49FDC5D = 1;
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
        sub_1B6432C(this, indexDataList);
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_16:
      sub_1B64324(this);
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
    sub_1B64324(this);
  if ( idCacheList->max_length <= tab )
    sub_1B6432C(this, *(_QWORD *)&tab);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x20

  if ( (byte_49FDC60 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      *(_QWORD *)&tab);
    sub_1B640C8(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__, v6);
    sub_1B640C8(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, v7);
    byte_49FDC60 = 1;
  }
  v8 = sub_1B64314(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&tab, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v9);
  if ( !v8 )
    sub_1B64324(IdList);
  *(_QWORD *)(v8 + 16) = IdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)IdList, v11, v12);
  stateDataList = this->fields.stateDataList;
  v16 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                         v14,
                                         v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__48591404(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_2E5722C *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
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
  __int64 v11; // x2
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FDC5F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__,
      *(_QWORD *)&id);
    sub_1B640C8(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__, v6);
    sub_1B640C8(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, v7);
    byte_49FDC5F = 1;
  }
  v8 = sub_1B64314(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&id, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        stateDataList = this->fields.stateDataList,
        v13 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                              v10,
                                              v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          0LL),
        !stateDataList) )
  {
    sub_1B64324(v9);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_object___Find(
                                                                      (System_Collections_Generic_List_object__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v13,
                                                                      (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_T__o *stateDataList; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x20

  if ( (byte_49FDC61 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___, *(_QWORD *)&tab);
    sub_1B640C8(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__, v6);
    sub_1B640C8(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, v7);
    byte_49FDC61 = 1;
  }
  v8 = sub_1B64314(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, *(_QWORD *)&tab, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v9);
  if ( !v8 )
    sub_1B64324(IdList);
  *(_QWORD *)(v8 + 16) = IdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)IdList, v11, v12);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v16 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                         v14,
                                         v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           stateDataList,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_2E24870 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t v14; // w3
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v16; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v19; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v20; // x8
  int32_t Id; // w23
  int CurrentIndex; // w22
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  int32_t eventUiId; // w8
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  EventInfoTipsArchiveListViewItem_o *v32; // x1
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_object__o *v34; // x19
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  v2 = this;
  if ( (byte_49FDC5C & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__,
      v5);
    sub_1B640C8(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, v6);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B640C8(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v7);
    byte_49FDC5C = 1;
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
    v16 = tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields, (int32_t)v16, (int32_t)v13, v14);
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
LABEL_35:
    sub_1B64324(this);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= max_length )
        sub_1B6432C(this, v12);
      v20 = objectDataList->m_Items[v19];
      if ( !v20 )
        goto LABEL_35;
      Id = v20->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(this, v20->fields.IndexDataList, v13);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__GetStateData(v2, Id, v23);
      if ( this )
      {
        eventUiId = this->fields.eventUiId;
        if ( (eventUiId & 1) == 0 )
          this->fields.eventUiId = eventUiId & 0xFFFFFFFE | (HIDWORD(this->fields.stateDataList) != CurrentIndex);
        HIDWORD(this->fields.stateDataList) = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v26 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
        this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__CreateStateData(
                                                       0LL,
                                                       Id,
                                                       CurrentIndex,
                                                       CurrentIndex == 1,
                                                       v24);
        if ( !v26 )
          goto LABEL_35;
        items = v26->fields._items;
        v30 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_35;
        v31 = v26->fields._size;
        v32 = this;
        if ( (unsigned int)v31 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)this,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + v31;
          v26->fields._size = v31 + 1;
          v33[4] = (Il2CppClass *)v32;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
        }
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v19 < max_length );
  }
  v34 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
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
    monitor = (System_Comparison_T__o *)sub_1B64314(
                                          System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                          v12,
                                          v13);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      0LL);
    static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)monitor;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)monitor, v38, v39);
  }
  if ( !v34 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_55243320(
    v34,
    monitor,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
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
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&tipsArchiveStateManager->fields.stateDataList,
          (int32_t)stateDataList,
          v2,
          v3),
        (tipsArchiveStateManager = this->fields.tipsArchiveStateManager) == 0LL) )
  {
    sub_1B64324(tipsArchiveStateManager);
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
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FDC63 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_49FDC63 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  do
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B64324(IsNullOrEmpty);
    }
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64324(v12);
    v14 = UIAtlas__GetSprite((UIAtlas_o *)v17.fields._current, spriteName, 0LL);
  }
  while ( !v14 );
  if ( !sprite )
    sub_1B64324(v14);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  if ( (byte_49FDC62 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort__, v3);
    byte_49FDC62 = 1;
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
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_1B6432C(this, method);
  }
LABEL_16:
  v13 = v2->fields.idCacheList;
  if ( !v13 )
LABEL_23:
    sub_1B64324(this);
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
        (const MethodInfo_34918C0 *)Method_System_Collections_Generic_List_int__Sort__);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FDC64 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v1);
    byte_49FDC64 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoTipsArchiveListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_int__bool__o *v16; // x20

  if ( (byte_49FDC65 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int___, a);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__, v6);
    sub_1B640C8(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, v7);
    byte_49FDC65 = 1;
  }
  v8 = sub_1B64314(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, a, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = a;
  v12 = v8 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)a, v10, v11);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v16 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v14, v15);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    0LL);
  v9 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_2E24544 *)Method_BasicHelper_Any_int___);
  if ( v9 )
  {
    if ( *(_QWORD *)v12 )
      return *(_BYTE *)(*(_QWORD *)v12 + 24LL) & 1;
LABEL_8:
    sub_1B64324(v9);
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
    sub_1B64324(this);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_int__bool__o *v16; // x20

  if ( (byte_49FDC66 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int___, a);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__, v6);
    sub_1B640C8(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, v7);
    byte_49FDC66 = 1;
  }
  v8 = sub_1B64314(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, a, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = a;
  v12 = v8 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)a, v10, v11);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v16 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v14, v15);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    0LL);
  v9 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_2E24544 *)Method_BasicHelper_Any_int___);
  if ( v9 )
  {
    if ( *(_QWORD *)v12 )
      return *(_BYTE *)(*(_QWORD *)v12 + 24LL) & 1;
LABEL_8:
    sub_1B64324(v9);
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
    sub_1B64324(this);
  return a->fields.id == b;
}