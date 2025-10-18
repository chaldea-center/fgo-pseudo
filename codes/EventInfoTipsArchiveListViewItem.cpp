void EventInfoTipsArchiveListViewItem___ctor(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        UnityEngine_GameObject_o *parameterBasePrefab,
        EventInfoTipsArchiveDialog_ObjectData_array *objectDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_int__array *v14; // x24
  System_Collections_Generic_List_int__o *v15; // x25
  System_String_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_int__o *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_int__o *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  TipsArchiveStateManager_o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v37; // x1
  __int64 v38; // x0

  if ( (byte_4C44E0A & 1) == 0 )
  {
    sub_1C37058(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_1C37058(&TipsArchiveStateManager_TypeInfo);
    byte_4C44E0A = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v12, v13);
  v14 = (struct System_Collections_Generic_List_int__array *)sub_1C37100(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
LABEL_17:
    sub_1C372B4(v16);
  if ( v15 )
  {
    v16 = (System_String_o *)sub_1C37194(v15, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_16;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_15;
  v14->m_Items[0] = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)v14->m_Items, (int32_t)v15, v17, v18);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v19 )
  {
    v16 = (System_String_o *)sub_1C37194(v19, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_16;
  }
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_15;
  v14->m_Items[1] = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[1], (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v22 )
  {
    v16 = (System_String_o *)sub_1C37194(v22, v14->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_16:
      v38 = sub_1C372D8(v16);
      sub_1C37180(v38, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 2 )
LABEL_15:
    sub_1C372BC(v16);
  v14->m_Items[2] = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[2], (int32_t)v22, v23, v24);
  this->fields.idCacheList = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.idCacheList, (int32_t)v14, v25, v26);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)atlasList, v27, v28);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.parameterBasePrefab, (int32_t)parameterBasePrefab, v29, v30);
  this->fields.objectDataList = objectDataList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.objectDataList, (int32_t)objectDataList, v31, v32);
  v33 = (TipsArchiveStateManager_o *)sub_1C372A4(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager___ctor(v33, 0);
  this->fields.tipsArchiveStateManager = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tipsArchiveStateManager, (int32_t)v33, v34, v35);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v16 = System_Int32__ToString((int)this + 24, 0);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v16, 0);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v37);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *EventInfoTipsArchiveListViewItem__CreateStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        int32_t index,
        bool isNew,
        const MethodInfo *method)
{
  __int64 v8; // x22

  if ( (byte_4C44E0D & 1) == 0 )
  {
    sub_1C37058(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    byte_4C44E0D = 1;
  }
  v8 = sub_1C372A4(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = id;
  *(_DWORD *)(v8 + 20) = index;
  *(_DWORD *)(v8 + 24) = isNew;
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)v8;
}


int32_t EventInfoTipsArchiveListViewItem__GetCurrentIndex(
        EventInfoTipsArchiveListViewItem_o *this,
        EventInfoTipsArchiveDialog_IndexData_array *indexDataList,
        const MethodInfo *method)
{
  unsigned int max_length; // w21
  Il2CppClass **v5; // x23
  Il2CppClass *v6; // x8
  char *v7; // x23
  Il2CppClass *v8; // t1
  int32_t name_high; // w20

  if ( (byte_4C44E0C & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1C37058(&CondType_TypeInfo);
    byte_4C44E0C = 1;
  }
  if ( !indexDataList )
    goto LABEL_16;
  max_length = indexDataList->max_length;
  while ( (--max_length & 0x80000000) == 0 )
  {
    if ( max_length >= LODWORD(indexDataList->max_length) )
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
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0, 0, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( max_length >= LODWORD(indexDataList->max_length) )
LABEL_15:
        sub_1C372BC(this);
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_16:
      sub_1C372B4(this);
    }
  }
  return 0;
}


System_Collections_Generic_List_int__o *EventInfoTipsArchiveListViewItem__GetIdList(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *idCacheList; // x8

  idCacheList = this->fields.idCacheList;
  if ( !idCacheList )
    sub_1C372B4(this);
  if ( LODWORD(idCacheList->max_length) <= tab )
    sub_1C372BC(this);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C44E0F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_1C37058(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_1C37058(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__);
    sub_1C37058(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
    byte_4C44E0F = 1;
  }
  v5 = sub_1C372A4(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_1C372B4(IdList);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)IdList, v8, v9);
  stateDataList = this->fields.stateDataList;
  v11 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__51419316(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_31098B4 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C44E0E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
    sub_1C37058(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_1C37058(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__);
    sub_1C37058(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
    byte_4C44E0E = 1;
  }
  v5 = sub_1C372A4(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = id,
        stateDataList = this->fields.stateDataList,
        v8 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          0),
        !stateDataList) )
  {
    sub_1C372B4(v6);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_object___Find(
                                                                      (System_Collections_Generic_List_object__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v8,
                                                                      (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


bool EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_T__o *stateDataList; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C44E10 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_1C37058(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_1C37058(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__);
    sub_1C37058(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
    byte_4C44E10 = 1;
  }
  v5 = sub_1C372A4(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_1C372B4(IdList);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)IdList, v8, v9);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v11 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    0);
  return BasicHelper__Any_object_(
           stateDataList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void EventInfoTipsArchiveListViewItem__LoadData(EventInfoTipsArchiveListViewItem_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  int32_t size; // w2
  int v6; // w9
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *v10; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v13; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v14; // x8
  int32_t Id; // w23
  int CurrentIndex; // w22
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x4
  int32_t eventUiId; // w8
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  EventInfoTipsArchiveListViewItem_o *v26; // x1
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_object__o *v28; // x19
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  v2 = this;
  if ( (byte_4C44E0B & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
    sub_1C37058(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1C37058(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_4C44E0B = 1;
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
    v10 = tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields, (int32_t)v10, (int32_t)v7, v8);
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
LABEL_35:
    sub_1C372B4(this);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= max_length )
        sub_1C372BC(this);
      v14 = objectDataList->m_Items[v13];
      if ( !v14 )
        goto LABEL_35;
      Id = v14->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(this, v14->fields.IndexDataList, v7);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__GetStateData(v2, Id, v17);
      if ( this )
      {
        eventUiId = this->fields.eventUiId;
        if ( (eventUiId & 1) == 0 )
          this->fields.eventUiId = eventUiId & 0xFFFFFFFE | (HIDWORD(this->fields.stateDataList) != CurrentIndex);
        HIDWORD(this->fields.stateDataList) = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v20 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
        this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__CreateStateData(
                                                       0,
                                                       Id,
                                                       CurrentIndex,
                                                       CurrentIndex == 1,
                                                       v18);
        if ( !v20 )
          goto LABEL_35;
        items = v20->fields._items;
        v24 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_35;
        v25 = v20->fields._size;
        v26 = this;
        if ( (unsigned int)v25 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)this,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + v25;
          v20->fields._size = v25 + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
        }
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v13 < max_length );
  }
  v28 = (System_Collections_Generic_List_object__o *)p_fields->stateDataList;
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
    monitor = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    System_Comparison_object____ctor(monitor, klass, Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, 0);
    static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)monitor;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)monitor, v32, v33);
  }
  if ( !v28 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_58346216(
    v28,
    monitor,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
}


void EventInfoTipsArchiveListViewItem__SaveData(EventInfoTipsArchiveListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x1

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager
    || (stateDataList = this->fields.stateDataList,
        tipsArchiveStateManager->fields.stateDataList = stateDataList,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&tipsArchiveStateManager->fields.stateDataList,
          (int32_t)stateDataList,
          v2,
          v3),
        (tipsArchiveStateManager = this->fields.tipsArchiveStateManager) == 0) )
  {
    sub_1C372B4(tipsArchiveStateManager);
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
  _BOOL8 v8; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C44E12 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4C44E12 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v13 = v12;
  do
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C372B4(IsNullOrEmpty);
    }
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C372B4(v8);
    v10 = UIAtlas__GetSprite((UIAtlas_o *)v13.fields._current, spriteName, 0);
  }
  while ( !v10 );
  if ( !sprite )
    sub_1C372B4(v10);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v5; // w21
  EventInfoTipsArchiveDialog_ObjectData_o *v6; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  int32_t Id; // w1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  _QWORD *v11; // x9
  __int64 eventUiId; // x10
  struct System_Collections_Generic_List_int__array *v13; // x8
  int v14; // w20
  unsigned int v15; // w21

  v2 = this;
  if ( (byte_4C44E11 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__Sort__);
    byte_4C44E11 = 1;
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_23;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( v5 < max_length )
    {
      v6 = objectDataList->m_Items[v5];
      if ( !v6 )
        goto LABEL_23;
      idCacheList = v2->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_23;
      TabKind = v6->fields.TabKind;
      if ( (unsigned int)TabKind >= LODWORD(idCacheList->max_length) )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_23;
      Id = v6->fields.Id;
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
          Id,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        this->fields.eventUiId = eventUiId + 1;
        *((_DWORD *)&stateDataList->fields._syncRoot + eventUiId) = Id;
      }
      max_length = objectDataList->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_16;
    }
LABEL_25:
    sub_1C372BC(this);
  }
LABEL_16:
  v13 = v2->fields.idCacheList;
  if ( !v13 )
LABEL_23:
    sub_1C372B4(this);
  v14 = v13->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < LODWORD(v13->max_length) )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v13->m_Items[v15];
      if ( !this )
        goto LABEL_23;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3787944 *)Method_System_Collections_Generic_List_int__Sort__);
      if ( v14 == ++v15 )
        return;
      v13 = v2->fields.idCacheList;
      if ( !v13 )
        goto LABEL_23;
    }
    goto LABEL_25;
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
    sub_1C372B4(this);
  return tipsArchiveStateManager->fields.isModfiy;
}


UnityEngine_GameObject_o *EventInfoTipsArchiveListViewItem__get_ParameterBasePrefab(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.parameterBasePrefab;
}


void EventInfoTipsArchiveListViewItem__set_IsModfiy(
        EventInfoTipsArchiveListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_1C372B4(this);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C44E13 & 1) == 0 )
  {
    sub_1C37058(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_4C44E13 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventInfoTipsArchiveListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v11; // x20

  if ( (byte_4C44E14 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__);
    sub_1C37058(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
    byte_4C44E14 = 1;
  }
  v5 = sub_1C372A4(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = a;
  v9 = v5 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)a, v7, v8);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v11 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    0);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v11,
         (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( *(_QWORD *)v9 )
      return *(_BYTE *)(*(_QWORD *)v9 + 24LL) & 1;
LABEL_8:
    sub_1C372B4(v6);
  }
  return 0;
}


void EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___GetNewDispCountByTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_1C372B4(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v11; // x20

  if ( (byte_4C44E15 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__);
    sub_1C37058(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
    byte_4C44E15 = 1;
  }
  v5 = sub_1C372A4(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = a;
  v9 = v5 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)a, v7, v8);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v11 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    0);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v11,
         (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( *(_QWORD *)v9 )
      return *(_BYTE *)(*(_QWORD *)v9 + 24LL) & 1;
LABEL_8:
    sub_1C372B4(v6);
  }
  return 0;
}


void EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___IsNewDispTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_1C372B4(this);
  return a->fields.id == b;
}