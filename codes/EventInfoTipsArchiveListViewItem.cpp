void __fastcall EventInfoTipsArchiveListViewItem___ctor(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        UnityEngine_GameObject_o *parameterBasePrefab,
        EventInfoTipsArchiveDialog_ObjectData_array *objectDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_List_int__array *v14; // x24
  System_Collections_Generic_List_int__o *v15; // x25
  System_String_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_int__o *v20; // x25
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_int__o *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  TipsArchiveStateManager_o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v38; // x1
  __int64 v39; // x0

  if ( (byte_4A5C82D & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_1B885B0(&TipsArchiveStateManager_TypeInfo);
    byte_4A5C82D = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, v12, v13);
  v14 = (struct System_Collections_Generic_List_int__array *)sub_1B88658(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
LABEL_17:
    sub_1B8880C(v16, v17);
  if ( v15 )
  {
    v16 = (System_String_o *)sub_1B886EC(v15, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_16;
  }
  if ( !v14->max_length )
    goto LABEL_15;
  v14->m_Items[0] = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v14->m_Items, (int32_t)v15, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v20 )
  {
    v16 = (System_String_o *)sub_1B886EC(v20, v14->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_16;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_15;
  v14->m_Items[1] = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[1], (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v23 )
  {
    v16 = (System_String_o *)sub_1B886EC(v23, v14->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_16:
      v39 = sub_1B88830(v16);
      sub_1B886D8(v39, 0LL);
    }
  }
  if ( v14->max_length <= 2 )
LABEL_15:
    sub_1B88814(v16, v17);
  v14->m_Items[2] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->m_Items[2], (int32_t)v23, v24, v25);
  this->fields.idCacheList = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.idCacheList, (int32_t)v14, v26, v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)atlasList, v28, v29);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.parameterBasePrefab,
    (int32_t)parameterBasePrefab,
    v30,
    v31);
  this->fields.objectDataList = objectDataList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectDataList, (int32_t)objectDataList, v32, v33);
  v34 = (TipsArchiveStateManager_o *)sub_1B887FC(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager___ctor(v34, 0LL);
  this->fields.tipsArchiveStateManager = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tipsArchiveStateManager, (int32_t)v34, v35, v36);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v16 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v16, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v38);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__CreateStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        int32_t index,
        bool isNew,
        const MethodInfo *method)
{
  __int64 v8; // x22

  if ( (byte_4A5C830 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    byte_4A5C830 = 1;
  }
  v8 = sub_1B887FC(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
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

  if ( (byte_4A5C82F & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5C82F = 1;
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
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0LL, 0, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( max_length >= indexDataList->max_length )
LABEL_15:
        sub_1B88814(this, indexDataList);
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_16:
      sub_1B8880C(this, indexDataList);
    }
  }
  return 0;
}


System_Collections_Generic_List_int__o *__fastcall EventInfoTipsArchiveListViewItem__GetIdList(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *idCacheList; // x8

  idCacheList = this->fields.idCacheList;
  if ( !idCacheList )
    sub_1B8880C(this, tab);
  if ( idCacheList->max_length <= tab )
    sub_1B88814(this, tab);
  return idCacheList->m_Items[tab];
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4A5C832 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_1B885B0(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__);
    sub_1B885B0(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
    byte_4A5C832 = 1;
  }
  v5 = sub_1B887FC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_1B8880C(IdList, v8);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)IdList, v9, v10);
  stateDataList = this->fields.stateDataList;
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__48881560(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5C831 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
    sub_1B885B0(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__);
    sub_1B885B0(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
    byte_4A5C831 = 1;
  }
  v5 = sub_1B887FC(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = id,
        stateDataList = this->fields.stateDataList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          0LL),
        !stateDataList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_object___Find(
                                                                      (System_Collections_Generic_List_object__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v9,
                                                                      (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


bool __fastcall EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_T__o *stateDataList; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4A5C833 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_1B885B0(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__);
    sub_1B885B0(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
    byte_4A5C833 = 1;
  }
  v5 = sub_1B887FC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_1B8880C(IdList, v8);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)IdList, v9, v10);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           stateDataList,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void __fastcall EventInfoTipsArchiveListViewItem__LoadData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  int32_t size; // w2
  int v6; // w9
  const MethodInfo *v7; // x2
  int32_t v8; // w3
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
  int32_t v22; // w3
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
  int32_t v33; // w3

  v2 = this;
  if ( (byte_4A5C82E & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B885B0(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_4A5C82E = 1;
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
    v10 = tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields, (int32_t)v10, (int32_t)v7, v8);
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
LABEL_35:
    sub_1B8880C(this, method);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= max_length )
        sub_1B88814(this, method);
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
                                                       0LL,
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
        if ( (unsigned int)v25 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)this,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + v25;
          v20->fields._size = v25 + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
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
    monitor = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      0LL);
    static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)monitor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)monitor, v32, v33);
  }
  if ( !v28 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_55571192(
    v28,
    monitor,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
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
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&tipsArchiveStateManager->fields.stateDataList,
          (int32_t)stateDataList,
          v2,
          v3),
        (tipsArchiveStateManager = this->fields.tipsArchiveStateManager) == 0LL) )
  {
    sub_1B8880C(tipsArchiveStateManager, method);
  }
  TipsArchiveStateManager__WriteData(tipsArchiveStateManager, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem__SetSprite(
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

  if ( (byte_4A5C835 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4A5C835 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B8880C(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0LL);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1B8880C(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall EventInfoTipsArchiveListViewItem__SetupIdCasheList(
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
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  _QWORD *v10; // x9
  __int64 eventUiId; // x10
  struct System_Collections_Generic_List_int__array *v12; // x8
  int v13; // w20
  il2cpp_array_size_t v14; // w21

  v2 = this;
  if ( (byte_4A5C834 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort__);
    byte_4A5C834 = 1;
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
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_23;
      method = (const MethodInfo *)(unsigned int)v6->fields.Id;
      stateDataList = this->fields.stateDataList;
      v10 = Method_System_Collections_Generic_List_int__Add__;
      ++*(&this->fields.eventUiId + 1);
      if ( !stateDataList )
        goto LABEL_23;
      eventUiId = this->fields.eventUiId;
      if ( (unsigned int)eventUiId >= stateDataList->fields._size )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          (int32_t)method,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
LABEL_25:
    sub_1B88814(this, method);
  }
LABEL_16:
  v12 = v2->fields.idCacheList;
  if ( !v12 )
LABEL_23:
    sub_1B8880C(this, method);
  v13 = v12->max_length;
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( v14 < v12->max_length )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v12->m_Items[v14];
      if ( !this )
        goto LABEL_23;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_34E2154 *)Method_System_Collections_Generic_List_int__Sort__);
      if ( v13 == ++v14 )
        return;
      v12 = v2->fields.idCacheList;
      if ( !v12 )
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, value);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C836 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_4A5C836 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoTipsArchiveListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, 0LL);
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
  __int64 v5; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4A5C837 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__);
    sub_1B885B0(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
    byte_4A5C837 = 1;
  }
  v5 = sub_1B887FC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = a;
  v10 = v5 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)a, v8, v9);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v12 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    0LL);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v12,
         (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( *(_QWORD *)v10 )
      return *(_BYTE *)(*(_QWORD *)v10 + 24LL) & 1;
LABEL_8:
    sub_1B8880C(v6, v7);
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
    sub_1B8880C(this, b);
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
  __int64 v5; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4A5C838 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__);
    sub_1B885B0(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
    byte_4A5C838 = 1;
  }
  v5 = sub_1B887FC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = a;
  v10 = v5 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)a, v8, v9);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v12 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    0LL);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v12,
         (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( *(_QWORD *)v10 )
      return *(_BYTE *)(*(_QWORD *)v10 + 24LL) & 1;
LABEL_8:
    sub_1B8880C(v6, v7);
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
    sub_1B8880C(this, b);
  return a->fields.id == b;
}