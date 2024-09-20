void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
    byte_4A5C1D5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
        const MethodInfo *method)
{
  WarMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5C1D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_WarEntity___);
    sub_1B885B0(&System_Func_DataEntityBase__WarEntity__TypeInfo);
    sub_1B885B0(&Method_WarMaster___c__GetEntityList_b__1_0__);
    sub_1B885B0(&WarMaster___c_TypeInfo);
    byte_4A5C1D6 = 1;
  }
  v3 = WarMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v3 = WarMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__WarEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v6, Method_WarMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v10,
                                                           (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


bool __fastcall WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  bool v7; // w26
  const MethodInfo *v8; // x2
  System_Collections_ObjectModel_Collection_T__o *v9; // x22
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w22

  if ( (byte_4A5C1DD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&WarEntity_TypeInfo);
    byte_4A5C1DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = list;
      methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      if ( !WarEntity__HasFlag((WarEntity_o *)list, 128, v8) )
        goto LABEL_22;
      klass_high = HIDWORD(v9[4].klass);
      if ( klass_high < 1 )
        goto LABEL_22;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_37596684(klass_high, -1, 0, 0LL) )
      {
LABEL_22:
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return !v7;
    }
LABEL_19:
    sub_1B8880C(list, method);
  }
  v7 = 0;
  return !v7;
}


bool __fastcall WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarEntity_o *v8; // x0
  WarEntity_o *v9; // x20
  bool result; // w0

  if ( (byte_4A5C1DC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6364/*"FES_WAR_ID"*/);
    byte_4A5C1DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  v8 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v7);
  result = 0;
  if ( v8 )
  {
    v9 = v8;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6364/*"FES_WAR_ID"*/, 0LL) == warId && v9->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4A5C1D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&WarEntity_TypeInfo);
    byte_4A5C1D8 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B8880C(result, *(_QWORD *)&event_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (WarEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.eventId == event_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v6;
          if ( result )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByLastQuestId(WarMaster_o *this, int32_t last_quest_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4A5C1D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&WarEntity_TypeInfo);
    byte_4A5C1D7 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B8880C(result, *(_QWORD *)&last_quest_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (WarEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.lastQuestId == last_quest_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v6;
          if ( result )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


System_Int32_array *__fastcall WarMaster__getClearWarIdList(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  const MethodInfo *v7; // x2
  System_Collections_ObjectModel_Collection_T__o *v8; // x23
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4A5C1DB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&WarEntity_TypeInfo);
    byte_4A5C1DB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = list;
      methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v7);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v8[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_37596684(
                                                                     klass_high,
                                                                     -1,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            method = (const MethodInfo *)LODWORD(v8->fields.items);
            items = v5->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                (int32_t)method,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(list, method);
  }
LABEL_21:
  if ( !v5 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5C1D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             warId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[6].klass;
  else
    return -1;
}


WarEntity_array *__fastcall WarMaster__getPrioredWarEntsWithIds(
        WarMaster_o *this,
        System_Collections_Generic_List_int__o *ids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  Il2CppObject *v9; // x23
  __int64 methodPtr_low; // x10
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x19
  Il2CppObject *v18; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A5C1DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_WarEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_WarEntity__TypeInfo);
    sub_1B885B0(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__);
    sub_1B885B0(&WarMaster___c_TypeInfo);
    sub_1B885B0(&WarEntity_TypeInfo);
    byte_4A5C1DA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  v8 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    if ( !ids )
      goto LABEL_28;
    if ( !ids->fields._size )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v9 = (Il2CppObject *)list;
    methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != WarEntity_TypeInfo )
    {
      goto LABEL_28;
    }
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_28;
      items = v5->fields._items;
      v14 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v9,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v9;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v9, v11, v12);
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_28;
  }
  list = WarMaster___c_TypeInfo;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    list = WarMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_WarEntity__o *)v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
LABEL_28:
    sub_1B8880C(list, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v17,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C1DE & 1) == 0 )
  {
    sub_1B885B0(&WarMaster___c_TypeInfo);
    byte_4A5C1DE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall WarMaster___c___ctor(WarMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarEntity_o *__fastcall WarMaster___c___GetEntityList_b__1_0(
        WarMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A5C1DF & 1) == 0 )
  {
    sub_1B885B0(&WarEntity_TypeInfo);
    byte_4A5C1DF = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (WarEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
    return (WarEntity_o *)data;
  return 0LL;
}


int32_t __fastcall WarMaster___c___getPrioredWarEntsWithIds_b__5_0(
        WarMaster___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}